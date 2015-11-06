StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf";
[] execVM "KRON_Strings.sqf";

enableEnvironment true;
setTerrainGrid 50;
StartProgress = true;

[] execVM "scripts\fastrope.sqf";
[] execVM "scripts\teargasm.sqf";
[] execVM "scripts\teargasp.sqf";
[] execVM "scripts\teargasGLm.sqf";
[] execVM "scripts\teargasGLp.sqf";

[] execVM "admintools\loop.sqf";
[] execVM "scripts\fpsfix.sqf";
[] execVM "Anticheat.sqf";


MAC_fnc_switchMove = {
    private["_object","_anim"];
    _object = _this select 0;
    _anim = _this select 1;

    _object switchMove _anim;

};

// Tactical View disable, not working
sleep 0.5;
dokeyCheck={
	private ["_r"] ;
	_r = false ;
	if ((_this select 1) in (actionKeys "TacticalView")) then
	{
		hint "Diese Funktion wurde deaktiviert.";
		_r=true;
	};
		_r;
	};
(FindDisplay 46) displaySetEventHandler ["keydown", "_this call dokeyCheck"];


life_colorEffects = 0;
[] spawn life_fnc_colorEffects;

/*
//govenment
life_isGov = false;
[[player],"TON_fnc_govLogged",false,false] spawn life_fnc_mp;
*/


if (!IsServer) then {
	if (isNil "life_car_license_test") then {
		life_car_license_test = false;
		publicVariable "life_car_license_test";
	};
};
