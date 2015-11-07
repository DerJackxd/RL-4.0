/*
	Author: Unknown
	
	Description:
	 
	The Author of this File was removed. Please inform us if you are the Author so we can add you credits
*/
private["_time","_shop","_unit","_timeUp","_time","_countDown"];
_time = [_this,0,0,[0]] call BIS_fnc_param;
_shop = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_unit = [_this,2,ObjNull,[ObjNull]] call BIS_fnc_param;

_timeUp = time + _time;

while {true} do
{
	if((round(_timeUp - time)) > 0) then {
		_countDown = [(_timeUp - time), "MM:SS"] call BIS_fnc_secondsToString;
		hintSilent parseText format[" <t size='1.5'><t color='#FF0000'>Noch ca. %1 Minuten<br/></t><br/><t size='1'>Bis das Taxi kommt...<br/><br/>Bleibe in der Nähe!<t/>", _countDown];	
	};

	if(_unit distance _shop > 5.1) exitWith {
		hint "DU hast dich zu weit entfernt, das Taxi faehr jetzt woanders hin!";
		life_action_inUse = false;
	};

	if(!alive player) exitWith 
	{
		life_action_inUse = false;
	};

	if((round(_timeUp - time)) == 0) exitWith {hint ""};
	sleep 0.1;
};