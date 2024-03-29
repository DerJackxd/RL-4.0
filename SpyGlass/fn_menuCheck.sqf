#define GVAR_UINS uiNamespace getVariable
#define steamid getPlayerUID player
#define SPY "spy_log"
#define SPYGLASS_END \
	vehicle player setVelocity[1e10,1e14,1e18]; \
	sleep 3; \
	preProcessFile "SpyGlass\endoftheline.sqf"; \
	sleep 2.5; \
	failMission "SpyGlass";
	
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Checks for known cheat menus and closes them then reports them to the server.
*/
private["_displays","_detection","_display","_timeStamp"];
disableSerialization;

_displays = [
	[3030,"BIS_configviewer_display"],["RscDisplayMultiplayer","RscDisplayMultiplayer"],[162,"RscDisplayFieldManual"],["RscDisplayRemoteMissions","RscDisplayRemoteMissions"]/*,[316000,"RscDisplayDebugPublic"]*/,[125,"RscDisplayEditDiaryRecord"],
	[69,"UnknownDisplay"],[19,"UnknownDisplay"],[71,"UnknownDisplay"],[45,"UnknownDisplay"],[132,"UnknownDisplay"],[32,"UnknownDisplay"],[165,"RscDisplayPublishMission"],[2727,"RscDisplayLocWeaponInfo"],
	["RscDisplayMovieInterrupt","RscDisplayMovieInterrupt"],[157,"UnknownDisplay"],[30,"UnknownDisplay"],["RscDisplayArsenal","RscDisplayArsenal"],[166,"RscDisplayPublishMissionSelectTags"],[167,"RscDisplayFileSelect"]
];

_detection = false;
_timeStamp = time;
while {true} do {
	{
		_targetDisplay = _x select 0;
		_targetName = _x select 1;
		switch(typeName _targetDisplay) do {
			case (typeName ""): {if(!isNull (GVAR_UINS [_targetDisplay,displayNull])) exitWith {_detection = true;};};
			default {if(!isNull (findDisplay _targetDisplay)) exitWith {_detection = true;};};
		};
			
		if(_detection) exitWith {
			[[profileName,steamid,format["MenuBasedHack_%1",_targetName]],"SPY_fnc_cookieJar",false,false] call life_fnc_MP;
			[[profileName,format["Menu Hack: %1",_targetName]],"SPY_fnc_notifyAdmins",true,false] call life_fnc_MP;
			[[SPY,[(format["Menu Hack: %1",_targetName])],profileName,steamid],"TON_fnc_logIt",false,false] call life_fnc_MP;
			sleep 0.5;
			SPYGLASS_END
		};
	} foreach _displays;
		
	if(_detection) exitWith {};

	/* A very old menu that can cause false-positives so we close it */
	if(!isNull (findDisplay 129)) then {
		closeDialog 0;
	};
	
	/* Check to see if RscDisplayInventory has more controls then it should */
	_display = findDisplay 602;
	if(!isNull _display && {count (allControls _display) > 85}) then {
		_count = count allControls _display;
		[[profileName,steamid,format["MenuBasedHack_RscDisplayInventory_Controls_%1",_count]],"SPY_fnc_cookieJar",false,false,true] call life_fnc_MP;
		[[profileName,format["Menu Hack: RscDisplayInventory number of controls do not match (Count %1)",_count]],"SPY_fnc_notifyAdmins",true,false,true] call life_fnc_MP;
		[[SPY,[(format["Menu Hack: RscDisplayInventory number of controls do not match (Count %1)",_count])],profileName,steamid],"TON_fnc_logIt",false,false] call life_fnc_MP;
		closeDialog 0;
		SPYGLASS_END
	};
		
	if(!isNull (findDisplay 148)) then {
		sleep 0.5;
		if((lbSize 104)-1 > 3) exitWith {
			[[profileName,steamid,"MenuBasedHack_RscDisplayConfigureControllers"],"SPY_fnc_cookieJar",false,false] call life_fnc_MP;
			[[profileName,"Menu Hack: RscDisplayConfigureControllers (JME 313)"],"SPY_fnc_notifyAdmins",true,false] call life_fnc_MP;
			[[SPY,["Menu Hack: RscDisplayConfigureControllers (JME 313)"],profileName,steamid],"TON_fnc_logIt",false,false] call life_fnc_MP;
			closeDialog 0;
			SPYGLASS_END
		};
	};
	
	_display = findDisplay 54;
	if(!isNull _display) then {
		{
			if (_x && !isNull _display) exitWith {
				[[profileName,steamid,"MenuBasedHack_RscDisplayInsertMarker"],"SPY_fnc_cookieJar",false,false] call life_fnc_MP;
				[[profileName,"Menu Hack: RscDisplayInsertMarker"],"SPY_fnc_notifyAdmins",true,false] call life_fnc_MP;
				[[SPY,["Menu Hack: RscDisplayInsertMarker"],profileName,steamid],"TON_fnc_logIt",false,false] call life_fnc_MP;
				closeDialog 0;
				SPYGLASS_END
			};
		} forEach [
			(toLower ctrlText (_display displayCtrl 1001) != toLower localize "STR_A3_RscDisplayInsertMarker_Title"),
			{if (buttonAction (_display displayCtrl _x) != "") exitWith {true}; false} forEach [1,2]
		];
	};
		
	_display = findDisplay 131;
	if(!isNull _display) then {
		//These shouldn't be here...
		(_display displayCtrl 102) ctrlRemoveAllEventHandlers "LBDblClick";
		(_display displayCtrl 102) ctrlRemoveAllEventHandlers "LBSelChanged";
		
		{
			if (_x && !isNull _display) exitWith {
				[[profileName,steamid,"MenuBasedHack_RscDisplayConfigureAction"],"SPY_fnc_cookieJar",false,false] call life_fnc_MP;
				[[profileName,"Menu Hack: RscDisplayConfigureAction"],"SPY_fnc_notifyAdmins",true,false] call life_fnc_MP;
				[[SPY,["Menu Hack: RscDisplayConfigureAction"],profileName,steamid],"TON_fnc_logIt",false,false] call life_fnc_MP;
				closeDialog 0;
				SPYGLASS_END
			};
		} forEach [
			(toLower ctrlText (_display displayCtrl 1000) != toLower localize "STR_A3_RscDisplayConfigureAction_Title"),
			{if (buttonAction (_display displayCtrl _x) != "") exitWith {true}; false} forEach [1,104,105,106,107,108,109]
		];
	};
		
	_display = findDisplay 163;
	if(!isNull _display) then {
		(_display displayCtrl 101) ctrlRemoveAllEventHandlers "LBDblClick";
		(_display displayCtrl 101) ctrlRemoveAllEventHandlers "LBSelChanged";
		
		{
			if (_x && !isNull _display) exitWith {
				[[profileName,steamid,"MenuBasedHack_RscDisplayControlSchemes"],"SPY_fnc_cookieJar",false,false] call life_fnc_MP;
				[[profileName,"Menu Hack: RscDisplayControlSchemes"],"SPY_fnc_notifyAdmins",true,false] call life_fnc_MP;
				[[SPY,["Menu Hack: RscDisplayControlSchemes"],profileName,steamid],"TON_fnc_logIt",false,false] call life_fnc_MP;
				closeDialog 0;
				SPYGLASS_END
			};
		} forEach [
			(toLower ctrlText (_display displayCtrl 1000) != toLower localize "STR_DISP_OPTIONS_SCHEME"),
			{if (buttonAction (_display displayCtrl _x) != "") exitWith {true}; false} forEach [1,2]
		];
	};
	
	/* We'll just move the no-recoil check into this thread. */
	if((unitRecoilCoefficient player) < 1) then {
		[[profileName,steamid,"No_recoil_hack"],"SPY_fnc_cookieJar",false,false] spawn life_fnc_MP;
		[[profileName,"No recoil hack"],"SPY_fnc_notifyAdmins",true,false] spawn life_fnc_MP;
		[[SPY,["Cheat: No recoil"],profileName,steamid],"TON_fnc_logIt",false,false] call life_fnc_MP;
		sleep 0.5;
		failMission "SpyGlass";
	};
	
	uiSleep 1;
};