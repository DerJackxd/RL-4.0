#include <macro.h>
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Animates a door?
*/
private["_b","_doors","_door"];
_b = SEL(_this,0);
_doors = 1;
_doors = FETCH_CONFIG2(getNumber,CONFIG_VEHICLES,typeOf _b,"NumberOfDoors");

_door = 0;
//Find the nearest door
if(_b isKindOf "House_F") then {
	for "_i" from 1 to _doors do {
		_selPos = _b selectionPosition format["Door_%1_trigger",_i];
		_worldSpace = _b modelToWorld _selPos;
			if(player distance _worldSpace < 5) exitWith {_door = _i;};
	};
}else{
	if(_b isKindOf "House") then {
		for "_i" from 1 to _doors do {
			_selPos = _b selectionPosition format["Interact%1",_i];
			_worldSpace = _b modelToWorld _selPos;
				if(player distance _worldSpace < 5) exitWith {_door = _i;};
		};
	};
};
if(_door == 0) exitWith {hint localize "STR_Cop_NotaDoor"}; //Not near a door to be broken into.

if(_b isKindOf "House_F") then {
	if(_b animationPhase format["door_%1_rot",_door] == 0) then {
		_b animate[format["door_%1_rot",_door],1];
	} else {
		_b animate[format["door_%1_rot",_door],0];
	};
}else{
	if(_b isKindOf "House") then {
		if(_b animationPhase format["Door_%1",_door] == 0) then {
			_b animate[format["Door_%1",_door],1];
		} else {
			_b animate[format["Door_%1",_door],0];
		};
	};
};
closeDialog 0;