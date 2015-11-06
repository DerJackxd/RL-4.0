

_spawn = _this select 0;

_posplr = [((getPos player) select 0) + 2, ((getPos player) select 1) + 2, 0];
_dirplr = getDir player;
_spwnveh = _spawn createVehicle (_posplr);
life_vehicles set[count life_vehicles,_spwnveh];
[_spwnveh] call life_fnc_clearVehicleAmmo;
clearMagazineCargoGlobal _spwnveh;
clearWeaponCargoGlobal _spwnveh;
clearItemCargoGlobal _spwnveh;


_spwnveh lock 2;
_spwnveh setVariable ["Sarge",1,true];
