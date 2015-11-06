while {license_prog} do {
	if (! (alive player)) then { license_prog = false; license_granted = false;};
	if (vehicle player == player) then { license_prog = false; license_granted = false;};
	if ((getDammage vehicle1) >= 0.05) then { license_prog = false; license_granted = false;};
	sleep 1;
};

if (!license_granted) then {
	hint "Aussteigen, gilt nicht. Wenn das Auto schaden hatte, ebenfalls nicht... Nicht bestanden!";
	sleep 8;
	deletevehicle vehicle1;
	license_car_in_use =  false;
	publicVariable "license_car_in_use";
	player setPos current_position_p; 
};