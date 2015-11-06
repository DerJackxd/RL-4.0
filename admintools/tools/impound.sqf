_vehicle = cursorTarget;
if(!((_vehicle isKindOf "Car") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Ship"))) exitWith {life_action_inUse = false;};
[[_vehicle,true,player],"TON_fnc_vehicleStore",false,false] spawn life_fnc_MP;