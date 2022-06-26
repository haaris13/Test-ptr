/*
	Config for Map Markers

	Autor: IronBlade
*/

class CfgMap {

	class Category {

		//	Magasins

		class magasin {

			displayName = "Magasins généraux";

			list[] = {
				"Gen","Gen_5","Gen_7","Gen_6","Gen_10","Gen_3","Gen_11"
			};

			sides[] = {"civ","cop","med"};
		};

		class vetement {

			displayName = "Magasins de vétements";

			list[] = {
				"Gen_4","Gen_3_5","Gen_8","Gen_3_4","Gen_12"
			};

			sides[] = {"civ","cop","med"};
		};

		class marche {

			displayName = "Marchés";

			list[] = {
				"Gen_3_1","Gen_3_2","Gen_3_6","Gen_3_3","Gen_3_8","Gen_3_10","Gen_3_9"
			};

			sides[] = {"civ","cop","med"};
		};

		class plonge {

			displayName = "Magasins de plongée";

			list[] = {
				"dive_shop","dive_shop_2","dive_shop_3","dive_shop_1"
			};

			sides[] = {"civ","cop","med"};
		};

		class prefectures {

			displayName = "Préfectures";

			list[] = {
				"license_shop","license_shop_2","license_shop_4","license_shop_3","license_shop_1"
			};

			sides[] = {"civ","cop","med"};
		};

		class armureries {

			displayName = "Armuries";

			list[] = {
				"gun_store_6"
			};

			sides[] = {"civ","cop","med"};
		};

		// Farms

		class mines {

			displayName = "Mines";

			list[] = {
				"graphite_1","tin_1","silver_1","copper_mine","platinum_1","iron_1","rhodium_1","gold_1","iridium_1",
				"iron_processing",
				"iron_copper_trader_1", "iron_copper_trader",
				"diamond_trader_2"
			};

			sides[] = {"civ","cop","med"};
		};

		class bois {

			displayName = "Bois";

			list[] = {
				"bois_tropical_1","bois_parc_1",
				"tonnerie_process_1","charpente_process",
				"oil_trader_1"
			};

			sides[] = {"civ","cop","med"};
		};

		class illegal {

			displayName = "Farm illegaux";

			list[] = {

				"coca_p","straw_p","cop_spawn_6","Weed_p","heroin_p","khat_p_1",
				"serpent_1","serpent_p","Shop_Serpent",
				"Dealer_1","Dealer_3"

			};

			sides[] = {"civ"};
		};

		class bijoutiers {

			displayName = "Bijoutiers";

			list[] = {
				"bijoux_1","bijoux_2","bijoux_3","bijoux_4"
			};

			sides[] = {"civ","cop","med"};
		};

		//	Véhicules

		class concessionnaires {

			displayName = "Concessionnaires";

			list[] = {

				"kart_shop_text_1", // kart
				"car1_2","car3_4","car1_3","car5_6","marker_gang_flag_5", //voitures
				"civ_truck_shop3_4","civ_truck_shop1_2","civ_truck_shop7_8","civ_truck_shop9_10",	//Camions
				"airshop_9_10","airshop_1_2","airshop_1_3","airshop_7_8"	// Aériens
			};

			sides[] = {"civ","cop","med"};
		};

		class garages {

			displayName = "Garages";

			list[] = {
				"civ_gar_1","civ_gar_3","civ_gar_8","civ_gar_12","civ_gar_10","civ_gar_9","civ_gar_14","civ_gar_13","civ_gar_11","civ_gar_6","civ_gar_15","civ_gar_4","civ_gar_1_5",
				"airshop_9_11","civ_gar_1_4","civ_gar_1_2","civ_gar_1_7"
			};

			sides[] = {"civ","cop","med"};
		};

		class ports {

			displayName = "Ports";

			list[] = {
				"boat_2","boat_4","boat_7","boat_11","boat_6","boat_5","boat_3","boat_10","boat_9","boat_8","boat_12"
			};

			sides[] = {"civ","cop","med"};
		};

		class custom {

			displayName = "Custom";

			list[] = {

				"marker_174","marker_175","marker_176"
			};

			sides[] = {"civ","cop","med"};
		};

		// Camps

		class mafia {

			displayName = "Mafia";

			list[] = {

				"marker_131","car3_5","civ_gar_16","marker_52"
			};

			sides[] = {"civ"};
		};

		class insurges {

			displayName = "Narcos";

			list[] = {

				"camp_insurge",
				"civ_truck_shop5_8","civ_gar_5","marker_51",
				"civ_gar_1_3","civ_truck_shop5_6","civ_car_shop5_8","marker_50","civ_gar_2","airshop_3_4","marker_178"
			};

			sides[] = {"civ"};
		};

		class divers {

			displayName = "Divers";

			list[] = {

				"archeologue","7News", "7News_1"
			};

			sides[] = {"civ","cop","med"};
		};

		class hacker {

			displayName = "Hacker";

			list[] = {

				"hacker_mark"
			};

			sides[] = {"civ"};
		};		

		//	Batiments

		class banques {

			displayName = "Banques";

			list[] = {
				"lbank_1"
			};

			sides[] = {"civ","cop","med"};
		};

		class tribunaux {

			displayName = "Tribunaux";

			list[] = {

				"Tribunal_underscore_2","Trinunal_underscore_1",
				"Correctional Facility"
			};

			sides[] = {"civ","cop","med"};
		};

		class gendarmeries {

			displayName = "Gendarmeries";

			list[] = {

				"marker_139","Police_Rochelle","cop_spawn_6","Police_Aeroport"
			};

			sides[] = {"civ","cop","med"};
		};

		class hopitaux {

			displayName = "Hopitaux";

			list[] = {

				"hospital_marker","hospital_marker_1","hospital_marker_2"
			};

			sides[] = {"civ","cop","med"};
		};

		class atm {

			displayName = "ATM";

			list[] = {
				"atm_marker_1_2","atm_marker_2","atm_marker_1_18","atm_marker_1_7","atm_marker_1_5","atm_marker_1_17","atm_marker_1_23","atm_marker_1_19","atm_marker_1_27",
				"atm_marker_1_8","atm_marker_1_14","atm_marker_1_24","atm_marker_1_1","atm_marker_1_20","atm_marker_1_21","atm_marker_1_13","atm_marker_1_12","atm_marker_1_10","atm_marker_1_25"
			};

			sides[] = {"civ","cop","med"};
		};

		class dp {

			displayName = "DP";

			list[] = {
				"dp_1_18_1","dp_1_18_2","dp_1_1","dp_1_3","dp_1_16","dp_1_21","dp_1_2","dp_1_18","dp_1_20","dp_1_17"
			};

			sides[] = {"civ","cop","med"};
		};

		class zones {

			displayName = "Zones";

			list[] = {
				"territoire_insurge",
				"marker_131", // Mafia
				"marker_147"	// Pont de Balavu
			};

			sides[] = {"civ","cop","med"};
		};

		class clan_zone {

			displayName = "Zones de Clan";

			list[] = {
				"marker_gang_flag_1","marker_gang_flag_2","marker_gang_flag_3","marker_gang_flag_4","marker_gang_flag_5",
				"marker_gang_flag_6","marker_gang_flag_7","marker_gang_flag_8","marker_gang_flag_9","marker_gang_flag_10",
				"marker_gang_flag_11","marker_gang_flag_12","marker_gang_flag_13","marker_gang_flag_14","marker_gang_flag_15"
			};

			sides[] = {"civ","cop","med"};
		};
	};
};