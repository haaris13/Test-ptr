/*
	Config CfgResourceZones
	alharis

*/
class CfgResourceZones {

	//Gather fields
	class pepite {
		zone[] = {"prison"};
		zoneSize = 30;
		zoneItems[] = {"pepite",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {0,0};
		illegal = false;
	};
	class mais {
		zone[] = {"mais_1","mais_2","mais_3","mais_4"};
		zoneSize = 30;
		zoneItems[] = {"mais",12};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};
	class cannesucre {
		zone[] = {"cannesucre_1", "cannesucre_2"};
		zoneSize = 30;
		zoneItems[] = {"sucrecanne",8};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};
	class raisin {
		zone[] = {"raisin_1","raisin_2","raisin_3","raisin_4","raisin_5"};
		zoneSize = 30;
		zoneItems[] = {"raisin",12};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};
	class apple {
		zone[] = { "apple_1", "apple_2"};
		zoneSize = 30;
		zoneItems[] = {"apple",12};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};
    class peach {
		zone[] = { "peaches_1","peaches_2"};
		zoneSize = 30;
		zoneItems[] = {"peach",12};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

    class coco {
		zone[] = { "coco_1", "coco_2" };
		zoneSize = 30;
		zoneItems[] = {"coco",12};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};


	class cacao {
		zone[] = {"cacao_1"};
		zoneSize = 30;
		zoneItems[] = {"cacao",12};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class banane {
		zone[] = {"banane_1","banane_2"};
		zoneSize = 30;
		zoneItems[] = {"banane",8};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class riz {
		zone[] = {"riz_1"};
		zoneSize = 50;
		zoneItems[] = {"riz",12};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};
	
	class pomdeterre {
		zone[] = {"pterre_1"};
		zoneSize = 50;
		zoneItems[] = {"pomdeterre",8};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class tabac {
		zone[] = {"tabac_1"};
		zoneSize = 50;
		zoneItems[] = {"tabac",8};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class zone_sandpile {
        zone[] = {"zone_sandpile"};
        zoneSize = 30;
        zoneItems[] = {"Farm_Sandpile",8};
        zoneProf = "prof_agricole";
		zoneType = "gather";
        inWater = 0;
        zoneExp[] = {100,5};
        illegal = false;
    };

	// illegal

	class weed {
		zone[] = {"weed_1"};
		zoneSize = 40;
		zoneItems[] = {"cannabis",3};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {150,5};
		illegal = true;
		particle = "LeavesFall";
	};

	class heroin {
		zone[] = {"heroin_1"};
		zoneSize = 40;
		zoneItems[] = {"heroin_unprocessed",3};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {150,5};
		illegal = true;
		particle = "LeavesFall";
	};

	class cocaine {
		zone[] = {"cocaine_1"};
		zoneSize = 40;
		zoneItems[] = {"cocaine_unprocessed",3};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {150,10};
		illegal = true;
		particle = "LeavesFall";
	};
	
	class khat {
		zone[] = {"khat_1"};
		zoneSize = 40;
		zoneItems[] = {"khat_unprocessed",3};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {150,5};
		illegal = true;
		particle = "LeavesFall";
	};

	class strawberry {
		zone[] = {"straw_1"};
		zoneSize = 40;
		zoneItems[] = {"strawberry_unprocessed",3};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {150,5};
		illegal = true;
		particle = "LeavesFall";
	};

	
	class datura {
		zone[] = {"dat_1"};
		zoneSize = 40;
		zoneItems[] = {"datura_unprocessed",3};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {150,5};
		illegal = true;
		particle = "LeavesFall";
	};

	class uranium {
		zone[] = {"ura_1"};
		zoneSize = 30;
		zoneItems[] = {"uranium_unprocessed",3};
		zoneProf = "prof_gathering";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {150,5};
		illegal = true;
		particle = "";
	};

	//Mines

	class graphite {
		zone[] = {"graphite_1"};
		zoneSize = 40;
		zoneItems[] = {"graphite_ore",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class copper {
		zone[] = {"copper_mine"};
		zoneSize = 40;
		zoneItems[] = {"copper_unrefined",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class aluminum {
		zone[] = {"aluminum_1"};
		zoneSize = 40;
		zoneItems[] = {"aluminum_unrefined",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class tin {
		zone[] = {"tin_1"};
		zoneSize = 40;
		zoneItems[] = {"tin_ore",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {150,10};
		illegal = false;
	};

	class silver {
		zone[] = {"silver_1"};
		zoneSize = 40;
		zoneItems[] = {"silver_ore",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class iron {
		zone[] = {"iron_1"};
		zoneSize = 40;
		zoneItems[] = {"iron_unrefined",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class rhodium {
		zone[] = {"rhodium_1"};
		zoneSize = 40;
		zoneItems[] = {"rhodium_ore",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class platinum {
		zone[] = {"platinum_1"};
		zoneSize = 40;
		zoneItems[] = {"platinum_ore",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};
	
	class iridium {
		zone[] = {"iridium_1"};
		zoneSize = 40;
		zoneItems[] = {"iridium_ore",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class gold {
		zone[] = {"gold_1"};
		zoneSize = 40;
		zoneItems[] = {"gold_ore",4};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	// Shovel

	class temple {
		zone[] = {"temple_fouille_1","temple_fouille_2","temple_fouille_3"};
		zoneSize = 20;
		zoneItems[] = {"templeBones",1};
		zoneProf = "prof_gathering";
		zoneType = "shovel";
		inWater = 0;
		zoneExp[] = {50,5};
		illegal = true;
	};

	class tombe {
		zone[] = {"tombe_1","tombe_2","tombe_3","tombe_4","tombe_5","tombe_6","tombe_7","tombe_8","tombe_9","tombe_10"};
		zoneSize = 50;
		zoneItems[] = {"gravesWatch",2};
		zoneProf = "prof_gathering";
		zoneType = "shovel";
		inWater = 0;
		zoneExp[] = {50,2};
		illegal = true;
	};

	class archeTer {
		zone[] = {"arche_ter_1"};
		zoneSize = 40;
		zoneItems[] = {"archeTOssements",2};
		zoneProf = "prof_mining";
		zoneType = "shovel";
		inWater = 0;
		zoneExp[] = {50,5};
		illegal = false;
	};

	class archeSous {
		zone[] = {"arche_sous_1"};
		zoneSize = 40;
		zoneItems[] = {"archeSVin",1};
		zoneProf = "prof_mining";
		zoneType = "shovel";
		inWater = 1;
		zoneExp[] = {50,5};
		illegal = false;
	};

	// Axe

	class boisTro {
		zone[] = {"bois_tropical_1","bois_tropical_2","bois_tropical_3"};
		zoneSize = 40;
		zoneItems[] = {"tropical",3};
		zoneProf = "prof_mining";
		zoneType = "axe";
		inWater = 0;
		zoneExp[] = {50,5};
		illegal = false;
	};

	class boisParc {
		zone[] = {"bois_parc_1","bois_parc_2","bois_parc_3","bois_parc_4","bois_parc_5"};
		zoneSize = 40;
		zoneItems[] = {"parc",3};
		zoneProf = "prof_gathering";
		zoneType = "axe";
		inWater = 0;
		zoneExp[] = {50,5};
		illegal = true;
	};
    //gems entreprise
	class grenat_uncut {
		zone[] = {"grenat_1"};
		zoneSize = 40;
		zoneItems[] = {"grenat_uncuts",3};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class ent_bismuth {
        zone[] = {"ent_bismuth"};
        zoneSize = 40;
        zoneItems[] = {"bismuthP",3};
        zoneProf = "prof_mining";
        zoneType = "mine";
        inWater = 0;
        zoneExp[] = {100,5};
        illegal = false;
    };

	class ent_carriere {
		zone[] = {"ent_carriere"};
		zoneSize = 40;
		zoneItems[] = {"rock",3};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

		class res_sciage {
		zone[] = {"res_sciage"};
		zoneSize = 40;
		zoneItems[] = {"res_sciage",3};
		zoneProf = "prof_mining";
		zoneType = "axe";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class diamondUncut {
		zone[] = {"diamant_1"};    // EMMETT => Actu ici
		zoneSize = 40;
		zoneItems[] = {"diamond_uncuts",3};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};
	
	class crevettes {
		zone[] = {"crevettes_1"};
		zoneSize = 20;
		zoneItems[] = {"crevettes",6};
		zoneProf = "prof_agricole";
		zoneType = "filet";
		inWater = 0;
		zoneExp[] = {150,5};
		illegal = false;
	};

	// Cut

	class serpent {
		zone[] = {"serpent_1", "serpent33"};
		zoneSize = 40;
		zoneItems[] = {"serpent",4};
		zoneProf = "prof_gathering"; //origin prof_mining
		zoneType = "cut";
		inWater = 0;
		zoneExp[] = {100,10};
		illegal = true;
	};

	class oil {
		zone[] = {"oil_field_1"};
		zoneSize = 40;
		zoneItems[] = {"oil_unprocessed",2};
		zoneProf = "prof_mining";
		zoneType = "mine";
		inWater = 0;
		zoneExp[] = {50,5};
	};

	/** ******************************************************************************************************************************
    *                                                                                                                                *
    *  Ici refonte mission avec les items et items farms pour les nouvelles entreprises                                              *
    *       Dans le futur ci-dessous reclasser les items ensembles                                                                   *
    *    ATTENTION : Merci de respecter les nommages pour les nouveaux farms en anglais attaché muniscule pour créer items physique! *                                                   *
    *         C33_items_...     = Les objets comme les bidons, bouteilles, palettes, caisses...                                      *
    * ****************************************************************************************************************************** */
	class C33_items_palmseed {
		zone[] = { "palmseed_1"};
		zoneSize = 30;
		zoneItems[] = {"C33_items_palmseed",8};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class C33_items_potsofpaintpigment {
		zone[] = { "potsofpaintpigment_1"};
		zoneSize = 30;
		zoneItems[] = {"C33_items_potsofpaintpigment",8};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class C33_items_tomato {
		zone[] = { "tomato_1"};
		zoneSize = 30;
		zoneItems[] = {"C33_items_tomato",8};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};

	class C33_items_petrole {
		zone[] = { "petrole_1"};
		zoneSize = 30;
		zoneItems[] = {"C33_items_petrole",8};
		zoneProf = "prof_agricole";
		zoneType = "gather";
		inWater = 0;
		zoneExp[] = {100,5};
		illegal = false;
	};
	
};