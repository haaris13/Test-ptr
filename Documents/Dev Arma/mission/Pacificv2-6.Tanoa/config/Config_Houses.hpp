/*
	Config for Houses

	Autor: IronBlade
*/

class CfgHouses {

	cantStoreVItems[] = {
		"mauiwaui_unprocessed",
		"mauiwaui_processed",
		"cannabis",
		"marijuana",
		"purple_unprocessed",
		"purple_processed",
		"strawberry_unprocessed",
		"strawberry_processed",
		"purpleProcessed",
		"purpleUnprocessed",
		"mauiwauiProcessed",
		"mauiwauiUnprocessed"
	};

	garage_whitelist_veh[] = {
								"O_T_LSV_02_unarmed_F",
								"O_T_LSV_02_armed_F",
								"C_Offroad_01_F",
								"B_G_Offroad_01_armed_F",
								"C_Offroad_01_repair_F",
								"C_Kart_01_F", "C_Kart_01_Blu_F", "C_Kart_01_Fuel_F",
								"C_Kart_01_Red_F", "C_Kart_01_Vrana_F", "C_Kart_01_green_F",
								"C_Kart_01_orange_F", "C_Kart_01_white_F", "C_Kart_01_yellow_F",
								"C_Kart_01_black_F",
								"B_Quadbike_01_F",
								"C_Hatchback_01_F",
								"C_Hatchback_01_sport_F",
								"C_SUV_01_F",
								"C_Offroad_02_unarmed_F",
								"C_Offroad_01_covered_F",
								"I_E_Offroad_01_covered_F",
								"BAF_Offroad_D",
								"CUP_C_SUV_CIV",
								"CUP_C_SUV_TK",
								"RDS_JAWA353_Civ_01",
								"rhsusf_mrzr4_d",
								"RDS_tt650_Civ_01",
								"rhs_tigr_msv",
								"ivory_190e",
								"ivory_e36",
								"ivory_gti",
								"ivory_rs4",
								"ivory_wrx",
								"ivory_supra",
								"ivory_evox",
								"ivory_isf",
								"ivory_r34",
								"ivory_m3",
								"ivory_elise",
								"IVORY_R8",
								"IVORY_R8SPYDER",
								"ivory_c",
								"ivory_lfa",
								"ivory_gt500",
								"ivory_mp4",
								"ivory_supra_topsecret",
								"ivory_f1",
								"ivory_veyron"
							 };

	class CfgBuild {
		class Land_House_Small_05_F {
			price = 70000;
			upgradeMax = 3;

			containerPos[] = {-1.0166,1.96875,0.24757};
		};

		class Land_House_Small_02_F {
			price = 70000;
			upgradeMax = 3;

			containerPos[] = {-1.91406,-3.10352,0.954056};
		};

		class Land_House_Small_03_F {
			price = 70000;
			upgradeMax = 3;

			containerPos[] = {0.542969,1.12305,-1.05968};
		};

		class Land_Addon_04_F {
			price = 250000;
			upgradeMax = 5;

			containerPos[] = {-0.416016,-0.0380859, -1.10187};
		};

		class Land_House_Small_04_F {
			price = 250000;
			upgradeMax = 5;

			containerPos[] = {-0.426758,-3.01318,-0.10852};
		};

		class Land_House_Small_06_F {
			price = 250000;
			upgradeMax = 5;

			containerPos[] = {-1.19775,-1.56934, 0.55952};
		};

		class Land_House_Big_01_F {
			price = 400000;
			upgradeMax = 5;

			containerPos[] = {3.58008,2.3252,-0.60711};
		};

		class Land_House_Big_02_F {
			price = 450000;
			upgradeMax = 5;

			containerPos[] = {-8.11816,1.26172, -0.2};

			garagePos[] = {6.61572,6.92188,-0.68114};

			dirGarage = 90.8595;
		};
	};

	class Upgrades {

		class Box_IND_Support_F {
			id = 0;
			price = 0;
			trunk = 50;
		};

		class Box_IND_Wps_F {
			id = 1;
			price = 1000;
			trunk = 100;
		};

		class Box_IND_WpsLaunch_F {
			id = 2;
			price = 10000;
			trunk = 250;
		};

		class Box_IND_WpsSpecial_F {
			id = 3;
			price = 25000;
			trunk = 500;
		};

		class O_supplyCrate_F {
			id = 4;
			price = 45000;
			trunk = 750;
		};

		class I_CargoNet_01_up1_F {
			id = 5;
			price = 70000;
			trunk = 1000;
		};
	};
};