class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 3500, "" },
			{ "C_Hatchback_01_F", 45500, "driver" },
			{ "C_Offroad_01_F", 20500, "driver" },
			{ "C_SUV_01_F", 55000, "driver" },
			{ "Jonzie_Mini_Cooper", 55500, "driver" },
			{ "Jonzie_Mini_Cooper_R_spec", 68000, "driver" },
			{ "Mrshounka_twingo_p_g", 55000, "driver" },
			{ "shounka_a3_ds4_noir", 56500, "driver" },
			{ "shounka_a3_ds4_rouge", 56500, "driver" },
			{ "shounka_a3_ds4_jaune", 56500, "driver" },
			{ "shounka_a3_ds4_bleufonce", 56500, "driver" },
			{ "cl3_civic_vti_black", 58000, "driver" },
			{ "cl3_civic_vti_white", 58000, "driver" },
			{ "cl3_golf_mk2_black", 74000, "driver" },
			{ "cl3_golf_mk2_white", 74000, "driver" },
			{ "cl3_golf_mk2_red", 74000, "driver" },
			{ "Mrshounka_megane_rs_2015_noir", 164000, "driver" },
			{ "Mrshounka_megane_rs_2015_bleufonce", 164000, "driver" },
			{ "Mrshounka_megane_rs_2015_jaune", 164000, "driver" },
			{ "Mrshounka_megane_rs_2015_grise", 164000, "driver" },
			{ "Mrshounka_a3_gtr_civ_noir", 1650000, "driver" },
			{ "Mrshounka_a3_gtr_civ_bleu", 1650000, "driver" },
			{ "LandRover_ACR", 175800, "driver" },
			{ "LandRover_CZ_EP1", 175800, "driver" },
			{ "LandRover_TK_CIV_EP1", 175800, "driver" },
			{ "BAF_Offroad_W", 175800, "driver" },
			{ "BAF_Offroad_D", 175800, "driver" },
			{ "Tal_Wrangler_Black", 178500, "driver" },
			{ "Tal_Wrangler_White", 178500, "driver" },
			{ "Tal_Wrangler_Blue", 178500, "driver" },
			{ "Tal_Wrangler_Red", 178500, "driver" },
			{ "Tal_Wrangler_Yellow", 178500, "driver" },
			{ "Tal_Wrangler_Lime", 178500, "driver" },
			{ "Tal_Wrangler_Green", 178500, "driver" },
			{ "Tal_Wrangler_Pink", 178500, "driver" },
			{ "cl3_insignia_black", 289500, "driver" },
			{ "cl3_range_rover_black", 420000, "driver" },
			{ "cl3_range_rover_white", 420000, "driver" },
			{ "cl3_discovery_black", 580000, "driver" },
			{ "cl3_discovery_silver", 580000, "driver" },
			{ "cl3_discovery_green", 580000, "driver" },
			{ "cl3_discovery_joker", 580000, "driver" },
			{ "cl3_discovery_hellokitty", 580000, "driver" },
			{ "cl3_escalade_black", 740000, "driver" },
			{ "cl3_escalade_white", 740000, "driver" },
			{ "cl3_escalade_red", 740000, "driver" },
			{ "cl3_escalade_silver", 740000, "driver" },
			{ "cl3_escalade_camo", 740000, "driver" }

		};
	};

	class civ_ford {
		side = "civ";
		vehicles[] = {
			{ "DAR_FusionCivBlack", 93500, "driver" },
			{ "DAR_FusionCivBlue", 93500, "driver" },
			{ "DAR_FusionCivRed", 93500, "driver" },
			{ "DAR_TaurusCivBlack", 95000, "driver" },
			{ "DAR_TaurusCivBlue", 95000, "driver" },
			{ "DAR_TaurusCivRed", 95000, "driver" },
			{ "cl3_taurus_black", 95000, "driver" },
			{ "cl3_taurus_white", 95000, "driver" },
			{ "cl3_taurus_aqua", 95000, "driver" },
			{ "cl3_taurus_red", 95000, "driver" },
			{ "cl3_taurus_babyblue", 95000, "driver" },
			{ "cl3_taurus_babypink", 95000, "driver" },
			{ "cl3_taurus_blue", 95000, "driver" },
			{ "cl3_taurus_orange", 95000, "driver" },
			{ "cl3_taurus_lime", 95000, "driver" },
			{ "cl3_taurus_silver", 95000, "driver" },
			{ "cl3_taurus_grey", 95000, "driver" },
			{ "cl3_taurus_sand", 95000, "driver" },
			{ "cl3_taurus_purple", 95000, "driver" },
			{ "cl3_taurus_lavender", 95000, "driver" },
			{ "cl3_taurus_light_blue", 95000, "driver" },
			{ "cl3_taurus_light_yellow", 95000, "driver" },
			{ "cl3_taurus_burgundy", 95000, "driver" },
			{ "cl3_taurus_gold", 95000, "driver" },
			{ "cl3_taurus_violet", 95000, "driver" },
			{ "cl3_taurus_yellow", 95000, "" },
			{ "cl3_taurus_navy_blue", 95000, "driver" },
			{ "cl3_taurus_marina_blue", 95000, "driver" },
			{ "cl3_taurus_cardinal", 95000, "driver" },
			{ "cl3_taurus_camo", 120000, "driver" },
			{ "cl3_taurus_camo_urban", 120000, "driver" },
			{ "Mrshounka_raptor2_noir", 285000, "driver" },
			{ "Mrshounka_raptor2_bleufonce", 285000, "driver" },
			{ "Mrshounka_raptor2_rouge", 285000, "driver" },
			{ "Mrshounka_raptor2_grise", 285000, "driver" },
			{ "cl3_mustang_65_cobra_black_white", 2880000, "driver" },
			{ "cl3_mustang_65_cobra_white_black", 2880000, "driver" },
			{ "cl3_mustang_65_cobra_red_black", 2880000, "driver" }

		};
	};

	class civ_vw {
		side = "civ";
		vehicles[] = {
			{ "cl3_polo_gti_black", 85000, "driver" },
			{ "cl3_polo_gti_white", 85000, "driver" },
			{ "cl3_polo_gti_aqua", 85000, "driver" },
			{ "cl3_polo_gti_blue", 85000, "driver" },
			{ "cl3_polo_gti_purple", 85000, "driver" },
			{ "cl3_polo_gti_red", 85000, "driver" },
			{ "cl3_polo_gti_orange", 85000, "driver" },
			{ "cl3_polo_gti_sand", 85000, "driver" },
			{ "cl3_polo_gti_burgundy", 85000, "driver" },
			{ "cl3_polo_gti_navy_blue", 85000, "driver" },
			{ "cl3_polo_gti_marina_blue", 85000, "driver" },
			{ "cl3_polo_gti_lime", 85000, "driver" },
			{ "cl3_polo_gti_silver", 85000, "driver" },
			{ "cl3_polo_gti_grey", 85000, "driver" },
			{ "cl3_polo_gti_lavender", 85000, "driver" },
			{ "cl3_polo_gti_light_blue", 85000, "driver" },
			{ "cl3_polo_gti_light_yellow", 85000, "driver" },
			{ "cl3_polo_gti_cardinal", 85000, "driver" },
			{ "cl3_polo_gti_dark_green", 85000, "driver" },
			{ "cl3_polo_gti_yellow", 85000, "driver" },
			{ "cl3_polo_gti_green", 85000, "driver" },
			{ "cl3_polo_gti_gold", 85000, "driver" },
			{ "cl3_polo_gti_violet", 85000, "driver" },
			{ "cl3_polo_gti_camo", 88000, "driver" },
			{ "cl3_polo_gti_camo_urban", 88000, "driver" },
			{ "beetle_bleufonce", 78000, "driver" },
			{ "beetle_bleupetrole", 78000, "driver" },
			{ "beetle_red", 78000, "driver" },
			{ "beetle_vert", 78000, "driver" },
			{ "beetle_violet", 78000, "driver" },
			{ "beetle_white", 78000, "driver" },
			{ "beetle_psycha", 78000, "driver" },
			{ "beetle_coci", 78000, "driver" },
			{ "beetle_camo", 88500, "driver" }


		};
	};

	class taxi {
		side = "civ";
		vehicles[] = {
			{ "cl3_suv_taxi", 280000, "driver" }

		};
	};

	class civ_chevrolet {
		side = "civ";
		vehicles[] = {
			{ "DAR_TahoeCivBlack", 190050 , "driver" },
			{ "DAR_TahoeCivBlue", 190050, "driver" },
			{ "DAR_TahoeCivRed", 190050, "driver" },
			{ "DAR_TahoeCivSilver", 190050, "driver" }

		};
	};

	class civ_dodge {
		side = "civ";
		vehicles[] = {
			{ "DAR_ChargerCiv", 764000 , "driver" },
			{ "DAR_Charger_Blue", 764000, "driver" },
			{ "DAR_ChallengerCivBlack", 824000, "driver" },
			{ "DAR_ChallengerCivWhite", 824000, "driver" },
			{ "DAR_ChallengerCivOrange", 824000, "driver" },
			{ "DAR_ChallengerCivRed", 824000, "driver" }
		};
	};

	class civ_bmw {
		side = "civ";
		vehicles[] = {
			{ "DAR_M3CivBlack", 233575, "driver" },
			{ "DAR_M3CivGrey", 233575, "driver" },
			{ "DAR_M3CivWhite", 233575, "driver" },
			{ "cl3_z4_2008_black", 425325, "driver" },
			{ "cl3_z4_2008_white", 425325, "driver" },
			{ "cl3_z4_2008_blue", 425325, "driver" },
			{ "cl3_z4_2008_babyblue", 425325, "driver" },
			{ "cl3_z4_2008_babypink", 425325, "driver" },
			{ "cl3_z4_2008_gold", 425325, "driver" },
			{ "cl3_z4_2008_violet", 425325, "driver" },
			{ "cl3_z4_2008_red", 425325, "driver" },
			{ "cl3_z4_2008_purple", 425325, "driver" },
			{ "cl3_z4_2008_orange", 425325, "driver" },
			{ "cl3_z4_2008_sand", 425325, "driver" },
			{ "cl3_z4_2008_grey", 425325, "driver" },
			{ "cl3_z4_2008_silver", 425325, "driver" },
			{ "cl3_z4_2008_lime", 425325, "driver" },
			{ "cl3_z4_2008_lavender", 425325, "driver" },
			{ "cl3_z4_2008_light_blue", 425325, "driver" },
			{ "cl3_z4_2008_light_yellow", 425325, "driver" },
			{ "cl3_z4_2008_burgundy", 425325, "driver" },
			{ "cl3_z4_2008_yellow", 425325, "driver" },
			{ "cl3_z4_2008_navy_blue", 425325, "driver" },
			{ "cl3_z4_2008_marina_blue", 425325, "driver" },
			{ "cl3_z4_2008_dark_green", 425325, "driver" },
			{ "cl3_z4_2008_green", 425325, "driver" },
			{ "cl3_z4_2008_cardinal", 425325, "driver" },
			{ "cl3_z4_2008_aqua", 425325, "driver" },
			{ "cl3_z4_2008_camo", 445325, "driver" },
			{ "cl3_z4_2008_camo_urban", 445325, "driver" }

		};
	};

	class civ_mercedes {
		side = "civ";
		vehicles[] = {
			{ "cl3_e63_amg_black", 1680000, "driver" },
			{ "cl3_e63_amg_white", 1680000, "driver" },
			{ "cl3_e63_amg_babyblue", 1680000, "driver" },
			{ "cl3_e63_amg_babypink", 1680000, "driver" },
			{ "cl3_e63_amg_gold", 1680000, "driver" },
			{ "cl3_e63_amg_violet", 1680000, "driver" },
			{ "cl3_e63_amg_red", 1680000, "driver" },
			{ "cl3_e63_amg_grey", 1680000, "driver" },
			{ "cl3_e63_amg_purple", 1680000, "driver" },
			{ "cl3_e63_amg_lime", 1680000, "driver" },
			{ "cl3_e63_amg_silver", 1680000, "driver" },
			{ "cl3_e63_amg_sand", 1680000, "driver" },
			{ "cl3_e63_amg_lavender", 1680000, "driver" },
			{ "cl3_e63_amg_light_blue", 1680000, "driver" },
			{ "cl3_e63_amg_light_yellow", 1680000, "driver" },
			{ "cl3_e63_amg_burgundy", 1680000, "driver" },
			{ "cl3_e63_amg_yellow", 1680000, "driver" },
			{ "cl3_e63_amg_navy_blue", 1680000, "driver" },
			{ "cl3_e63_amg_marina_blue", 1680000, "driver" },
			{ "cl3_e63_amg_dark_green", 1680000, "driver" },
			{ "cl3_e63_amg_green", 1680000, "driver" },
			{ "cl3_e63_amg_cardinal", 1680000, "driver" },
			{ "cl3_e63_amg_aqua", 1680000, "driver" },
			{ "cl3_e63_amg_camo", 1860000, "driver" },
			{ "cl3_e63_amg_camo_urban", 1860000, "driver" }
		};
	};

	class civ_bugatti {
		side = "civ";
		vehicles[] = {
			{ "cl3_veyron_blk_wht", 2700000 , "driver" },
			{ "cl3_veyron_brn_blk", 2700000, "driver" }

		};
	};

	class civ_mclaren {
		side = "civ";
		vehicles[] = {
			{ "DAR_MF1Silver", 1850000 , "driver" },
			{ "DAR_MF1Red", 1850000, "driver" },
			{ "DAR_MF1Orange", 1850000, "driver" },
			{ "DAR_MF1Burgundy", 1850000, "driver" }

		};
	};

	class civ_audi {
		side = "civ";
		vehicles[] = {
			{ "SAL_AudiCivBlack", 189800, "driver" },
			{ "SAL_AudiCivRed", 189800, "driver" },
			{ "SAL_AudiCivSilver", 189800, "driver" },
			{ "cl3_r8_spyder_black", 1880000, "driver" },
			{ "cl3_r8_spyder_white", 1880000, "driver" },
			{ "cl3_r8_spyder_gold", 1880000, "driver" },
			{ "cl3_r8_spyder_violet", 1880000, "driver" },
			{ "cl3_r8_spyder_red", 1880000, "driver" },
			{ "cl3_r8_spyder_purple", 1880000, "driver" },
			{ "cl3_r8_spyder_orange", 1880000, "driver" },
			{ "cl3_r8_spyder_sand", 1880000, "driver" },
			{ "cl3_r8_spyder_blue", 1880000, "driver" },
			{ "cl3_r8_spyder_grey", 1880000, "driver" },
			{ "cl3_r8_spyder_silver", 1880000, "driver" },
			{ "cl3_r8_spyder_lime", 1880000, "driver" },
			{ "cl3_r8_spyder_lavender", 1880000, "driver" },
			{ "cl3_r8_spyder_light_blue", 1880000, "driver" },
			{ "cl3_r8_spyder_light_yellow", 1880000, "driver" },
			{ "cl3_r8_spyder_babyblue", 1880000, "driver" },
			{ "cl3_r8_spyder_babypink", 1880000, "driver" },
			{ "cl3_r8_spyder_burgundy", 1880000, "driver" },
			{ "cl3_r8_spyder_yellow", 1880000, "driver" },
			{ "cl3_r8_spyder_navy_blue", 1880000, "driver" },
			{ "cl3_r8_spyder_aqua", 1880000, "driver" },
			{ "cl3_r8_spyder_camo", 1980000, "driver" },
			{ "cl3_r8_spyder_camo_urban", 1980000, "driver" },
			{ "cl3_q7_black", 1800000, "driver" },
			{ "cl3_q7_white", 1800000, "driver" },
			{ "cl3_q7_red", 1800000, "driver" },
			{ "cl3_q7_silver", 1800000, "driver" },
			{ "cl3_q7_camo", 1920000, "driver" },
			{ "Mrshounka_rs4_civ_noir", 2650000, "driver" },
			{ "Mrshounka_rs4_civ_bleufonce", 2650000, "driver" },
			{ "Mrshounka_rs4_civ_rouge", 2650000, "driver" },
			{ "Mrshounka_rs4_civ_jaune", 2650000, "driver" },
			{ "shounka_limo_civ_noir", 4600000, "driver" },
			{ "shounka_limo_civ_bleufonce", 4600000, "driver" },
			{ "shounka_limo_civ_grise", 4600000, "driver" },
			{ "shounka_limo_civ_orange", 4600000, "driver" }

		};
	};

	class civ_aston {
		side = "civ";
		vehicles[] = {
			{ "cl3_dbs_volante_black", 1680000, "driver" },
			{ "cl3_dbs_volante_white", 1680000, "driver" },
			{ "cl3_dbs_volante_blue", 1680000, "driver" },
			{ "cl3_dbs_volante_babyblue", 1680000, "driver" },
			{ "cl3_dbs_volante_babypink", 1680000, "driver" },
			{ "cl3_dbs_volante_gold", 1680000, "driver" },
			{ "cl3_dbs_volante_violet", 1680000, "driver" },
			{ "cl3_dbs_volante_purple", 1680000, "driver" },
			{ "cl3_dbs_volante_red", 1680000, "driver" },
			{ "cl3_dbs_volante_orange", 1680000, "driver" },
			{ "cl3_dbs_volante_sand", 1680000, "driver" },
			{ "cl3_dbs_volante_grey", 1680000, "driver" },
			{ "cl3_dbs_volante_silver", 1680000, "driver" },
			{ "cl3_dbs_volante_lime", 1680000, "driver" },
			{ "cl3_dbs_volante_lavender", 1680000, "driver" },
			{ "cl3_dbs_volante_light_blue", 1680000, "driver" },
			{ "cl3_dbs_volante_light_yellow", 1680000, "driver" },
			{ "cl3_dbs_volante_burgundy", 1680000, "driver" },
			{ "cl3_dbs_volante_yellow", 1680000, "driver" },
			{ "cl3_dbs_volante_navy_blue", 1680000, "driver" },
			{ "cl3_dbs_volante_marina_blue", 1680000, "driver" },
			{ "cl3_dbs_volante_green", 1680000, "driver" },
			{ "cl3_dbs_volante_dark_green", 1680000, "driver" },
			{ "cl3_dbs_volante_cardinal", 1680000, "driver" },
			{ "cl3_dbs_volante_aqua", 1680000, "driver" },
			{ "cl3_dbs_volante_camo", 1860000, "driver" },
			{ "cl3_dbs_volante_camo_urban", 1860000, "driver" }
		};
	};

	class civ_porsche {
		side = "civ";
		vehicles[] = {
			{ "cl3_carrera_gt_black", 2600000, "driver" },
			{ "cl3_carrera_gt_aqua", 2600000, "driver" },
			{ "cl3_carrera_gt_babyblue", 2600000, "driver" },
			{ "cl3_carrera_gt_babypink", 2600000, "driver" },
			{ "cl3_carrera_gt_blue", 2600000, "driver" },
			{ "cl3_carrera_gt_burgundy", 2600000, "driver" },
			{ "cl3_carrera_gt_cardinal", 2600000, "driver" },
			{ "cl3_carrera_gt_dark_green", 2600000, "driver" },
			{ "cl3_carrera_gt_gold", 2600000, "driver" },
			{ "cl3_carrera_gt_green", 2600000, "driver" },
			{ "cl3_carrera_gt_grey", 2600000, "driver" },
			{ "cl3_carrera_gt_lavender", 2600000, "driver" },
			{ "cl3_carrera_gt_light_blue", 2600000, "driver" },
			{ "cl3_carrera_gt_light_yellow", 2600000, "driver" },
			{ "cl3_carrera_gt_lime", 2600000, "driver" },
			{ "cl3_carrera_gt_marina_blue", 2600000, "driver" },
			{ "cl3_carrera_gt_navy_blue", 2600000, "driver" },
			{ "cl3_carrera_gt_orange", 2600000, "driver" },
			{ "cl3_carrera_gt_purple", 2600000, "driver" },
			{ "cl3_carrera_gt_red", 2600000, "driver" },
			{ "cl3_carrera_gt_sand", 2600000, "driver" },
			{ "cl3_carrera_gt_silver", 2600000, "driver" },
			{ "cl3_carrera_gt_violet", 2600000, "driver" },
			{ "cl3_carrera_gt_white", 2600000, "driver" },
			{ "cl3_carrera_gt_yellow", 2600000, "driver" },
			{ "cl3_carrera_gt_camo", 2800000, "driver" },
			{ "cl3_carrera_gt_camo_urban", 2800000, "driver" }

		};
	};

	class civ_fa {
		side = "civ";
		vehicles[] = {
			{ "cl3_458_black", 2800000, "driver" },
			{ "cl3_458_white", 2800000, "driver" },
			{ "cl3_458_blue", 2800000, "driver" },
			{ "cl3_458_babyblue", 2800000, "driver" },
			{ "cl3_458_babypink", 2800000, "driver" },
			{ "cl3_458_gold", 2800000, "driver" },
			{ "cl3_458_violet", 2800000, "driver" },
			{ "cl3_458_red", 2800000, "driver" },
			{ "cl3_458_purple", 2800000, "driver" },
			{ "cl3_458_orange", 2800000, "driver" },
			{ "cl3_458_sand", 2800000, "driver" },
			{ "cl3_458_grey", 2800000, "driver" },
			{ "cl3_458_lime", 2800000, "driver" },
			{ "cl3_458_silver", 2800000, "driver" },
			{ "cl3_458_lavender", 2800000, "driver" },
			{ "cl3_458_burgundy", 2800000, "driver" },
			{ "cl3_458_yellow", 2800000, "driver" },
			{ "cl3_458_navy_blue", 2800000, "driver" },
			{ "cl3_458_marina_blue", 2800000, "driver" },
			{ "cl3_458_dark_green", 2800000, "driver" },
			{ "cl3_458_green", 2800000, "driver" },
			{ "cl3_458_cardinal", 2800000, "driver" },
			{ "cl3_458_aqua", 2800000, "driver" },
			{ "cl3_458_camo", 2960000, "driver" },
			{ "cl3_458_camo_urban", 2960000, "driver" },
			{ "cl3_enzo_black", 3800000, "driver" },
			{ "cl3_enzo_red", 3800000, "driver" },
			{ "cl3_enzo_silver", 3800000, "driver" }
		};
	};

	class civ_lambo {
		side = "civ";
		vehicles[] = {
			{ "cl3_lamborghini_gt1_black", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_aqua", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_babyblue", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_babypink", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_blue", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_burgundy", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_cardinal", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_dark_green", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_gold", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_green", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_grey", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_lavender", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_light_blue", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_light_yellow", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_lime", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_marina_blue", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_navy_blue", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_orange", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_purple", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_red", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_sand", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_silver", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_violet", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_white", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_yellow", 2800000, "driver" },
			{ "cl3_lamborghini_gt1_camo", 2980000, "driver" },
			{ "cl3_lamborghini_gt1_camo_urban", 2980000, "" },
			{ "cl3_murcielago_black", 2200000, "driver" },
			{ "cl3_murcielago_aqua", 2200000, "driver" },
			{ "cl3_murcielago_babyblue", 2200000, "driver" },
			{ "cl3_murcielago_babypink", 2200000, "driver" },
			{ "cl3_murcielago_blue", 2200000, "driver" },
			{ "cl3_murcielago_burgundy", 2200000, "driver" },
			{ "cl3_murcielago_cardinal", 2200000, "driver" },
			{ "cl3_murcielago_dark_green", 2200000, "driver" },
			{ "cl3_murcielago_gold", 2200000, "driver" },
			{ "cl3_murcielago_green", 2200000, "driver" },
			{ "cl3_murcielago_grey", 2200000, "driver" },
			{ "cl3_murcielago_lavender", 2200000, "driver" },
			{ "cl3_murcielago_light_blue", 2200000, "driver" },
			{ "cl3_murcielago_light_yellow", 2200000, "driver" },
			{ "cl3_murcielago_lime", 2200000, "driver" },
			{ "cl3_murcielago_marina_blue", 2200000, "driver" },
			{ "cl3_murcielago_navy_blue", 2200000, "driver" },
			{ "cl3_murcielago_orange", 2200000, "driver" },
			{ "cl3_murcielago_purple", 2200000, "driver" },
			{ "cl3_murcielago_red", 2200000, "driver" },
			{ "cl3_murcielago_sand", 2200000, "driver" },
			{ "cl3_murcielago_silver", 2200000, "driver" },
			{ "cl3_murcielago_violet", 2200000, "driver" },
			{ "cl3_murcielago_white", 2200000, "driver" },
			{ "cl3_murcielago_yellow", 2200000, "driver" },
			{ "cl3_murcielago_camo", 2380000, "driver" },
			{ "cl3_murcielago_camo_urban", 2380000, "driver" },
			{ "cl3_reventon_black", 1850000, "driver" },
			{ "cl3_reventon_aqua", 1850000, "driver" },
			{ "cl3_reventon_babyblue", 1850000, "driver" },
			{ "cl3_reventon_babypink", 1850000, "driver" },
			{ "cl3_reventon_blue", 1850000, "driver" },
			{ "cl3_reventon_burgundy", 1850000, "driver" },
			{ "cl3_reventon_cardinal", 1850000, "driver" },
			{ "cl3_reventon_dark_green", 1850000, "driver" },
			{ "cl3_reventon_gold", 1850000, "driver" },
			{ "cl3_reventon_green", 1850000, "driver" },
			{ "cl3_reventon_grey", 1850000, "driver" },
			{ "cl3_reventon_lavender", 1850000, "driver" },
			{ "cl3_reventon_light_blue", 1850000, "driver" },
			{ "cl3_reventon_light_yellow", 1850000, "driver" },
			{ "cl3_reventon_lime", 1850000, "driver" },
			{ "cl3_reventon_marina_blue", 1850000, "driver" },
			{ "cl3_reventon_navy_blue", 1850000, "driver" },
			{ "cl3_reventon_orange", 1850000, "driver" },
			{ "cl3_reventon_purple", 1850000, "driver" },
			{ "cl3_reventon_red", 1850000, "driver" },
			{ "cl3_reventon_sand", 1850000, "driver" },
			{ "cl3_reventon_silver", 1850000, "driver" },
			{ "cl3_reventon_violet", 1850000, "driver" },
			{ "cl3_reventon_white", 1850000, "driver" },
			{ "cl3_reventon_yellow", 1850000, "driver" },
			{ "cl3_reventon_camo", 1980000, "driver" },
			{ "cl3_reventon_camo_urban", 1980000, "driver" }

		};
	};

	class civ_bike {
		side = "civ";
		vehicles[] = {
			{ "cl3_enduro_black", 65000 , "driver" },
			{ "cl3_enduro_white", 65000, "driver" },
			{ "cl3_enduro_blue", 65000, "driver" },
			{ "cl3_enduro_flame", 65000, "driver" },
			{ "cl3_enduro_orange", 65000, "driver" },
			{ "cl3_enduro_camo", 75000, "driver" },
			{ "cl3_enduro_camo_urban", 75000, "driver" },
			{ "cl3_xr_1000_black", 85000, "driver" },
			{ "cl3_xr_1000_white", 85000, "driver" },
			{ "cl3_xr_1000_orange", 85000, "driver" },
			{ "cl3_xr_1000_flame", 85000, "driver" },
			{ "cl3_xr_1000_red", 85000, "driver" },
			{ "cl3_xr_1000_blue", 85000, "driver" },
			{ "cl3_xr_1000_camo", 95000, "driver" },
			{ "cl3_xr_1000_camo_urban", 95000, "driver" },
			{ "cl3_chopper_gold", 75000, "driver" },
			{ "cl3_chopper_silver", 75000, "driver" },
			{ "cl3_chopper_blue", 75000, "driver" },
			{ "cl3_chopper_red", 75000, "driver" },
			{ "cl3_chopper_green", 75000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class adac_shop {
		side = "adac";
		vehicles[] = {
			{ "B_Quadbike_01_F", 1500, "", { "life_adaclevel", 2 } },
			{ "C_Offroad_01_F", 5000, "", { "life_adaclevel", 2 } },
			{ "B_Truck_01_mover_F", 58000, "", { "life_adaclevel", 3 } },
			{ "Jonzie_Forklift", 32500, "", { "life_adaclevel", 4 } },
			{ "C_SUV_01_F", 43000, "", { "life_adaclevel", 4 } }
		};
	};

	class adac_air {
		side = "adac";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 200000, "", { "life_adaclevel", 2 } },
			{ "I_Heli_light_03_unarmed_F", 300000, "", { "life_adaclevel", 2 } },
			{ "I_Heli_Transport_02_F", 300000, "", { "life_adaclevel", 2 } },
			{ "EC635_ADAC", 380000, "", { "life_adaclevel", 3 } }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "Jonzie_Ambulance", 45000, "" },
			{ "DAR_TahoeEMS", 25000, "", { "life_medlevel", 2 } },
			{ "C_Offroad_01_F", 10000, "", { "life_medlevel", 3 } },
			{ "DAR_ExplorerMedic", 35000, "", { "life_medlevel", 4 } },
			{ "cl3_dodge_charger_emt", 80000, "", { "life_medlevel", 5 } },
			{ "cl3_suv_emt_FD", 25000, "", { "life_medlevel", 5 } },
			{ "cl3_escalade_fd", 35000, "", { "life_medlevel", 5 } },
			{ "cl3_fire_rescue_red", 45000, "", { "life_medlevel", 5 } }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 200000, "mAir" },
			{ "I_Heli_light_03_unarmed_F", 300000, "mAir", { "life_medlevel", 4 } },
			{ "EC635_unarmed_csat", 380000, "mAir", { "life_medlevel", 5 } }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "cl3_bounder_beige", 66500, "trucking" },
			{ "C_Van_01_box_F", 68500, "trucking" },
			{ "O_G_Van_01_fuel_F", 98500, "trucking" },
			{ "C_Van_01_transport_F", 68000, "trucking" },
			{ "cl3_transit_white", 750000, "trucking" },
			{ "cl3_transit_black", 750000, "trucking" },
			{ "cl3_transit_red", 750000, "trucking" },
			{ "shounka_a3_spr_civ_noir", 850000, "trucking" },
			{ "shounka_a3_spr_civ_bleufonce", 850000, "trucking" },
			{ "shounka_a3_spr_civ_rouge", 850000, "trucking" },
			{ "shounka_a3_spr_civ_grise", 850000, "trucking" },
			{ "I_Truck_02_covered_F", 2200000, "trucking" },
			{ "I_Truck_02_transport_F", 2600000, "trucking" },
			{ "I_Truck_02_box_F", 2780000, "trucking" },
			{ "I_Truck_02_fuel_F", 2890000, "trucking" },
			{ "O_Truck_03_covered_F", 2980000, "trucking" },
			{ "O_Truck_03_transport_F", 2800000, "trucking" },
			{ "O_Truck_03_repair_F", 3680000, "trucking" },
			{ "O_Truck_03_fuel_F", 3880000, "trucking" },
			{ "O_Truck_03_device_F", 4600000, "trucking" },
			{ "B_Truck_01_covered_F", 2880000, "trucking" },
			{ "B_Truck_01_transport_F", 3280000, "trucking" },
			{ "B_Truck_01_Repair_F", 3880000, "trucking" },
			{ "B_Truck_01_fuel_F", 4080000, "trucking" },
			{ "B_Truck_01_box_F", 4280000, "trucking" },
			{ "ALFR_GeK_Volvo_FH16_2012", 4385000, "trucking" },
			{ "shounka_a3_dafxf_euro6_f", 4485000, "trucking" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 3500, "" },
			{ "B_G_Offroad_01_F", 20500, "driver" },
			{ "DAR_MK23", 2000000, "trucking" },
			{ "DAR_MK27T", 2200000, "trucking" },
			{ "DAR_M1151WoodlandUA", 3800000, "driver" },
			{ "HMMWV", 4000000, "driver" },
			{ "O_MRAP_02_F", 4200000, "driver" },
			{ "B_Heli_Light_01_F", 2200000, "pilot" },
			{ "B_Heli_Light_01_stripped_F", 2400000, "pilot" },
			{ "B_Heli_Transport_03_unarmed_F", 12400000, "pilot" },
			{ "I_Heli_light_03_unarmed_F", 10400000, "pilot" },
			{ "I_Heli_Transport_02_F", 13800000, "pilot" },
			{ "O_Heli_Transport_04_box_F", 13200000, "pilot" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "DAR_CVPIPolice", 10000, "" },
			{ "DAR_TahoePolice", 25000, "", { "life_coplevel", 2 } },
			{ "DAR_ChargerPoliceState", 25000, "", { "life_coplevel", 2 } },
			{ "DAR_ExplorerPolice", 25000, "", { "life_coplevel", 2 } },
			{ "DAR_TaurusPolice", 35000, "", { "life_coplevel", 3 } },
			{ "cl3_transitpatrol", 45000, "", { "life_coplevel", 4 } },
			{ "cl3_escalade_patrolwb", 55000, "", { "life_coplevel", 4 } },
			{ "cl3_q7_clpd_patrol", 65000, "", { "life_coplevel", 4 } },
			{ "B_MRAP_01_F", 68000, "", { "life_coplevel", 4 } },
			{ "EWK_HMMWV_Light", 68000, "", { "life_coplevel", 4 } },
			{ "HMMWV_M1035", 68000, "", { "life_coplevel", 4 } },
			{ "DAR_TahoePoliceDet", 68000, "", { "life_coplevel", 4 } },
			{ "DAR_ImpalaPoliceDet", 68000, "", { "life_coplevel", 4 } },
			{ "Jonzie_Mini_Cooper", 68000, "", { "life_coplevel", 4 } },
			{ "DAR_ExplorerPoliceStealth", 68000, "", { "life_coplevel", 4 } },
			{ "DAR_DAR_02FirebirdSSVPolice", 85000, "", { "life_coplevel", 5 } },
			{ "cl3_reventon_clpd", 198000, "", { "life_coplevel", 6 } }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "C_Heli_Light_01_civil_F", 1800000, "pilot" },
			{ "B_Heli_Light_01_F", 2200000, "pilot" },
			{ "I_Heli_light_03_unarmed_F", 10400000, "pilot" },
			{ "B_Heli_Transport_03_unarmed_F", 12400000, "pilot" },
			{ "O_Heli_Transport_04_box_F", 13200000, "pilot" },
			{ "I_Heli_Transport_02_F", 13800000, "pilot" }
		};
	};

	class civ_flugzeug {
		side = "civ";
		vehicles[] = {
			{ "sab_camel", 4160000, "pilot" },
			{ "GNT_C185", 4160000, "pilot" },
			{ "Sab_af_An2", 4200000, "pilot" },
			{ "Sab_ana_An2", 4200000, "pilot" },
			{ "Sab_A2_An2", 4200000, "pilot" },
			{ "Sab_tk_An2", 4200000, "pilot" },
			{ "sab_BI_An2", 4200000, "pilot" },
			{ "sab_AH_An2", 4200000, "pilot" },
			{ "sab_ca_An2", 4200000, "pilot" },
			{ "sab_cz_An2", 4200000, "pilot" },
			{ "Sab_ru_An2", 4200000, "pilot" },
			{ "USAF_CV22", 9800000, "pilot" },
			{ "IVORY_CRJ200_1", 12500000, "pilot" },
			{ "USAF_C17", 14400000, "pilot" },
			{ "usaf_c5", 15800000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 175000, "cAir" },
			{ "I_Heli_light_03_unarmed_F", 190000, "cAir", { "life_coplevel", 3 } },
			{ "O_Heli_Transport_04_F", 200000, "cAir", { "life_coplevel", 4 } },
			{ "O_Heli_Transport_04_bench_F", 200000, "cAir", { "life_coplevel", 4 } },
			{ "B_Heli_Transport_03_unarmed_F", 200000, "cAir", { "life_coplevel", 5 } },
			{ "EC635_Unarmed", 200000, "cAir", { "life_coplevel", 5 } },
			{ "USAF_CV22", 200000, "cAir", { "life_coplevel", 5 } }
		};
	};

	class cop_airhq {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 175000, "cAir" },
			{ "I_Heli_light_03_unarmed_F", 190000, "cAir", { "life_coplevel", 3 } },
			{ "O_Heli_Transport_04_F", 220000, "cAir", { "life_coplevel", 4 } },
			{ "O_Heli_Transport_04_box_F", 240000, "cAir", { "life_coplevel", 4 } },
			{ "B_Heli_Transport_03_unarmed_F", 280000, "cAir", { "life_coplevel", 5 } },
			{ "EC635_Unarmed", 380000, "cAir", { "life_coplevel", 5 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 5000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 15000, "coastguard", { "life_coplevel", 2 } },
			{ "B_SDV_01_F", 25000, "coastguard", { "life_coplevel", 3 } },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard", { "life_coplevel", 6 } }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 15000, "boat" },
			{ "B_Lifeboat", 17000, "boat" },
			{ "O_G_Boat_Transport_01_F", 18000, "boat" },
			{ "I_Boat_Transport_01_F", 19500, "boat" },
			{ "C_Boat_Civil_01_F", 39500, "boat" },
			{ "cl3_phoenixyacht", 12800000, "boat" },
			{ "B_SDV_01_F", 250000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class Jonzie_Forklift : Default {
		vItemSpace = 15;
		storageFee[] = { 0, 0, 0, 1500 };
		garageSell[] = { 0, 0, 0, 1800 };
		chopShop = 1500;
	};

	class Jonzie_Mini_Cooper {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 5500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 15000;
        textures[] = { };
	};


	class Jonzie_Mini_Cooper_R_spec {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 8500, 0, 0, 0 };
        insurance = 39000;
        chopShop = 18000;
        textures[] = { };
	};

	class LandRover_ACR {
        vItemSpace = 85;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class LandRover_CZ_EP1 {
        vItemSpace = 85;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class LandRover_TK_CIV_EP1 {
        vItemSpace = 85;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class BAF_Offroad_W {
        vItemSpace = 85;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class BAF_Offroad_D {
        vItemSpace = 85;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Tal_Wrangler_Black {
        vItemSpace = 75;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Tal_Wrangler_White {
        vItemSpace = 75;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Tal_Wrangler_Blue {
        vItemSpace = 75;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Tal_Wrangler_Red {
        vItemSpace = 75;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Tal_Wrangler_Yellow {
        vItemSpace = 75;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Tal_Wrangler_Lime {
        vItemSpace = 75;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Tal_Wrangler_Pink {
        vItemSpace = 75;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Tal_Wrangler_Green {
        vItemSpace = 75;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Mrshounka_megane_rs_2015_noir {
        vItemSpace = 55;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Mrshounka_megane_rs_2015_bleufonce {
        vItemSpace = 55;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Mrshounka_megane_rs_2015_jaune {
        vItemSpace = 55;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class Mrshounka_megane_rs_2015_grise {
        vItemSpace = 55;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 58500, 0, 0, 0 };
        insurance = 82000;
        chopShop = 58000;
        textures[] = { };
	};

	class DAR_MF1Silver {
        vItemSpace = 25;
        storageFee[] = { 7800, 0, 0, 0 };
		garageSell[] = { 625000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 625000;
        textures[] = { };
	};

	class DAR_MF1Red {
        vItemSpace = 25;
        storageFee[] = { 7800, 0, 0, 0 };
		garageSell[] = { 625000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 625000;
        textures[] = { };
	};

	class DAR_MF1Orange {
        vItemSpace = 25;
        storageFee[] = { 7800, 0, 0, 0 };
		garageSell[] = { 625000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 625000;
        textures[] = { };
	};

	class DAR_MF1Burgundy {
        vItemSpace = 25;
        storageFee[] = { 7800, 0, 0, 0 };
		garageSell[] = { 625000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 625000;
        textures[] = { };
	};

	class DAR_FusionCivBlack {
        vItemSpace = 60;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 46750;
        chopShop = 15000;
        textures[] = { };
	};

	class DAR_FusionCivBlue {
        vItemSpace = 60;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 46750;
        chopShop = 15000;
        textures[] = { };
	};

	class DAR_FusionCivRed {
        vItemSpace = 60;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 46750;
        chopShop = 15000;
        textures[] = { };
	};

	class DAR_TaurusCivBlack {
        vItemSpace = 60;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class DAR_TaurusCivBlue {
        vItemSpace = 60;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_black {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_white {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_aqua {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_red {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_babyblue {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_babypink {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_blue {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_orange {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_lime {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_silver {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_grey {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_sand {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_purple {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_lavender {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_light_blue {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_light_yellow {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_burgundy {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_gold {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_violet {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_yellow {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_navy_blue {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_marina_blue {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_cardinal {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_camo {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 47500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_taurus_camo_urban {
        vItemSpace = 66;
        storageFee[] = { 2800, 0, 0, 0 };
		garageSell[] = { 15000, 0, 0, 0 };
        insurance = 48500;
        chopShop = 15000;
        textures[] = { };
	};

	class cl3_discovery_black {
        vItemSpace = 85;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 68000, 0, 0, 0 };
        insurance = 210000;
        chopShop = 68000;
        textures[] = { };
	};

	class cl3_discovery_hellokitty {
        vItemSpace = 85;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 68000, 0, 0, 0 };
        insurance = 210000;
        chopShop = 68000;
        textures[] = { };
	};

	class cl3_discovery_silver {
        vItemSpace = 85;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 68000, 0, 0, 0 };
        insurance = 210000;
        chopShop = 68000;
        textures[] = { };
	};

	class cl3_discovery_green {
        vItemSpace = 85;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 68000, 0, 0, 0 };
        insurance = 210000;
        chopShop = 68000;
        textures[] = { };
	};

	class cl3_discovery_joker {
        vItemSpace = 85;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 68000, 0, 0, 0 };
        insurance = 210000;
        chopShop = 68000;
        textures[] = { };
	};

	class Mrshounka_raptor2_noir {
        vItemSpace = 95;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 57500, 0, 0, 0 };
        insurance = 142500;
        chopShop = 57500;
        textures[] = { };
	};

	class Mrshounka_raptor2_bleufonce {
        vItemSpace = 95;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 57500, 0, 0, 0 };
        insurance = 142500;
        chopShop = 57500;
        textures[] = { };
	};

	class Mrshounka_raptor2_rouge {
        vItemSpace = 95;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 57500, 0, 0, 0 };
        insurance = 142500;
        chopShop = 57500;
        textures[] = { };
	};

	class Mrshounka_raptor2_grise {
        vItemSpace = 95;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 57500, 0, 0, 0 };
        insurance = 142500;
        chopShop = 57500;
        textures[] = { };
	};

	class shounka_limo_civ_noir {
        vItemSpace = 90;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 650000, 0, 0, 0 };
        insurance = 2300000;
        chopShop = 650000;
        textures[] = { };
	};

	class shounka_limo_civ_bleufonce {
        vItemSpace = 90;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 650000, 0, 0, 0 };
        insurance = 2300000;
        chopShop = 650000;
        textures[] = { };
	};

	class shounka_limo_civ_grise {
        vItemSpace = 90;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 650000, 0, 0, 0 };
        insurance = 2300000;
        chopShop = 650000;
        textures[] = { };
	};

	class shounka_limo_civ_orange {
        vItemSpace = 90;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 650000, 0, 0, 0 };
        insurance = 2300000;
        chopShop = 650000;
        textures[] = { };
	};

	class DAR_TahoeCivBlack {
        vItemSpace = 65;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
        insurance = 95000;
        chopShop = 80000;
        textures[] = { };
	};

	class DAR_TahoeCivBlue {
        vItemSpace = 65;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
        insurance = 95000;
        chopShop = 80000;
        textures[] = { };
	};

	class DAR_TahoeCivRed {
        vItemSpace = 65;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
        insurance = 95000;
        chopShop = 80000;
        textures[] = { };
	};

	class DAR_TahoeCivSilver {
        vItemSpace = 65;
        storageFee[] = { 4800, 0, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
        insurance = 95000;
        chopShop = 80000;
        textures[] = { };
	};

	class DAR_Charger_Blue {
        vItemSpace = 65;
        storageFee[] = { 5200, 0, 0, 0 };
		garageSell[] = { 100000, 0, 0, 0 };
        insurance = 412000;
        chopShop = 100000;
        textures[] = { };
	};

	class DAR_ChallengerCivBlack {
        vItemSpace = 65;
        storageFee[] = { 5200, 0, 0, 0 };
		garageSell[] = { 100000, 0, 0, 0 };
        insurance = 412000;
        chopShop = 100000;
        textures[] = { };
	};

	class DAR_ChallengerCivOrange {
        vItemSpace = 65;
        storageFee[] = { 5200, 0, 0, 0 };
		garageSell[] = { 100000, 0, 0, 0 };
        insurance = 412000;
        chopShop = 100000;
        textures[] = { };
	};

	class DAR_ChallengerCivRed {
        vItemSpace = 65;
        storageFee[] = { 5200, 0, 0, 0 };
		garageSell[] = { 100000, 0, 0, 0 };
        insurance = 412000;
        chopShop = 100000;
        textures[] = { };
	};

	class DAR_ChallengerCivWhite {
        vItemSpace = 65;
        storageFee[] = { 5200, 0, 0, 0 };
		garageSell[] = { 100000, 0, 0, 0 };
        insurance = 412000;
        chopShop = 100000;
        textures[] = { };
	};

	class Mrshounka_twingo_p_noir {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 24000;
        chopShop = 10000;
        textures[] = { };
	};

	class Mrshounka_twingo_p_i {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 24000;
        chopShop = 10000;
        textures[] = { };
	};

	class Mrshounka_twingo_p_g {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 24000;
        chopShop = 10000;
        textures[] = { };
	};

	class shounka_a3_ds4_noir {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 24000;
        chopShop = 10000;
        textures[] = { };
	};

	class shounka_a3_ds4_rouge {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 24000;
        chopShop = 10000;
        textures[] = { };
	};

	class shounka_a3_ds4_jaune {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 24000;
        chopShop = 10000;
        textures[] = { };
	};

	class shounka_a3_ds4_bleufonce {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 24000;
        chopShop = 10000;
        textures[] = { };
	};

	class cl3_civic_vti_black {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 24000;
        chopShop = 10000;
        textures[] = { };
	};

	class cl3_civic_vti_white {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 4800, 0, 0, 0 };
        insurance = 24000;
        chopShop = 4000;
        textures[] = { };
	};

	class cl3_range_rover_black {
        vItemSpace = 65;
        storageFee[] = { 4200, 0, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
        insurance = 210000;
        chopShop = 80000;
        textures[] = { };
	};

	class cl3_range_rover_white {
        vItemSpace = 65;
        storageFee[] = { 4200, 0, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
        insurance = 210000;
        chopShop = 80000;
        textures[] = { };
	};

	class cl3_golf_mk2_white {
        vItemSpace = 55;
        storageFee[] = { 1600, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 37500;
        chopShop = 10000;
        textures[] = { };
	};

	class cl3_golf_mk2_black {
        vItemSpace = 55;
        storageFee[] = { 1600, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 37500;
        chopShop = 10000;
        textures[] = { };
	};

	class cl3_golf_mk2_red {
        vItemSpace = 55;
        storageFee[] = { 1600, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
        insurance = 37500;
        chopShop = 10000;
        textures[] = { };
	};

	class cl3_insignia_black {
        vItemSpace = 60;
        storageFee[] = { 3600, 0, 0, 0 };
		garageSell[] = { 66950, 0, 0, 0 };
        insurance = 144750;
        chopShop = 66950;
        textures[] = { };
	};

	class Orel_Agora {
        vItemSpace = 80;
        storageFee[] = { 4600, 0, 0, 0 };
		garageSell[] = { 62800, 0, 0, 0 };
        insurance = 144000;
        chopShop = 62800;
        textures[] = { };
	};

	class I_Truck_02_box_F {
        vItemSpace = 650;
        storageFee[] = { 9600, 0, 0, 0 };
		garageSell[] = { 548000, 0, 0, 0 };
        insurance = 1390000;
        chopShop = 548000;
        textures[] = { };
	};

	class I_Truck_02_fuel_F {
        vItemSpace = 58;
        storageFee[] = { 8600, 0, 0, 0 };
		garageSell[] = { 669000, 0, 0, 0 };
        insurance = 1445000;
        chopShop = 669000;
        textures[] = { };
	};

	class cl3_transit_black {
        vItemSpace = 120;
        storageFee[] = { 5600, 0, 0, 0 };
		garageSell[] = { 275000, 0, 0, 0 };
        insurance = 375000;
        chopShop = 275000;
        textures[] = { };
	};

	class cl3_bounder_beige {
        vItemSpace = 80;
        storageFee[] = { 2600, 0, 0, 0 };
		garageSell[] = { 26000, 0, 0, 0 };
        insurance = 35000;
        chopShop = 26000;
        textures[] = { };
	};

	class cl3_transit_white {
        vItemSpace = 120;
        storageFee[] = { 5600, 0, 0, 0 };
		garageSell[] = { 275000, 0, 0, 0 };
        insurance = 375000;
        chopShop = 275000;
        textures[] = { };
	};

	class cl3_transit_red {
        vItemSpace = 120;
        storageFee[] = { 5600, 0, 0, 0 };
		garageSell[] = { 275000, 0, 0, 0 };
        insurance = 375000;
        chopShop = 275000;
        textures[] = { };
	};

	class shounka_a3_spr_civ_noir {
        vItemSpace = 155;
        storageFee[] = { 6600, 0, 0, 0 };
		garageSell[] = { 285000, 0, 0, 0 };
        insurance = 425000;
        chopShop = 285000;
        textures[] = { };
	};

	class shounka_a3_spr_civ_bleufonce {
        vItemSpace = 155;
        storageFee[] = { 6600, 0, 0, 0 };
		garageSell[] = { 285000, 0, 0, 0 };
        insurance = 425000;
        chopShop = 285000;
        textures[] = { };
	};

	class shounka_a3_spr_civ_rouge {
        vItemSpace = 155;
        storageFee[] = { 6600, 0, 0, 0 };
		garageSell[] = { 285000, 0, 0, 0 };
        insurance = 425000;
        chopShop = 285000;
        textures[] = { };
	};

	class shounka_a3_spr_civ_grise {
        vItemSpace = 155;
        storageFee[] = { 6600, 0, 0, 0 };
		garageSell[] = { 285000, 0, 0, 0 };
        insurance = 425000;
        chopShop = 285000;
        textures[] = { };
	};

	class shounka_a3_dafxf_euro6_f {
        vItemSpace = 1150;
        storageFee[] = { 14600, 0, 0, 0 };
		garageSell[] = { 838500, 0, 0, 0 };
        insurance = 2242500;
        chopShop = 818500;
        textures[] = { };
	};

	class ALFR_GeK_Volvo_FH16_2012 {
        vItemSpace = 1000;
        storageFee[] = { 12600, 0, 0, 0 };
		garageSell[] = { 828500, 0, 0, 0 };
        insurance = 2240500;
        chopShop = 800000;
        textures[] = { };
	};

	class DAR_MK27T {
        vItemSpace = 450;
        storageFee[] = { 8600, 0, 0, 0 };
		garageSell[] = { 850000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 850000;
        textures[] = { };
	};

	class DAR_MK27 {
        vItemSpace = 450;
        storageFee[] = { 8600, 0, 0, 0 };
		garageSell[] = { 850000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 850000;
        textures[] = { };
	};

	class HMMWV {
        vItemSpace = 60;
        storageFee[] = { 28600, 0, 0, 0 };
		garageSell[] = { 380000, 0, 0, 0 };
        insurance = 3800000;
        chopShop = 360000;
        textures[] = { };
	};

	class DAR_MK23 {
        vItemSpace = 400;
        storageFee[] = { 8600, 0, 0, 0 };
		garageSell[] = { 800000, 0, 0, 0 };
        insurance = 1000000;
        chopShop = 800000;
        textures[] = { };
	};

	class DAR_M1151WoodlandUA {
        vItemSpace = 60;
        storageFee[] = { 28600, 0, 0, 0 };
		garageSell[] = { 380000, 0, 0, 0 };
        insurance = 3800000;
        chopShop = 360000;
        textures[] = { };
	};

	class cl3_suv_taxi {
        vItemSpace = 65;
        storageFee[] = { 1400, 0, 0, 0 };
		garageSell[] = { 80000, 0, 0, 0 };
        insurance = 140000;
        chopShop = 80000;
        textures[] = { };
	};

	class cl3_polo_gti_white {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_black {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_aqua {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_blue {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_purple {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class beetle_vert {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 39000;
        chopShop = 15500;
        textures[] = { };
	};

	class beetle_violet {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 39000;
        chopShop = 15500;
        textures[] = { };
	};

	class beetle_white {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 39000;
        chopShop = 15500;
        textures[] = { };
	};

	class beetle_psycha {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 39000;
        chopShop = 15500;
        textures[] = { };
	};

	class beetle_coci {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 39000;
        chopShop = 15500;
        textures[] = { };
	};

	class beetle_camo {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42000;
        chopShop = 15500;
        textures[] = { };
	};

	class beetle_red {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 39000;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_red {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_orange {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_sand {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_burgundy {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_navy_blue {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_marina_blue {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_lime {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_silver {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_grey {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_lavender {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_light_blue {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_light_yellow {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_cardinal {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_yellow {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_dark_green {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_green {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_gold {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_violet {
        vItemSpace = 50;
        storageFee[] = { 1200, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_polo_gti_camo {
        vItemSpace = 50;
        storageFee[] = { 1300, 0, 0, 0 };
		garageSell[] = { 15500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 15500;
        textures[] = { };
	};

	class cl3_veyron_blk_wht {
        vItemSpace = 40;
        storageFee[] = { 8500, 0, 0, 0 };
		garageSell[] = { 898500, 0, 0, 0 };
        insurance = 1350000;
        chopShop = 868500;
        textures[] = { };
	};

	class cl3_veyron_brn_blk {
        vItemSpace = 40;
        storageFee[] = { 8500, 0, 0, 0 };
		garageSell[] = { 898500, 0, 0, 0 };
        insurance = 1350000;
        chopShop = 868500;
        textures[] = { };
	};

	class cl3_carrera_gt_black {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_aqua {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_babyblue {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_babypink {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_blue {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_burgundy {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_cardinal {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_dark_green {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_gold {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_green {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_grey {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_lavender {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_light_blue {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_light_yellow {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_lime {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_marina_blue {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_navy_blue {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_orange {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_purple {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_red {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_sand {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_silver {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_violet {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_white {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_yellow {
        vItemSpace = 25;
        storageFee[] = { 8800, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1300000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_camo {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 99500;
        textures[] = { };
	};

	class cl3_carrera_gt_camo_urban {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 99500, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 99500;
        textures[] = { };
	};

	class DAR_M3CivBlack {
        vItemSpace = 45;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 89000, 0, 0, 0 };
        insurance = 176000;
        chopShop = 89000;
        textures[] = { };
	};

	class DAR_M3CivGrey {
        vItemSpace = 45;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 89000, 0, 0, 0 };
        insurance = 176000;
        chopShop = 89000;
        textures[] = { };
	};

	class DAR_M3CivWhite {
        vItemSpace = 45;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 89000, 0, 0, 0 };
        insurance = 176000;
        chopShop = 89000;
        textures[] = { };
	};

	class cl3_z4_2008_black {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_white {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_blue {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_babyblue {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_babypink {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_gold {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_violet {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_red {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_purple {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_orange {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_sand {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_grey {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_silver {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_lime {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_lavender {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_light_blue {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_light_yellow {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_burgundy {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_yellow {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_navy_blue {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_marina_blue {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_dark_green {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_cardinal {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_aqua {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_camo {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 212000;
        chopShop = 200000;
        textures[] = { };
	};

	class cl3_z4_2008_camo_urban {
        vItemSpace = 35;
        storageFee[] = { 3950, 0, 0, 0 };
		garageSell[] = { 200000, 0, 0, 0 };
        insurance = 222000;
        chopShop = 200000;
        textures[] = { };
	};

	class SAL_AudiCivBlack {
        vItemSpace = 35;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 90900, 0, 0, 0 };
        insurance = 94900;
        chopShop = 90900;
        textures[] = { };
	};

	class SAL_AudiCivRed {
        vItemSpace = 35;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 90900, 0, 0, 0 };
        insurance = 94900;
        chopShop = 90900;
        textures[] = { };
	};

	class SAL_AudiCivSilver {
        vItemSpace = 35;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 90900, 0, 0, 0 };
        insurance = 94900;
        chopShop = 90900;
        textures[] = { };
	};

	class cl3_r8_spyder_black {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_white {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_gold {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_violet {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_red {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_purple {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_orange {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_sand {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_blue {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_grey {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_silver {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_lime {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_lavender {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_light_blue {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_light_yellow {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_babyblue {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_babypink {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_burgundy {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_yellow {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_navy_blue {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_aqua {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_camo {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 940000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_r8_spyder_camo_urban {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 990000;
        chopShop = 940000;
        textures[] = { };
	};

	class cl3_enzo_black {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1200000, 0, 0, 0 };
        insurance = 1900000;
        chopShop = 1200000;
        textures[] = { };
	};

	class cl3_enzo_red {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1200000, 0, 0, 0 };
        insurance = 1900000;
        chopShop = 1200000;
        textures[] = { };
	};

	class cl3_enzo_silver {
        vItemSpace = 25;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1200000, 0, 0, 0 };
        insurance = 1900000;
        chopShop = 1200000;
        textures[] = { };
	};

	class cl3_mustang_65_cobra_black_white {
        vItemSpace = 35;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 880000, 0, 0, 0 };
        insurance = 1440000;
        chopShop = 880000;
        textures[] = { };
	};

	class cl3_mustang_65_cobra_white_black {
        vItemSpace = 35;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 880000, 0, 0, 0 };
        insurance = 1440000;
        chopShop = 880000;
        textures[] = { };
	};

	class cl3_mustang_65_cobra_red_black {
        vItemSpace = 35;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 880000, 0, 0, 0 };
        insurance = 1440000;
        chopShop = 880000;
        textures[] = { };
	};

	class I_Truck_02_medical_F {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class Mrshounka_a3_gtr_civ_bleu {
        vItemSpace = 35;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 625000, 0, 0, 0 };
        insurance = 825000;
        chopShop = 625000;
        textures[] = { };
	};

	class Mrshounka_a3_gtr_civ_noir {
        vItemSpace = 35;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 625000, 0, 0, 0 };
        insurance = 825000;
        chopShop = 625000;
        textures[] = { };
	};

	class Mrshounka_a3_ds3_civ_bleufonce {
        vItemSpace = 35;
        storageFee[] = { 2950, 0, 0, 0 };
		garageSell[] = { 625000, 0, 0, 0 };
        insurance = 825000;
        chopShop = 625000;
        textures[] = { };
	};

	class cl3_q7_black {
        vItemSpace = 80;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 660000, 0, 0, 0 };
        insurance = 900000;
        chopShop = 660000;
        textures[] = { };
	};

	class cl3_q7_white {
        vItemSpace = 80;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 660000, 0, 0, 0 };
        insurance = 900000;
        chopShop = 660000;
        textures[] = { };
	};

	class cl3_q7_silver {
        vItemSpace = 80;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 660000, 0, 0, 0 };
        insurance = 900000;
        chopShop = 660000;
        textures[] = { };
	};

	class cl3_q7_camo {
        vItemSpace = 80;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 960000, 0, 0, 0 };
        insurance = 900000;
        chopShop = 960000;
        textures[] = { };
	};

	class cl3_escalade_black {
        vItemSpace = 80;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 172000, 0, 0, 0 };
        insurance = 370000;
        chopShop = 172000;
        textures[] = { };
	};

	class cl3_escalade_white {
        vItemSpace = 80;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 172000, 0, 0, 0 };
        insurance = 370000;
        chopShop = 172000;
        textures[] = { };
	};

	class cl3_escalade_silver {
        vItemSpace = 80;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 172000, 0, 0, 0 };
        insurance = 370000;
        chopShop = 172000;
        textures[] = { };
	};

	class cl3_escalade_camo {
        vItemSpace = 80;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 172000, 0, 0, 0 };
        insurance = 370000;
        chopShop = 172000;
        textures[] = { };
	};

	class cl3_escalade_red {
        vItemSpace = 80;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 172000, 0, 0, 0 };
        insurance = 370000;
        chopShop = 172000;
        textures[] = { };
	};

	class cl3_458_black {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_white {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_blue {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_babyblue {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_babypink {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_gold {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_violet {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_red {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_purple {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_orange {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_sand {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_grey {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_silver {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_lime {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_lavender {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_burgundy {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_yellow {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_navy_blue {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_marina_blue {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_dark_green {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_green {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_cardinal {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_aqua {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_camo {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 1000000;
        textures[] = { };
	};

	class cl3_458_camo_urban {
        vItemSpace = 20;
        storageFee[] = { 8950, 0, 0, 0 };
		garageSell[] = { 1180000, 0, 0, 0 };
        insurance = 1480000;
        chopShop = 1180000;
        textures[] = { };
	};

	class cl3_dbs_volante_black {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_white {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_blue {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_babyblue {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_babypink {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_gold {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_violet {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_purple {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_red {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_orange {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_sand {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_grey {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_silver {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_lime {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_lavender {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_light_blue {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_light_yellow {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_burgundy {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_yellow {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_navy_blue {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_marina_blue {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_green {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_dark_green {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_cardinal {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_aqua {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_camo {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_dbs_volante_camo_urban {
        vItemSpace = 22;
        storageFee[] = { 6950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 440000;
        textures[] = { };
	};

	class cl3_e63_amg_black {
        vItemSpace = 55;
        storageFee[] = { 5250, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_white {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_babyblue {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_babypink {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_gold {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_violet {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_red {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_grey {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_purple {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_lime {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_silver {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_sand {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_lavender {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_light_blue {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_light_yellow {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_burgundy {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_yellow {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_navy_blue {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_marina_blue {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_dark_green {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_green {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_cardinal {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_aqua {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_camo {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 400000, 0, 0, 0 };
        insurance = 840000;
        chopShop = 400000;
        textures[] = { };
	};

	class cl3_e63_amg_camo_urban {
        vItemSpace = 55;
        storageFee[] = { 4950, 0, 0, 0 };
		garageSell[] = { 440000, 0, 0, 0 };
        insurance = 930000;
        chopShop = 440000;
        textures[] = { };
	};

	class DAR_TahoeEMS : Default {
		vItemSpace = 50;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
		textures[] = { };
	};

	class Jonzie_Ambulance : Default {
		vItemSpace = 55;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
		textures[] = { };
	};

	class DAR_ExplorerMedic : Default {
		vItemSpace = 55;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
		textures[] = { };
	};

	class cl3_suv_emt_FD : Default {
		vItemSpace = 55;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
		textures[] = { };
	};

	class cl3_escalade_fd : Default {
		vItemSpace = 55;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
		textures[] = { };
	};

	class cl3_fire_rescue_red : Default {
		vItemSpace = 260;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
		textures[] = { };
	};

	class DAR_M1152 : Default {
		vItemSpace = 65;
		storageFee[] = { 0, 0, 0, 3000 };
		garageSell[] = { 0, 0, 0, 10000 };
		chopShop = 7500;
	};

	class cl3_dodge_charger_emt : Default {
		vItemSpace = 55;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class dezkit_b206_ems : Default {
		vItemSpace = 55;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class EC635_ADAC : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 0, 0, 3000 };
		garageSell[] = { 0, 0, 0, 10000 };
		chopShop = 7500;
	};

	class EC635_Unarmed : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 7500;
	};

	class Yacht_Civil_chernalife {
		vItemSpace = 180;
		storageFee[] = { 3000, 0, 0, 0 };
		garageSell[] = { 10000, 0, 0, 0 };
		chopShop = 7500;
	};

	class B_Lifeboat {
		vItemSpace = 60;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 7500;
	};

	class cl3_phoenixyacht {
        vItemSpace = 400;
        storageFee[] = { 10850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 438000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_black {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_babyblue {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_babypink {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_blue {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_burgundy {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_cardinal {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_dark_green {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_gold {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_green {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_grey {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_lavender {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_light_blue {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_light_yellow {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_lime {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_marina_blue {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_navy_blue {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_orange {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_purple {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_red {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_sand {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_silver {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_white {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_yellow {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_camo {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 980000;
        textures[] = { };
	};

	class cl3_lamborghini_gt1_camo_urban {
        vItemSpace = 20;
        storageFee[] = { 8850, 0, 0, 0 };
		garageSell[] = { 998000, 0, 0, 0 };
        insurance = 1490000;
        chopShop = 998000;
        textures[] = { };
	};

	class Mrshounka_rs4_civ_noir {
        vItemSpace = 45;
        storageFee[] = { 6850, 0, 0, 0 };
		garageSell[] = { 780000, 0, 0, 0 };
        insurance = 1325000;
        chopShop = 780000;
        textures[] = { };
	};

	class Mrshounka_rs4_civ_bleufonce {
        vItemSpace = 45;
        storageFee[] = { 6850, 0, 0, 0 };
		garageSell[] = { 780000, 0, 0, 0 };
        insurance = 1325000;
        chopShop = 780000;
        textures[] = { };
	};

	class Mrshounka_rs4_civ_rouge {
        vItemSpace = 45;
        storageFee[] = { 6850, 0, 0, 0 };
		garageSell[] = { 780000, 0, 0, 0 };
        insurance = 1325000;
        chopShop = 780000;
        textures[] = { };
	};

	class Mrshounka_rs4_civ_jaune {
        vItemSpace = 45;
        storageFee[] = { 6850, 0, 0, 0 };
		garageSell[] = { 780000, 0, 0, 0 };
        insurance = 1325000;
        chopShop = 780000;
        textures[] = { };
	};

	class cl3_murcielago_black {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_aqua {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_babyblue {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_babypink {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_blue {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_burgundy {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_cardinal {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_dark_green {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_gold {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_green {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_grey {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_lavender {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_light_blue {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_light_yellow {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_lime {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_marina_blue {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_navy_blue {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_orange {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_purple {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_red {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_sand {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_silver {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_violet {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_white {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_yellow {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_murcielago_camo_urban {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 745000, 0, 0, 0 };
        insurance = 1190000;
        chopShop = 745000;
        textures[] = { };
	};

	class cl3_murcielago_camo {
        vItemSpace = 20;
        storageFee[] = { 7950, 0, 0, 0 };
		garageSell[] = { 720000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 720000;
        textures[] = { };
	};

	class cl3_reventon_black {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_aqua {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_babypink {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_babyblue {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_blue {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_burgundy {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_cardinal {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_dark_green {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_gold {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_green {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_grey {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_lavender {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_light_blue {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_light_yellow {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_lime {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_marina_blue {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_navy_blue {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_orange {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_purple {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_red {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_sand {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_silver {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_violet {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_white {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_yellow {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_camo {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 925000;
        chopShop = 520000;
        textures[] = { };
	};

	class cl3_reventon_camo_urban {
        vItemSpace = 20;
        storageFee[] = { 7650, 0, 0, 0 };
		garageSell[] = { 580000, 0, 0, 0 };
        insurance = 990000;
        chopShop = 580000;
        textures[] = { };
	};

	class dezkit_b206_police : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class dezkit_b206_fbi : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class cl3_reventon_clpd : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 187500;
	};

	class ALFR_GeK_Panamera_Police : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 187500;
	};

	class DAR_DAR_02FirebirdSSVPolice : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 187500;
	};

	class DAR_ExplorerPolice : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 97500;
	};

	class DAR_ExplorerPoliceStealth : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 97500;
	};

	class DAR_ImpalaPoliceDet : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_TahoePoliceDet : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_TaurusPolice : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class cl3_transitpatrol : Default {
		vItemSpace = 80;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class cl3_escalade_patrolwb : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class cl3_q7_clpd_patrol : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_TahoePoliceSlick : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_ImpalaPoliceSlick : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_ImpalaPolice : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class CL3_bus_cl_jail : Default {
		vItemSpace = 400;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 97500;
	};

	class DAR_ChargerPoliceStateSlick : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_ChargerPoliceState : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_TahoePolice : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_CVPISlick : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_CVPIPolice : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class DAR_CVPIAux : Default {
		vItemSpace = 40;
		storageFee[] = { 0, 3000, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		chopShop = 87500;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat : Default {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
				garageSell[] = { 5500, 350, 0, 0 };
        insurance = 7500;
        chopShop = 5500;
        textures[] = { };
    };

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F : Default{
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F : Default{
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F : Default{
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F : Default {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F : Default {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class usaf_c5 : Default {
        vItemSpace = 1650;
        storageFee[] = { 42500, 0, 0, 0 };
		garageSell[] = { 6000000, 0, 0, 0 };
        insurance = 7000000;
        chopShop = 5000000;
        textures[] = { };
    };

	class USAF_C17 : Default {
        vItemSpace = 2880;
        storageFee[] = { 62500, 0, 0, 0 };
		garageSell[] = { 6100000, 0, 0, 0 };
        insurance = 7200000;
        chopShop = 5100000;
        textures[] = { };
    };

	class USAF_CV22 : Default {
        vItemSpace = 280;
        storageFee[] = { 22500, 0, 0, 0 };
		garageSell[] = { 3900000, 0, 0, 0 };
        insurance = 4900000;
        chopShop = 2900000;
        textures[] = { };
    };

	class IVORY_CRJ200_1 : Default {
        vItemSpace = 260;
        storageFee[] = { 12500, 0, 0, 0 };
		garageSell[] = { 5250000, 0, 0, 0 };
        insurance = 6250000;
        chopShop = 4250000;
        textures[] = { };
    };

	class Sab_af_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class sab_camel : Default {
        vItemSpace = 200;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class sab_camel_pro : Default {
        vItemSpace = 200;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class GNT_C185 : Default {
        vItemSpace = 200;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class Sab_ana_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class Sab_A2_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class Sab_tk_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class sab_BI_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class sab_AH_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class sab_ca_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class sab_cz_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class Sab_ru_An2 : Default {
        vItemSpace = 240;
        storageFee[] = { 8450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class O_Truck_03_transport_F : Default {
        vItemSpace = 685;
        storageFee[] = { 12500, 0, 0, 0 };
		garageSell[] = { 900000, 0, 0, 0 };
        insurance = 1400000;
        chopShop = 900000;
        textures[] = { };
    };

	class O_Truck_03_device_F : Default {
        vItemSpace = 250;
        storageFee[] = { 8500, 0, 0, 0 };
		garageSell[] = { 1200000, 0, 0, 0 };
        insurance = 2300000;
        chopShop = 1200000;
        textures[] = { };
    };

	class B_Truck_01_covered_F : Default {
        vItemSpace = 780;
        storageFee[] = { 13500, 0, 0, 0 };
		garageSell[] = { 708000, 0, 0, 0 };
        insurance = 1440000;
        chopShop = 708000;
        textures[] = { };
    };

	class O_Truck_03_repair_F : Default {
        vItemSpace = 75;
        storageFee[] = { 9500, 0, 0, 0 };
		garageSell[] = { 840000, 0, 0, 0 };
        insurance = 1840000;
        chopShop = 840000;
        textures[] = { };
    };

	class B_Truck_01_fuel_F : Default {
        vItemSpace = 75;
        storageFee[] = { 9800, 0, 0, 0 };
		garageSell[] = { 980000, 0, 0, 0 };
        insurance = 2040000;
        chopShop = 980000;
        textures[] = { };
    };

	class B_Truck_01_Repair_F : Default {
        vItemSpace = 85;
        storageFee[] = { 9800, 0, 0, 0 };
		garageSell[] = { 860000, 0, 0, 0 };
        insurance = 1940000;
        chopShop = 860000;
        textures[] = { };
    };

	class O_G_Van_01_fuel_F : Default {
        vItemSpace = 45;
        storageFee[] = { 9500, 0, 0, 0 };
		garageSell[] = { 39850, 0, 0, 0 };
        insurance = 49250;
        chopShop = 29800;
        textures[] = { };
    };

	class B_Heli_Transport_03_unarmed_F : Default {
        vItemSpace = 475;
        storageFee[] = { 28200, 0, 0, 0 };
		garageSell[] = { 2240000, 0, 0, 0 };
        insurance = 6200000;
        chopShop = 2040000;
        textures[] = { };
    };

	class C_Heli_Light_01_civil_F : Default {
        vItemSpace = 90;
        storageFee[] = { 14200, 0, 0, 0 };
				garageSell[] = { 700000, 0, 0, 0 };
        insurance = 900000;
        chopShop = 600000;
				textures[] = {
        	{ "Polizei", "cop", {
					"\RL_cars\hummingbird_cop.paa"
            } },
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
						{ "Wasp", "civ", {
												"a3\air_f\heli_light_01\data\skins\heli_light_01_ext_wasp_co.paa"
									} },

			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Medic", "med", {
					"\RL_cars\hummingbird_med.paa"
            } },
			{ "ADAC", "adac", {
					"\RL_cars\adac_hummingbird.paa"
            } },
			 { "Hello Kitty", "civ", {
					"\RL_cars\hummingbird_kitty.paa"
            } },
			 { "Monster", "civ", {
					"\RL_cars\hummingbird_monster.paa"
            } }

        };
    };

	class O_Heli_Transport_04_box_F : Default {
        vItemSpace = 525;
        storageFee[] = { 36200, 0, 0, 0 };
		garageSell[] = { 2840000, 0, 0, 0 };
        insurance = 6600000;
        chopShop = 2640000;
        textures[] = { };
    };

	class O_Heli_Transport_04_F : Default {
        vItemSpace = 20;
        storageFee[] = { 28200, 0, 0, 0 };
		garageSell[] = { 900000, 0, 0, 0 };
        insurance = 900000;
        chopShop = 900000;
        textures[] = { };
	};

	class O_Heli_Transport_04_bench_F : Default {
        vItemSpace = 20;
        storageFee[] = { 28200, 0, 0, 0 };
		garageSell[] = { 900000, 0, 0, 0 };
        insurance = 900000;
        chopShop = 900000;
        textures[] = { };
	};

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 1200;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F : Default {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F : Default {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 8000, 0, 0, 0 };
        insurance = 10250;
        chopShop = 8000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F : Default {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F : Default {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 19750, 3500, 0, 0 };
        insurance = 19750;
        chopShop = 19750;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F : Default {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F : Default {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class cl3_enduro_black : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 32500;
        textures[] = { };
    };

	class cl3_enduro_blue : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 32500;
        textures[] = { };
    };

	class cl3_enduro_red : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 32500;
        textures[] = { };
    };

	class cl3_enduro_camo : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 32500;
        textures[] = { };
    };

	class cl3_enduro_camo_urban : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 32500;
        textures[] = { };
    };

	class cl3_enduro_flame : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 32500;
        textures[] = { };
    };

	class cl3_enduro_orange : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 32500;
        textures[] = { };
    };

	class cl3_enduro_white : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 32500;
        chopShop = 32500;
        textures[] = { };
    };

	class cl3_xr_1000_black : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 42500;
        textures[] = { };
    };

	class cl3_xr_1000_blue : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 42500;
        textures[] = { };
    };

	class cl3_xr_1000_red : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 42500;
        textures[] = { };
    };

	class cl3_xr_1000_camo : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 42500;
        textures[] = { };
    };

	class cl3_xr_1000_camo_urban : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 42500;
        textures[] = { };
    };

	class cl3_xr_1000_flame : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 42500;
        textures[] = { };
    };

	class cl3_xr_1000_orange : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 42500;
        chopShop = 42500;
        textures[] = { };
    };

	class cl3_chopper_gold : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 37500;
        chopShop = 37500;
        textures[] = { };
    };

	class cl3_chopper_silver : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 37500;
        chopShop = 37500;
        textures[] = { };
    };

	class cl3_chopper_blue : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 37500;
        chopShop = 37500;
        textures[] = { };
    };

	class cl3_chopper_red : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 37500;
        chopShop = 37500;
        textures[] = { };
    };

	class cl3_chopper_green : Default {
        vItemSpace = 10;
        storageFee[] = { 500, 0, 0, 0 };
        insurance = 37500;
        chopShop = 37500;
        textures[] = { };
    };

	class B_Truck_01_box_F : Default {
        vItemSpace = 1000;
        storageFee[] = { 1450, 0, 0, 0 };
		garageSell[] = { 940000, 0, 0, 0 };
        insurance = 2140000;
        chopShop = 940000;
        textures[] = { };
    };

	class O_Truck_03_fuel_F : Default {
        vItemSpace = 65;
        storageFee[] = { 9500, 0, 0, 0 };
		garageSell[] = { 840000, 0, 0, 0 };
        insurance = 1940000;
        chopShop = 840000;
        textures[] = { };
    };

	class B_Truck_01_transport_F : Default {
        vItemSpace = 825;
        storageFee[] = { 12500, 0, 0, 0 };
		garageSell[] = { 725000, 0, 0, 0 };
        insurance = 1640000;
        chopShop = 725000;
        textures[] = { };
    };

	class I_MRAP_03_F : Default {
        vItemSpace = 58;
        storageFee[] = { 1000, 1000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Offroad_01_F: Default {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
			{ "Green", "civ", {
	                "\RL_cars\offroad_greenfoot.paa"
            } },
			{ "Joker", "civ", {
	                "\RL_cars\offroad_joker.paa"
            } },
			{ "Jp", "civ", {
	                "\RL_cars\offroad_jp.paa"
            } },
			{ "Mario", "civ", {
	                "\RL_cars\offroad_mario.paa"
            } },
			{ "Monster", "civ", {
	                "\RL_cars\offroad_monster.paa"
            } },
			{ "Nyan", "civ", {
	                "\RL_cars\offroad_nyan.paa"
            } },
            { "Pokemon", "civ", {
	                "\RL_cars\offroad_pokemon.paa"
            } },
			{ "Tussi", "civ", {
	                "\RL_cars\offroad_tussi.paa"
            } },
			{ "Rockstar", "civ", {
	                "\RL_cars\offroad_rockstar.paa"
            } },
			{ "Sticker", "civ", {
	                "\RL_cars\offroad_sticker.paa"
            } },
			{ "ADAC", "adac", {
	               "\RL_cars\offroad_adac.paa"
            } },
			{ "Medic", "med", {
	               "\RL_cars\offroad_meda.paa"
            } },
			{ "Polizei", "cop", {
	                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Taxi", "civ", {
	                "\RL_cars\taxi_offroad.paa"
            } }
	    };
    };

	class C_Kart_01_Blu_F : Default {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F : Default {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

	class B_Quadbike_01_F : Default {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 1950, 0, 0, 0 };
        insurance = 1500;
        chopShop = 3000;
        textures[] = {
        	{ "Polizei", "cop", {
					"\RL_cars\quad_cop.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
			{ "ADAC", "adac", {
	               "\RL_cars\quad_adac.paa"
            } },
			{ "Medic", "med", {
	               "\RL_cars\quad_medic.paa"
            } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F : Default {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 450000, 0, 0, 0 };
        insurance = 1100000;
        chopShop = 450000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : Default {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class B_Truck_01_mover_F : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 0, 0, 3000 };
		garageSell[] = { 0, 0, 0, 10000 };
		chopShop = 7500;
		Textures[] = {
			{ "ADAC", "adac", {
                "\RL_cars\hemtt_mover_adac.paa"
			} }
		};
	};

	class EWK_HMMWV_Light : Default {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class HMMWV_M1035 : Default {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {};
    };

	class O_Truck_03_covered_F : Default {
		vItemSpace = 700;
		storageFee[] = { 12800, 0, 0, 0 };
		garageSell[] = { 550000, 0, 0, 0 };
		insurance = 1490000;
		chopShop = 550000;
		textures[] = {};
	};

	class C_Hatchback_01_F : Default {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 5500, 3500, 0, 0 };
        insurance = 22750;
        chopShop = 5000;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

	class C_SUV_01_F : Default {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 14000, 7500, 0, 0 };
        insurance = 27500;
        chopShop = 12000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Black", "cop", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Taxi", "civ", {
	                "\RL_cars\taxi_suv.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
			{ "Violet", "civ", {
	               "\RL_cars\suv_violet.paa"
            } },
			{ "Batman", "civ", {
	               "\RL_cars\suv_batman.paa"
            } },
			{ "Troll", "civ", {
	               "\RL_cars\suv_antitroll.paa"
            } },
			{ "Hello Kitty", "civ", {
	               "\RL_cars\suv_kitty.paa"
            } },
			{ "Fast", "civ", {
	               "\RL_cars\suv_fast.paa"
            } },
			{ "ADAC", "adac", {
	               "\RL_cars\suv_adac3.paa"
            } },
            { "Polizei", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
	    };
    };

	class C_Van_01_transport_F : Default {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 28000, 0, 0, 0 };
        insurance = 34000;
        chopShop = 28000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F : Default {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 28000, 0, 0, 0 };
        insurance = 34000;
        chopShop = 28000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class O_MRAP_02_F : Default {
        vItemSpace = 60;
        storageFee[] = { 38600, 0, 0, 0 };
		garageSell[] = { 420000, 0, 0, 0 };
        insurance = 4200000;
        chopShop = 400000;
        textures[] = {
			{ "Forest", "reb", {
                "\RL_cars\ifrit_forest\ifrit_forest_front.paa",
				"\RL_cars\ifrit_forest\ifrit_forest_back.paa"
            } },
			{ "Grey", "reb", {
                "\RL_cars\ifrit_grey\ifrit_grey_front.paa",
				"\RL_cars\ifrit_grey\ifrit_grey_back.paa"
            } },
			{ "Lion", "reb", {
                "\RL_cars\ifrit_lion\ifrit_lion_front.paa",
				"\RL_cars\ifrit_lion\ifrit_lion_back.paa"
            } },
			{ "Lion", "reb", {
                "\RL_cars\ifrit_red\ifrit_red_front.paa",
				"\RL_cars\ifrit_red\ifrit_red_back.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
		};
	};

	class B_MRAP_01_F : Default {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Polizei", "cop", {
                "\RL_cars\hunter_polizei.paa"
            } },
			{ "Swat", "cop", {
                "\RL_cars\hunter_swat.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F : Default {
        vItemSpace = 90;
        storageFee[] = { 15000, 19500, 0, 0 };
		garageSell[] = { 610000, 35000, 0, 0 };
        insurance = 1100000;
        chopShop = 510000;
        textures[] = {
        	{ "Polizei", "cop", {
					"\RL_cars\hummingbird_cop.paa"
            } },
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
						{ "Wasp", "civ", {
												"a3\air_f\heli_light_01\data\skins\heli_light_01_ext_wasp_co.paa"
									} },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Medic", "med", {
					"\RL_cars\hummingbird_med.paa"
            } },
			{ "ADAC", "adac", {
					"\RL_cars\adac_hummingbird.paa"
            } },
			 { "Hello Kitty", "civ", {
					"\RL_cars\hummingbird_kitty.paa"
            } },
			 { "Monster", "civ", {
					"\RL_cars\hummingbird_monster.paa"
            } }

        };
    };

	class I_Heli_light_03_unarmed_F : Default {
        vItemSpace = 300;
        storageFee[] = { 24200, 0, 0, 0 };
		garageSell[] = { 2240000, 0, 0, 0 };
        insurance = 5200000;
        chopShop = 2040000;
        textures[] = {
			{ "Rebellen", "reb", {
					  "\RL_cars\hellcat_angrya.paa"
            } },
			{ "Polizei", "cop", {
					  "\RL_cars\hellcat_polizei.paa"
            } },
			{ "Medic", "med", {
					  "\RL_cars\hellcat_med.paa"
            } },
			{ "ADAC", "adac", {
					  "\RL_cars\ADAC_hellcat.paa"
            } }
		};
    };

	class B_Heli_Transport_01_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {
			{ "Polizei", "cop", {
					  "\RL_cars\ghosthawk_cop.paa"
            } }
		};
	};

	class dezkit_b206_news : Default {
		vItemSpace = 60;
		storageFee[] = { 0, 0, 0, 3000 };
		garageSell[] = { 0, 0, 0, 10000 };
		chopShop = 87500;
		textures[] = {
			{ "ADAC", "adac", {
					  "\RL_cars\dezkit_b206_news_adac_1.paa",
					  "\RL_cars\dezkit_b206_news_adac_2.paa"
            } }
		};
	};

	class O_Heli_Light_02_unarmed_F : Default {
        vItemSpace = 210;
        storageFee[] = { 25000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 250000;
        chopShop = 5000;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
			{ "ADAC", "adac", {
					  "\RL_cars\orca_adac.paa"
            } },
            { "EMS White", "med", {
					  "\RL_cars\orca_med.paa"
            } }
        };
    };

	class I_Heli_Transport_02_F : Default {
        vItemSpace = 570;
        storageFee[] = { 32500, 0, 0, 0 };
		garageSell[] = { 5500000, 0, 0, 0 };
        insurance = 6900000;
        chopShop = 1900000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
			{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Polizei", "cop", {
                "\RL_cars\mohawk\mohawk.paa.paa",
                "\RL_cars\mohawk\fuselage.paa",
                "\RL_cars\mohawk\door.paa"
			} },
            { "ADAC", "adac", {
                "RL_cars\mohawk\blu_mohawk_adac.paa",
                "\RL_cars\mohawk\blu_mohawk2_adac.paa",
                "\RL_cars\mohawk\blu_mohawk3_adac.paa"
            } }
        };
    };
};
