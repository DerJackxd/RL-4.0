/*
	File: fn_requestMedic.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	N/A
*/
private["_medicsOnline"];
_medicsOnline = {_x != player && {side _x == independent} && {alive _x}} count playableUnits > 0; //Check if medics (indep) are in the room.

if(_medicsOnline) then {
	//There is medics let's send them the request.
	[[player,profileName,position player],"life_fnc_medicRequest",independent,FALSE] spawn life_fnc_MP;
	//[[life_corpse,profileName,[mapGridPosition player]],"life_fnc_adacRequest",east,FALSE] spawn life_fnc_MP;
} else {
	//No medics were online, send it to the police.
	//[[life_corpse,profileName,[mapGridPosition player]],"life_fnc_copMedicRequest",west,FALSE] spawn life_fnc_MP;
	//[[life_corpse,profileName,[mapGridPosition player]],"life_fnc_adacRequest",east,FALSE] spawn life_fnc_MP;
};