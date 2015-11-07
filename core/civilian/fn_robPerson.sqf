#include <macro.h>
/*
	File: fn_robPerson.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Getting tired of adding descriptions...
*/
private["_robber"];
_robber = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _robber) exitWith {}; //No one to return it to?

if(CASH > 0) then {
	[[getPlayerUID _robber,_robber GVAR ["realname",name _robber],"211"],"life_fnc_wantedAdd",false,false] call life_fnc_MP;
	[[1,"STR_NOTF_Robbed",true,[_robber GVAR ["realname",name _robber],profileName,[CASH] call life_fnc_numberText]],"life_fnc_broadcast",nil,false] call life_fnc_MP;
	_cash = CASH;
	CASH = 0;
	["1"] call SOCK_fnc_syncData;

	[_robber,_cash] spawn {
		_robber = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
		_cash = [_this,1,0,[0]] call BIS_fnc_param;
		sleep 10;
		[[_cash,player,_robber],"life_fnc_robReceive",_robber,false] call life_fnc_MP;
	};
} else {
	[[2,"STR_NOTF_RobFail",true,[profileName]],"life_fnc_broadcast",_robber,false] call life_fnc_MP;
};

_exp = round(random(100));
[true,_exp] spawn life_fnc_expConfig;
[0] call SOCK_fnc_updatePartial;
