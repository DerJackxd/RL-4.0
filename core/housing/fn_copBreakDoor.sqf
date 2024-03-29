#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Allows cops to 'kick' in the door?
*/
private["_house","_door","_title","_titleText","_progressBar","_cpRate","_cP","_uid"];
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house OR !((_house isKindOf "House_F") OR (_house isKindOf "House"))) exitWith {};
if(isNil {(_house GVAR "house_owner")}) exitWith {hint localize "STR_House_Raid_NoOwner"};

_uid = SEL((_house GVAR "house_owner"),0);
if(!([_uid] call life_fnc_isUIDActive)) exitWith {hint localize "STR_House_Raid_OwnerOff"};

_door = [_house] call life_fnc_nearestDoor;
if(_door == 0) exitWith {hint localize "STR_Cop_NotaDoor"};
if((_house GVAR[format["bis_disabled_Door_%1",_door],0]) == 0) exitWith {hint localize "STR_House_Raid_DoorUnlocked"};

life_action_inUse = true;

//Setup the progress bar
disableSerialization;
_title = localize "STR_House_Raid_Progress";
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace GVAR "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.0092;

[[2,"STR_House_Raid_NOTF",true,[SEL((_house GVAR "house_owner"),1)]],"life_fnc_broadcast",true,false] call life_fnc_MP;

while {true} do
{
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[[player,"AinvPknlMstpSnonWnonDnon_medic_1",true],"life_fnc_animSync",true,false] call life_fnc_MP;
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	sleep 0.26;
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = uiNamespace GVAR "life_progress";
	};
	_cP = _cP + _cpRate;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_interrupted) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player) exitWith {life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
life_action_inUse = false;
if(_house isKindOf "House_F") then {
	_house animate [format["door_%1_rot",_door],1];
	_house SVAR [format["bis_disabled_Door_%1",_door],0,true]; //Unlock the door.
}else{
	if(_house isKindOf "House") then {
		_house animate [format["Door_%1",_door],1];
		_house SVAR [format["bis_disabled_Door_%1",_door],0,true]; //Unlock the door.	
	};
};