#include <macro.h>
/*
	File: fn_oelfassRemove.sqf
	Author: Unknown
	
	Description:
	 
	The Author of this File was removed. Please inform us if you are the Author so we can add you credits
*/
private["_unit","_vendor"];
_unit = _this select 0;
_vendor = removeFass;

if(!(_vendor GVAR "oelFass")) exitWith {}; //He's not being Escorted.
if(isNil "_vendor") exitWith {}; //Not valid

detach _vendor;
_unit SVAR ["oelFasstransport",false,true];
deleteVehicle _vendor;