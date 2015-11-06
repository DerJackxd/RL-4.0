#include <macro.h>

#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Btn6 37455
#define Btn7 37456
#define Btn8 37457
#define Btn9 37458
#define Btn10 37459
#define Btn11 37460
#define Title 37401

private["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8","_Btn9","_Btn10"];

if(!dialog) then {
createDialog "pInteraction_Menu";
};
disableSerialization;
_curTarget = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _curTarget) exitWith {closeDialog 0;}; //Bad target

if(!isPlayer _curTarget && side _curTarget == civilian) exitWith {closeDialog 0;}; //Bad side check?
_display = findDisplay 37400;
_Btn1 = _display displayCtrl 2401;
_Btn2 = _display displayCtrl 2402;
_Btn3 = _display displayCtrl 2403;
_Btn4 = _display displayCtrl 2404;
_Btn5 = _display displayCtrl 2405;
_Btn6 = _display displayCtrl 2406;
_Btn7 = _display displayCtrl 2407;
_Btn8 = _display displayCtrl 2408;
_Btn9 = _display displayCtrl 2409;
_Btn10 = _display displayCtrl 2410;

life_pInact_curTarget = _curTarget;

//Set Ticket Button
//_Btn3 ctrlSetText localize "STR_pInAct_TicketBtn";
//_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

_Btn4 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

_Btn1 ctrlSetText "Therapie";
_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_Therapieaction;";

//Set Drunk/Drug Test
_Btn2 ctrlSetText localize "STR_pInAct_drunkenCheck";
_Btn2 buttonSetAction "[life_pInact_curTarget] call life_fnc_drunkenCheck;";

_Btn5 ctrlSetText localize "STR_pInAct_drugCheck";
_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_drugCheck;";

_Btn3 ctrlEnable false;
_Btn6 ctrlEnable false;
_Btn7 ctrlEnable false;
_Btn8 ctrlEnable false;
_Btn9 ctrlEnable false;
_Btn10 ctrlEnable false;