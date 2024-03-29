/*
	File: fn_trapped.sqf
	Author: Wolfgang Bahmüller
	
	Description:
	speedtrap is a speedtrap and sometimes a speedtrap
    
    Das Script darf nicht verändert werden!
    Der Einsatz ist nur auf von mir genehmigten Servern/Clients erlaubt!    
*/



private["_speedlimit","_speedtrap"];
disableSerialization;

_speedtrap = cursorTarget;
if(isNull _speedtrap) exitwith {};

_speedlimit = ctrlText 8001;
if(!([_speedlimit] call TON_fnc_isnumber)) exitWith {hint "Ungültiges Zahlenformat";};
_speedlimit = parseNumber(_speedlimit);
if(_speedlimit < 1) exitWith {hint "Bitte nichts unter 1 eingeben!";};

_speedtrap setVariable ["speedtrap_speedlimit", _speedlimit, true];
