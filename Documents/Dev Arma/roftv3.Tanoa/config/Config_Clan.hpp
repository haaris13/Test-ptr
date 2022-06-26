/*
	Config for Clan System

	Autor: IronBlade
*/
class CfgClan {

	taxeBaseMoney = 15;
	taxeBaseXP = 15;

	class Building {
		class Land_Hotel_02_F {

			price = 4000000;

			chestPos[] = {3.52612,0.770996,1.0655};

			spawnPos[] = {1.00488,0.928711,-4.54055};

			prefixMark = "clan_Land_Hotel_02_F_";

			garagePos[] = {6.61572,6.92188,-0.68114};
 
            dirGarage = 90.8595;
		};
	};

	class Rank {

		class level_1 {
			level = 1;

			displayName = "Membre 1";

			canDo[] = {"spawn"};
		};

		class level_2 {
			level = 2;

			displayName = "Membre 2";

			canDo[] = {"garageTake","storeMoney","storeItem","spawn"};
		};

		class level_3 {
			level = 3;

			displayName = "Membre 3";

			canDo[] = {"garageTake","garageStore","storeMoney","takeItem","storeItem","spawn","promotePlayer"};

			canPromote[] = {1};
		};

		class level_4 {
			level = 4;

			displayName = "Bras Droit";

			canDo[] = {"garageTake","garageStore", "modifyTaxeXP", "modifyTaxeMoney", "takeMoney", "storeMoney", "takeItem", "storeItem","accessInv","spawn","promotePlayer","kickPlayer"};

			canPromote[] = {1, 2, 3, 4};
		};

		class level_5 {
			level = 5;

			displayName = "Baron";

			canDo[] = {"garageTake","garageStore","modifyTaxeXP","modifyTaxeMoney","takeMoney","storeMoney","takeItem","storeItem","upgradeClan","accessInv","spawn","promotePlayer","kickPlayer","patron"};

			canPromote[] = {1, 2, 3, 4, 5};
		};
	};

	class Right {
		class garageTake { displayName = "Prendre un Véhicule."; };
		class garageStore { displayName = "Ranger un Véhicule."; };
		class modifyTaxeXP { displayName = "Modifier Taxe Xp."; };
		class modifyTaxeMoney { displayName = "Modifier Taxe Argent."; };
		class takeMoney { displayName = "Prendre Argent."; };
		class storeMoney { displayName = "Déposer Argent."; };
		class takeItem { displayName = "Prendre un Objet."; };
		class storeItem { displayName = "Déposer un Objet."; };
		class upgradeGang { displayName = "Améliorer le Clan."; };
		class accessInv { displayName = "Acceder au Matériel du Coffre."; };
		class spawn { displayName = "Apparaitre dans la Maison."; };
		class kickPlayer { displayName = "Expulser un Membre du Clan."; };
		class promotePlayer { displayName = "Modifier le Grade d'un Membre"; };
		class upgradeClan { displayName = "Améliorer le Clan."; };
		class patron { displayName = "Chef de Clan."; };
	};

	class Upgrade {

		class level_0 {
			level = 0;
			garageNb = 0;

			maxMembers = 5;
		};

		class level_1 {
			level = 1;
			garageNb = 1;

			classChest = "Box_IND_Support_F";
			trunk = 800;

			price = 100000;
			needLevel = 5;

			maxMembers = 10;
		};

		class level_2 {
			level = 2;
			garageNb = 2;

			classChest = "Box_IND_Support_F";
			trunk = 1500;

			price = 250000;
			needLevel = 10;

			maxMembers = 15;
		};

		class level_3 {
			level = 3;
			garageNb = 4;

			classChest = "Box_IND_Wps_F";
			trunk = 2500;

			price = 400000;
			needLevel = 15;

			maxMembers = 20;
		};
		
		class level_4 {
			level = 4;
			garageNb = 6;

			classChest = "Box_IND_Wps_F";
			trunk = 4000;

			price = 800000;
			needLevel = 20;

			maxMembers = 25;
		};
		
		class level_5 {
			level = 5;
			garageNb = 8;

			classChest = "Box_IND_WpsLaunch_F";
			trunk = 5500;
			

			price = 1000000;
			needLevel = 25;

			maxMembers = 30;
		};
		
		class level_6 {
			level = 6;
			garageNb = 10;

			classChest = "Box_IND_WpsLaunch_F";
			trunk = 6500;

			price = 1150000;
			needLevel = 30;

			maxMembers = 35;
		};
		
		class level_7 {
			level = 7;
			garageNb = 15;

			classChest = "Box_IND_WpsSpecial_F";
			trunk = 7500;

			price = 1250000;
			needLevel = 35;

			maxMembers = 40;
		};
		
		class level_8 {
			level = 8;
			garageNb = 20;

			classChest = "Box_IND_WpsSpecial_F";
			trunk = 9000;

			price = 1500000;
			needLevel = 40;

			maxMembers = 45;
		};
		
		class level_9 {
			level = 9;
			garageNb = 25;

			classChest = "O_supplyCrate_F";
			trunk = 11000;
			

			price = 2000000;
			needLevel = 45;

			maxMembers = 50;
		};
		
		class level_10 {
			level = 10;
			garageNb = 30;

			classChest = "I_CargoNet_01_ammo_F";
			trunk = 15000;

			price = 4000000;
			needLevel = 50;

			maxMembers = 60;
		};
	};
};