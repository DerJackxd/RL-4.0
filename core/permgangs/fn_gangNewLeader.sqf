#include <macro.h>
/*
Author: Bryan "Tonic" Boardwine

Description:
Something about being a quitter.
*/
private["_unit","_unitID","_members","_action","_index"];
disableSerialization;

if(EQUAL((lbCurSel 3621),-1)) exitWith {hint localize "STR_GNOTF_TransferSelect"};
_unit = call compile format["%1",CONTROL_DATA(3621)];
if(isNull _unit) exitWith {}; //Bad unit?
if(_unit == player) exitWith {hint localize "STR_GNOTF_TransferSelf"};

_action = [
		format[localize "STR_GNOTF_TransferMSG",_unit GVAR ["realname",name _unit]],
		localize "STR_Gang_Transfer",
		localize "STR_Global_Yes",
		localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
		_unitID = getPlayerUID _unit;
		if(EQUAL(_unitID,"")) exitWith {hint "Bad UID?"}; //Unlikely?
		grpPlayer SVAR ["gang_owner",_unitID,true];
		grpPlayer selectLeader _unit;
		[[_unit,grpPlayer],"TON_fnc_clientGangLeader",_unit,false] spawn life_fnc_MP; //Boot that bitch!
		[[3,grpPlayer],"TON_fnc_updateGang",false,false] spawn life_fnc_MP; //Update the database.
} else {
		hint localize "STR_GNOTF_TransferCancel";
};
[] call life_fnc_gangMenu;