#include <macro.h>
#define IDC_LIFE_UI_STATUSBAR 2208
/*
	File: fn_hudSetup.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Setups the hud for the player?
*/
private["_alpha","_version","_p","_pg"];
disableSerialization;
_alpha = CONTROL(46,1001);
_version = CONTROL(46,1000);

2 cutRsc ["playerHUD","PLAIN"];
_version ctrlSetText format["BETA: 0.%1.%2",(productVersion select 2),(productVersion select 3)];
[] call life_fnc_hudUpdate;

[] spawn
{
	sleep 5;
	private["_dam","_gbbCash","_gbbBank"];
	while {true} do
	{

		_gbbLevel = LEVEL;
		_gbbExp = EXP;
		_gbbSkillPoint = SKILLPOINT;
		_dam = damage player;
		_gbbCash = CASH;
		_gbbBank = BANK;
		waitUntil {((damage player) != _dam) || (CASH != _gbbCash) || (BANK != _gbbBank) || (LEVEL != _gbbLevel) || (EXP != _gbbExp) || (SKILLPOINT != _gbbSkillPoint)};
		[] call life_fnc_hudUpdate;
	};
};

[] spawn {
	sleep 5;
	_fpscolour = '#008000';
	_counter = 180;
	_timeSinceLastUpdate = 0;
	_fps = round diag_fps;
	while {
		true
	}
	do {
		_aLevel = LEVEL;
		_fps = round diag_fps;
		if (_fps >= 30) then {
			_fpscolour = "color= '#008000'";
		} else {
			if (_fps >= 20) then {
				_fpscolour = "color= '#FFFF00'";
			} else {
				_fpscolour = "color= '#FF0000'";
			}
		};
		sleep 1;
		_counter = _counter - 1;

		((uiNamespace getVariable "playerHUD") displayCtrl IDC_LIFE_UI_STATUSBAR) ctrlSetStructuredText parseText format["<t %1 size='1' font='PuristaSemibold'>FPS: %2</t> | <t color='#0075FF' size='1' font='PuristaSemibold'>Cops: %3</t> | <t color='#660080' size='1' font='PuristaSemibold'>Civs: %4</t> | <t color='#008000' size='1' font='PuristaSemibold'>Medics: %5</t> | <t color='#FF0000' size='1' font='PuristaSemibold'>Uptime: %6</t>",_fpscolour, _fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits, [serverTime, "HH:MM:SS"] call BIS_fnc_secondsToString];

	};
};
