private["_unit"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _unit) exitWith {};
sleep 2;
if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint localize "STR_NOTF_CannotSearchPerson"};
[[player],"life_fnc_removeMaske",_unit,false] spawn life_fnc_MP;