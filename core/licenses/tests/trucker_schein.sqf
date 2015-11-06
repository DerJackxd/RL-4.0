/* 

	Author Memphis
	
*/

ts_markers = [];
ts_helpers = ["ts1","ts2","ts3","ts4","ts5","ts6","ts7","ts8","ts9","ts10","ts11","ts12","ts13","ts14","ts15","ts16","ts17","ts18","ts19","ts20","ts21","ts22","ts23"];
{
	_current = _x;
	ts_markers = ts_markers + ["Sign_Arrow_Large_F" createVehicle (getMarkerPos _current)];
}forEach ts_helpers;

hint "Fahre entlang der Markierten Pfeile, bis zur Fabrik. Dort wendest du, und machst dich auf den Weg zum anfangspunkt! Du hast 4 Minuten und 20 Sekunden Zeit.";

_owners = getplayerUID player;

sleep 10;

truck = "B_Truck_01_box_F" createVehicle (getMarkerPos "truck_license_spawn");
truck setVariable["vehicle_info_owners",_owners,true];

sleep 0.1;

player moveindriver truck;

hint "Los gehts!!!";

goal_singns = "Sign_Arrow_Large_Green_F" createVehicle ( getMarkerPos "trucking_license_goal");

sleep 2;

execvm "core\licenses\tests\troll_truck.sqf";

wende_schleife_truck = false;
truck_test_in_prog = true;
truck_test_goal_q = false;
truck_test_fail = false;


_counter = 0;
_min = 0;

while {truck_test_in_prog} do
{
	if (getdammage truck >=0.1 ) exitwith { truck_test_in_prog = false;  truck_test_fail = true; deleteVehicle goal_singns; hint "Die Zeit ist abgelaufen, bitte bleib stehen, sonst kannst du dich verletzen."; truck setDamage 0.5; sleep 8; deletevehicle truck; player setPos current_position_p; 
		{
			_current = _x;
			deleteVehicle _current;	
		}foreach ts_markers;
		truck_test_fail = true;
		license_trucker_in_use =  false;
		publicVariable "license_trucker_in_use";
	};
	if (! (alive player) ) exitwith { truck_test_in_prog = false; truck_test_fail = true; deleteVehicle goal_singns; hint "Die Zeit ist abgelaufen, bitte bleib stehen, sonst kannst du dich verletzen."; truck setDamage 0.5; sleep 8; deletevehicle truck; player setPos current_position_p; 
		{
			_current = _x;
			deleteVehicle _current;
		}foreach ts_markers;
		truck_test_fail = true;
		license_trucker_in_use =  false;
		publicVariable "license_trucker_in_use";
	};
	if (_min >= 4 && _counter >= 20) exitwith { truck_test_in_prog = false; truck_test_fail = true; deleteVehicle goal_singns; hint "Die Zeit ist abgelaufen, bitte bleib stehen, sonst kannst du dich verletzen."; truck setDamage 0.5; sleep 8; deletevehicle truck; player setPos current_position_p; 
		{							
			_current = _x;
			deleteVehicle _current;
		}foreach ts_markers;						
		truck_test_fail = true;
		license_trucker_in_use =  false;
		publicVariable "license_trucker_in_use";		
	};

	_counter = _counter + 1;
	hint format ["Verstrichene Zeit: %2 min. %1 sec.", _counter, _min];
	
	if (_counter >= 59) then { _min = _min+1; _counter = 0};
	if (truck_test_goal_q) exitwith { truck_test_in_prog = false;  };

	sleep 1;
};


sleep 1; 
	{
		_current = _x;
		deleteVehicle _current;
	}foreach ts_markers;

	deleteVehicle goal_singns;

if (truck_test_fail) then { 
	hint "Es ist schade dass du es nicht geschafft hast, sieht so aus, als haettest du nicht zugehoert."; 
	truck_test_in_prog = false;  
	truck setDamage 0.5; 
	sleep 8; 
	deletevehicle truck; 
	player setPos current_position_p;  
	license_trucker_in_use =  false; 
	publicVariable "license_trucker_in_use"; 
} else {
	titleText ["Lizenz erhalten, Glueckwunsch! Bleibe nun stehen sonst verletzt du dich!", "PLAIN"];
	playsound "made_it";
	truck setDamage 0.5; sleep 8; deletevehicle truck; player setPos current_position_p;
	license_trucker_in_use =  false;
	publicVariable "license_trucker_in_use";
	license_civ_truck = true;
};