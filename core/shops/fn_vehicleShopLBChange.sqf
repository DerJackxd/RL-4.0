#include <macro.h>
/*
	File: fn_vehicleShopLBChange.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Called when a new selection is made in the list box and
	displays various bits of information about the vehicle.
*/
disableSerialization;
private["_control","_index","_className","_basePrice","_vehicleInfo","_colorArray","_ctrl"];
_control = _this select 0;
_index = _this select 1;

//Fetch some information.
_className = _control lbData _index;
_vIndex = _control lbValue _index;
_colorIndex = lbValue[2304,(lbCurSel 2304)];

_vehicleList = M_CONFIG(getArray,"CarShops",SEL(life_veh_shop,0),"vehicles");
_basePrice = SEL(SEL(_vehicleList,_vIndex),1);

_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
_trunkSpace = [_className] call life_fnc_vehicleWeightCfg;

ctrlShow [2330,true];
(CONTROL(2300,2303)) ctrlSetStructuredText parseText format[
(localize "STR_Shop_Veh_UI_Rental")+ " <t color='#8cff9b'>$%1</t><br/>" +
(localize "STR_Shop_Veh_UI_Ownership")+ " <t color='#8cff9b'>$%2</t><br/>" +
(localize "STR_Shop_Veh_UI_MaxSpeed")+ " %3 km/h<br/>" +
(localize "STR_Shop_Veh_UI_HPower")+ " %4<br/>" +
(localize "STR_Shop_Veh_UI_PSeats")+ " %5<br/>" +
(localize "STR_Shop_Veh_UI_Trunk")+ " %6<br/>" +
(localize "STR_Shop_Veh_UI_Fuel")+ " %7<br/>" +
(localize "STR_Shop_Veh_UI_Armor")+ " %8",
[_basePrice] call life_fnc_numberText,
[round(_basePrice * 1.5)] call life_fnc_numberText,
_vehicleInfo select 8,
_vehicleInfo select 11,
_vehicleInfo select 10,
if(_trunkSpace == -1) then {"None"} else {_trunkSpace},
_vehicleInfo select 12,
_vehicleInfo select 9
];

_ctrl = CONTROL(2300,2304);
lbClear _ctrl;
_colorArray = M_CONFIG(getArray,CONFIG_VEHICLES,_className,"textures");

{
	_flag = SEL(_x,1);
	_textureName = SEL(_x,0);
	if(EQUAL(SEL(life_veh_shop,2),_flag)) then {
		_ctrl lbAdd _textureName;
		_ctrl lbSetValue [(lbSize _ctrl)-1,_forEachIndex];
	};
} foreach _colorArray;
_textures = [];
_textures = SEL(SEL(M_CONFIG(getArray,CONFIG_VEHICLES,_className,"textures"),_colorIndex),2);

_vehicleBoxPos = SEL(life_veh_shop,4);
_vehicleBoxPosNew = [
	_vehicleBoxPos select 0,
	_vehicleBoxPos select 1,
	(_vehicleBoxPos select 2) + 0.1
];

if(!(isNull vehicleBoxVehicle)) then
{
	deleteVehicle vehicleBoxVehicle;
};
uiSleep 0.1;

_time = time;
if((_time - 0.5) > life_vehPrev_time) then{
	vehicleBoxVehicle = _className createVehicleLocal _vehicleBoxPosNew;
	life_vehPrev_time = time;
}else{ closeDialog 0; hint "Nicht so schnell bitte!!"};

vehicleBoxVehicle allowDamage false;
vehicleBoxVehicle lock 2;
if(vehicleBoxVehicle isKindOf "Ship") then
{
	vehicleBoxVehicle setPosASL _vehicleBoxPosNew;
}else{
	vehicleBoxVehicle setPosATL _vehicleBoxPosNew;
};
vehicleBoxVehicle enableSimulation false;
vehicleBoxVehicle setDir 0;
if(!(isNil "_textures")) then {
	{vehicleBoxVehicle setObjectTexture [_forEachIndex,_x];} foreach _textures;
};
vehicleBoxCamera camSetTarget vehicleBoxVehicle;
vehicleBoxCamera camSetRelPos [0,10,8];

if(_className in (LIFE_SETTINGS(getArray,"vehicleShop_rentalOnly"))) then {
	ctrlEnable [2309,false];
} else {
	if(!(life_veh_shop select 3)) then {
		ctrlEnable [2309,true];
	};
};

lbSetCurSel[2304,0];
if((lbSize _ctrl)-1 != -1) then {
	ctrlShow[2304,true];
} else {
	ctrlShow[2304,false];
};
true;
