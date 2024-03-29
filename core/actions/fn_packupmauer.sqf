/*
    File: fn_packupmauer.sqf
    Author: Bryan "Tonic" Boardwine
    Edited by: OLLI aka Hauklotz

    Description:
    Packs up a deployed wall.
*/
private["_mauer"];
_mauer = nearestObjects[getPos player,["RoadBarrier_F"],8] select 0;
if(isNil "_mauer") exitWith {};

if(([true,"mauer",1] call life_fnc_handleInv)) then
{
	_mauer setVariable["mauerDown",false,true];
    cutText["Sie haben die Strassensperre aufgehoben.","PLAIN DOWN"];
    deleteVehicle _mauer;
};