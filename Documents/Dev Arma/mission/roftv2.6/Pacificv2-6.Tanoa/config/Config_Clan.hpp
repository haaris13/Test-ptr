/*
	Config for Clan System

	Autor: IronBlade
*/
class CfgClan {

	taxeBaseMoney = 0;
	taxeBaseXP = 15;

	class Building {
		class Land_Hotel_02_F {

			price = 400000;

			chestPos[] = {-1.85059,14.2617,-3.46571};

			spawnPos[] = {1.00488,0.928711,-4.54055};

			prefixMark = "clan_Land_Hotel_02_F_";
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

			canDo[] = {"garageTake","storeMoney","takeItem","storeItem","spawn","promotePlayer"};

			canPromote[] = {1};
		};

		class level_4 {
			level = 4;

			displayName = "Bras Droit";

			canDo[] = {"garageTake", "modifyTaxeXP", "takeMoney", "storeMoney", "takeItem", "storeItem","accessInv","spawn","promotePlayer","kickPlayer"};

			canPromote[] = {1, 2, 3, 4};
		};

		class level_5 {
			level = 5;

			displayName = "Baron";

			canDo[] = {"garageTake","garageStore","modifyTaxeXP","takeMoney","storeMoney","takeItem","storeItem","upgradeClan","accessInv","spawn","promotePlayer","kickPlayer"};

			canPromote[] = {1, 2, 3, 4, 5};
		};
	};

	class Right {
		class garageTake { displayName = "Prendre un véhicule."; };
		class garageStore { displayName = "Ranger un véhicule."; };
		class modifyTaxeXP { displayName = "Modifier Taxe Xp."; };
		class modifyTaxeMoney { displayName = "Modifier Taxe Argent."; };
		class takeMoney { displayName = "Prendre Argent."; };
		class storeMoney { displayName = "Déposer Argent."; };
		class takeItem { displayName = "Prendre un Objet."; };
		class storeItem { displayName = "Déposer un Objet."; };
		class upgradeGang { displayName = "Améliorer le Clan."; };
		class accessInv { displayName = "Accéder au matériel Militaire."; };
		class spawn { displayName = "Apparaître dans la Maison."; };
		class kickPlayer { displayName = "Expulser un Membre du Clan."; };
		class promotePlayer { displayName = "Modifier le Grade d'un Membre"; };
		class upgradeClan { displayName = "Améliorer le Clan."; };
	};

	class Upgrade {

		class level_0 {
			level = 0;
			garageNb = 0;
			maxBank = 20000;

			maxMembers = 5;
		};

		class level_1 {
			level = 1;
			needLevel = 5;

			garageNb = 3;

			classChest = "Box_IND_Support_F";
			trunk = 800;

			maxBank = 50000;
			price = 50000;


			maxMembers = 6;
		};

		class level_2 {
			level = 2;
			garageNb = 5;

			classChest = "Box_IND_Support_F";
			trunk = 1000;
			maxBank = 55000;

			price = 80000;
			needLevel = 10;

			maxMembers = 8;
		};

		class level_3 {
			level = 3;
			garageNb = 6;

			classChest = "Box_IND_Wps_F";
			trunk = 1200;
			maxBank = 60000;

			price = 110000;
			needLevel = 15;

			maxMembers = 10;
		};
		
		class level_4 {
			level = 4;
			garageNb = 7;

			classChest = "Box_IND_Wps_F";
			trunk = 1400;
			maxBank = 70000;

			price = 140000;
			needLevel = 20;

			maxMembers = 12;
		};
		
		class level_5 {
			level = 5;
			garageNb = 9;

			classChest = "Box_IND_WpsLaunch_F";
			trunk = 1600;
			maxBank = 80000;
			

			price = 190000;
			needLevel = 25;

			maxMembers = 15;
		};
		
		class level_6 {
			level = 6;
			garageNb = 11;

			classChest = "Box_IND_WpsLaunch_F";
			trunk = 1800;
			maxBank = 90000;

			price = 250000;
			needLevel = 30;

			maxMembers = 17;
		};
		
		class level_7 {
			level = 7;
			garageNb = 13;

			classChest = "Box_IND_WpsSpecial_F";
			trunk = 2000;
			maxBank = 100000;

			price = 320000;
			needLevel = 35;

			maxMembers = 20;
		};
		
		class level_8 {
			level = 8;
			garageNb = 17;

			classChest = "Box_IND_WpsSpecial_F";
			trunk = 2500;
			maxBank = 120000;

			price = 440000;
			needLevel = 40;

			maxMembers = 25;
		};
		
		class level_9 {
			level = 9;
			garageNb = 24;

			classChest = "O_supplyCrate_F";
			trunk = 3000;
			maxBank = 150000;
			

			price = 640000;
			needLevel = 45;

			maxMembers = 35;
		};
		
		class level_10 {
			level = 10;
			garageNb = 32;

			classChest = "I_CargoNet_01_up2_F";
			trunk = 4000;
			maxBank = 200000;

			price = 900000;
			needLevel = 50;

			maxMembers = 40;
		};
	};
};