
//////////////////Hauptscript spawn fahrzeug / Wand / Timer
_counter = 0;
license_prog = true;
license_granted = false;
wall_accepted = false;

_owners = getPlayerUID player;

life_carlicense_vehcile = "C_Offroad_01_F" createVehicle (getMarkerPos "car_license_spawn");
life_carlicense_vehcile setVariable["vehicle_info_owners",_owners,true];
//control = "Land_HBarrierWall6_F" createVehicle (getMarkerPos "car_license_spawn_wall");
//control setdir 90;
life_carlicense_vehcile setdir 90;

sleep 0.1;

player moveindriver life_carlicense_vehcile;
hint "Auf gehts!!!";
sleep 2;

execvm "core\licenses\tests\troll_auto.sqf";

while {license_prog} do
{
			_counter = _counter + 1;
			hintSilent  format ["Verstrichene Zeit: %1 sek. / 60sek.", _counter];
			if (_counter >= 60) exitwith { license_prog = false; hint "Die Zeit ist abgelaufen! Leider hast du die Pruefung nicht bestanden."; life_carlicense_vehcile setDamage 0.5; sleep 8; deletevehicle life_carlicense_vehcile; /*deletevehicle control;*/ player setPos current_position_p;
									license_car_in_use =  false;
									publicVariable "license_car_in_use";
			};
		//if ( wall_accepted ) then { deletevehicle control; };
		if ( license_granted && license_prog ) then { license_prog = false; hint "Du hast es geschafft! Dir wird die Lizenz soeben ausgestellt."; life_carlicense_vehcile setDamage 0.1; playsound "made_it"; sleep 8; deletevehicle life_carlicense_vehcile; /*deletevehicle control;*/ player setPos current_position_p;  };

		sleep 1;
};

license_car_in_use =  false;
publicVariable "license_car_in_use";

if ( license_granted) then {
titleText ["Lizenz erhalten, Glueckwunsch!", "PLAIN"];
license_civ_driver = true;
};
