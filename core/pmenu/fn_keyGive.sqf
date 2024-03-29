#include <macro.h>
/*
	File: fn_keyGive.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gives a copy of the key for the selected vehicle to the selected player.
	Player must be within range.
*/
private["_dialog","_list","_plist","_sel","_vehicle","_owners","_index","_unit","_uid"];
disableSerialization;

_dialog = findDisplay 2700;
_list = _dialog displayCtrl 2701;
_plist = _dialog displayCtrl 2702;

_sel = lbCurSel _list;
_vehicle = _list lbData _sel;
_vehicle = life_vehicles select parseNumber(_vehicle);

_sel = lbCurSel _plist;
_unit = _plist lbData _sel;
_unit = call compile format["%1", _unit];
if(isNull _unit OR isNil "_unit") exitWith {}; 

_uid = getPlayerUID _unit;
_owners = _vehicle GVAR "vehicle_info_owners";
_index = [_uid,_owners] call TON_fnc_index;
_type = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");
if(_index == -1) then 
{
	_owners pushBack [_uid,_unit GVAR ["realname",name _unit]];
	_vehicle SVAR ["vehicle_info_owners",_owners,true];
};

hint format["You have given %1 keys to your %2",_unit GVAR ["realname",name _unit],_type];
[[_vehicle,_unit,profileName], "TON_fnc_clientGetKey",_unit,false] call life_fnc_MP;