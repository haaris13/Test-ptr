/*
	Config CfgResourceZones

	Autor: IronBlade

*/
class CfgResourceZones {

	//Gather fields
	class cannesucre {
		zone[] = {"cannesucre_1_george_town", "cannesucre_2_george_town","cannesucre_tanouka"};
		zoneSize = 30;
		zoneItems[] = {"cannesucre",2};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {50,1};
		illegal = false;
	};

	class cacao {
		zone[] = {"cacao_field_larochelle","cacao_3"};
		zoneSize = 30;
		zoneItems[] = {"cacao",4};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {50,1};
		illegal = false;
	};

	class banane {
		zone[] = {"banane_1","banane_2","banane_3","banane_4","banane_5","banane_6","banane_7","banane_8","banane_9","banane_10"};
		zoneSize = 30;
		zoneItems[] = {"banane",1};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {20,1};
		illegal = false;
	};

	// Illegal
	class marijuana {
		zone[] = {"marijuana_1"};
		zoneSize = 30;
		zoneItems[] = {"cannabis",1};
		zoneProf = "prof_narcos";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = true;
		particle = "LeavesFall";
	};

	class mauiwaui {
		zone[] = {"mauiwaui_1"};
		zoneSize = 30;
		zoneItems[] = {"mauiwaui_unprocessed",1};
		zoneProf = "prof_narcos";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {300,5};
		illegal = true;
		particle = "LeavesFall";
	};

	class purple {
		zone[] = {"purple_1"};
		zoneSize = 30;
		zoneItems[] = {"purple_unprocessed",1};
		zoneProf = "prof_narcos";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {600,5};
		illegal = true;
		particle = "LeavesFall";
	};

	class strawberry {
		zone[] = {"straw_1"};
		zoneSize = 30;
		zoneItems[] = {"strawberry_unprocessed",1};
		zoneProf = "prof_narcos";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {800,5};
		illegal = true;
		particle = "LeavesFall";
	};

	//Mines

	class tin {
		zone[] = {"tin_1"};
		zoneSize = 30;
		zoneItems[] = {"tin_ore",1};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {50,5};
		illegal = false;
	};

	class copper {
		zone[] = {"copper_1"};
		zoneSize = 30;
		zoneItems[] = {"copper_unrefined",1};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {150,5};
		illegal = false;
	};

	class iron {
		zone[] = {"iron_1"};
		zoneSize = 30;
		zoneItems[] = {"iron_unrefined",1};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {250,5};
		illegal = false;
	};

	class chromium {
		zone[] = {"chromium_1"};
		zoneSize = 30;
		zoneItems[] = {"chromium_ore",1};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {350,5};
		illegal = false;
	};

	class aluminium {
		zone[] = {"aluminium_1"};
		zoneSize = 30;
		zoneItems[] = {"aluminium_ore",1};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {550,5};
		illegal = false;
	};
	
	class nickel {
		zone[] = {"nickel_1"};
		zoneSize = 30;
		zoneItems[] = {"nickel_ore",1};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {750,5};
		illegal = false;
	};

	class gold {
		zone[] = {"gold_1"};
		zoneSize = 30;
		zoneItems[] = {"gold_ore",1};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {950,5};
		illegal = false;
	};

	// Shovel

	class archeTer {
		zone[] = {"arche_ter_1"};
		zoneSize = 30;
		zoneItems[] = {"archeTOssements",1};
		zoneProf = "prof_arche";
		zoneType = "shovel";
		inWater = 0;
		zoneExp[] = {50,5};
		illegal = false;
	};

	class archeSous {
		zone[] = {"arche_sous_1"};
		zoneSize = 30;
		zoneItems[] = {"archeSVin",1};
		zoneProf = "prof_arche";
		zoneType = "shovel";
		inWater = 1;
		zoneExp[] = {50,5};
		illegal = false;
	};

	// Axe

	class pin {
		zone[] = {"bois_parc_1"};
		zoneSize = 30;
		zoneItems[] = {"pin",1};
		zoneProf = "";
		zoneType = "axe";
		inWater = 0;
		zoneExp[] = {50,5};
		illegal = false;
	};

	// Contrebande

	class tombe {
		zone[] = {"tombe_1","tombe_2","tombe_3","tombe_4","tombe_5","tombe_6","tombe_7","tombe_8","tombe_9","tombe_10","tombe_11","tombe_12","tombe_13"};
		zoneSize = 30;
		zoneItems[] = {"gravesWatch",2};
		zoneProf = "prof_contrebande";
		zoneType = "shovel";
		inWater = 0;
		zoneExp[] = {50,2};
		illegal = true;
	};
	
	class serpent_field {
		zone[] = {"serpent_1"};
		zoneSize = 30;
		zoneItems[] = {"serpent",1};
		zoneProf = "prof_contrebande";
		zoneType = "cut";
		inWater = 0;
		zoneExp[] = {200,5};
		illegal = true;
	};

	class kaori {
		zone[] = {"bois_tropical_1"};
		zoneSize = 30;
		zoneItems[] = {"kaori",1};
		zoneProf = "prof_contrebande";
		zoneType = "axe";
		inWater = 0;
		zoneExp[] = {500,5};
		illegal = true;
	};

	class temple {
		zone[] = {"temple_fouille_1","temple_fouille_2","temple_fouille_3"};
		zoneSize = 15;
		zoneItems[] = {"templeBones",1};
		zoneProf = "prof_mining";
		zoneType = "shovel";
		inWater = 0;
		zoneExp[] = {50,5};
		illegal = true;
	};
};