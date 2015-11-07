waitUntil {!alive player ; !isNull (findDisplay 46)};


//UID_ADMIN
//76561198041612575 -- v
//76561198106666558 -- m
//76561198152501892 -- t
//76561198035811961 -- p
//76561198092243365 -- g


if ((getPlayerUID player) in ["76561198041612575","76561198106666558","76561198152501892","76561198035811961","76561198092243365"]) then {
	if(! isNil "life_admintool_action") then {
		player removeAction life_admintool_action;
	};
	sleep 2;
	player removeAction life_admintool_action;
	life_admintool_action = player addAction [("<t color=""#0074E8"">" + ("Tools Menu") +"</t>"),"admintools\Eexcute.sqf","",5,false,true,"",'life_admin_tool'];
};
