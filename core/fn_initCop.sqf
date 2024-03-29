#include <macro.h>
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Cop Initialization file.
*/
private["_end"];
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;
if(life_blacklisted) exitWith
{
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

[] execVM "scripts\MineDetector\init.sqf";
[] execVM "scripts\MineDetector\respawn_init.sqf";

if(!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
	if((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 35;
	};
};

//paychack
life_paycheck = (FETCH_CONST(life_coplevel) * 6000);

//Show Ranks
player SVAR ["copLevel",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

[] spawn life_fnc_wkCop;
[] call life_fnc_updateClothing;
[] execVM "scripts\autoTexture.sqf";
[] spawn life_fnc_placeablesInit;
tf_no_auto_long_range_radio = true; // TaskforceRadio ohne Rucksack spawnen