/*

	Author Memphis
	Nya eigentlich was es ist und macht... erklärt sich, oder nicht!?

*/
private ["_sWeap","_pWeap","_hWeapon","_pist"];
_sWeap = secondaryWeapon player;
_pWeap = primaryWeapon player;
_hWeapon = handgunWeapon player;

waffenschein_firsthit = false;

execvm "core\licenses\tests\troller_prevent.sqf";

		if ( _sWeap != "" || _pWeap != "" || _hWeapon != "" ) exitwith { hint "Du musst alle Waffen vorher ablegen!";};

		waffenschein_regal addWeaponCargoGlobal ["hgun_Rook40_F",1];
		waffenschein_regal addMagazineCargoGlobal ["16Rnd_9x21_Mag", 5];

		hintsilent "Beim verlassen des Schussbereichs (eingerahmt mit Holz) wird diese Preufung abgebrochen!";

		sleep 5;

		hintsilent "Nimm dir zu erst die Waffe aus der Kiste. Wir fangen mit kleinen an.";


		_pist = true;

		while {_pist} do {
			
			_hWeapon = handgunWeapon player;	
			
			if ( _hWeapon == "hgun_Rook40_F") exitwith { _pist = true; };
			
			sleep 1;
		};
		sleep 2;
		hint "Nun wird das Gelaende aufgebaut... einen Moment eben.";
		sleep 5;
		hint "Es werden Gleich einige Ziele erscheinen... Feuere auf sie, erst wenn ein Ziel gelegt ist, wird das naechste aktiviert!";
		sleep 2;
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_1");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		while { !waffenschein_firsthit } do {
			if (waffenschein_firsthit) exitwith {};
			
			sleep 1;
		};
		
		
		
		
		waffenschein_firsthit = false;
		hint "Sehr Gut! Die Ziele werden nun wahllos erscheinen... du hast nun auch eine Zeitbegrenzung. von 30 sek.";
		sleep 7;
		nul = execvm "core\licenses\tests\waffenschein_count.sqf";
		deletevehicle waffen_target1;
		
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_2");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		waituntil { sleep 1; waffenschein_firsthit };
		
		waffenschein_firsthit = false;		
		sleep 1;
		deletevehicle waffen_target1;		
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_3");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		waituntil { sleep 1; waffenschein_firsthit };
		
		waffenschein_firsthit = false;		
		sleep 1;
		deletevehicle waffen_target1;		
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_4");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		waituntil { sleep 1; waffenschein_firsthit };
		
		waffenschein_firsthit = false;		
		sleep 1;
		deletevehicle waffen_target1;		
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_5");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		waituntil { sleep 1; waffenschein_firsthit };
		
		waffenschein_firsthit = false;		
		sleep 1;
		deletevehicle waffen_target1;		
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_6");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		waituntil { sleep 1; waffenschein_firsthit };
		
		waffenschein_firsthit = false;		
		sleep 1;
		deletevehicle waffen_target1;		
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_7");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		waituntil { sleep 1; waffenschein_firsthit };
		
		waffenschein_firsthit = false;	
		sleep 1;
		deletevehicle waffen_target1;
		
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_8");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		waituntil { sleep 1; waffenschein_firsthit };
		
		waffenschein_firsthit = false;		
		sleep 1;
		deletevehicle waffen_target1;		
		waffen_target1 = "TargetP_Zom_F" createvehicle (getmarkerpos "waffen_target_6");
		waffen_target1 addEventHandler ["HitPart",  { waffenschein_firsthit = true;} ];
		waffen_target1 setdir 180;
		
		waituntil { sleep 1; waffenschein_firsthit };	
		waffenschein_best = true;
		sleep 2;
		deletevehicle waffen_target1;
		
		