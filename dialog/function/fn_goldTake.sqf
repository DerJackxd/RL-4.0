#include <macro.h>
/*
	File: fn_safeTake.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gateway to fn_vehTakeItem.sqf but for safe(s).
*/
private["_ctrl","_num","_safeInfo"];
disableSerialization;

if((lbCurSel 3502) == -1) exitWith {hint localize "STR_Civ_SelectItem";};
_ctrl = CONTROL_DATA(3502);
_num = ctrlText 3505;
_safeInfo = life_goldObj GVAR ["gold",0];

//Error checks
if(!([_num] call TON_fnc_isnumber)) exitWith {hint localize "STR_MISC_WrongNumFormat";};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint localize "STR_Cop_VaultUnder1";};
if(!(EQUAL(_ctrl,"goldbarp"))) exitWith {hint localize "STR_Cop_OnlyGold"};
if(_num > _safeInfo) exitWith {hint format[localize "STR_Civ_IsntEnoughGold",_num];};

//Secondary checks
_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(EQUAL(_num,0)) exitWith {hint localize "STR_NOTF_InvFull"};


//Take it
if(!([true,_ctrl,_num] call life_fnc_handleInv)) exitWith {hint localize "STR_NOTF_CouldntAdd";};
life_goldObj SVAR ["gold",_safeInfo - _num,TRUE];
[life_goldObj] call life_fnc_safeInvGold;