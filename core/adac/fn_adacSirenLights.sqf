/*
	File: fn_sirenLights.sqf
	Author: Unknown
	
	Description:
	Lets play a game! Can you guess what it does? I have faith in you, if you can't
	then you have failed me and therefor I lose all faith in humanity.. No pressure.
*/
private["_vehicle"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {}; //Bad entry!
if(!(typeOf _vehicle in ["C_Offroad_01_F","DAR_M1152","A3L_Towtruck","B_Truck_01_mover_F","I_Heli_light_03_unarmed_F","EC635_ADAC","B_Truck_01_transport_F","B_Heli_Light_01_F","I_Heli_Transport_02_F","C_SUV_01_F","B_MRAP_01_F","Orel_Master"])) exitWith {}; //Last chance check to prevent something from defying humanity and creating a monster.

_trueorfalse = _vehicle getVariable["lights",FALSE];

if(_trueorfalse) then {
	_vehicle setVariable["lights",FALSE,TRUE];
} else {
	_vehicle setVariable["lights",TRUE,TRUE];
	[[_vehicle,0.22],"life_fnc_adacLights",true,false] call life_fnc_MP;
};