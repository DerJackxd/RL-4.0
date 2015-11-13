#include <macro.h>
/*
	File: welcomecredits.sqf

	Creates an intro on the bottom-right hand corner of the screen and add camera effect to spawn.
*/

private [ "_camera", "_welcomeMessage", "_camDistance","_randCamX","_randCamY","_camTime" ];

_welcomeMessage = format["Lade Mission... ReallIfeRPG geladen - Herzlich Willkommen %1!",profileName];

if((EQUAL((GVAR_MNS "LEVEL"),0)) OR (FETCH_CONST(life_rebellevel) < 1) OR (FETCH_CONST(life_adminlevel) < 1)) then
{
	[getMarkerPos "safezone_kavalla",_welcomeMessage,80,100,270,0,[]] spawn BIS_fnc_establishingShot;
	uiSleep 25;

	["!!!Bitte begeben Sie sich zum Marktplatz für weitere Informationen!!!"] spawn BIS_fnc_dynamicText;
};

_onScreenTime = 15;

sleep 15; //Wait in seconds before the credits start after player is in-game

_role1 = "Herzlich willkommen auf dem";
_role1names = ["RealLifeRPG","Australia Server"];
_role2 = "Admins";
_role2names = ["Toshi","Memphis","vaBene"];
_role3 = "Scripter";
_role3names = ["vaBene","Memphis","Greeny"];
_role4 = "Mapper";
_role4names = ["Moonwalker","Ryu Wolfsblut"];
_role5 = "Teamspeak:";
_role5names = ["ts.realliferpg.de"];
_role6 = "Webseite:";
_role6names = ["www.realliferpg.de"];

{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.6' color='#C31319' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.85' color='#FFFFFF' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.9);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50], //DEFAULT: 0.5,0.35
[safezoneY + safezoneH - 0.8,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [

[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names],
[_role5, _role5names],
[_role6, _role6names]
];
