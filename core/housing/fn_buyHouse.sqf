#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Buys the house?
*/
private["_house","_uid","_action","_houseCfg"];
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_uid = getPlayerUID player;

if(isNull _house) exitWith {};
if(!((_house isKindOf "House_F") OR (_house isKindOf "House"))) exitWith {};
if((_house GVAR ["house_owned",false])) exitWith {hint "This house is already owned even though you shouldn't be seeing this hint..."};
if(!isNil {(_house GVAR "house_sold")}) exitWith {hint localize "STR_House_Sell_Process"};
if(!license_civ_home) exitWith {hint localize "STR_House_License"};
if(skill_civ_homeS) then
{
	if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit_skill1"))) exitWith {hint format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit")]};
}else{
	if(skill_civ_homeS1) then
	{
		if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit_skill2"))) exitWith {hint format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit")]};
	}else{
		if(count life_houses >= (LIFE_SETTINGS(getNumber,"house_limit"))) exitWith {hint format[localize "STR_House_Max_House",LIFE_SETTINGS(getNumber,"house_limit")]};
	};
};
closeDialog 0;

_houseCfg = [M_CONFIG(getNumber,"Houses",typeOf(_house),"price"),M_CONFIG(getNumber,"Houses",typeOf(_house),"maxStorage")];
if(EQUAL(count _houseCfg,0)) exitWith {};

_action = [
	format[localize "STR_House_BuyMSG",
	[(_houseCfg select 0)] call life_fnc_numberText,
	(_houseCfg select 1)],localize "STR_House_Purchase",localize "STR_Global_Buy",localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if(_action) then {
	[[_house],"TON_fnc_preCheckHouse",false,false] call life_fnc_MP;
	sleep 1;
	if(EQUAL(life_checkHouse,true)) then {
		if(BANK < (_houseCfg select 0)) exitWith {hint format [localize "STR_House_NotEnough"]};
		[[_uid,_house],"TON_fnc_addHouse",false,false] call life_fnc_MP;
		_house SVAR ["house_owner",[_uid,profileName],true];
		_house SVAR ["locked",true,true];
		_house SVAR ["Trunk",[[],0],true];
		_house SVAR ["content",[],true];
		_house SVAR ["uid",floor(random 99999),true];
		SUB(BANK,(SEL(_houseCfg,0)));
		["1"] call SOCK_fnc_syncData;

		life_vehicles pushBack _house;
		life_houses pushBack [str(getPosATL _house),[]];
		_marker = createMarkerLocal [format["house_%1",(_house GVAR "uid")],getPosATL _house];
		_houseName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _house), "displayName");
		_marker setMarkerTextLocal _houseName;
		_marker setMarkerColorLocal "ColorBlue";
		_marker setMarkerTypeLocal "loc_Lighthouse";
		_numOfDoors = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,(typeOf _house),"numberOfDoors");
		for "_i" from 1 to _numOfDoors do {
			_house SVAR [format["bis_disabled_Door_%1",_i],1,true];
		};
	hint "Sie haben diese Immobilie erworben, Herzlichen Glückwunsch!";
	} else {
		hint "Diese Immobilie steht nicht mehr zum verkauf!";
	};
};
