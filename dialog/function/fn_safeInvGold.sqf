#include <macro.h>
/*
	File: fn_safeInventory.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Fills up the safes inventory.
*/
private["_safe","_tInv","_pInv","_safeInfo","_str","_shrt"];
_safe = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _safe) exitWith {closeDialog 0;};
disableSerialization;

_tInv = (findDisplay 3500) displayCtrl 3502;
lbClear _tInv;

_safeInfo = _safe getVariable["gold",-1];
if(_safeInfo < 1) exitWith {closeDialog 0; hint localize "STR_Civ_VaultEmpty";};

_str = M_CONFIG(getText,"VirtualItems","goldbarp","displayName");
_shrt = M_CONFIG(getText,"VirtualItems","goldbarp","variable");
_tInv lbAdd format["[%1] - %2",_safeInfo,(localize _str)];
_tInv lbSetData [(lbSize _tInv)-1,_shrt];