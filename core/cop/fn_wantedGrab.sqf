/*
	File: fn_wantedGrab.sqf
	Author: ColinM
	
	Description:
	Prepare the array to query the crimes.
*/
private["_display","_tab","_criminal"];
disableSerialization;
_display = findDisplay 2400;
_tab = _display displayCtrl 2402;
_criminal = lbData[2401,(lbCurSel 2401)];
_criminal = call compile format["%1", _criminal];
if(isNil "_criminal") exitWith {};


[[player,_criminal],"life_fnc_wantedCrimes",false,false] spawn life_fnc_MP; 