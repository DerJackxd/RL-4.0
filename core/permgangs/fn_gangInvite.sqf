#include <macro.h>
/*
Author: Bryan "Tonic" Boardwine

Description:
Prompts the player about an invite.
*/
private["_name","_group"];
_name = [_this,0,"",[""]] call BIS_fnc_param;
_group = [_this,1,grpNull,[grpNull]] call BIS_fnc_param;
if(_name == "" OR isNull _group) exitWith {}; //Fail horn anyone?
if(!isNil {(group player) GVAR "gang_name"}) exitWith {hint "Sie sind bereits in einer Gang!"};

_gangName = _group GVAR "gang_name";
_action = [
		format[localize "STR_GNOTF_InviteMSG",_name,_gangName],
		localize "STR_Gang_Invitation",
		localize "STR_Global_Yes",
		localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
		[player] join _group;
		[[4,_group],"TON_fnc_updateGang",false,false] spawn life_fnc_MP;
		[[_group],"TON_fnc_baseMemberUpdate",false,false] spawn life_fnc_MP;
} else {
		_grpMembers = grpPlayer GVAR "gang_members";
		SUB(_grpMembers,[steamid]);
		grpPlayer SVAR ["gang_members",_grpMembers,true];
		[[4,_grpMembers],"TON_fnc_updateGang",false,false] spawn life_fnc_MP;
};