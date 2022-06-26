/*
	Config for Hide Object in Vehicles

	
*/

class CfgVehicleCaches {

	class wheels {

		index = 0;
		
		timeOpen = 3;

		displayName = "Roues";

		condition[] = {"life_playerlevel >= 10",""};

		pdetecte = 30;

		xpCost = 150;
	};


	class seat {

		index = 1;
		
		timeOpen = 5;

		displayName = "Sièges";

		condition[] = {"life_playerlevel >= 15",""};

		pdetecte = 25;

		xpCost = 200;
	};

	class fauxplancher {

		index = 2;
		
		timeOpen = 7;

		displayName = "Faux plancher";

		condition[] = {"life_playerlevel >= 25",""};

		pdetecte = 20;

		xpCost = 250;
	};

	class carrosserie {

		index = 3;
		
		timeOpen = 8;

		displayName = "Carrosserie";

		condition[] = {"life_playerlevel >= 40",""};

		pdetecte = 15;

		xpCost = 300;
	};

	class ailes {

		index = 4;
		
		timeOpen = 10;

		displayName = "Ailes";

		condition[] = {"life_playerlevel >= 40",""};

		pdetecte = 15;

		xpCost = 350;
	};
};

class CfgVehicleDem {

	class C_Offroad_01_F {
		anims[] = {
				{"HideDoor1",1},
	            {"HideDoor2",1},
	            {"HideDoor3",1},
	            {"HideBackpacks",1},
	            {"HideBumper2",1},
	            {"HideConstruction",1}
		};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1}
		};
	};

	class B_Quadbike_01_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1}
		};
	};

	class C_Hatchback_01_F {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class C_SUV_01_F {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1},
			{"glass5", 1},
			{"glass6", 1}
		};
	};

	class C_Offroad_02_unarmed_F {
		anims[] = {
			{"HideLeftDoor",1},
            {"HideRightDoor",1},
            {"HideRearDoor",1},
            {"HideBullbar",1},
            {"HideFenders",1},
            {"HideHeadSupportFront",1},
            {"HideHeadSupportRear",1},
            {"HideRollcage",1},
            {"HideSpareWheel",1}
	   	};

		hits[] = {
			{"engine_hitpoint", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1}
		};
	};

	class C_Kart_01_F {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1}
		};
	};

	class C_Van_01_box_F {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class C_Offroad_01_repair_F {
		anims[] = {
			{"HideDoor1",1},
            {"HideDoor2",1},
            {"HideDoor3",1},
            {"HideBackpacks",1},
            {"HideBumper2",1},
            {"HideConstruction",1}
   		};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1}
		};
	};

	class O_Truck_03_fuel_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_3_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class C_Van_01_transport_F {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class I_Truck_02_transport_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_3_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class I_Truck_02_covered_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_3_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class B_T_LSV_01_unarmed_F {
		anims[] = {
	        {"HideDoor1",1},
	        {"HideDoor2",1},
	        {"HideDoor3",1},
	        {"HideDoor4",1}
	    };

		hits[] = {
			{"engine_hitpoint", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class B_G_Offroad_01_armed_F {
		anims[] = {
				{"HideDoor1",1},
	            {"HideDoor2",1},
	            {"HideDoor3",1},
	            {"HideBackpacks",1},
	            {"HideBumper2",1},
	            {"HideConstruction",1}
	   	};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1}
		};
	};

	class B_MRAP_01_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1}
		};
	};

	class B_T_LSV_01_armed_F {
		anims[] = {
	        {"HideDoor1",1},
	        {"HideDoor2",1},
	        {"HideDoor3",1},
	        {"HideDoor4",1}
	    };

		hits[] = {
			{"engine_hitpoint", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class I_MRAP_03_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1},
			{"glass5", 1}
		};
	};

	class O_Truck_03_repair_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_1_3_steering", 1},
			{"wheel_2_3_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class C_Hatchback_01_sport_F {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class B_Truck_01_mover_F {
			anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_1_3_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_4_steering", 1},
			{"wheel_2_4_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class B_Truck_01_covered_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_1_3_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_4_steering", 1},
			{"wheel_2_4_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class B_Truck_01_ammo_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_1_3_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_4_steering", 1},
			{"wheel_2_4_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class B_Truck_01_box_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_1_3_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_4_steering", 1},
			{"wheel_2_4_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class B_Truck_01_transport_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_1_3_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_4_steering", 1},
			{"wheel_2_4_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class O_Truck_03_transport_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_3_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class O_Truck_03_covered_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_3_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class O_Truck_03_ammo_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_3_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};

	class O_Truck_03_device_F {
		anims[] = {};

		hits[] = {
			{"motor", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"wheel_2_3_steering", 1},
			{"wheel_1_3_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1}
		};
	};
	// Add by Hazthael //
	class AlessioRS4Gofast {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1},
			{"glass5", 1},
			{"glass6", 1}
		};
	};
	class AlessioRS5Gofast {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1},
			{"glass5", 1},
			{"glass6", 1}
		};
	};
	class AlessioM5Gofast {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1},
			{"glass5", 1},
			{"glass6", 1}
		};
	};
	class AlessioMustangGofast {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1},
			{"glass5", 1},
			{"glass6", 1}
		};
	};
	class AlessioC63Black {
		anims[] = {};

		hits[] = {
			{"engine", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_1_steering", 1},
			{"wheel_1_2_steering", 1},
			{"wheel_2_1_steering", 1},
			{"wheel_2_2_steering", 1},
			{"glass1", 1},
			{"glass2", 1},
			{"glass3", 1},
			{"glass4", 1},
			{"glass5", 1},
			{"glass6", 1}
		};
	};
};