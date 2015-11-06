#include <macro.h>
/*
	File: fn_info.sqf
	Author: Memphis
	
	Description:
	Dieses Script ist von mir für den RealLifeRPG geschrieben 
	verwendung auf anderen Servern ohne meine erlaubnis ist nicht gestattet!!!
*/
private["_mode","_dialog","_infoList","_infoText","_infoTitel","_infos","_displayName","_infoSel","_select"];

disableSerialization;
_mode = [_this,0,0,[0]] call BIS_fnc_param;
_dialog = findDisplay 621000;
_infoList = _dialog displayCtrl 621003;
_infoText = _dialog displayCtrl 621002;
_infoTitel = _dialog displayCtrl 621001;

_infos = [
	["Tastaturbelegung","Tastatur/Infos","Um eine Kompelette Liste der Tastaturbelegung zu bekommen,<br/>drücke <a color='#ff1000'>'M' -> 'Steuerung'</a> oder benutze die Taste <a color='#ff1000'>'H'</a>!<br/><br/> Um deine FPS inGame immer mal wieder zu Steigern<br/>Können Sie <a color='#ff1000'>'SHILFT + NUM -'</a> drücken und dann <a color='#ff1000'>'FLUSH'</a> eingeben um den Grafkispeicher zu leeren oder <a color='#ff1000'>'FPS'</a> bis <br/><a color='#ff1000'>'Limit FPS 0'</a> da steht!"],
	["Serverregeln","Serverregeln","Da Sie beim betretten des Servers die AGB´s akzeptiert haben,<br/>sollten Sie die Regeln bereits beherrschen!<br/>Die Aktuellen <a color='#ff1000' href='https://docs.google.com/document/d/1g_ODhM9tQVznIPPOGNRQhP82ov2oK4SylP7f7fbb1Rw/edit'>Serverregeln</a> sind auf unserer HP zu finden!"],
	["HP/FB","Links","<a color='#ff1000' href='http://realliferpg.de/'>HP Australia bereich</a><br/><a color='#ff1000' href='https://www.facebook.com/RealLifeRPGCommunity?fref=ts'>Unsere Facebook Seite</a><br/><a color='#ff1000' href='http://tinyurl.com/p2gpqkv'>Direckt auf unseren TS³</a><br/><a color='#ff1000' href='https://www.youtube.com/channel/UC4pq4UZ0qF0i_x_jdU5LGVg'>Unser Youtube Seite mit nuetzlichen Videos</a>"]
];

switch(_mode) do
{
	case 0:
	{
		{
			_displayName = (_x select 0);
			_infoList lbAdd format["%1",_displayName];
		} forEach _infos;
	};
	
	case 1:
	{
		if(isNull _dialog) exitWith {};
		_infoSel = lbCurSel _infoList;
		_select = _infos select _infoSel;
		_infoTitel ctrlSetText (_select select 1);
		_infoText ctrlSetStructuredText parseText (_select select 2);
	};
};