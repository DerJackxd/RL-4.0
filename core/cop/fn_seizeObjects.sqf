/*
	File: fn_seizeWeapon.sqf
	Author: Memphis
	
	Description:

*/
_clear = nearestObjects [player,["weaponholder"],3];
_destroyed = 0;
for "_i" from 0 to count _clear - 1 
do
{
	_destroyed = _destroyed + 1;
	deleteVehicle (_clear select _i);
	sleep 0.056;
};

titleText[format["Entferne %1 Objekte in der Naehe.", _destroyed],"PLAIN"];
[[51, player, format["Entferne %1 Objekte in der Naehe.", _destroyed]],"TON_fnc_logIt",false,false] spawn life_fnc_MP;