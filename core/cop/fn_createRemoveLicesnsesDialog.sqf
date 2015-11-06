#include <macro.h>
/*
	File: fn_removeLicensesCop.sqf
	Author: Memphis
	
	Description:
	Dieses Script ist von mir für den RealLifeRPG geschrieben 
	verwendung auf anderen Servern ohne meine erlaubnis ist nicht gestattet!!!
*/
if(!(EQUAL((side life_pInact_curTarget),civilian))) exitWith {hint "Die zu ueberpruefende Person ist kein Zivilist!"};

[[player],"life_fnc_licenseCheck",life_pInact_curTarget,FALSE] spawn life_fnc_MP