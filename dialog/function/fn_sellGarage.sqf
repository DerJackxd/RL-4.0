#include <macro.h>
/*
	File: fn_sellGarage.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sells a vehicle from the garage.
*/
private["_vehicle","_vid","_pid","_unit","_sellPrice"];
disableSerialization;
if(EQUAL(lbCurSel 2802,-1)) exitWith {hint localize "STR_Global_NoSelection"};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = steamid;
_unit = player;
if (life_action_inUse) exitWith {}; // prevent duping

_action = [
			"Sind Sie sich Sicher das Sie das Fahrzeug verkaufen moechtest?",
			"Verkaufen?",
			"Ja",
			"Nein"
		] call BIS_fnc_guiMessage;

if(_action) then
{
	if(isNil "_vehicle") exitWith {hint localize "STR_Garage_Selection_Error"};
	life_action_inUse = true; //duping fix
	_sellPrice = switch(playerSide) do {
		case civilian: {SEL(M_CONFIG(getArray,CONFIG_VEHICLES,_vehicle,"garageSell"),0)};
		case west: {SEL(M_CONFIG(getArray,CONFIG_VEHICLES,_vehicle,"garageSell"),1)};
		case independent: {SEL(M_CONFIG(getArray,CONFIG_VEHICLES,_vehicle,"garageSell"),2)};
		case east: {SEL(M_CONFIG(getArray,CONFIG_VEHICLES,_vehicle,"garageSell"),3)};
	};

	if(!(EQUAL(typeName _sellPrice,typeName 0)) OR _sellPrice < 1) then {_sellPrice = 1000};
	[[_vid,_pid,_sellPrice,player,life_garage_type],"TON_fnc_vehicleDelete",false,false] call life_fnc_MP;
	hint format[localize "STR_Garage_SoldCar",[_sellPrice] call life_fnc_numberText];
	ADD(BANK,_sellPrice);
	
	closeDialog 0;

	sleep 5;
	life_action_inUse = false; // duping fix
}else{
	closeDialog 0;
	hint "Das Fahrzeug wurde nicht verkauft!";
	sleep 5;
	life_action_inUse = false;
};