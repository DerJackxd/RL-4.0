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
if(!(typeOf _vehicle in ["C_Offroad_01_F","a3l_laddertruck","EWK_HMMWV_Medevac","ACR_LandRover_AMB","Jonzie_Ambulance","cl3_fire_rescue_red","cl3_escalade_fd","cl3_suv_emt_FD","cl3_dodge_charger_emt","C_SUV_01_F","O_Heli_Light_02_unarmed_F","I_Heli_light_03_unarmed_F","B_Heli_Light_01_F","EC635_unarmed_csat","C_Van_01_box_F","B_MRAP_01_F","DAR_ExplorerMedic","DAR_TahoeEMS"])) exitWith {}; //Last chance check to prevent something from defying humanity and creating a monster.

_trueorfalse = _vehicle getVariable["lights",FALSE];

if(_trueorfalse) then {
	_vehicle setVariable["lights",FALSE,TRUE];
} else {
	_vehicle setVariable["lights",TRUE,TRUE];
	[[_vehicle,0.22],"life_fnc_medicLights",true,false] call life_fnc_MP;
};