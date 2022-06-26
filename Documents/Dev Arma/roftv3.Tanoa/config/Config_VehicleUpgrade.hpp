/*
	Config CfgVehicleUpgrade

	Autor: IronBlade
*/

class CfgVehicleUpgrade {

	class O_Truck_03_transport_F {	//	Tempest

		class O_Truck_03_transport_F {
			price = 1000000;
			condition[] = {"life_playerlevel >= 20", "Niveau: 20<br/>Compétence: aucune"};
		};

		class O_Truck_03_covered_F {
			price = 1500000;
			condition[] = {"life_playerlevel >= 25", "Niveau: 25<br/>Compétence: aucune"};
		};

		class O_Truck_03_repair_F {
			price = 2000000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class O_Truck_03_device_F {
			price = 2500000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class O_Truck_03_ammo_F {
			price = 3000000;
			condition[] = {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"};
		};

		class O_Truck_03_fuel_F {
			price = 4000000;
			condition[] = {"life_playerlevel >= 30 && prof_livraison >= 300", "Niveau: 30<br/>Niveau livraison: 300"};
		};
	};

	class I_Truck_02_transport_F {	//	Zamak CIVIL

		class I_Truck_02_transport_F {
			price = 600000;
			condition[] = {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"};
		};

		class I_Truck_02_covered_F {
			price = 750000;
			condition[] = {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"};
		};

		class I_Truck_02_ammo_F {
			price = 900000;
			condition[] = {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"};
		};

		class I_Truck_02_fuel_F {
			price = 1100000;
			condition[] = {"life_playerlevel >= 18 && prof_livraison >= 60", "Niveau: 18<br/>Niveau livraison: 60"};
		};
	};

	class O_Truck_02_transport_F {	//	Zamak REBEL

		class O_Truck_02_transport_F {
			price = 300000;
			condition[] = {"life_playerlevel >= 8", "Niveau: 8<br/>Compétence: aucune"};
		};

		class O_Truck_02_covered_F {
			price = 375000;
			condition[] = {"life_playerlevel >= 12", "Niveau: 12<br/>Compétence: aucune"};
		};

		class O_Truck_02_ammo_F {
			price = 450000;
			condition[] = {"life_playerlevel >= 15", "Niveau: 15<br/>Compétence: aucune"};
		};

		class O_Truck_02_fuel_F {
			price = 475000;
			condition[] = {"life_playerlevel >= 18 && prof_livraison >= 60", "Niveau: 18<br/>Niveau livraison: 60"};
		};
	};

	class C_Van_01_transport_F {	//	Van CIVIL

		class C_Van_01_transport_F {
			price = 240000;
			condition[] = {"life_playerlevel >= 3", "Niveau: 3<br/>Compétence: aucune"};
		};

		class C_Van_01_box_F {
			price = 280000;
			condition[] = {"life_playerlevel >= 5", "Niveau: 5<br/>Compétence: aucune"};
		};

		class C_Van_01_fuel_F {
			price = 410000;
			condition[] = {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"};
		};
	};

	class O_G_Van_01_transport_F {	//	Van REBEL

		class  O_G_Van_01_transport_F {
			price = 120000;
			condition[] = {"", ""};
		};

		class C_Van_01_box_red_F {
			price = 180000;
			condition[] = {"", ""};
		};

		class  O_G_Van_01_fuel_F {
			price = 135000;
			condition[] = {"", ""};
		};
	};

	class C_Hatchback_01_F {	//	Hayon

		class C_Hatchback_01_F {
			price = 36000;
			condition[] = {"", ""};
		};

		class C_Hatchback_01_sport_F {
			price = 150000;
			condition[] = {"life_playerlevel >= 6", "Niveau: 6<br/>Compétence: aucune"};
		};
	};

	class O_Heli_Transport_04_F {	//	Taru

		class O_Heli_Transport_04_F {
			price = 3000000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class O_Heli_Transport_04_bench_F {
			price = 4000000;
			condition[] = {"life_playerlevel >= 35", "Niveau: 35<br/>Compétence: aucune"};
		};

		class O_Heli_Transport_04_covered_F {
			price = 6000000;
			condition[] = {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"};
		};

		class O_Heli_Transport_04_box_F {
			price = 6000000;
			condition[] = {"life_playerlevel >= 100", "Niveau: 100<br/>Compétence: aucune"};
		};

		class O_Heli_Transport_04_fuel_F {
			price = 6000000;
			condition[] = {"life_playerlevel >= 45 && prof_livraison >= 600", "Niveau: 45<br/>Niveau livraison: 600"};
		};
	};

	class C_Offroad_01_F {	//	Pick-up armé

		class B_G_Offroad_01_F {
			price = 60000;
			condition[] = {"", ""};
		};

		class B_G_Offroad_01_armed_F {
			price = 400000;
			condition[] = {"life_playerlevel >= 40 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_insurge", "Niveau: 40<br/>Compétence: Véhicules armés"};
		};
	};

	class O_T_LSV_02_unarmed_F {	//	Qilin armé

		class O_T_LSV_02_unarmed_F {
			price = 240000;
			condition[] = {"", ""};
		};

		class O_T_LSV_02_armed_F {
			price = 600000;
			condition[] = {"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_insurge", "Niveau: 50<br/>Compétence: Véhicules armés"};
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
			condition[] = {"life_playerlevel >= 50 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_insurge", "Niveau: 50<br/>Compétence: Véhicules armés"};
		};
	};

	class Sab_A2_An2 {	//	AN-2 REBEL

		class Sab_A2_An2 {
			price = 750000;
			condition[] = {"life_playerlevel >= 30", "Niveau: 30<br/>Compétence: aucune"};
		};

		class Sab_Sea3_An2 {
			price = 1000000;
			condition[] = {"life_playerlevel >= 40", "Niveau: 40<br/>Compétence: aucune"};
		};

		class Sab_An2_o {
			price = 2000000;
			condition[] = {"life_playerlevel >= 40 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_insurge", "Niveau: 40<br/>Compétence: Véhicules armés"};
		};

		class Sab_An2_o_VA_V {
			price = 2500000;
			condition[] = {"life_playerlevel >= 45 && ['vehiclesweapons'] call life_fnc_hasPerk && license_civ_insurge", "Niveau: 45<br/>Compétence: Véhicules armés"};
		};
	};
};