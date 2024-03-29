#include <macro.h>
/*
	Author: Unknown

	Description:

	The Author of this File was removed. Please inform us if you are the Author so we can add you credits
*/

private["_shop","_unit","_ziel","_cash","_time1","_time2","_action","_handle"];
_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_unit = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_ziel = [_this,3,"",[""]] call BIS_fnc_param;

_cash = [];
_time1 = [];
_time2 = [];


if(_unit distance _shop > 5) exitWith { hint "Du bist zu weit weg!" };

switch (_ziel) do
{
	case "Alice Springs": {_cash = 12000; _time1 = (2*60); _time2 = (3 * 60);};
	case "Sydney": {_cash = 11600; _time1 = (2*60); _time2 = (3 * 60);};
	case "Brisbane": {_cash = 13200; _time1 = (2*60); _time2 = (3 * 60);};
	case "Perth": {_cash = 23800; _time1 = (2*60); _time2 = (4 * 60);};
	case "Abschlepphof": {_cash = 9100; _time1 = (2*60); _time2 = (2 * 60);};
  case "Jaegerlager": {_cash = 23500; _time1 = (2*60); _time2 = (5 * 60);};
};

hint format["Die Taxi fahrt kostet dich %1$",_cash];
sleep 5;

_action = [
			"Bist du dir Sicher das du ein Taxi bestellen moechtest?",
			"Taxifahrt?",
			"Ja",
			"Nein"
		] call BIS_fnc_guiMessage;

if(_action) then
{
	if( CASH < _cash && BANK < _cash) exitWith
	{
		hint parseText format["<t color='#ff0000'>Du hast nicht das nötige Geld %1$</t>",_cash];
	};

	_handle = [_time1,_shop,_unit] spawn life_fnc_taxiTimerWait;
	waitUntil {scriptDone _handle};

	if(_unit distance _shop > 5.1) exitWith {hint "DU hast dich zu weit entfernt, das Taxi faehr jetzt zu einem anderen Auftrag!"};

	hint "Das Taxi der Australia Taxi GmbH kommt gleich bleib bitte in der naehe!";

	sleep 5;

	hint "Das Taxi ist da geniessen Sie die fahrt";
	sleep 5;

	life_action_inUse = true;

	switch (_ziel) do
	{
		case "Alice Springs":
		{
			titleText ["Die Taxi fahrt beginnt ruh dich so lange etwas aus...","BLACK",2];
			sleep 2;
			player setPos (getMarkerPos "warten");
			_handle = [_time2] spawn life_fnc_taxiTimer;
			waitUntil {scriptDone _handle};
			player allowDamage true;
			player addEventHandler ["handleDamage", {true}];
			player removeAllEventHandlers "handleDamage";
			disableUserInput false;
			player setPos (getMarkerPos "taxi_athira");
			titleText ["Die Fahr ist zuende", "BLACK IN"];
		};
		case "Sydney":
		{
			titleText ["Die Taxi fahrt beginnt ruh dich so lange etwas aus...","BLACK",2];
			sleep 2;
			player setPos (getMarkerPos "warten");
			_handle = [_time2] spawn life_fnc_taxiTimer;
			waitUntil {scriptDone _handle};
			player allowDamage true;
			player addEventHandler ["handleDamage", {true}];
			player removeAllEventHandlers "handleDamage";
			disableUserInput false;
			player setPos (getMarkerPos "taxi_airport");
			titleText ["Die Fahr ist zuende", "BLACK IN"];
		};
		case "Brisbane":
		{
			titleText ["Die Taxi fahrt beginnt ruh dich so lange etwas aus...","BLACK",2];
			sleep 2;
			player setPos (getMarkerPos "warten");
			_handle = [_time2] spawn life_fnc_taxiTimer;
			waitUntil {scriptDone _handle};
			player allowDamage true;
			player addEventHandler ["handleDamage", {true}];
			player removeAllEventHandlers "handleDamage";
			disableUserInput false;
			player setPos (getMarkerPos "taxi_pyrgos");
			titleText ["Die Fahr ist zuende", "BLACK IN"];
		};
		case "Perth":
		{
			titleText ["Die Taxi fahrt beginnt ruh dich so lange etwas aus...","BLACK",2];
			sleep 2;
			player setPos (getMarkerPos "warten");
			_handle = [_time2] spawn life_fnc_taxiTimer;
			waitUntil {scriptDone _handle};
			player allowDamage true;
			player addEventHandler ["handleDamage", {true}];
			player removeAllEventHandlers "handleDamage";
			disableUserInput false;
			player setPos (getMarkerPos "taxi_sofia");
			titleText ["Die Fahr ist zuende", "BLACK IN"];
		};
		case "Abschlepphof":
		{
			titleText ["Die Taxi fahrt beginnt ruh dich so lange etwas aus...","BLACK",2];
			sleep 2;
			player setPos (getMarkerPos "warten");
			_handle = [_time2] spawn life_fnc_taxiTimer;
			waitUntil {scriptDone _handle};
			player allowDamage true;
			player addEventHandler ["handleDamage", {true}];
			player removeAllEventHandlers "handleDamage";
			disableUserInput false;
			player setPos (getMarkerPos "taxi_abschlep");
			titleText ["Die Fahr ist zuende", "BLACK IN"];
		};
         case "Tasmania":
		{
			titleText ["Die Taxi fahrt beginnt ruh dich so lange etwas aus...","BLACK",2];
			sleep 2;
			player setPos (getMarkerPos "warten");
			_handle = [_time2] spawn life_fnc_taxiTimer;
			waitUntil {scriptDone _handle};
			player allowDamage true;
			player addEventHandler ["handleDamage", {true}];
			player removeAllEventHandlers "handleDamage";
			disableUserInput false;
			player setPos (getMarkerPos "taxi_jaegerl");
			titleText ["Die Fahr ist zuende", "BLACK IN"];
		};
	};
	sleep 1;

	hint format["Du bist in %1 angekommen, wir wuenschen ihnen einen schoenen Aufenthalt!",_ziel];

	life_action_inUse = false;
	//Money
			//Remove money
	if( CASH >= _cash) then
	{
		//Use main
		SUB(CASH,_cash);
	}
	else
	{
		//Use ATM
		if(BANK >= _cash) then
		{
			SUB(BANK,_cash);
		};
	};
}else {
	hint"Sie haben kein Taxi angefordert!";
	life_action_inUse = false;
};
