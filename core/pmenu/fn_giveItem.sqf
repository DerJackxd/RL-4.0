#include <macro.h>
/*
	File: fn_giveItem.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Gives the selected item & amount to the selected player and
	removes the item & amount of it from the players virtual
	inventory.
*/
private["_unit","_val"];
_val = ctrlText 2010;
ctrlShow[2002,false];
if((lbCurSel 2023) == -1) exitWith {hint "Niemand wurde ausgewählt!";ctrlShow[2002,true];};
_unit = lbData [2023,lbCurSel 2023];
_unit = call compile format["%1",_unit];
if((lbCurSel 2005) == -1) exitWith {hint "Sie haben kein Item ausgewählt dass du vergeben möchtest.";ctrlShow[2002,true];};
_item = lbData [2005,(lbCurSel 2005)];
if(isNil "_unit") exitWith {ctrlShow[2002,true];};
if(_unit == player) exitWith {ctrlShow[2002,true];};
if(isNull _unit) exitWith {ctrlShow[2002,true];};

//A series of checks *ugh*
if(!([_val] call TON_fnc_isnumber)) exitWith {hint "Sie haben keine aktuelle Anzahl angegeben.";ctrlShow[2002,true];};
if(parseNumber(_val) <= 0) exitWith {hint "Sie müssen eine aktuelle Anzahl angeben die Sie vergeben möchten.";ctrlShow[2002,true];};
if(isNil "_unit") exitWith {ctrlShow[2001,true]; hint "Der ausgewählte Spieler ist nicht in der Reichweite";};
if(!([false,_item,(parseNumber _val)] call life_fnc_handleInv)) exitWith {hint "Es konnte nicht so viel von diesem Item vergeben werden, möglicherweiße haben Sie nicht diese Anzahl?";ctrlShow[2002,true];};
[[_unit,_val,_item,player],"life_fnc_receiveItem",_unit,false] call life_fnc_MP;
_type = M_CONFIG(getText,"VirtualItems",_item,"displayName");
hint format["Sie haben %1 %2 %3 gegeben",_unit GVAR ["realname",name _unit],_val,(localize _type)];
[] call life_fnc_p_updateMenu;

ctrlShow[2002,true];