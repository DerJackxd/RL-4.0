#include <macro.h>
/*
	File: fn_onPlayerRespawn.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Does something but I won't know till I write it...
*/
private["_unit","_corpse"];
_unit = SEL(_this,0);
_corpse = SEL(_this,1);
life_corpse = _corpse;
life_isPlayer_alive = false;

//Comment this code out if you want them to keep the weapon on the ground.
private["_containers"];
_containers = nearestObjects[getPosATL _corpse,["WeaponHolderSimulated"],5]; //Fetch list of containers (Simulated = weapons)
{deleteVehicle _x;} foreach _containers; //Delete the containers.

//Set some vars on our new body.
_unit SVAR ["restrained",FALSE,TRUE];
_unit SVAR ["Escorting",FALSE,TRUE];
_unit SVAR ["transporting",FALSE,TRUE]; //Again why the fuck am I setting this? Can anyone tell me?
_unit SVAR ["steam64id",steamid,true]; //Reset the UID.
_unit SVAR ["realname",profileName,true]; //Reset the players name.

//Organ
_unit SVAR ["missingOrgan",FALSE,TRUE]; //I DONT KNOW WHY SOMETIMES THEY ARE CAPS or not
_unit SVAR["hasOrgan",FALSE,TRUE]; 

//positions save
_unit SVAR ["life_isPlayer_alive",FALSE,TRUE];

if(skill_civ_nourished && skill_civ_hungerGames && skill_civ_survival) then
{
	life_inv_tbacon = 2;
	life_inv_waterBottle = 2;
};

_unit addRating 1e12; //Set our rating to a high value, this is for a ARMA engine thing.
player playMoveNow "amovppnemstpsraswrfldnon";

[] call life_fnc_setupActions;
[[_unit,life_sidechat,playerSide],"TON_fnc_managesc",false,false] call life_fnc_MP;
if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),0)) then {player enableFatigue false;};

if (life_isGov) then {[[],"TON_fnc_clearGov",false,false] spawn life_fnc_mp; }; // ADD THIS AT THE VERY BOTTOM