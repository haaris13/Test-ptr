/*
	Config CfgVehicleUpgrade

	Autor: IronBlade
*/

class CfgVehicleUpgrade {

	class B_Truck_01_mover_F {	//	HEMTT CIVIL

		class B_Truck_01_mover_F {
			price = 80000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class B_Truck_01_flatbed_F {
			price = 100000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class B_Truck_01_cargo_F {
			price = 105000;
			condition[] = {"life_playerlevel >= 38", "Niveau: 38<br/>Compétence: aucune"};
		};

		class B_Truck_01_ammo_F {
			price = 110000;
			condition[] = {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"};
		};

		class B_Truck_01_transport_F {
			price = 115000;
			condition[] = {"life_playerlevel >= 42", "Niveau: 42<br/>Compétence: aucune"};
		};

		class B_Truck_01_covered_F {
			price = 120000;
			condition[] = {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"};
		};

		class B_Truck_01_box_F {
			price = 125000;
			condition[] = {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"};
		};

		class B_Truck_01_fuel_F {
			price = 130000;
			condition[] = {"life_playerlevel >= 50 && prof_livraison >= 500", "Niveau: 50<br/>Niveau livraison: 500"};
		};
	};

	class O_Truck_03_transport_F {	//	Tempest

		class O_Truck_03_transport_F {
			price = 40000;
			condition[] = {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"};
		};

		class O_Truck_03_covered_F {
			price = 50000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class O_Truck_03_ammo_F {
			price = 60000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class O_Truck_03_repair_F {
			price = 70000;
			condition[] = {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"};
		};

		class O_Truck_03_device_F {
			price = 85000;
			condition[] = {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"};
		};

		class O_Truck_03_fuel_F {
			price = 80000;
			condition[] = {"life_playerlevel >= 40 && prof_livraison >= 250", "Niveau: 40<br/>Niveau livraison: 250"};
		};
	};

	class C_Truck_02_transport_F {	//	Zamak CIVIL

		class C_Truck_02_transport_F {
			price = 42000;
			condition[] = {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"};
		};

		class C_Truck_02_covered_F {
			price = 44000;
			condition[] = {"life_playerlevel >= 17", "Niveau: 17<br/>Compétence: aucune"};
		};

		class C_Truck_02_box_F {
			price = 46000;
			condition[] = {"life_playerlevel >= 19", "Niveau: 19<br/>Compétence: aucune"};
		};

		class C_Truck_02_fuel_F {
			price = 48000;
			condition[] = {"life_playerlevel >= 20 && prof_livraison >= 60", "Niveau: 20<br/>Niveau livraison: 60"};
		};
	};

	class I_Truck_02_transport_F {	//	Zamak REBEL

		class I_Truck_02_transport_F {
			price = 20000;
			condition[] = {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"};
		};

		class I_Truck_02_covered_F {
			price = 22000;
			condition[] = {"life_playerlevel >= 17", "Niveau: 17<br/>Compétence: aucune"};
		};

		class I_Truck_02_box_F {
			price = 22500;
			condition[] = {"life_playerlevel >= 19", "Niveau: 19<br/>Compétence: aucune"};
		};

		class I_Truck_02_fuel_F {
			price = 24000;
			condition[] = {"life_playerlevel >= 20 && prof_livraison >= 60", "Niveau: 20<br/>Niveau livraison: 60"};
		};
	};

	class C_Van_01_transport_F {	//	Van CIVIL

		class C_Van_01_transport_F {
			price = 22000;
			condition[] = {"", ""};
		};

		class C_Van_01_box_F {
			price = 25000;
			condition[] = {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"};
		};

		class C_Van_01_fuel_F {
			price = 28000;
			condition[] = {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"};
		};
	};

	class O_G_Van_01_transport_F {	//	Van REBEL

		class  O_G_Van_01_transport_F {
			price = 11000;
			condition[] = {"", ""};
		};

		class O_G_Van_01_box_red_F {
			price = 12500;
			condition[] = {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"};
		};

		class  O_G_Van_01_fuel_F {
			price = 14000;
			condition[] = {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"};
		};
	};

	/*class C_Van_02_transport_F {	//	Van 02 CIVIL

		class C_Van_02_transport_F { // Transport
			price = 240000;
			condition[] = {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"};
		};

		class C_Van_02_vehicle_F { // Cargo
			price = 280000;
			condition[] = {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"};
		};

		class C_Van_02_service_F { // Cargo amélioré ?
			price = 280000;
			condition[] = {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"};
		};
	};*/

	class O_Heli_Transport_04_F {	//	Taru

		class O_Heli_Transport_04_F {
			price = 1000000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class O_Heli_Transport_04_bench_F {
			price = 1100000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class O_Heli_Transport_04_covered_F {
			price = 1200000;
			condition[] = {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"};
		};

		class O_Heli_Transport_04_box_F {
			price = 1300000;
			condition[] = {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"};
		};

		class O_Heli_Transport_04_fuel_F {
			price = 1400000;
			condition[] = {"life_playerlevel >= 50 && prof_livraison >= 600", "Niveau: 50<br/>Niveau livraison: 600"};
		};
	};

	class B_G_Offroad_01_F {	//	Pick-up armé

		class B_G_Offroad_01_F {
			price = 6000;
			condition[] = {"", ""};
		};

		class I_G_Offroad_01_armed_F {
			price = 20000;
			condition[] = {"life_playerlevel >= 30 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_insurge", "Niveau: 30<br/>Compétence: véhicules armés"};
		};
	};

	class C_Offroad_02_unarmed_F {	//	Jeep armé

		class C_Offroad_02_unarmed_F {
			price = 35000;
			condition[] = {"", ""};
		};

		class I_C_Offroad_02_LMG_F {
			price = 42000;
			condition[] = {"life_playerlevel >= 30 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_mafia", "Niveau: 30<br/>Compétence: véhicules armés"};
		};
	};

	class O_T_LSV_02_unarmed_F {	//	Qilin armé

		class O_T_LSV_02_unarmed_F {
			price = 35000;
			condition[] = {"", ""};
		};

		class O_T_LSV_02_armed_F {
			price = 65000;
			condition[] = {"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_insurge", "Niveau: 50<br/>Compétence: véhicules armés"};
		};
	};

	class O_T_VTOL_02_infantry_F {	//	Y-32

		class O_T_VTOL_02_infantry_F {
			price = 6000000;
			condition[] = {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"};
		};

		class O_T_VTOL_02_vehicle_F {
			price = 7500000;
			condition[] = {"life_playerlevel >= 50", "Niveau: 50<br/>Compétence: aucune"};
		};
	};

	class B_Heli_Transport_03_unarmed_F {	//	Huron

		class B_Heli_Transport_03_unarmed_F {
			price = 2000000;
			condition[] = {"life_playerlevel >= 45", "Niveau: 45<br/>Compétence: aucune"};
		};

		class B_Heli_Transport_03_F {
			price = 5000000;
			condition[] = {"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_insurge", "Niveau: 50<br/>Compétence: véhicules armés"};
		};
	};


	class d3s_452 {

		class d3s_452 {
			price = 17000;
			condition[] = {"", ""};
		};

		class d3s_3303 {
			price = 18000;
			condition[] = {"", ""};
		};
	};

	class d3s_zil_130_01 {

		class d3s_zil_130_01 {
			price = 22000;
			condition[] = {"", ""};
		};

		class d3s_zil_130_02 {
			price = 47000;
			condition[] = {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"};
		};

		class d3s_zil_130_06 {
			price = 92000;
			condition[] = {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"};
		};

		class d3s_zil_130_04 {
			price = 50000;
			condition[] = {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"};
		};

		class d3s_zil_130_05 {
			price = 92000;
			condition[] = {"life_playerlevel >= 5 && prof_livraison >= 10", "Niveau: 5<br/>Niveau livraison: 10"};
		};
	};

	class d3s_gaz66 {
		
		class d3s_gaz66 {
			price = 23000;
			condition[] = {"", ""};
		};
		
		class d3s_gaz66_TENT {
			price = 34250;
			condition[] = {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"};
		};
		
		class d3s_gaz66_AC {
			price = 34250;
			condition[] = {"life_playerlevel >= 8 && prof_livraison >= 50", "Niveau: 8<br/>Niveau livraison: 50"};
		};
	};

	class d3s_zil_131 {
		class d3s_zil_131 {
			price = 92000;
			condition[] = {"", ""};
		};

		class d3s_zil_131_2 {
			price = 137000;
			condition[] = {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"};
		};

		class d3s_zil_131_4 {
			price = 137000;
			condition[] = {"life_playerlevel >= 8 && prof_livraison >= 50", "Niveau: 8<br/>Niveau livraison: 50"};
		};
	};

	class d3s_ural {
		class d3s_ural {
			price = 45500;
			condition[] = {"", ""};
		};
		
		class d3s_ural_tent {
			price = 56750;
			condition[] = {"life_playerlevel >= 10", "Niveau: 10<br/>Compétence: aucune"};
		};		
	};

	class d3s_kamaz {			//		KamAZ-4326
		class d3s_kamaz {
			price = 137000;
			condition[] = {"", ""};
		};

		class d3s_kamaz_tent {
			price = 182000;
			condition[] = {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"};
		};

		class d3s_kamaz_tent2 {
			price = 227000;
			condition[] = {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"};
		};
		class d3s_kamaz_2 {
			price = 272000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class d3s_kamaz_tent_2 {
			price = 317000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class d3s_kamaz_bocha {
			price = 317000;
			condition[] = {"life_playerlevel >= 35 && prof_livraison >= 300", "Niveau: 35<br/>Niveau livraison: 300"};
		};
	};

	class d3s_kamaz_4350 {		//		KamAZ-4350
		class d3s_kamaz_4350 {
			price = 137000;
			condition[] = {"", ""};
		};

		class d3s_kamaz_4350_tent {
			price = 182000;
			condition[] = {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"};
		};

		class d3s_kamaz_4350_tent2 {
			price = 227000;
			condition[] = {"life_playerlevel >= 16", "Niveau: 16<br/>Compétence: aucune"};
		};

		class d3s_kamaz_5350 {
			price = 272000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class d3s_kamaz_5350_tent {
			price = 317000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class d3s_kamaz_5350_bocha {
			price = 317000;
			condition[] = {"life_playerlevel >= 35 && prof_livraison >= 300", "Niveau: 35<br/>Niveau livraison: 300"};
		};
	};

	class C_Van_02_vehicle_F {

		class C_Van_02_vehicle_F {
			price = 32000;
			condition[] = {"", ""};
		};

		class C_Van_02_transport_F {
			price = 35000;
			condition[] = {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"};
		};
	};

	class d3s_next {
		class d3s_next {
			price = 227000;
			condition[] = {"", ""};
		};

		class d3s_next_tent {
			price = 272000;
			condition[] = {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"};
		};

		class d3s_next_bocha {
			price = 272000;
			condition[] = {"life_playerlevel >= 25 && prof_livraison >= 150", "Niveau: 25<br/>Niveau livraison: 150"};
		};
	};

	class d3s_maz_6317 {
		class d3s_maz_6317 {
			price = 227000;
			condition[] = {"", ""};
		};
		class d3s_maz_6317_tent {
			price = 272000;
			condition[] = {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"};
		};
		class d3s_maz_6317_cistern {
			price = 272000;
			condition[] = {"life_playerlevel >= 25 && prof_livraison >= 150", "Niveau: 25<br/>Niveau livraison: 150"};
		};
	};

	class d3s_kraz_6315 {
		class d3s_kraz_6315 {
			price = 362000;
			condition[] = {"", ""};
		};
		class d3s_kraz_6316 {
			price = 452000;
			condition[] = {"life_playerlevel >= 43", "Niveau: 43<br/>Compétence: aucune"};
		};
	};

	class d3s_maz_7429 {
		
		class d3s_maz_7429 {
			price = 632000;
			condition[] = {"", ""};
		};
		
		class d3s_maz_7429_cistern {
			price = 632000;
			condition[] = {"life_playerlevel >= 48 && prof_livraison >= 500", "Niveau: 48<br/>Niveau livraison: 500"};
		};
	};

	//  --------------------------------------- Voitures -----------------------------------------

	class d3s_stelvio_18 {
		class d3s_stelvio_18 {
			price = 136000;
			condition[] = {"", ""};
		};

		class d3s_stelvio_18_Ti {
			price = 190000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class d3s_stelvio_19_MNSTR {
			price = 300000;
			condition[] = {"life_playerlevel >= 40 && license_civ_mafia", "Niveau: 40<br/>Faction: Mafia"};
		};
	};

	class d3s_e60_09_m {
		class d3s_e60_09_m {
			price = 74000;
			condition[] = {"", ""};
		};

		class d3s_e60_09 {
			price = 98000;
			condition[] = {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"};
		};

		class d3s_e60_09_ACS5 {
			price = 184000;
			condition[] = {"life_playerlevel >= 27", "Niveau: 27<br/>Compétence: aucune"};
		};

		class d3s_e60_09_EX {
			price = 195000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};
	};

	class d3s_tahoe_08 {
		class d3s_tahoe_08 {
			price = 105000;
			condition[] = {"", ""};
		};

		class d3s_tahoe_ltz_08 {
			price = 138000;
			condition[] = {"life_playerlevel >= 21", "Niveau: 21<br/>Compétence: aucune"};
		};

		class d3s_tahoe_limited {
			price = 142000;
			condition[] = {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"};
		};

		class d3s_tahoe_EX {
			price = 145000;
			condition[] = {"life_playerlevel >= 24", "Niveau: 24<br/>Compétence: aucune"};
		};
	};

	class d3s_challenger_15 {
		class d3s_challenger_15 {
			price = 102000;
			condition[] = {"", ""};
		};

		class d3s_challenger_15_RT {
			price = 130000;
			condition[] = {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"};
		};

		class d3s_challenger_15_SP {
			price = 178000;
			condition[] = {"life_playerlevel >= 28", "Niveau: 28<br/>Compétence: aucune"};
		};

		class d3s_challenger_15_392 {
			price = 189000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class d3s_challenger_15_WIDE {
			price = 209000;
			condition[] = {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"};
		};

		class d3s_challenger_15_HELL {
			price = 227000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class d3s_challenger_15_DM {
			price = 340000;
			condition[] = {"life_playerlevel >= 41", "Niveau:41<br/>Compétence: aucune"};
		};

		class d3s_challenger_15_LW {
			price = 395000;
			condition[] = {"life_playerlevel >= 43", "Niveau: 43<br/>Compétence: aucune"};
		};
	};

	class d3s_charger_15 {
		class d3s_charger_15 {
			price = 114000;
			condition[] = {"", ""};
		};

		class d3s_srthellcat_15 {
			price = 182000;
			condition[] = {"life_playerlevel >= 27", "Niveau: 27<br/>Compétence: aucune"};
		};

		class d3s_srthellcat_15_HELL {
			price = 205000;
			condition[] = {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"};
		};
	};

	class d3s_raptor_17 {
		class d3s_raptor_17 {
			price = 112000;
			condition[] = {"", ""};
		};

		class d3s_raptor_SCR_17 {
			price = 155000;
			condition[] = {"life_playerlevel >= 38", "Niveau: 38<br/>Compétence: aucune"};
		};
	};

	class d3s_savana_VAN {
		class d3s_savana_VAN {
			price = 26000;
			condition[] = {"", ""};
		};

		class d3s_savana_05 {
			price = 28000;
			condition[] = {"", ""};
		};
	};

	class d3s_cherokee_18 {
		class d3s_cherokee_18 {
			price = 118000;
			condition[] = {"", ""};
		};

		class d3s_cherokee_18_LTD {
			price = 138000;
			condition[] = {"life_playerlevel >= 21", "Niveau: 21<br/>Compétence: aucune"};
		};

		class d3s_cherokee_18_TRCK {
			price = 152000;
			condition[] = {"life_playerlevel >= 24", "Niveau: 24<br/>Compétence: aucune"};
		};
	};

	class d3s_g350d_15 {
		class d3s_g350d_15 {
			price = 150000;
			condition[] = {"", ""};
		};

		class d3s_g500_35_15 {
			price = 71000;
			condition[] = {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"};
		};

		class d3s_g63amg_16 {
			price = 94000;
			condition[] = {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"};
		};

		class d3s_g63amg_463_16 {
			price = 98000;
			condition[] = {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"};
		};

		class d3s_g63amg_16_CE {
			price = 104000;
			condition[] = {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"};
		};

		class d3s_g65amg_16 {
			price = 160000;
			condition[] = {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"};
		};

		class d3s_g65amg_17_FINAL {
			price = 172000;
			condition[] = {"life_playerlevel >= 26", "Niveau: 26<br/>Compétence: aucune"};
		};

		class d3s_g65amg_Mansory {
			price = 178000;
			condition[] = {"life_playerlevel >= 27", "Niveau: 27<br/>Compétence: aucune"};
		};

		class d3s_g65amg_Mansory_2 {
			price = 182000;
			condition[] = {"life_playerlevel >= 27", "Niveau: 27<br/>Compétence: aucune"};
		};

		class d3s_g800_17 {
			price = 300000;
			condition[] = {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"};
		};

		class d3s_g850_17 {
			price = 425000;
			condition[] = {"life_playerlevel >= 43", "Niveau: 43<br/>Compétence: aucune"};
		};
	};

	class d3s_dawn_16 {
		class d3s_dawn_16 {
			price = 150000;
			condition[] = {"", ""};
		};

		class d3s_dawn_16_II {
			price = 160000;
			condition[] = {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"};
		};

		class d3s_dawn_16_III {
			price = 170000;
			condition[] = {"life_playerlevel >= 27", "Niveau: 27<br/>Compétence: aucune"};
		};
	};

	class d3s_wrx_17 {
		class d3s_wrx_17 {
			price = 60000;
			condition[] = {"", ""};
		};

		class d3s_wrx_17_FnF8 {
			price = 112000;
			condition[] = {"life_playerlevel >= 17", "Niveau: 17<br/>Compétence: aucune"};
		};

		class d3s_wrx_sti_17 {
			price = 134000;
			condition[] = {"life_playerlevel >= 21", "Niveau: 21<br/>Compétence: aucune"};
		};
	};

	class d3s_200_VX_16 {
		class d3s_200_VX_16 {
			price = 36000;
			condition[] = {"", ""};
		};

		class d3s_200_16 {
			price = 72000;
			condition[] = {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"};
		};

		class d3s_200_16_EX {
			price = 94000;
			condition[] = {"life_playerlevel >= 13", "Niveau: 13<br/>Compétence: aucune"};
		};
	};

	class d3s_e89_12 {
		class d3s_e89_12 {
			price = 42000;
			condition[] = {"", ""};
		};

		class d3s_e89_12_M {
			price = 96000;
			condition[] = {"life_playerlevel >= 14", "Niveau: 14<br/>Compétence: aucune"};
		};
	};

	class d3s_s560_18 {
		class d3s_s560_18 {
			price = 127000;
			condition[] = {"", ""};
		};

		class d3s_s560_sport_18 {
			price = 166000;
			condition[] = {"life_playerlevel >= 26", "Niveau: 26<br/>Compétence: aucune"};
		};

		class d3s_vv222_18 {
			price = 615000;
			condition[] = {"life_playerlevel >= 46", "Niveau: 46<br/>Compétence: aucune"};
		};

		class d3s_vv222_18_2 {
			price = 750000;
			condition[] = {"life_playerlevel >= 48", "Niveau: 48<br/>Compétence: aucune"};
		};
	};

	class d3s_Q7_15 {
		class d3s_Q7_15 {
			price = 172000;
			condition[] = {"", ""};
		};

		class d3s_Q7_15_D {
			price = 252000;
			condition[] = {"life_playerlevel >= 36", "Niveau: 36<br/>Compétence: aucune"};
		};
	};

	class d3s_e53_03_30 {
		class d3s_e53_03_30 {
			price = 97000;
			condition[] = {"", ""};
		};

		class d3s_e53_03_48 {
			price = 166000;
			condition[] = {"life_playerlevel >= 26", "Niveau: 26<br/>Compétence: aucune"};
		};

		class d3s_e53_03_EX {
			price = 194000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};
	};

	class d3s_f85_15_m {
		class d3s_f85_15_m {
			price = 106000;
			condition[] = {"", ""};
		};

		class d3s_f85_15 {
			price = 142000;
			condition[] = {"life_playerlevel >= 22", "Niveau: 22<br/>Compétence: aucune"};
		};

		class d3s_f85_15_EX {
			price = 198000;
			condition[] = {"life_playerlevel >= 32", "Niveau: 32<br/>Compétence: aucune"};
		};
	};

	class d3s_escalade_16 {
		class d3s_escalade_16 {
			price = 101000;
			condition[] = {"", ""};
		};

		class d3s_escalade_16_pt {
			price = 119000;
			condition[] = {"life_playerlevel >= 17", "Niveau: 17<br/>Compétence: aucune"};
		};
	};

	class d3s_levante_17 {
		class d3s_levante_17 {
			price = 131000;
			condition[] = {"", ""};
		};

		class d3s_levante_s_17 {
			price = 162000;
			condition[] = {"life_playerlevel >= 26", "Niveau: 26<br/>Compétence: aucune"};
		};

		class d3s_levante_s_17_mat {
			price = 212000;
			condition[] = {"life_playerlevel >= 32 && license_civ_mafia", "Niveau: 32<br/>Faction: Mafia"};
		};
	};

	class d3s_gl63amg_12 {
		class d3s_gl63amg_12 {
			price = 92000;
			condition[] = {"", ""};
		};

		class d3s_gl63amg_12_SE {
			price = 172000;
			condition[] = {"life_playerlevel >= 26 && license_civ_mafia", "Niveau: 26<br/>Faction: Mafia"};
		};
	};

	class d3s_trailcat_17 {
		class d3s_trailcat_17 {
			price = 76000;
			condition[] = {"", ""};
		};

		class d3s_trailcat_17_sahara {
			price = 92000;
			condition[] = {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"};
		};

		class d3s_trailcat_17_M {
			price = 116000;
			condition[] = {"life_playerlevel >= 17", "Niveau: 17<br/>Compétence: aucune"};
		};
	};

	class d3s_is_16 {
		class d3s_is_16 {
			price = 11000;
			condition[] = {"", ""};
		};

		class d3s_is_16_1 {
			price = 17000;
			condition[] = {"", ""};
		};

		class d3s_is_f_16 {
			price = 66000;
			condition[] = {"life_playerlevel >= 4", "Niveau: 4<br/>Compétence: aucune"};
		};

		class d3s_is_16_SE {
			price = 191000;
			condition[] = {"life_playerlevel >= 30 && license_civ_mafia", "Niveau: 30<br/>Faction: Mafia"};
		};
	};

	class d3s_avalon_18 {
		class d3s_avalon_18 {
			price = 10000;
			condition[] = {"", ""};
		};

		class d3s_avalon_18_LTD {
			price = 124000;
			condition[] = {"life_playerlevel >= 18", "Niveau: 18<br/>Compétence: aucune"};
		};

		class d3s_avalon_18_SE {
			price = 270000;
			condition[] = {"life_playerlevel >= 37", "Niveau: 37<br/>Compétence: aucune"};
		};

		class d3s_avalon_18_night {
			price = 285000;
			condition[] = {"life_playerlevel >= 39", "Niveau: 39<br/>Compétence: aucune"};
		};
	};

};