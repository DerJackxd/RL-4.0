/*
	File: fn_baseVehicleShop.sqf
	Autor: Unknown 
	Edit: Memphis
	
	Description:
	 
	The Author of this File was removed. Please inform us if you are the Author so we can add you credits
*/
private["_type"];
_type = [_this,1,"",[""]] call BIS_fnc_param;

if (_type == "Car") then {
	[false,false,false,["base_reb",civilian,life_pInact_curTarget,"reb","Rebel Motorpool - Western Side"]] spawn life_fnc_vehicleShopMenu;
}else{
	[false,false,false,["base_air",civilian,life_pInact_curTarget,"civ","APD - Kavala District"]] spawn life_fnc_vehicleShopMenu;
};
