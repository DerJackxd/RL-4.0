/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Fetches the nearest door of the building the player is looking
	at.
*/
private["_house","_door","_numOfDoors"];
_house = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _house) exitWith {0};
if(!((_house isKindOf "House_F") OR (_house isKindOf "House"))) exitWith {0};

_door = 0;
_doors = getNumber(configFile >> "CfgVehicles" >> (typeOf _house) >> "numberOfDoors");
for "_i" from 1 to _doors do {
	_selectionPos = _house selectionPosition format["Interact%1",_i];
	_worldSpace = _house modelToWorld _selectionPos;
	if(player distance _worldSpace < 2.4) exitWith {_door = _i};
};

_door;
