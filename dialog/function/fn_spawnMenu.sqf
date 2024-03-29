#include <macro.h>
/*
	File: fn_spawnMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the spawn point selection menu.
*/
private["_spCfg","_sp","_ctrl"];
disableSerialization;
_rndmrk = getPlayerUID player;
_Pos = life_last_position;

if(life_is_arrested) exitWith {
	[] call life_fnc_respawned;
};

if(life_respawned) then {
	[] call life_fnc_respawned;
};
cutText["","BLACK FADED"];
0 cutFadeOut 9999999;
if(!(createDialog "life_spawn_selection")) exitWith {[] call life_fnc_spawnMenu;};
(findDisplay 38500) displaySetEventHandler ["keyDown","_this call life_fnc_displayHandler"];

_spCfg = [playerSide] call life_fnc_spawnPointCfg;

_ctrl = ((findDisplay 38500) displayCtrl 38510);
{
	_ctrl lnbAddRow[(_spCfg select _ForEachIndex) select 1,(_spCfg select _ForEachIndex) select 0,""];
	_ctrl lnbSetPicture[[_ForEachIndex,0],(_spCfg select _ForEachIndex) select 2];
	_ctrl lnbSetData[[_ForEachIndex,0],(_spCfg select _ForEachIndex) select 0];
} foreach _spCfg;

_sp = _spCfg select 0; //First option is set by default

if(EQUAL((SEL(_sp,0)),"last_pos")) then
{
	[((findDisplay 38500) displayCtrl 38502),1,0.1,life_last_position] call life_fnc_setMapPosition;
	_mrkstring = format ["lastPos%1", _rndmrk];
	_marker = createMarkerLocal [_mrkstring, _Pos]; 
	_marker setMarkerColorLocal "ColorGreen";
	_marker setMarkerTextLocal "Letzte Position";
	_marker setMarkerTypeLocal "mil_join";
}else{
	[((findDisplay 38500) displayCtrl 38502),1,0.1,getMarkerPos (_sp select 0)] call life_fnc_setMapPosition;
};
life_spawn_point = _sp;

ctrlSetText[38501,format["%2: %1",_sp select 1,localize "STR_Spawn_CSP"]];