#include <macro.h>
//BAR
#define IDD_LIFE_MAIN_DISP 2203
#define IDC_LIFE_BAR_FOOD 2200
#define IDC_LIFE_BAR_WATER 2201
#define IDC_LIFE_BAR_HEALTH 2202
#define IDC_LIFE_BAR_MONEY 2204
#define IDC_LIFE_BAR_BANK 2205
#define IDC_LIFE_BAR_BATTERY 2206
#define IDC_LIFE_BAR_EXP 2207
#define IDC_LIFE_UI_STATUSBAR 2208
//TEXT
#define IDC_LIFE_FOOD_TEXT 1000
#define IDC_LIFE_WATER_TEXT 1001
#define IDC_LIFE_HEALTH_TEXT 1002
#define IDC_LIFE_MONEY_TEXT 1003
#define IDC_LIFE_BANK_TEXT 1004
#define IDC_LIFE_BATTERY_TEXT 1005
#define IDC_LIFE_AIRDROPWAIT_TEXT 1006
#define IDC_LIFE_AIRDROPEND_TEXT 1007
#define IDC_LIFE_LEVELAKTUELL_TEXT 1008
#define IDC_LIFE_EXP_TEXT 1009
#define IDC_LIFE_LEVELNEXT_TEXT 1010
//PIC
#define IDC_LIFE_EVENTSTART_PIC 3001
#define IDC_LIFE_EVENTEND_PIC 3002
#define IDC_LIFE_AIRDROPWAIT_PIC 3004
#define IDC_LIFE_AIRDROPEND_PIC 3005

#define LIFEdisplay (GVAR_UINS ["playerHUD",displayNull]) 
#define LIFEctrl(ctrl) ((GVAR_UINS ["playerHUD",displayNull]) displayCtrl ctrl)
/*
	File: fn_hudUpdate.sqf
	Author: Dillon "Itsyuka" Modine-Thuen
	
	Description:
	Updates the HUD when it needs to.
*/
private["_cashb","_cashb"];
disableSerialization;

if(isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};

_cashl = CASH;
_cashb = BANK;
_aLevel = LEVEL;
_nlevel = LEVEL;
_aExp = EXP;
_nExp = NEXTEXP;
_skillPoint = SKILLPOINT;

if(isNull LIFEdisplay) then {[] call life_fnc_hudSetup;};
LIFEctrl(IDC_LIFE_BAR_FOOD) progressSetPosition (1 / (100 / life_hunger));
LIFEctrl(IDC_LIFE_BAR_WATER) progressSetPosition (1 / (100 / life_thirst));
LIFEctrl(IDC_LIFE_BAR_HEALTH) progressSetPosition (1 - (damage player));
LIFEctrl(IDC_LIFE_BAR_BATTERY) progressSetPosition (1 / (100 / life_battery));
//LIFEctrl(IDC_LIFE_BAR_EXP) progressSetPosition (1 * ( * 100));

LIFEctrl(IDC_LIFE_FOOD_TEXT) ctrlSetText format["%1", life_hunger];
LIFEctrl(IDC_LIFE_WATER_TEXT) ctrlSetText format["%1", life_thirst];

_health = "Gesund";
if((player getVariable "ACE_medical_pain") > 0) then {
	_health = "Schmerzen";
};
 if(player getVariable "ACE_medical_isBleeding") then {
	_health = "Blutet";
};

LIFEctrl(IDC_LIFE_HEALTH_TEXT) ctrlSetText format["%1", _health];
LIFEctrl(IDC_LIFE_BATTERY_TEXT) ctrlSetText format["%1", life_battery];
LIFEctrl(IDC_LIFE_MONEY_TEXT) ctrlSetText format["$%1", ([_cashl] call life_fnc_numberText)];
LIFEctrl(IDC_LIFE_BANK_TEXT) ctrlSetText format["$%1", ([_cashb] call life_fnc_numberText)];
LIFEctrl(IDC_LIFE_LEVELAKTUELL_TEXT) ctrlSetText format["%1",_alevel];
LIFEctrl(IDC_LIFE_LEVELNEXT_TEXT) ctrlSetText format["%1",_skillPoint];
LIFEctrl(IDC_LIFE_EXP_TEXT) ctrlSetText format["%1/%2",([_aExp] call life_fnc_numberText),([_nExp] call life_fnc_numberText)];

if(eventAirDropWait) then 
{
	LIFEctrl(IDC_LIFE_AIRDROPWAIT_TEXT) ctrlShow true;
	LIFEctrl(IDC_LIFE_AIRDROPWAIT_PIC) ctrlShow true
}else{
	LIFEctrl(IDC_LIFE_AIRDROPWAIT_TEXT) ctrlShow false;
	LIFEctrl(IDC_LIFE_AIRDROPWAIT_PIC) ctrlShow false
};

if(eventAirDropEnd) then 
{
	LIFEctrl(IDC_LIFE_AIRDROPEND_TEXT) ctrlShow true;
	LIFEctrl(IDC_LIFE_AIRDROPEND_PIC) ctrlShow true
}else{
	LIFEctrl(IDC_LIFE_AIRDROPEND_TEXT) ctrlShow false;
	LIFEctrl(IDC_LIFE_AIRDROPEND_PIC) ctrlShow false
};	

if(eventStart) then 
{
	LIFEctrl(IDC_LIFE_EVENTSTART_PIC) ctrlShow true
}else{
	LIFEctrl(IDC_LIFE_EVENTSTART_PIC) ctrlShow false
};

if(eventEnd) then 
{
	LIFEctrl(IDC_LIFE_EVENTEND_PIC) ctrlShow true
}else{
	LIFEctrl(IDC_LIFE_EVENTEND_PIC) ctrlShow false
};


//((uiNamespace getVariable "playerHUD") displayCtrl IDC_LIFE_UI_STATUSBAR) ctrlSetStructuredText parseText format["<t %1 size='1' font='PuristaSemibold'>FPS: %2</t> | <t color='#0075FF' size='1' font='PuristaSemibold'>Cops: %3</t> | <t color='#660080' size='1' font='PuristaSemibold'>Civs: %4</t> | <t color='#008000' size='1' font='PuristaSemibold'>Medics: %5</t> | <t color='#006400' size='1' font='PuristaSemibold'>Cash: %6</t> | <t color='#FF8C00' size='1' font='PuristaSemibold'>Bank: %7</t> | <t color='#FF0000' size='1' font='PuristaSemibold'>Uptime: %8</t>",_fpscolour, _fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[CASH] call life_fnc_numberText, [BANK] call life_fnc_numberText, [serverTime, "HH:MM:SS"] call BIS_fnc_secondsToString];