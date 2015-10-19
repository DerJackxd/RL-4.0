#include <macro.h>
/*
	File: fn_giveMoney.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gives the selected amount of money to the selected player.
*/
private["_unit","_amount"];
_amount = ctrlText 2018;
ctrlShow[2001,false];
if((lbCurSel 2022) == -1) exitWith {hint "Niemand wurde ausgewählt!";ctrlShow[2001,true];};
_unit = lbData [2022,lbCurSel 2022];
_unit = call compile format["%1",_unit];
if(isNil "_unit") exitWith {ctrlShow[2001,true];};
if(_unit == player) exitWith {ctrlShow[2001,true];};
if(isNull _unit) exitWith {ctrlShow[2001,true];};

//A series of checks *ugh*
if(!life_use_atm) exitWith {hint "Sie haben erst eine Bank ausgeraubt! Sie können das Geld jetzt noch nicht vergeben.";ctrlShow[2001,true];};
if(!([_amount] call TON_fnc_isnumber)) exitWith {hint "Sie haben keine aktuelle Anzahl angegeben..";ctrlShow[2001,true];};
if(parseNumber(_amount) <= 0) exitWith {hint "Sie müssen eine aktuelle Anzahl angeben die Sie vergeben möchten.";ctrlShow[2001,true];};
if(parseNumber(_amount) > CASH) exitWith {hint "Sie koennen nicht so viel Geld weitergeben!";ctrlShow[2001,true];};
if(isNull _unit) exitWith {ctrlShow[2001,true];};
if(isNil "_unit") exitWith {ctrlShow[2001,true]; hint "Der ausgewählte Spieler ist nicht in der Reichweite";};
hint format["You gave $%1 to %2",[(parseNumber(_amount))] call life_fnc_numberText,_unit GVAR ["realname",name _unit]];
CASH = CASH - (parseNumber(_amount));
[0] call SOCK_fnc_updatePartial;
[[_unit,_amount,player],"life_fnc_receiveMoney",_unit,false] call life_fnc_MP;
[] call life_fnc_p_updateMenu;

ctrlShow[2001,true];