class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Feurwaffen";
        side = "civ";
        license = "gun";
        level = 3;
        msg = "Sie haben noch nicht Skilllevel 3 erreicht!";
        items[] = {
           { "hgun_Rook40_F", "", 6500, {"life_level", 3 } },
		   { "hgun_Pistol_heavy_02_Yorris_F", "", 20000, { "life_level", 6 } },
		   { "hgun_ACPC2_F", "", 15000, {"life_level", 3 } },
		   { "hgun_Pistol_heavy_01_MRD_F", "", 18000, {"life_level", 3 } },
		   { "hgun_PDW2000_F", "", 22000, {"life_level", 3 } },
		   { "11Rnd_45ACP_Mag", "", 300, {"life_level", 3 } },
		   { "16Rnd_9x21_Mag", "", 225, {"life_level", 3 } },
		   { "9Rnd_45ACP_Mag", "", 245,{"life_level", 3 } },
		   { "6Rnd_45ACP_Cylinder", "", 350, { "life_level", 6 } },
		   { "30Rnd_9x21_Mag", "", 275, {"life_level", 3 } },
		   { "optic_ACO_grn_smg", "", 2500, {"life_level", 3 } },
		   { "V_Rangemaster_belt", "", 4900, ""}
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = 6;
        msg = "Sie haben noch nicht Skilllevel 6 erreicht!";
        items[] = {
          { "Rangefinder", "", 7500, "" },
    { "arifle_TRG20_F", "", 75000, { "life_level", 6 } },
    { "arifle_Katiba_C_F", "", 150000, {"life_level", 7 } },
    { "arifle_Katiba_F", "", 150000, {"life_level", 7 } },
    { "arifle_SDAR_F", "", 55000, { "life_level", 6 } },
    { "arifle_MX_SW_F", "", 275000, {"life_level", 7 } },
    { "arifle_MXC_F", "", 175000, {"life_level", 7 } },
    { "arifle_MXM_F", "", 315000, {"life_level", 7 } },
    { "arifle_Mk20_F", "", 225000, {"life_level", 7 } },
    { "srifle_EBR_F", "",450000, {"life_level", 8 } },
    { "srifle_DMR_06_olive_F", "",450000, {"life_level", 8 } },
    { "srifle_DMR_01_F", "",450000, {"life_level", 8 } },
    { "srifle_DMR_03_multicam_F", "",450000, {"life_level", 8 } },
  //	{ "srifle_LRR_F", "",550000, {"life_level", 8 } },
  //	{ "R3F_PGM_Hecate_II_DES", "",550000, {"life_level", 8 } },
  //	{ "R3F_Minimi", "",650000, {"life_level", 8 } },
    { "SMG_01_F", "", 55000, { "life_level", 6 } },
    { "SMG_02_F", "", 75000, { "life_level", 6 } },
    {""},
    { "hgun_Rook40_F", "", 6500, {"life_level", 3 } },
    { "hgun_Pistol_heavy_02_Yorris_F", "", 20000, { "life_level", 6 } },
    { "hgun_ACPC2_F", "", 15000, {"life_level", 3 } },
    { "hgun_Pistol_heavy_01_MRD_F", "", 18000, {"life_level", 3 } },
    { "hgun_PDW2000_F", "", 22000, {"life_level", 3 } },
    {""},
    { "bipod_03_F_oli", "", 40000, "" },
    { "bipod_03_F_blk", "", 40000, "" },
    { "bipod_01_F_snd", "", 40000, "" },
    {""},
  //	{ "7Rnd_408_Mag", "", 80000, "" },
    { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 2250, { "life_level", 6 } },
    { "30Rnd_9x21_Mag", "", 2250, { "life_level", 6 } },
    { "30Rnd_45ACP_Mag_SMG_01", "", 2250, { "life_level", 6 } },
    { "100Rnd_65x39_caseless_mag", "", 65000, { "life_level", 7 } },
    { "100Rnd_65x39_caseless_mag_Tracer", "", 65000, { "life_level", 7 } },
    { "20Rnd_556x45_UW_mag", "", 2125, { "life_level", 6 } },
    { "30Rnd_556x45_Stanag", "", 2300, { "life_level", 6 } },
    { "10Rnd_762x51_Mag", "",2500, { "life_level", 8 } },
  //	{ "R3F_7Rnd_127x99_PGM", "",2500, { "life_level", 8 } },
  //	{ "R3F_200Rnd_556x45_MINIMI", "",2500, { "life_level", 8 } },
    { "20Rnd_762x51_Mag", "", 2500, { "life_level", 8 } },
    { "30Rnd_45ACP_Mag_SMG_01", "", 2250, { "life_level", 6 } },
    { "30Rnd_65x39_caseless_green", "", 2275, { "life_level", 7 } },
    { "30Rnd_65x39_caseless_mag", "", 2275, { "life_level", 7 } },
    { "11Rnd_45ACP_Mag", "", 2100, {"life_level", 3 } },
      { "16Rnd_9x21_Mag", "", 225, {"life_level", 3 } },
      { "9Rnd_45ACP_Mag", "", 245,{"life_level", 3 } },
      { "6Rnd_45ACP_Cylinder", "", 2150, { "life_level", 6 } },
      { "30Rnd_9x21_Mag", "", 275, {"life_level", 3 } },
    {""},
    { "optic_ACO_grn", "", 3500, "" },
    { "optic_Holosight", "", 3600, "" },
    { "acc_flashlight", "", 1500, "" },
    { "acc_pointer_IR", "", 1500, "" },
    { "optic_Hamr", "", 7500, "" },
    { "optic_MRCO", "", 5500, "" },
    { "optic_SOS", "", 8500, "" },
    { "optic_DMS", "", 8500, "" },
    { "optic_NVS", "", 10000, "" },
    { "optic_LRPS", "", 10000, "" },
    { "optic_ACO_grn_smg", "", 2500, "" }
        };
    };

    class gang {
        name = "Waffenbox";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "Rangefinder", "", 1000, "" },
			{ "arifle_TRG20_F", "", 150000, { "life_level", 6 } },
			{ "arifle_Katiba_C_F", "", 150000, {"life_level", 7 } },
			{ "arifle_SDAR_F", "", 10000, { "life_level", 6 } },
			{ "arifle_MX_SW_F", "", 200000, {"life_level", 7 } },
			{ "srifle_EBR_F", "",500000, {"life_level", 8 } },
			{ "srifle_DMR_06_olive_F", "",500000, {"life_level", 8 } },
			{ "srifle_DMR_03_multicam_F", "",500000, {"life_level", 8 } },
			{ "SMG_01_F", "", 150000, { "life_level", 6 } },
			{ "launch_RPG32_F", "", 900000, {"life_level", 8 } },
			{""},
			{ "hgun_Rook40_F", "", 5500, {"life_level", 3 } },
			{ "hgun_Pistol_heavy_02_Yorris_F", "", 10000, { "life_level", 6 } },
			{ "hgun_ACPC2_F", "", 10000, {"life_level", 3 } },
			{ "hgun_Pistol_heavy_01_MRD_F", "", 10000, {"life_level", 3 } },
			{ "hgun_PDW2000_F", "", 12000, {"life_level", 3 } },
			{""},
			{ "bipod_03_F_oli", "", 30000, "" },
			{ "bipod_03_F_blk", "", 30000, "" },
			{ "bipod_01_F_snd", "", 30000, "" },
			{""},
			{ "7Rnd_408_Mag", "", 40000, "" },
			{ "30Rnd_45ACP_Mag_SMG_01_tracer_green", "", 250, { "life_level", 6 } },
			{ "100Rnd_65x39_caseless_mag", "", 34000, { "life_level", 7 } },
			{ "20Rnd_556x45_UW_mag", "", 125, { "life_level", 6 } },
			{ "30Rnd_556x45_Stanag", "", 300, { "life_level", 6 } },
			{ "10Rnd_762x51_Mag", "",500, { "life_level", 8 } },
			{ "20Rnd_762x51_Mag", "", 500, { "life_level", 8 } },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 250, { "life_level", 6 } },
			{ "30Rnd_65x39_caseless_green", "", 275, { "life_level", 7 } },
			{ "11Rnd_45ACP_Mag", "", 100, {"life_level", 3 } },
		    { "16Rnd_9x21_Mag", "", 25, {"life_level", 3 } },
		    { "9Rnd_45ACP_Mag", "", 45,{"life_level", 3 } },
		    { "6Rnd_45ACP_Cylinder", "", 150, { "life_level", 6 } },
		    { "30Rnd_9x21_Mag", "", 75, {"life_level", 3 } },
			{ "RPG32_F", "", 90000, {"life_level", 8 } },
			{""},
			{ "optic_ACO_grn", "", 2500, "" },
			{ "optic_Holosight", "", 2600, "" },
			{ "acc_flashlight", "", 1500, "" },
			{ "acc_pointer_IR", "", 1500, "" },
			{ "optic_Hamr", "", 5500, "" },
			{ "optic_MRCO", "", 3500, "" },
			{ "optic_SOS", "", 4500, "" },
			{ "optic_DMS", "", 4500, "" },
			{ "optic_NVS", "", 6000, "" },
			{ "optic_ACO_grn_smg", "", 1500, "" },
			{ "DemoCharge_Remote_Mag", "", 500000, {"life_level", 7 } }
        };
    };

	class medical_cop {
		name = "Medizinische Ausruestung";
		side = "cop";
		license = "";
		level = -1;
		msg = "";
		items[] = {
			{ "ACE_epinephrine", "", 150, "" },
			{ "ACE_fieldDressing", "", 150, "" },
			{ "ACE_morphine", "", 150, "" },
			{ "FirstAidKit", "", 150, "" }
		};
	};

    //Basic Shops
    class genstore {
        name = "Australia General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "Binocular", "", 150, "" },
			{ "tf_fadak","Handy", 600, "" },
			{ "ItemGPS", "", 100, "" },
			{ "ToolKit", "", 10000, "" },
      { "ACE_Flashlight_MX991", "", 1500, "" },
      { "ACE_EarPlugs", "", 150, "" },
			{ "FirstAidKit", "", 1850, "" },
			{ "ACE_epinephrine", "", 4850, "" },
			{ "ACE_fieldDressing", "", 850, "" },
			{ "ACE_morphine", "", 4850, "" },
			{ "ItemCompass", "", 50, "" },
			{ "ItemMap", "", 50, "" },
			{ "NVGoggles_OPFOR", "", 2000, "" },
			{ "Chemlight_red", "", 300, "" },
			{ "Chemlight_yellow", "", 300, "" },
			{ "Chemlight_green", "", 300, "" },
			{ "Chemlight_blue", "", 300, "" },
			{ "cl_picket_rtp", "Schild", 1800, "" },
			{ "cl3_camcorder", "Kamera", 2500, "" }
        };
    };

    //Cop Shops
    class cop_basic {
        name = "Australien Polizeihaendler";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
          { "tf_anprc148jem","Funke", 0, { "life_coplevel", 1 } },
			{ "SMG_01_ACO_F", "Taser Rifle", 2000, { "life_coplevel", 1 } },
			{ "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 125, { "life_coplevel", 1 } },
  			{ "hgun_P07_snds_F", "Taser/Radar Pistole", 200, { "life_coplevel", 1 } },
			{ "16Rnd_9x21_Mag", "Taser Pistolen Magazin", 50, { "life_coplevel", 1 } },
			 { "Binocular", "", 150, { "life_coplevel", 1 } },
			{ "B_UavTerminal", "",5000, { "life_coplevel", 1 } },
  			{ "ToolKit", "", 250, { "life_coplevel", 1 } },
			{ "ACE_Flashlight_MX991", "", 500, { "life_coplevel", 1 } },
  			{ "Rangefinder", "", 500, { "life_coplevel", 2 } },
			{ "Laserdesignator", "", 7500, { "life_coplevel", 4} },
  			{ "NVGoggles_OPFOR","" , 500, { "life_coplevel", 1 } },
  			{ "ItemCompass", "", 500, { "life_coplevel", 1 } },
			{ "ItemWatch", "", 500, { "life_coplevel", 1 } },
			{ "ACE_Tripod", "", 500, { "life_coplevel", 1 } },
			{ "ACE_EarPlugs", "", 150, { "life_coplevel", 1 } },
			{ "HandGrenade_Stone", "Flashbang", 1500, { "life_coplevel", 4} },
  			{""},
  			{ "acc_flashlight", "", 1000, { "life_coplevel", 1 } },
  			{ "acc_pointer_IR", "", 1500, { "life_coplevel", 1 } },
  			{ "optic_Holosight", "", 2500, { "life_coplevel", 1 } },
  			{ "optic_Arco", "", 2500, { "life_coplevel", 1 } },
  			{ "optic_MRCO", "", 2500, { "life_coplevel", 1 } },
  			{ "optic_Hamr", "", 2500, { "life_coplevel", 1 } },
			{ "R3F_J8", "", 2500, { "life_coplevel", 3} },
			{ "R3F_NF", "", 2500, { "life_coplevel", 3} },
			{ "R3F_NF42", "", 2500, { "life_coplevel", 3} },
			{ "optic_SOS", "", 3000, { "life_coplevel", 3 } },
			{ "optic_LRPS", "", 10000, { "life_coplevel", 4 } },
			{ "optic_NVS", "",4000, { "life_coplevel", 4 } },
			{ "R3F_POINTEUR_SURB", "Laserpointer",500, { "life_coplevel", 2 } },
			{ "R3F_LAMPE_SURB", "Lampe",500, { "life_coplevel", 2 } },
			{ "muzzle_snds_L", "9mm Schalldämpfer", 1000, { "life_coplevel", 1 } },
			{ "muzzle_snds_M", "5.56mm Schalldämpfer", 1000, { "life_coplevel", 4 } },
			{ "muzzle_snds_H", "MX-Serie Schalldämpfer",950, { "life_coplevel", 4 } },
			{ "R3F_SILENCIEUX_HK417", "HK417M Schalldämpfer", 800, { "life_coplevel", 4 } },
			{ "R3F_SILENCIEUX_FRF2", "", 1500, {"life_coplevel", 4} },
  			{""},
  			{ "Chemlight_red", "", 300, { "life_coplevel", 1 } },
  			{ "Chemlight_yellow", "", 300, { "life_coplevel", 1 } },
  			{ "Chemlight_green", "", 300, { "life_coplevel", 1 } },
  			{ "Chemlight_blue", "", 300, { "life_coplevel", 1 } },
			{""},
			{ "bipod_01_F_blk", "", 3000, { "life_coplevel", 4 } },
			{ "bipod_01_F_snd", "", 3000, { "life_coplevel", 4 } },
			{ "bipod_01_F_mtp", "", 3000, { "life_coplevel", 4 } },
			{ "R3F_BIPIED_HK417", "", 3000, { "life_coplevel", 4} }
        };
    };

    class cop_patrol {
        name = "Australien Waffen";
        side = "cop";
        license = "";
        level = 1;
        msg = "Sie haben nicht den benötigten Rang!";
        items[] = {

			{ "hgun_ACPC2_f", "ACPC2",5000, { "life_coplevel", 2 } },
			{ "9Rnd_45ACP_Mag", "ACPC2 Mag", 400, { "life_coplevel", 2 } },
			{ "R3F_MP5SD", "MP5SD", 15000, { "life_coplevel", 2 } },
			{ "R3F_30Rnd_9x19_MP5", "MP5SD Mag", 750, { "life_coplevel", 2 } },
			{ "R3F_HK416M", "HK416M", 30000, { "life_coplevel", 2 } },
			{ "R3F_30Rnd_556x45_HK416", "HK416M Mag", 750, { "life_coplevel", 2 } },
			{ "SMG_02_F", "", 15000, { "life_coplevel", 2 } },
			{"30Rnd_9x21_Mag", "", 100, { "life_coplevel", 2} },
			{""},
			{ "R3F_PAMAS", "PAMAS",5000, { "life_coplevel", 3 } },
			{ "R3F_15Rnd_9x19_PAMAS", "PAMAS Mag", 300, { "life_coplevel", 3 } },
			{ "R3F_Famas_G2_HG", "Famas", 15000, { "life_coplevel", 3 } },
			{ "R3F_30Rnd_556x45_FAMAS", "Famas Mag", 750, { "life_coplevel", 3 } },
			{ "R3F_HK417M", "HK417M", 30000, { "life_coplevel", 3 } },
			{ "R3F_20Rnd_762x51_HK417", "HK417M Mag", 750, { "life_coplevel", 3 } },
			{ "arifle_MXC_Black_F", "", 30000, { "life_coplevel", 3 } },
			{ "arifle_MXM_Black_F", "", 30000,  { "life_coplevel", 3 } },
			{ "arifle_MX_F", "", 30000, { "life_coplevel", 3 } },
			{ "30Rnd_65x39_caseless_mag", "", 350, { "life_coplevel", 3 } },
			{""},
			{ "srifle_EBR_F", "", 30000, { "life_coplevel", 4 } },
			{ "20Rnd_762x51_Mag", "Mk 18 Mag", 750, { "life_coplevel", 4 } },
			{ "R3F_M107_DES", "",150000, { "life_coplevel", 4 } },
			{ "R3F_10Rnd_127x99_M107", "", 800, { "life_coplevel", 4 } },
			{ "R3F_FRF2_DES", "FRF2",50000, { "life_coplevel", 4 } },
			{ "R3F_10Rnd_762x51_FRF2", "FRF2 Mag", 750, {"life_coplevel", 4} },
			{""},
			{ "srifle_GM6_F", "Lynx Black",120000, { "life_coplevel", 5 } },
			{ "srifle_GM6_camo_F", "Lynx Camo",120000, { "life_coplevel", 5 } },
			{ "5Rnd_127x108_Mag", "", 500, { "life_coplevel", 5 } },
			{""},
			{ "R3F_PGM_Hecate_II_POLY", "PGM Polymer",150000, { "life_coplevel", 6 } },
			{ "R3F_7Rnd_127x99_PGM", "PGM Mag", 500, { "life_coplevel", 6 } },
			{ "R3F_7Rnd_127x99_PEI_PGM", "PGM Mag", 500, { "life_coplevel", 6 } },
			{ "LMG_Mk200_F", "nil",200000, { "life_coplevel", 6 } },
			{ "200Rnd_65x39_cased_Box", "", 800, { "life_coplevel", 6 } }
		};
	};

	class medical {
		name = "Medizinische Ausruestung";
		side = "civ";
		license = "";
		level = -1;
		items[] = {
			{ "FirstAidKit", "", 1850, "" },
			{ "ACE_epinephrine", "", 4850, "" },
			{ "ACE_fieldDressing", "", 850, "" },
			{ "ACE_morphine", "", 4850, "" }
		};
	};

    //Medic Shops
    class med_basic {
        name = "Sanitäter Shop";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100, "" },
            { "tf_anprc148jem","Funke", 0, "" },
			{ "ACE_Flashlight_MX991", "", 500, "" },
			{ "Binocular", "", 150, "" },
			{ "ToolKit", "", 250, "" },
			{ "FirstAidKit", "", 150, "" },
			{ "ACE_atropine", "", 150, "" },
			{ "ACE_fieldDressing", "", 150, "" },
			{ "ACE_elasticBandage", "", 150, "" },
			{ "ACE_quikclot", "", 150, "" },
			{ "ACE_bloodIV", "", 150, "" },
			{ "ACE_bloodIV_500", "", 150, "" },
			{ "ACE_bloodIV_250", "", 150, "" },
			{ "ACE_bodyBag", "", 150, "" },
			{ "ACE_epinephrine", "", 150, "" },
			{ "ACE_morphine", "", 150, "" },
			{ "ACE_packingBandage", "", 150, "" },
			{ "ACE_personalAidKit", "", 150, "" },
			{ "ACE_plasmaIV", "", 150, "" },
			{ "ACE_plasmaIV_500", "", 150, "" },
			{ "ACE_plasmaIV_250", "", 150, "" },
			{ "ACE_salineIV", "", 150, "" },
			{ "ACE_salineIV_500", "", 150, "" },
			{ "ACE_salineIV_250", "", 150, "" },
			{ "ACE_surgicalKit", "", 150, "" },
			{ "ACE_tourniquet", "", 150, "" },
			{ "Medikit", "", 500, "" },
			{ "NVGoggles_OPFOR", "", 2000, "" },
			{ "Chemlight_red", "", 300, "" },
			{ "Chemlight_yellow", "", 300, "" },
			{ "Chemlight_green", "", 300, "" },
			{ "Chemlight_blue", "", 300, "" }
        };
    };

	class adac_basic {
		name = "ADAC Shop";
		side = "adac";
		license = "";
		level = -1;
		items[] = {
			{ "ItemGPS", "", 100, "" },
			{ "tf_anprc148jem","Funke", 0, "" },
			{ "Binocular", "", 150, "" },
			{ "ToolKit", "", 250, "" },
			{ "FirstAidKit", "", 150, "" },
      { "ACE_Flashlight_MX991", "", 500, "" },
			{ "ACE_epinephrine", "", 150, "" },
			{ "ACE_fieldDressing", "", 150, "" },
			{ "ACE_morphine", "", 150, "" },
			{ "NVGoggles_OPFOR", "", 2000, "" },
			{ "Chemlight_red", "", 300, "" },
			{ "Chemlight_yellow", "", 300, "" },
			{ "Chemlight_green", "", 300, "" },
			{ "Chemlight_blue", "", 300, "" }
		};
	};

	class gas {
		name = "Tankstelle";
		side = "civ";
		license = "";
		level = -1;
		items[] = {
			{ "ItemGPS", "", 100, "" },
			{ "Binocular", "", 150, "" },
			{ "ToolKit", "", 10000, "" },
      { "ACE_Flashlight_MX991", "", 1500, "" },
			{ "FirstAidKit", "", 850, "" },
			{ "ACE_epinephrine", "", 4850, "" },
			{ "ACE_fieldDressing", "", 850, "" },
			{ "ACE_morphine", "", 4850, "" },
			{ "Itemwatch", "", 100, "" },
			{ "ItemCompass", "", 50, "" },
			{ "ItemMap", "", 50, "" },
			{ "NVGoggles_OPFOR", "", 2000, "" },
			{ "Chemlight_red", "", 300, "" },
			{ "Chemlight_yellow", "", 300, "" },
			{ "Chemlight_green", "", 300, "" },
			{ "Chemlight_blue", "", 300, "" }
		};
	};

	class kart {
		name = "Waffenladen an der Kartstrecke";
		side = "civ";
		license = "";
		level = -1;
		items[] = {
			{ "hgun_Pistol_Signal_F", "", 1400, "" },
			{ "6Rnd_RedSignal_F", "", 300, "" }
		};
	};

	class airSoft {
		name = "AirSoft-Laden";
		side = "civ";
		license = "";
		level = -1;
		items[] = {
			{ "arifle_TRG20_ACO_Flash_F", "AirSoft-Waffe-Taschenlampe", 0, "" },
			{ "arifle_TRG20_ACO_pointer_F", "AirSoft-Waffe-Laserpointer", 0, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "AirSoft-Magazin", 0, "" },
			{ "NVGoggles_OPFOR", "",2000, "" },
			{ "Binocular", "", 150, "" },
			{ "Chemlight_red", "", 300, "" },
			{ "Chemlight_yellow", "", 300, "" },
			{ "Chemlight_green", "", 300, "" },
			{ "Chemlight_blue", "", 300, "" },
			{ "Weapon_angel_F", "", 555, "" },
			{ "Weapon_egosl_F", "", 555, "" },
			{ "Weapon_angel_kitty_F", "", 555, "" },
			{ "Weapon_angel_rasta_F", "", 555, "" },
			{ "Weapon_tippmann_x7_F", "", 555, "" },
			{ "Weapon_tippmann_x7_UMP_F", "", 555, "" },
			{ "Weapon_invert_mini_dye_F", "", 555, "" },
			{ "140Rnd_PaintBall_blau", "AirSoft-Magazin", 0, "" },
			{ "140Rnd_PaintBall_fire", "AirSoft-Magazin", 0, "" },
			{ "140Rnd_PaintBall_glow", "AirSoft-Magazin", 0, "" },
			{ "140Rnd_PaintBall_gold", "AirSoft-Magazin", 0, "" },
			{ "140Rnd_PaintBall_grun", "AirSoft-Magazin", 0, "" },
			{ "140Rnd_PaintBall_grungelb", "AirSoft-Magazin", 0, "" },
			{ "140Rnd_PaintBall_rotgelb", "AirSoft-Magazin", 0, "" },
			{ "Weapon_brass_n_F", "", 555, "" },
			{ "15Rnd_PaintBall_blau", "AirSoft-Magazin", 0, "" },
			{ "15Rnd_PaintBall_gold", "AirSoft-Magazin", 0, "" }
		};
	};
};
