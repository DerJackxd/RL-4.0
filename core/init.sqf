#include <macro.h>
/*
	Master client initialization file
*/
life_firstSpawn = true;
life_session_completed = false;
private["_handle","_timeStamp"];
0 cutText["Setting up client, please wait...","BLACK FADED"];
0 cutFadeOut 9999999;
_timeStamp = diag_tickTime;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log "------------------------------------------------------------------------------------------------------";
waitUntil {!isNull player && player == player}; //Wait till the player is ready
[] call compile PreprocessFileLineNumbers "core\clientValidator.sqf";

//Setup initial client core functions
diag_log "::Life Client:: Initialization Variables";
[] call compile PreprocessFileLineNumbers "core\configuration.sqf";

diag_log "::Life Client:: Variables initialized";
diag_log "::Life Client:: Setting up Eventhandlers";
[] call life_fnc_setupEVH;

diag_log "::Life Client:: Eventhandlers completed";
diag_log "::Life Client:: Setting up user actions";
[] call life_fnc_setupActions;

diag_log "::Life Client:: User actions completed";
diag_log "::Life Client:: Waiting for server functions to transfer..";
waitUntil {(!isNil {TON_fnc_clientGangLeader})};

diag_log "::Life Client:: Received server functions.";
0 cutText ["Waiting for the server to be ready...","BLACK FADED"];
0 cutFadeOut 99999999;

diag_log "::Life Client:: Waiting for the server to be ready..";
waitUntil{!isNil "life_server_isReady"};
waitUntil{(life_server_isReady OR !isNil "life_server_extDB_notLoaded")};

if(!isNil "life_server_extDB_notLoaded" && {life_server_extDB_notLoaded != ""}) exitWith {
	diag_log life_server_extDB_notLoaded;
	999999 cutText [life_server_extDB_notLoaded,"BLACK FADED"];
	999999 cutFadeOut 99999999;
};

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};

//diag_log "::Life Client:: Group Base Execution";
[] spawn life_fnc_escInterupt;

switch (playerSide) do {
	case west: {
		_handle = [] spawn life_fnc_initCop;
		waitUntil {scriptDone _handle};
	};
	case civilian: {
		//Initialize Civilian Settings
		[] spawn life_fnc_expConfig;
		_handle = [] spawn life_fnc_initCiv;
		waitUntil {scriptDone _handle};
	};
	case independent: {
		//Initialize Medics and blah
		_handle = [] spawn life_fnc_initMedic;
		waitUntil {scriptDone _handle};
	};
	case east: {
		//Initialize Medics and blah
		_handle = [] spawn life_fnc_initADAC;
		waitUntil {scriptDone _handle};
	};
	case sideLogic:
    {
        _handle = [] spawn life_fnc_initZeus;
        waitUntil {scriptDone _handle};
    };
};

player SVAR ["restrained",false,true];
player SVAR ["Escorting",false,true];
player SVAR ["transporting",false,true];
player SVAR ["rawFood",false,true];
player SVAR ["oelFassTransport",false,true];

//Organ
player SVAR["missingOrgan",false,true];//sets variables to false on start
player SVAR["hasOrgan",false,true];

diag_log "Past Settings Init";
[] execFSM "core\fsm\client.fsm";

diag_log "Executing client.fsm";
waitUntil {!(isNull (findDisplay 46))};

diag_log "Display 46 Found";
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
player addRating 99999999;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log format["                End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "------------------------------------------------------------------------------------------------------";

life_sidechat = true;
[[player,life_sidechat,playerSide],"TON_fnc_managesc",false,false,true] call life_fnc_MP;
0 cutText ["","BLACK IN"];
[] call life_fnc_hudSetup;

/* Set up frame-by-frame handlers */
LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;

player SVAR ["steam64ID",getPlayerUID player];
player SVAR ["realname",profileName,true];

life_fnc_moveIn = compileFinal
"
	player moveInCargo (_this select 0);
";

vehicleBoxVehicle = objNull;
[] spawn {
	waitUntil {!(isNull vehicleBoxVehicle)};
	_dir = getDir vehicleBoxVehicle;

	waitUntil {
		_dir = _dir + (
		if (_dir > 360) then [{-360},{0.5}]
		);
		vehicleBoxVehicle setDir _dir;
	};
};

[] spawn life_fnc_survival;

//Dynmarket
DYNAMICMARKET_boughtItems = [];
[[getPlayerUID player],"TON_fnc_playerLogged",false,false] spawn life_fnc_MP;

_handle = [] spawn compile PreprocessFileLineNumbers "core\king\init.sqf";
diag_log "::King Client:: Initialization";
waitUntil {scriptDone _handle};
diag_log "::King Client:: initialized";

//[] spawn life_fnc_initSafezone;
[] spawn life_fnc_autoSave;
[] spawn life_fnc_fuelConfig;
[] spawn life_fnc_initFuelAction;
[] spawn life_fnc_Taru;
[] spawn life_fnc_CAH_fetchDetails;
[] spawn life_fnc_CAH_loggedIn;
[] spawn life_fnc_baseShopAdd;


CONSTVAR(life_paycheck); //Make the paycheck static.
if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),0)) then {player enableFatigue false;};
[[getPlayerUID player,player getVariable["realname",name player]],"life_fnc_wantedProfUpdate",false,false] spawn life_fnc_MP;

_TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;

if (isNil "TFAR_fnc_isTeamSpeakPluginEnabled") exitwith {
	999999 cutText ["Task Force Radio is not running on your computer. Please re-sync and retry","BLACK FADED"];
	999999 cutFadeOut 99999999;
};

if (!(_TFenabled)) then {
	while {!([] call TFAR_fnc_isTeamSpeakPluginEnabled)} do {
		titleText ["Du benötigst Tast Force Radio für mehr Infos sind die Supporter im Teamspeak unter TS.Realliferpg.de zu erreichen! || TS3 -> Settings -> Plugins", "BLACK"];
		sleep 2;
	};
};

RL_TFEnabled = true;
RL_onTsServer = "Reallife RPG Community TeamSpeak" == (call TFAR_fnc_getTeamSpeakServerName);
RL_onChannel = "TaskForceRadio" == (call TFAR_fnc_getTeamSpeakChannelName);
titleText ["Task Force Radio erfolgreich geladen!","BLACK IN"];



[] spawn {

	while {true} do {

				_isadmin = false;
				if (!(isNil "life_adminlevel")) then {
					_adminlvl = life_adminlevel call BIS_fnc_parseNumber;

					if (_adminlvl > 0) then {
						_isadmin = true;
					};
				};

				if (!(_isadmin)) then {
					_TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;
					if ((!(_TFenabled)) && (RL_TFEnabled)) then {
						titleText ["Bitte Aktiviere das Teamspeak 3 TFAR Plugin! || TS3 -> Settings -> Plugins", "BLACK"];
						RL_TFEnabled = false;
					};

					_onTsServer = "Reallife RPG Community TeamSpeak" == (call TFAR_fnc_getTeamSpeakServerName);
					if (!(_onTsServer)) then {
						titleText ["Bitte tritt unserem Teamspeak 3 Server bei! TS.RealLifeRPG.de", "BLACK"];
						RL_onTsServer = false;
					} else {
						if (!(RL_onTsServer)) then {
							titleText ["TS server check Fertig. Willkommen!","BLACK IN"];
							RL_onTsServer = true;
						};
					};
					
					_onChannel = "TaskForceRadio" == (call TFAR_fnc_getTeamSpeakChannelName);
					if (!(_onChannel)) then {
						titleText ["Du bist nicht nicht im richtigen Channel! Bitte lade das TFAR Plugin neu! || Settings -> Plugins -> Reload All", "BLACK"];
						RL_onChannel = false;
					} else {
						if (!(RL_onChannel)) then {
							titleText ["TS channel check Fertig. Willkommen!","BLACK IN"];
							RL_onChannel = true;
						};
					};

					if ((_TFenabled) && (!(RL_TFEnabled))) then {
						titleText ["Plugin aktiviert, Willkommen!","BLACK IN"];
						RL_TFEnabled = true;
					};
				};

				sleep 2;
			};
};
