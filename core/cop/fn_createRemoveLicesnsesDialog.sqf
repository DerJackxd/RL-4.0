#include <macro.h>
/*
	File: fn_removeLicensesCop.sqf
	Author: Unknown

	Description:
	The Author of this File was removed. Please inform us if you are the Author so we can add you credits
	The Author of this File was removed. Please inform us if you are the Author so we can add you credits
*/
if(!(EQUAL((side life_pInact_curTarget),civilian))) exitWith {hint "Die zu ueberpruefende Person ist kein Zivilist!"};

[[player],"life_fnc_licenseCheck",life_pInact_curTarget,FALSE] spawn life_fnc_MP
