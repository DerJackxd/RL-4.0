#include <macro.h>
/*
	File: fn_licensesRead.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Outprints the licenses.
*/
private["_licenses","_civ","_type","_licensesList","_licensesCiv","_displayName","_revocation"];
disableSerialization;
_type = [_this,0,0,[0]] call BIS_fnc_param;
_civ = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_licenses = [_this,2,[],[[]]] call BIS_fnc_param;
_revocation = ["driver","trucking","pilot","boot","hunting","dive","taxi","rebel","gun"];

switch (_type) do {
	case 0: {
		if(EQUAL(_licenses,[])) exitWith {closeDialog 0;hint format[localize "STR_Cop_NoLicensesFound",(name _civ)]};
		
		createDialog "life_removeLicenses";
		
		_licensesList = CONTROL(213000,213002);
		_licensesCiv = CONTROL_DATA(213002);
		
		ctrlSetText[213001,format["Lizenzen von: %1",(name _civ)]];
		
		{
			_displayName = M_CONFIG(getText,"Licenses",_x,"displayName");
			_licensesList lbAdd format["%1",(localize _displayName)];
			_licensesList lbSetData [(lbSize _licensesList)- 1, _x];
		}forEach _licenses;
		
		life_license_list = _licenses
	};
	
	case 1: {
		_licensesList = CONTROL(213000,213002);
		_licensesCiv = CONTROL_DATA(213002);
		
		_i = lbCurSel _licensesList;
		
		if(!(_licensesCiv in _revocation)) exitWith {hint "Diese Lizenz kann nicht entzogen werden!"};
		[[_licensesCiv,player],"life_fnc_removeLicensesCop",_civ,FALSE] spawn life_fnc_MP;
		closeDialog 0;
	};
};