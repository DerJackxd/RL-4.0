/*
	File: fn_storeVehicle.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Stores the vehicle in the garage.
*/
private["_nearVehicles","_vehicle"];
if(vehicle player != player) then
{
	_vehicle = vehicle player;
}
	else
{
	_nearVehicles = nearestObjects[getPos (_this select 0),["Car","Air","Ship","LandVehicle"],30]; //Fetch vehicles within 30m.
	if(count _nearVehicles > 0) then
	{
		{
			if(!isNil "_vehicle") exitWith {}; //Kill the loop.
			_vehData = _x getVariable["vehicle_info_owners",[]];
			if(count _vehData  > 0) then
			{
				_vehOwner = (_vehData select 0) select 0;
				if((getPlayerUID player) == _vehOwner) exitWith
				{
					_vehicle = _x;
				};
			};
		} foreach _nearVehicles;
	};
};

if(isNil "_vehicle") exitWith {hint localize "STR_Garage_NoNPC"};
if(isNull _vehicle) exitWith {};
[[_vehicle],"TON_fnc_updateVehInventory",false,false] call life_fnc_MP;
[[_vehicle,false,(_this select 1)],"TON_fnc_vehicleStore",false,false] call life_fnc_MP;
hint localize "STR_Garage_Store_Server";
life_garage_store = true;

_ropes = (_vehicle getVariable ["zlt_ropes", []]);
{deleteVehicle _x} foreach _ropes;
_vehicle setVariable ["zlt_ropes", [], true];

[] call SOCK_fnc_updateRequest;
