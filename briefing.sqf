waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["rlcommunity","RLRPG Community "];
player createDiarySubject ["serverrules","Regeln"];
player createDiarySubject ["controls","RealLifeRPG Steuerung"];
player createDiarySubject ["info","Informationen"];
player createDiarySubject ["thanks","Credits"];


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

// Credits
	player createDiaryRecord ["thanks",
		[
			"Credits - DE",
			"
			Unser Dank gilt allen die auf verschiedensten wegen zu dieser Mission beigetragen haben.<br/>
			Leider wurden im Verlauf der Erstellung dieser Mision durch unsaubere Arbeit ehemaliger Community Mitglieder Credits aus der Mission entfernt wofür wir uns hiermit entschuldiegen wollen.<br/>
			Sollte sich jemand seines Credits beraubt fühlen bitte ich sich im Teamspeak zu melden damit wir den Autor entsprechend würdigen können.<br/>

			<br/><br/>
			Namentlich bedanken wollen wir uns bei:<br/>
			- Aussiland http://www.ausisland.com/ <br/>
			- Tonic, Itsyuka und vielen anderen http://www.altisliferpg.com/ <br/>
			- Jonzie http://www.armaholic.com/page.php?id=29735 <br/>
			- ACE Mod Team http://ace3mod.com/ <br/>
			- DAR Mod Team http://www.armaholic.com/page.php?id=25657 <br/>
			- AiA Team http://www.armaholic.com/page.php?id=26682 <br/>
			- USAF Team http://www.armaholic.com/page.php?id=25512 <br/>
			- CBA Team http://www.armaholic.com/page.php?id=18767 <br/>
			- xCam Team http://www.armaholic.com/page.php?id=28507 <br/>


			Viele weitere Autoren unter CBA > Credits - Addons
			"
		]
	];

	player createDiaryRecord ["thanks",
		[
			"Credits - EN",
			"
			We want to thank any mod/script authors that contributed to this mission in various ways.<br/>
			We are unfortunately not able to credit all authors, because of a former member of our community that removed the credit on most files.<br/>
			If we used your work and you want to be credited, feel free to visit our teamspeak and we will add you to the list below.<br/>

			<br/><br/>
			Many thanks to:<br/>
			- Aussiland http://www.ausisland.com/ <br/>
			- Tonic,Itsyuka and many more http://www.altisliferpg.com/ <br/>
			- Jonzie http://www.armaholic.com/page.php?id=29735 <br/>
			- ACE Mod Team http://ace3mod.com/ <br/>
			- DAR Mod Team http://www.armaholic.com/page.php?id=25657 <br/>
			- AiA Team http://www.armaholic.com/page.php?id=26682 <br/>
			- USAF Team http://www.armaholic.com/page.php?id=25512 <br/>
			- CBA Team http://www.armaholic.com/page.php?id=18767 <br/>
			- xCam Team http://www.armaholic.com/page.php?id=28507 <br/>

			All Mentions under CBA > Credits - Addons
			"
		]
	];

	// Allgemeine Infos
		player createDiaryRecord ["info",
			[
				"Allgemein",
				"

				Alle Fehler unter https://github.com/vabene1111/RL-4.0/issues melden!!

				Die wichtigsten Dinge auf einen Blick<br/><br/>

				- Ändert euren ACE Key unter Konfigurieren > Steuerung > Configure Addons da er mit der Windows Taste in Konflikt steht.<br/>
				- ATM's öffnet man mit Windows/Action 10 Taste <br/>


				"
			]
		];
		player createDiaryRecord ["info",
			[
				"Level",
				"
				Alle Level auf einen Blick<br/><br/>
				Level 1<br/><br/>

				Fahrzeuge : Quad<br/>
				Jobs : Birnen,- Kirchen,- Bananen,- farmen<br/>
				Kleidung : Neue Rucksäcke, Neue Zivilbkleidung<br/>
				Skillpunkte: 1<br/><br/>

				Level 2<br/><br/>

				Fahrzeuge : Limousine, Rettungsboot<br/>
				Jobs : Kupfer,Eisen und Holz<br/>
				Kleidung : Neue Rucksäcke, Neue Zivilbekleidung<br/>
				Skillpunkte: 1<br/>

				Level 3<br/><br/>

				Fahrzeuge : Geländewagen<br/>
				Jobs : Sand, Öl, Stein, Jagen,<br/>
				Gegenstände: Kreditkarte<br/>
				Legale Waffen: Rook-40, ACP-C2, 4-five, PDW2000<br/>
				Skillpunkte:1<br/><br/>

				Level 4<br/><br/>

				Fahrzeuge : SUV, Truck Transporter, Truck Box, Tanktruck<br/>
				Jobs : Silber, Gold, Bier herstellen<br/>
				Feature: Fahrzeug Versichern, Neue Crafting möglichkeiten<br/>
				Kleidung : Neue Rucksäcke, Neue Zivilkleidung<br/>
				Skillpunkte:1<br/><br/>

				Level 5<br/><br/>

				Fahrzeuge : Zamak Transporter, Zamak abgedeckt, Tempest Tanker (klein), MH-9 Hummingbird, M-900<br/>
				Jobs : Diamanten, Müll, Salz, Whisky<br/>
				Kleidung : Neue Rebellenkleidung<br/>
				Skillpunkte:2<br/><br/>

				Level 6<br/><br/>

				Fahrzeuge : HEMTT Transport, HEMTT Tanker, Motorboot, Orca<br/>
				Jobs : Schwefel, Marijuana, Glühwürmchen<br/>
				Kleidung :Neue Rebellenkleidung<br/>
				Waffen: TRG-20, SDAR, Vermin, Zubr.45<br/>
				Feature: Rebellenausbildung<br/>
				Skillpunkte: 2<br/><br/>

				Level 7<br/><br/>

				Fahrzeuge : CH-49 Mohawk, Tempest Transport, Tempest Tanker, Tempest abgedeckt<br/>
				Jobs : LSD, Heroin<br/>
				Kleidung : Neue Rebellenkleidung<br/>
				Waffen: MX SW, Katiba, Sprengladung<br/>
				Skillpunkte: 2<br/><br/>

				Level 8<br/><br/>

				Fahrzeuge :HEMTT Box, Ifrit, Taru<br/>
				Jobs : Uran, Meth<br/>
				Kleidung : Neue Rebellenkleidung<br/>
				Waffen: MK18, MK14, MK-1 EMR, Alamut<br/>
				Feature: Neue Crafting Möglichkeiten<br/>
				Skillpunkte: 2<br/><br/>

				Level 9<br/><br/>

				Fahrzeuge : Tempest Gerät, Orca<br/>
				Jobs : Kokain, Antiquitäten, Moonshine<br/>
				Feature: Bombenweste, Unterwassersprengladung<br/>
				Skillpunkte:2<br/><br/>

				Level 10<br/><br/>
				Talente: Sonderfahrzeuge, Häusersloterweiterung<br/>
				Fahrzeuge: Geländewagen<br/>
				Feature: Neue Crafting Möglichkeit, 1,5 Mio. Auszahlung<br/>
				Skillpunkte: 2<br/><br/>

				Level 11 - 15<br/><br/>

				Skillpunkte: 2<br/>

				"
			]
		];


// Allgemeine Regeln
	player createDiaryRecord ["serverrules",
		[
			"Regeln",
			"
			Alle Regeln findet Ihr auf der Homepage unter RealLifeRPG.de<br/><br/>
			"
		]
	];

		player createDiaryRecord["serverrules",
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


//Infos

	player createDiaryRecord ["rlcommunity",
		[
			"Teamspeak",
			"
			Unseren Teamspeak findet ihr unter:<br/><br/>
			ts.RealLifeRPG.de<br/><br/>
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
			vabene1111<br/>
			 <br/><br/><br/><br/>

			Support Leitung:<br/><br/>
			Nexo<br/>
			Dr.Kleber<br/>
			 <br/><br/><br/><br/>

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
