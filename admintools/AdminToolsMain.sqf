_pathtotools = "admintools\tools\";
_pathtovehicles = "admintools\vehicles\";
_EXECscript1 = 'player execVM "'+_pathtotools+'%1"';
_EXECscript2 = 'player execVM "'+_pathtovehicles+'%1"';

//UID_ADMIN
//76561198041612575 -- v
//76561198106666558 -- m
//76561198152501892 -- t
//76561198035811961 -- p
//76561198092243365 -- g

if ((getPlayerUID player) in ["76561198041612575","76561198106666558","76561198152501892","76561198035811961","76561198092243365"]) then { //all admintool users
	if ((getPlayerUID player) in ["######","######"]) then { //mods
        adminmenu =
        [
			["",true],
				["Tools Menu", [2], "#USER:ModToolsMenu", -5, [["expression", ""]], "1", "1"],
				["", [-1], "", -5, [["expression", ""]], "1", "0"],
			["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
        ];};
	if ((getPlayerUID player) in ["###","####","###"]) then { //admins
        adminmenu =
        [
			["",true],
				["Tools Menu", [2], "#USER:AdminToolsMenu", -5, [["expression", ""]], "1", "1"],
				["Money Menu", [3], "#USER:MoneyMenu", -5, [["expression", ""]], "1", "1"],
				["", [-1], "", -5, [["expression", ""]], "1", "0"],
			["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
        ];};
	if ((getPlayerUID player) in ["76561198041612575","76561198106666558","76561198152501892","76561198035811961","76561198092243365"]) then { // super admins
			adminmenu =
			[
				["",true],
					["Tools Menu", [2], "#USER:ToolsMenu", -5, [["expression", ""]], "1", "1"],
					["Money Menu", [3], "#USER:MoneyMenu", -5, [["expression", ""]], "1", "1"],
					["Vehicle Menu", [4], "#USER:VehicleMenu", -5, [["expression", ""]], "1", "1"],
					["Anti Hack", [5], "#USER:AntiHackMenu", -5, [["expression", ""]], "1", "1"],
					["", [-1], "", -5, [["expression", ""]], "1", "0"],
				["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
			];
		};
};
//customise to fit
VehicleMenu =
[
	["",true],
		["Spawn Hunter", [2],  "", -5, [["expression", "[""B_MRAP_01_F""] execVM ""admintools\tools\spawnVeh.sqf"""]], "1", "1"],
		["Spawn Limo", [3],  "", -5, [["expression", "[""C_Hatchback_01_sport_F""] execVM ""admintools\tools\spawnVeh.sqf"""]], "1", "1"],
		["Spawn Tempest", [4],  "", -5, [["expression", "[""O_Truck_03_medical_F""] execVM ""admintools\tools\spawnVeh.sqf"""]], "1", "1"],
		["Spawn Bird", [5],  "", -5, [["expression", "[""B_Heli_Light_01_F""] execVM ""admintools\tools\spawnVeh.sqf"""]], "1", "1"],
		["Impound", [6],  "", -5, [["expression", format[_EXECscript1,"impound.sqf"]]], "1", "1"],
		["Lockpick", [7], "", -5, [["expression", format[_EXECscript1,"lockpick.sqf"]]], "1", "1"],
		["Repair Vehicle", [8], "", -5, [["expression", format[_EXECscript1,"repairflip.sqf"]]], "1", "1"],

		["", [-1], "", -5, [["expression", ""]], "1", "0"],
			["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
];
MoneyMenu =
[
	["",true],
		["1.000.000", [2],  "", -5, [["expression", format[_EXECscript1,"Money.sqf"]]], "1", "1"],
		["To ATM", [3],  "", -5, [["expression", format[_EXECscript1,"MoneyATM.sqf"]]], "1", "1"],
		["Clear cash", [4],  "", -5, [["expression", format[_EXECscript1,"MoneyClear.sqf"]]], "1", "1"],

		["", [-1], "", -5, [["expression", ""]], "1", "0"],
			["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
];
AntiHackMenu =
[
	["",true],
		["Restrain", [2],  "", -5, [["expression","[cursorTarget] call life_fnc_restrainAction"]], "1", "1"],
		["Unrestrain", [3],  "", -5, [["expression","[cursorTarget] call life_fnc_unrestrain"]], "1", "1"],
		["Escort", [4],  "", -5, [["expression","[cursorTarget] call life_fnc_escortAction"]], "1", "1"],
		//["Kick cT", [5],  "", -5, [["expression","_name = (name cursorTarget) ;serverCommand (""#kick"" + _name)"]], "1", "1"],
		//["Toggle Sim", [6],  "", -5, [["expression", "[[cursorTarget,0],""wl_fnc_antiHack"",false] spawn wl_fnc_MP;"]], "1", "1"],
		["", [-1], "", -5, [["expression", ""]], "1", "0"],
			["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
];

ToolsMenu =
[
	["",true],
		["God Mode", [2],  "", -5, [["expression", format[_EXECscript1,"Godmode.sqf"]]], "1", "1"],
		["Car God", [3],  "", -5, [["expression", format[_EXECscript1,"cargod.sqf"]]], "1", "1"],
		["Spectate Player", [4],  "", -5, [["expression", format[_EXECscript1,"spectate.sqf"]]], "1", "1"],
		["ESP", [5], "", -5, [["expression", format[_EXECscript1, "ESP.sqf"]]], "1", "1"],
		["Teleport", [6], "", -5, [["expression", format[_EXECscript1, "Tele.sqf"]]], "1", "1"],
		["Teleport To Me", [7], "", -5, [["expression", format[_EXECscript1, "TPtoME.sqf"]]], "1", "1"],
		["Teleport Me To", [8], "", -5, [["expression", format[_EXECscript1, "MEtoTP.sqf"]]], "1", "1"],
		["Heal/Feed", [9], "", -5, [["expression", format[_EXECscript1,"heal.sqf"]]], "1", "1"],
		["Heal Other", [10], "", -5, [["expression", format[_EXECscript1,"healother.sqf"]]], "1", "1"],
		["Refill Ammo", [11], "", -5, [["expression", format[_EXECscript1,"refillAmmo.sqf"]]], "1", "1"],
		["Gear", [11], "", -5, [["expression", format[_EXECscript1,"gear.sqf"]]], "1", "1"],
		["", [-1], "", -5, [["expression", ""]], "1", "0"],
			["Exit", [13], "", -3, [["expression", ""]], "1", "1"]
];
showCommandingMenu "#USER:adminmenu";
