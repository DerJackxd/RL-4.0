_allgemein_abfrage = _this select 0;
current_position_p = getpos Player;

if ( playerSide != civilian) exitwith { hint "Du kannst dieses Amt nur als Zivilist benutzen."; closedialog 0; };

switch (_allgemein_abfrage) do {
    case "Car": {
		if (life_geld < 500 ) exitwith { hint "Du hast nicht genug Geld, du brauchst 500$.";};
		if (license_civ_driver) exitwith { hint"Wieso solltest du die Schule besuchen, du hast diese Lizenz bereits.";};
		if ( license_car_in_use ) exitwith { hint "Es macht gerade ein anderer diese Lizenz, bitte warte eine Weile."; closedialog 0;	}; 
		license_car_in_use =  true;
		publicVariable "license_car_in_use";									

		_uid = getplayeruid player;

		[["car", player, _uid],"DB_fnc_fahrschulen",false,false] spawn life_fnc_MP;

		player setpos (getmarkerpos "license_car_positioning");
		closedialog 0;						
		life_geld = life_geld - 500;
		hint "Auto-Schule: Mach dich bereit, du wirst gleich direkt ins Fahrzeug gesetzt und musst sofort loslegen.";
		sleep 5;
		execvm "core\licenses\tests\auto_schein.sqf";								
	};
	
    case "Trucker": { 
		if (life_geld < 15000 ) exitwith { hint "Du hast nicht genug Geld, du brauchst 15000$.";};							
		if (license_civ_truck) exitwith { hint"Wieso solltest du die Schule besuchen, du hast diese Lizenz bereits.";};
		if ( license_trucker_in_use ) exitwith { hint "Es macht gerade ein anderer diese Lizenz, bitte warte eine Weile."; closedialog 0;	}; 
		license_trucker_in_use =  true;
		publicVariable "license_trucker_in_use";


		_uid = getplayeruid player;
		[["truck", player, _uid],"DB_fnc_fahrschulen",false,false] spawn life_fnc_MP;

		player setpos (getmarkerpos "license_truck_positioning");
		closedialog 0;						
		life_geld = life_geld - 15000;
		execvm "core\licenses\tests\trucker_schein.sqf";
	};
	
	case "Boating": { 
							if (life_geld < 1000 ) exitwith { hint "Du hast nicht genug Geld, du brauchst 1000$.";};
								if (license_civ_boat) exitwith { hint"Wieso solltest du die Schule besuchen, du hast diese Lizenz bereits.";};
									life_geld = life_geld - 1000;
									license_civ_boat =true;
									hint "Du hast die Lizenz erhalten";
						};
	 case "Flying": { 							
							if (life_geld < 25000 ) exitwith { hint "Du hast nicht genug Geld, du brauchst 25000$.";};							
							if (license_civ_air) exitwith { hint"Wieso solltest du die Schule besuchen, du hast diese Lizenz bereits.";};
							if ( license_heli_in_use ) exitwith { hint "Es macht gerade ein anderer diese Lizenz, bitte warte eine Weile."; closedialog 0;	}; 
									license_heli_in_use =  true;
									publicVariable "license_heli_in_use";
									
									
									_uid = getplayeruid player;
									[["heli", player, _uid],"DB_fnc_fahrschulen",false,false] spawn life_fnc_MP;
									
									player setpos (getmarkerpos "license_heli_positioning");
									closedialog 0;						
									life_geld = life_geld - 25000;
									execvm "core\licenses\tests\heli_schein.sqf";
						};
	 case "Weapons": { 
							
							if (life_geld < 10000 ) exitwith { hint "Du hast nicht genug Geld, du brauchst 10000$.";};
							if (license_civ_gun) exitwith { hint"Wieso solltest du die diese Lizenz erwerben, du hast diese Lizenz bereits.";};
							if ( license_waffen_in_use ) exitwith { hint "Es macht gerade ein anderer diese Lizenz, bitte warte eine Weile."; closedialog 0;	}; 
							_sWeap = secondaryWeapon player;
							_pWeap = primaryWeapon player;
							_hWeapon = handgunWeapon player;
							if ( _sWeap != "" || _pWeap != "" || _hWeapon != "" ) exitwith { hint "Du musst vorher alle Waffen ablegen! Es kann passieren dass du sie sonst verlierst.";};
							
							license_waffen_in_use =  true;
							publicVariable "license_waffen_in_use";
									
							life_geld = life_geld -10000;
							
							_uid = getplayeruid player;
							[["waffen", player, _uid],"DB_fnc_fahrschulen",false,false] spawn life_fnc_MP;
							
							closedialog 0;									
							player setpos (getmarkerpos "waffenschein_lizenzs");
							execvm "core\licenses\tests\waffenschein.sqf";
							
							
							
						};
	 case "Housing": { 
							if (life_geld < 75000 ) exitwith { hint "Du hast nicht genug Geld, du brauchst 75000$.";};
							if (license_civ_home) exitwith { hint"Du hast diese Lizenz bereits.";};
							license_civ_home = true;
							life_geld = life_geld -75000;
							hint "Du hast die Lizenz erhalten";
			
						};	
	 case "hunting": { 
							if (life_geld < 30000 ) exitwith { hint "Du hast nicht genug Geld, du brauchst 30000$.";};
							if (license_civ_hunting) exitwith { hint"Du hast diese Lizenz bereits.";};
							license_civ_hunting = true;
							life_geld = life_geld -30000;
							hint "Du hast die Lizenz erhalten";
			
						};	
	 case "Placeholder": { 
				hint "Hier entsteht sicher noch etwas...!" 
						};								
    default { hint "default" };
};