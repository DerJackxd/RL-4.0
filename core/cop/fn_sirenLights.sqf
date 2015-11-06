#include <macro.h>
/*
	File: fn_sirenLights.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Lets play a game! Can you guess what it does? I have faith in you, if you can't
	then you have failed me and therefor I lose all faith in humanity.. No pressure.
*/
private["_vehicle"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {}; //Bad entry!
if(!(typeOf _vehicle in ["O_MRAP_02_F","cl3_transitpatrol","cl3_escalade_patrolwb","cl3_q7_clpd_patrol","EWK_HMMWV_Light","HMMWV_M1035","CL3_bus_cl_jail","cl3_reventon_clpd","EC635_Unarmed","C_Offroad_01_F","I_MRAP_03_F","C_SUV_01_F","C_Hatchback_01_sport_F","B_Heli_Light_01_F","dezkit_b206_fbi","O_Heli_Transport_04_box_F","O_Heli_Transport_04_F","B_Heli_Transport_03_unarmed_F","I_Heli_light_03_unarmed_F","dezkit_b206_police","B_MRAP_01_F"])) exitWith {}; //Last chance check to prevent something from defying humanity and creating a monster.

_trueorfalse = _vehicle GVAR ["lights",FALSE];

if(_trueorfalse) then {
	_vehicle SVAR ["lights",FALSE,TRUE];
} else {
	_vehicle SVAR ["lights",TRUE,TRUE];
	[[_vehicle,0.22],"life_fnc_copLights",true,false] call life_fnc_MP;
};