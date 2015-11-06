#include <macro.h>
/*

	Shows cop arrest dlg

*/

if(!(EQUAL(playerSide,west))) exitWith {};
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
disableSerialization;

createDialog "jail_time";
