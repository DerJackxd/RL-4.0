/*
Author: Aideen
File: Auto_Pruefung.sqf
Description: Spawnt das Fahrschulauto und setzt den Spieler hinein
*/
_counter = 0;
pruefung_beginn = true;
Fahrt_Check = false;
ziel_erreicht = false;
_owner = getPlayerUID player;
Fahrschulauto = "cl3_golf_learner_white" createVehicle (getMarkerPos "auto_pruefung_spawn");
clearWeaponCargo Fahrschulauto;
clearMagazineCargo Fahrschulauto;
clearItemCargo Fahrschulauto;
clearBackPackCargo Fahrschulauto;
//Kontrolle = "Land_HBarrierWall6_F" createVehicle (getMarkerPos "car_license_spawn_wall");
Fahrschulauto setDir 0;
//Kontrolle setDir 90;
Fahrschulauto setVariable ["vehicle_info_owners", _owner, true];
sleep 0.1;
player moveinDriver Fahrschulauto;
["!!!Die Pruefung beginnt!!!"] spawn BIS_fnc_dynamicText;
sleep 2;
while{pruefung_beginn} do
{
    _counter = _counter +1;
    hintSilent format ["Verstrichene Zeit: %1 Sek. / 60 Sek.", _counter];

    if (!(alive player)) exitWith { "Du bist gestorben und somit durchgefallen!";
                                    Fahrschulauto setDamage 0.5;
                                    sleep 8;
                                    deleteVehicle Fahrschulauto;
                                    pruefung_beginn = false;
                                    life_car_license_test = false;
    };

    if (_counter >= 61) exitWith { hint "Die Zeit ist abgelaufen! Du bist durchgefallen!";
                                    Fahrschulauto setDamage 0.5;
                                    sleep 8;
                                    deleteVehicle Fahrschulauto;
                                    pruefung_beginn = false;
                                    player setPos position_player;
                                    life_car_license_test = false;
    };

    //if ( Fahrt_Check ) then { deletevehicle Kontrolle; };

    if(pruefung_beginn && ziel_erreicht) then { hint "Gratulation! Du hast bestanden! Dein Fuehrerschein wird dir ausgestellt!";
                                    Fahrschulauto setDamage 0.5;
                                    sleep 8;
                                    deleteVehicle Fahrschulauto;
                                    player setPos position_player;
                                    pruefung_beginn =  false;
                                    playSound "bestanden";
                                    titleText ["Lizenz ausgestellt", "PLAIN"];
                                    license_civ_driver = true;
    };

    sleep 1;
};
life_car_license_test = false;
[2] call SOCK_fnc_updatePartial;
[0] call SOCK_fnc_updatePartial;
