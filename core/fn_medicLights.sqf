/*
	File: fn_copLights.sqf
	Author: mindstorm, modified by Adanteh
	Link: http://forums.bistudio.com/showthread.php?157474-Offroad-Police-sirens-lights-and-underglow
	
	Description:
	Adds the light effect to cop vehicles, specifically the offroad.
*/
private ["_vehicle","_lightRed","_lightBlue","_lightleft","_lightright","_leftRed","_brightness","_attach"];

_vehicle = _this select 0;

if (isNil "_vehicle" || isNull _vehicle || !(_vehicle getVariable "lights")) exitWith {};

switch (typeOf _vehicle) do {
	case "C_Offroad_01_F": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
	case "cl3_escalade_fd": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
	case "cl3_suv_emt_FD": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
	case "DAR_ExplorerMedic": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
	case "C_Van_01_box_F": { _attach = [[-1, -2.8, 0.55], [1, -2.8, 0.55]]; };
	case "B_MRAP_01_F": { _attach = [[-1, -2.8, 0.55], [1, -2.8, 0.55]]; };
	case "Jonzie_Ambulance": { _attach = [[-1, -2.8, 0.55], [1, -2.8, 0.55]]; };
	case "cl3_fire_rescue_red": { _attach = [[-1, -2.8, 0.55], [1, -2.8, 0.55]]; };
	case "C_SUV_01_F": { _attach = [[-0.4, 2.3, -0.55], [0.4, 2.3, -0.52]]; };
	case "cl3_dodge_charger_emt": { _attach = [[-0.4, 2.3, -0.55], [0.4, 2.3, -0.52]]; };
	case "DAR_TahoeEMS": { _attach = [[-0.4, 2.3, -0.55], [0.4, 2.3, -0.52]]; };
	case "B_Heli_Light_01_F": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
	case "O_Heli_Light_02_unarmed_F": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
	case "EC635_unarmed_csat": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
	case "I_Heli_light_03_unarmed_F": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };
};

_lightRed = [0.1, 0.1, 20];
_lightBlue = [0.1, 0.1, 20];

_lightleft = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.2;
_lightleft setLightColor _lightRed;
_lightleft setLightBrightness 0;
_lightleft lightAttachObject [_vehicle, _attach select 0];
_lightleft setLightAttenuation [0.181, 0, 1000, 130];
_lightleft setLightIntensity 20;
_lightleft setLightFlareSize 0.38;
_lightleft setLightFlareMaxDistance 150;
_lightleft setLightUseFlare true;
_lightleft setLightDayLight true;

_lightright = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.2;
_lightright setLightColor _lightBlue;
_lightright setLightBrightness 0;
_lightright lightAttachObject [_vehicle, _attach select 1];
_lightright setLightAttenuation [0.181, 0, 1000, 130];
_lightright setLightIntensity 20;
_lightright setLightFlareSize 0.38;
_lightright setLightFlareMaxDistance 150;
_lightright setLightUseFlare true;
_lightright setLightDayLight true;

if (sunOrMoon < 1) then {
	_brightness = 4;
} else {
	_brightness = 30;
};

_leftRed = true;  
while {(alive _vehicle)} do { 
	if (!(_vehicle getVariable "lights")) exitWith {};
	if (_leftRed) then {  
		_leftRed = false;  
		_lightright setLightBrightness 0;  
		sleep 0.05;
		_lightleft setLightBrightness _brightness;  
	} else {  
		_leftRed = true;  
		_lightleft setLightBrightness 0;  
		sleep 0.05;
		_lightright setLightBrightness _brightness;  
	};
	sleep 0.22;  
};  
deleteVehicle _lightleft;
deleteVehicle _lightright;