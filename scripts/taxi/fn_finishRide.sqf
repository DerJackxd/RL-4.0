_cash = _this select 0;
_pricePerM = _this select 1;
_totalDistance = (_cash/_pricePerM);
_totalDistance = floor _totalDistance;
life_cash = life_cash + _cash;
player removeAction taxi_ActionToLeave;
_message = parseText format ["Ihr Fahrgast hat den Taxiservice gestoppt. Sie haben fuer die Strecke von %2 Meter $%1 erhalten. Sie stehen wieder als Tasxifahrer zur verfuegung!",_cash,_totalDistance];
titleText[format["%1",_message],"PLAIN"];
life_isOnDutyTaxi = true;
[[player],"TON_fnc_goOnDuty",false,false] spawn life_fnc_mp;