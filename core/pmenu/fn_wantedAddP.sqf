private["_unit","_amount"];
if(playerSide != west) exitWith {hint "Wer glaubst du, wer du bist?"};
if((lbCurSel 2406) == -1) exitWith {hint "Sie muessen eine Person auswaehlen!"};
if((lbCurSel 2407) == -1) exitWith {hint "Sie muessen ein Verbrechen auswaehlen."};
_unit = lbData [2406,lbCurSel 2406];
_unit = call compile format["%1",_unit];
_amount = lbData [2407,lbCurSel 2407];
if(isNil "_unit") exitWith {};
//if(side _unit == west) exitWith {hint "What are ya trying to do, start a police war? Dickhead." };
//if(_unit == player) exitWith {hint "You can't make yourself wanted, dipshit";};
if(isNull _unit) exitWith {};

[[1,"STR_Wanted_AddP", true, [_unit getVariable["realname",name _unit],_amount,getPlayerUID _unit]],"life_fnc_broadcast",west,false] spawn life_fnc_MP;

[[getPlayerUID _unit,_unit getVariable["realname",name _unit],_amount],"life_fnc_wantedAdd",false,false] spawn life_fnc_MP;
