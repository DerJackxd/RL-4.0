#include <macro.h>
/*
	File: fn_pickaxeUse.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main functionality for pickaxe in mining.
*/
closeDialog 0;
private["_mine","_itemWeight","_diff","_itemName","_exp","_level"];
_mine = [];
_exp = [];
_level = [];

if(life_action_gather) exitWith {};

switch (true) do {
	case (player distance (getMarkerPos "gold_1") < 10): {_mine = ["gold_unprocessed",1]; _exp = 100; _level = 4};
    case (player distance (getMarkerPos "gold_2") < 10): {_mine = ["gold_unprocessed",1]; _exp = 100; _level = 4};
    case (player distance (getMarkerPos "gold_3") < 10): {_mine = ["gold_unprocessed",1]; _exp = 100; _level = 4};
	default {["", 0]};
};
//Mine check
if(EQUAL(SEL(_mine, 0),"")) exitWith {hint localize "STR_ISTR_Pick_NotNear";};
if(vehicle player != player) exitWith {hint localize "STR_ISTR_Pick_MineVeh";};

_itemName = M_CONFIG(getText,"VirtualItems",SEL(_mine,0),"displayName");
if(LEVEL < _level) exitWith {hintSilent format["Sie muessen Level %1 erreicht haben um %2 farmen zu koennen",_level,localize _itemName]};

_diff = [SEL(_mine,0),SEL(_mine,1),life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
_rndm = [1,2,3,4,5] call BIS_fnc_selectRandom; _sum = [SEL(_mine,0),_rndm,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if(EQUAL(_diff,0)) exitWith {hint localize "STR_NOTF_InvFull";};

_delay = 3.5;
if(skill_civ_brawny) then {_delay = 1.5};
if(_sum > 0) then
{
	life_action_gather = true;
	for "_i" from 0 to 2 do {
		player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
		waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
		sleep _delay;
	};

	if(([true,SEL(_mine,0),_sum] call life_fnc_handleInv)) then {
		cutText[format[localize "STR_ISTR_Pick_Success",(localize _itemName),_rndm],"PLAIN DOWN"];
	};
};
life_action_gather = false;
_exp = round(random(_exp));
[true,_exp] spawn life_fnc_expConfig;
