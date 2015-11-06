
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player forceAddUniform "U_BG_Guerilla2_1";
for "_i" from 1 to 3 do {player addItemToUniform "6Rnd_45ACP_Cylinder";};
player addVest "V_PlateCarrierGL_blk";
for "_i" from 1 to 2 do {player addItemToVest "10Rnd_93x64_DMR_05_Mag";};
player addBackpack "B_Kitbag_rgr";
player addHeadgear "H_Cap_headphones";
player addGoggles "G_Aviator";

player addWeapon "srifle_DMR_05_blk_F";
player addPrimaryWeaponItem "acc_flashlight";
player addPrimaryWeaponItem "optic_MRCO";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "hgun_Pistol_heavy_02_F";
player addHandgunItem "optic_Yorris";
player addWeapon "Laserdesignator_02";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";
player linkItem "NVGoggles_INDEP";
