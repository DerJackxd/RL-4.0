cutText ["Repair activated.", "PLAIN"];
_timeForRepair = 2;

_veh = (vehicle player);


hint format ["Please wait %1 seconds for repair/flip",_timeForRepair];
sleep _timeForRepair;
_veh setFuel 1;
_veh setDamage 0;
_veh setVehicleAmmo 1;
_veh setpos [getpos _veh select 0, getpos _veh select 1, 0.5];
foreach (nearEntities ["LandVehicle", 20] + nearEntities ["Air",20] + nearEntities ["Ship",20]);