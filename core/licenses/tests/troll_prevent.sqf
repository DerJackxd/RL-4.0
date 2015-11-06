
//Man muss auf trolle aufpassen... 

while {heli_schule_prog} do {
	if (! (alive player)) then { heli_schule_prog = false; heli_schule_gesch = false;};
	if (vehicle player == player) then { heli_schule_prog = false; heli_schule_gesch = false;};
	if ((getDammage heli1) >= 0.05) then { heli_schule_prog = false; heli_schule_gesch = false;};
	sleep 1;
};

if (!heli_schule_gesch) then {
	hint "Aussteigen, gilt nicht. Wenn der Heli schaden hatte, ebenfalls nicht... Nicht bestanden!";
	sleep 8;
	deletevehicle heli1;
	license_heli_in_use =  false;
	publicVariable "license_heli_in_use";
	player setPos current_position_p; 
	heli_schule_prog = false;
};