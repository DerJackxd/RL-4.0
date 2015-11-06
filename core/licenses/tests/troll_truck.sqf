while {truck_test_in_prog} do {
	if (! (alive player)) then { truck_test_in_prog = false; truck_test_fail = true;};
	if (vehicle player == player) then { truck_test_in_prog = false; truck_test_fail = true;};
	if ((getDammage truck) >= 0.05) then { truck_test_in_prog = false; truck_test_fail = true;};
	sleep 1;
};

if (truck_test_fail) then {
	hint "Aussteigen, gilt nicht. Wenn das Auto schaden hatte, ebenfalls nicht... Nicht bestanden!";
	sleep 8;
	deletevehicle truck;
	license_trucker_in_use =  false;
	publicVariable "license_trucker_in_use";
	player setPos current_position_p; 
};