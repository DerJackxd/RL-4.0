#include <macro.h>
/*
	File: fn_syncData.sqf
	Author: Bryan "Tonic" Boardwine"
	
	Description:
	Used for player manual sync to the server.
*/
_fnc_scriptName = "Player Synchronization";
private["_exit","_manuelSync"];
_manuelSync = [_this,0,"0",["0"]] call BIS_fnc_param; // By Nukefliege
if(isNil "life_session_time") then {life_session_time = false;};
if(life_session_time && _manuelSync == "0") exitWith {hint localize "STR_Session_SyncdAlready";}; // By Nukefliege

switch (typeName life_fnc_MP_packet) do
{
	case "ARRAY":
	{
		if(count life_fnc_MP_packet == 0) exitWith
		{
			_exit = true;
		};
	};
	
	default {_exit = true;};
};

if(!isNil "_exit") exitWith {hint localize "STR_Session_SyncCheater";};

[] call SOCK_fnc_updateRequest;
if(_manuelSync == "0") then {
	hint localize "STR_Session_SyncData";
	[] spawn
	{
		life_session_time = true;
		sleep (5 * 60);
		life_session_time = false;
	};
};