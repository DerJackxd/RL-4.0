waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["rlcommunity","RLRPG Community "];
player createDiarySubject ["serverrules","Regeln"];
player createDiarySubject ["safezones","Safe Zones"];
player createDiarySubject ["controls","RealLifeRPG Steuerung"];
player createDiarySubject ["thanks","Danksagung"];


/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
				TEXT HERE<br/><br/>
				"
		]
	];
*/


// Allgemeine Regeln
	player createDiaryRecord ["serverrules",
		[
			"Regeln", 
			"
			Alle Regeln findet Ihr auf der Homepage unter RealLifeRPG.de<br/><br/>
			"
		]
	];
		
// BPC Infos

	player createDiaryRecord ["rlcommunity",
		[
			"Teamspeak",
			"
			Unseren Teamspeak findet ihr unter:<br/><br/>
			Ts.RealLifeRPG.de<br/><br/>
			"
		]
	];
	
	player createDiaryRecord ["rlcommunity",
		[
			"Forum",
			"
			Unser Forum ist für Bewerbungen, Support, Bugreport und Changelogs gedacht. Ihr findet es unter:<br/><br/>
			RealLifeRPG.de<br/><br/>
			"
		]
	];
	
	player createDiaryRecord ["rlcommunity",
		[
			"Admins und Supporter",
			"
			Admins:<br/><br/>
			Toshi<br/>
			Memphis<br/>
			 <br/><br/><br/><br/>
				
			Support Leitung:<br/><br/>
			Nexo<br/>
			Dr.Kleber<br/>
			 <br/><br/><br/><br/>

			"
		]
	];
	
//Safezones

	player createDiaryRecord["safezones",
		[
			"Safe Zones",
				"
					Perth<br/><br/>
					Sydney<br/><br/>
					Cairns<br/><br/>
					Melbourn<br/><br/>
					Brisbane<br/><br/>
					Broken Hill<br/><br/>					
					Alice Springs<br/><br/>
					Toowoomba Hill<br/><br/>
					Alle Poizeistationen<br/><br/>
				"
		]
	];
	
// Controls Section


	player createDiaryRecord ["controls",
		[
			"hilfreiche Tipps",
				"
				Du gehst langsam?! Dann in Kombination probieren:<br/><br/>

				C: Kampfgeschwindigkeit<br/>
				Rechte Maustaste: Visier (ohne Waffe)<br/>
				W+S und S+W: Gehen/Rennen umschalten<br/>
				2x Shift: Gehen/Rennen umschalten<br/><br/>
				
				Du bewegst dich normal, nur in Slowmotion?<br/><br/>
				Q oder doppelt Q drücken.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["controls",
		[
			"Polizisten",
				"
				Manche dieser Befehle gelten nur, wenn man standartmäßig die ARMA 3 Steuerung aktiviert hat.<br/><br/>

				Shift+R: Festnehmen (Handschellen anlegen)<br/>
				Taste 1: Blaulicht einschalten<br/>
				Taste 2: Sirene einschalten<br/>
				"
		]
	];
	
	player createDiaryRecord ["controls",
		[
			"Haltungen",
				"
				Manche dieser Befehle gelten nur, wenn man standartmäßig die ARMA 3 Steuerung aktiviert hat.<br/><br/>

				C: Kampfgeschwindigkeit<br/>
				X: Ducken/Aufstehen<br/>
				Y: Hinlegen/Aufstehen<br/>
				Strg links+S: Haltung nach unten (mit Waffe)<br/>
				Strg links+W: Haltung nach oben (mit Waffe)<br/>
				Strg links+A: Haltung nach links (mit Waffe)<br/>
				Strg links+D: Haltung nach rechts (mit Waffe)<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["controls",
		[
			"Waffen",
				"
				Manche dieser Befehle gelten nur, wenn man standartmäßig die ARMA 3 Steuerung aktiviert hat.<br/><br/>
				
				Shift+H: Pistole/Waffe holstern<br/>
				Strg+H: Pistole/waffe ziehen<br/>
				Shift+G: Niederschlagen (nur mit Waffe möglich)<br/>
				2x Strg links: Waffe senken, heben<br/>
				F: Schussmodus wechseln<br/>
				R: Nachladen<br/>
				Strg links+rechte Maustaste: Visirwechsel/Visiermodus<br/>
				G: Werfen (Granaten etc.)<br/>
				Strg links+G: Wurfobjekte durchschalten<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["controls",
		[
			"Allgemeine Steuerung",
				"
				Manche dieser Befehle gelten nur, wenn man standartmäßig die ARMA 3 Steuerung aktiviert hat.<br/><br/>
				
				Y oder Z: Öffnet das Player-Menü<br/>
				U: Öffnet/Verschließt eure Fahrzeuge/Flugzeuge<br/>
				T: Öffnet den Kofferäum des Fahrzeugs<br/>
				V: Aussteigen<br/>
				I: Inventar<br/>
				N: Nachtsicht<br/>
				B: Fernglas oder Entfernungsmesser<br/><br/>
				"
		]
	];