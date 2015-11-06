/*
	Name: refillAmmo.sqf
	Author : vabene1111
	
	Description:
	adds 3 mags for each weapon (one rocket for launcher)
*/

hintSilent "Ammo refilled";

_mag = getArray (configFile / "CfgWeapons" / (primaryWeapon player) / "magazines");
player addMagazine (_mag select 0);
player addMagazine (_mag select 0);
player addMagazine (_mag select 0);

_mag = getArray (configFile / "CfgWeapons" / (handgunWeapon player) / "magazines");
player addMagazine (_mag select 0);
player addMagazine (_mag select 0);
player addMagazine (_mag select 0);

_mag = getArray (configFile / "CfgWeapons" / (secondaryWeapon player) / "magazines");
player addMagazine (_mag select 0);

reload player;