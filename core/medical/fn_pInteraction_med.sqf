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
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;

life_pInact_curTarget = _curTarget;

//Set Ticket Button
//_Btn3 ctrlSetText localize "STR_pInAct_TicketBtn";
//_Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_ticketAction;";

//_Btn4 ctrlSetText localize "STR_pInAct_PutInCar";
//_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar;";

_Btn1 ctrlSetText "Therapie";
_Btn1 buttonSetAction "[life_pInact_curTarget] spawn life_fnc_Therapieaction;";

_Btn2 ctrlEnable false;
_Btn3 ctrlEnable false;
_Btn4 ctrlEnable false;
_Btn5 ctrlEnable false;
_Btn6 ctrlEnable false;
_Btn7 ctrlEnable false;
_Btn8 ctrlEnable false;
_Btn9 ctrlEnable false;
_Btn10 ctrlEnable false;