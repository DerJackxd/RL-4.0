if (isNil "demiGOD") then
{
	demiGOD = 0;
};

if (demiGOD == 0) then
{
	demiGOD = 1;
    cutText ["Godmode activated.", "PLAIN"];
	player setUnitRecoilCoefficient 0;
	player removeAllEventHandlers "handleDamage";
	player addEventHandler ["handleDamage", {false}];
	player allowDamage false;
	player addEventHandler ["Fired", { (_this select 0) setVehicleAmmo 1 }];
	player enableFatigue false;
}

else
{
	demiGOD = 0;
    cutText ["Godmode Deactivated.", "PLAIN"];
	player allowDamage true;
	player addEventHandler ["handleDamage", {true}];
	player removeAllEventHandlers "handleDamage";
	player removeAllEventHandlers "Fired";
	player setUnitRecoilCoefficient 1;
	player enableFatigue true;
};