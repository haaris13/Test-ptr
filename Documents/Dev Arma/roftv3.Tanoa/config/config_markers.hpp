/*
	Config CfgMarkers

	Autor: IronBlade, updated alharis

	settings = ["Type","Colour","MarkerType"]
*/
class CfgMarkers
{

	//Mining

	class AluminumMine {
		requirement[] = {"prof_mining",0};
		displayName = "Mine d'aluminium";
		marker = "aluminum_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 20; //20
		icon = "";
	};

	class CopperMine {
		requirement[] = {"prof_mining",50};
		displayName = "Mine de cuivre";
		marker = "copper_mine";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 20; //20
		icon = "";
	};

	class SilverMine {
		requirement[] = {"prof_mining",120};
		displayName = "Mine d'argent";
		marker = "silver_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 25; //20
		icon = "";
	};

	class IronMine {
		requirement[] = {"prof_mining",200};
		displayName = "Mine de Fer";
		marker = "iron_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 30; //40
		icon = "icons\ores\iron_ore.paa";
	};

	class GraphiteMine {
		requirement[] = {"prof_mining",300};
		displayName = "Mine de Graphite";
		marker = "graphite_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 35;
		icon = "";
	};

	class IridiumMine {
		requirement[] = {"prof_mining",400};
		displayName = "Mine D'iridium";
		marker = "iridium_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 40; //70
		icon = "";
	};

	class RhodiumMine {
		requirement[] = {"prof_mining",500};
		displayName = "Mine de Rhodium";
		marker = "rhodium_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 50; //50
		icon = "icons\ores\rhodium_ore.paa";
	};

	class PlatinumMine {
		requirement[] = {"prof_mining",600};
		displayName = "Mine de Platine";
		marker = "platinum_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 55; //60
		icon = "icons\ores\platinum_ore.paa";
	};
	
	class GoldMine {
		requirement[] = {"prof_mining",700};
		displayName = "Mine D'or";
		marker = "gold_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorOrange","plp_mark_asc_pickaxe"};
		sharePrice = 60; //80
		icon = "icons\ores\gold_ore.paa";
	};

	// Arche

	class ArcheSous {
		requirement[] = {"prof_mining",0};
		displayName = "Epave Sous-Marine";
		marker = "arche_sous_1";
		markersPos[] = {"arche_sous_pos_1","arche_sous_pos_2","arche_sous_pos_3"};
		settings[] = {"Mine","ColorBrown","plp_mark_asc_wreckship"};
		sharePrice = 0;
		icon = "";
	};

	class ArcheTerre {
		requirement[] = {"prof_mining",0};
		displayName = "Ruines";
		marker = "arche_ter_1";
		markersPos[] = {"arche_ter_pos_1","arche_ter_pos_2","arche_ter_pos_3","arche_ter_pos_4"};
		settings[] = {"Mine","ColorBrown","loc_Ruin"};
		sharePrice = 0;
		icon = "";
	};

	//Gathering

	// Champs
	class SerpentField {
		requirement[] = {"prof_gathering",0};
		displayName = "Serpent";
		marker = "serpent33";
		markersPos[] = {"serpent_pos_1"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 0;
		icon = "icons\drogues\ico_cannabis.paa";
		illegal = 1;
	};
	class WeedField {
		requirement[] = {"prof_gathering",100};
		displayName = "Champ de Cannabis";
		marker = "weed_1";
		markersPos[] = {"weed_pos_1","weed_pos_2","weed_pos_3","weed_pos_4"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 10;
		icon = "icons\drogues\ico_cannabis.paa";
		illegal = 1;
	};
	
	class StrawberryField {
		requirement[] = {"prof_gathering",200};
		displayName = "Champ de Strawberry";
		marker = "straw_1";
		markersPos[] = {"straw_pos_1","straw_pos_2","straw_pos_3","straw_pos_4"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 20;
		icon = "icons\drogues\ico_straw.paa";
		illegal = 1;
	};

	class KhatField {
		requirement[] = {"prof_gathering",300};
		displayName = "Champ de Khat";
		marker = "khat_1";
		markersPos[] = {"khat_pos_1","Khat_pos_2","Khat_pos_3","Khat_pos_4"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 30;
		icon = "icons\drogues\ico_mauiwaui.paa";
		illegal = 1;
	};

	class DaturaField {
		requirement[] = {"prof_gathering",400};
		displayName = "Champ de Datura";
		marker = "dat_1";
		markersPos[] = {"dat_pos_1","dat_pos_2","dat_pos_3","dat_pos_4"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 30;
		icon = "icons\drogues\ico_mauiwaui.paa";
		illegal = 1;
	};

	class HeroinField {
		requirement[] = {"prof_gathering",500};
		displayName = "Champ de Maui Waui";
		marker = "heroin_1";
		markersPos[] = {"heroin_pos_1","heroin_pos_2","heroin_pos_3","heroin_pos_4"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 45;
		icon = "icons\drogues\ico_mauiwaui.paa";
		illegal = 1;
	};

	class CocaineField {
		requirement[] = {"prof_gathering",600};
		displayName = "Champ de Purple Kush";
		marker = "cocaine_1";
		markersPos[] = {"cocaine_pos_1","cocaine_pos_2","cocaine_pos_3","cocaine_pos_4"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 60;
		icon = "icons\drogues\ico_purple.paa";
		illegal = 1;
	};

	class Uranium {
		requirement[] = {"prof_gathering",800};
		displayName = "Central Nucléaire";
		marker = "ura_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 80;
		icon = "icons\drogues\ico_purple.paa";
		illegal = 1;
	};
	// Process

	/*class turtle_raw {
		requirement[] = {"prof_gathering",0};
		displayName = "viande de tortue";
		marker = "";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 0;
		icon = "";
		illegal = 1;
	};*/

	
	class SerpentProcessing {
		requirement[] = {"prof_gathering",0};
		displayName = "Dépeçage de serpent";
		marker = "dep_serp_pos_4";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 0;
		icon = "icons\drogues\ico_cannabis.paa";
		illegal = 1;
	};

	class WeedProcessing {
		requirement[] = {"prof_gathering",100};
		displayName = "Traitement de Cannabis";
		marker = "weed_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 10;
		icon = "icons\drogues\ico_cannabis.paa";
		illegal = 1;
	};

	class StrawberryProcessing {
		requirement[] = {"prof_gathering",200};
		displayName = "Traitement de Strawberry";
		marker = "straw_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 20;
		icon = "icons\drogues\ico_straw.paa";
		illegal = 1;
	};
    
	class KhatProcessing {
		requirement[] = {"prof_gathering",300};
		displayName = "Traitement de la Khat";
		marker = "khat_p_1";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 30;
		icon = "";
		illegal = 1;
	};

	class HeroinProcessing {
		requirement[] = {"prof_gathering",500};
		displayName = "Traitement de la Maui Waui";
		marker = "heroin_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 45;
		icon = "icons\drogues\ico_mauiwaui.paa";
		illegal = 1;
	};

	class CocaineProcessing {
		requirement[] = {"prof_gathering",600};
		displayName = "Traitement de la Purple Kush";
		marker = "coca_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 60;
		icon = "icons\drogues\ico_purple.paa";
		illegal = 1;
	};

	class DaturaProcessing {
		requirement[] = {"prof_gathering",400};
		displayName = "Traitement de la datura";
		marker = "dat_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 60;
		icon = "";
		illegal = 1;
	};

	class uraniumProcessing {
		requirement[] = {"prof_gathering",800};
		displayName = "Traitement de l'Uranium'";
		marker = "ura_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 60;
		icon = "";
		illegal = 1;
	};
	
	class IceShop {
		requirement[] = {"prof_chimie",10};
		displayName = "Grossiste";
		marker = "ice_shop";
		markersPos[] = {};
		settings[] = {"Processing","ColorRed","mil_dot"};
		sharePrice = 20;
		icon = "";
		illegal = 1;
	};

	class IceProcess1 {
		requirement[] = {"prof_chimie",10};
		displayName = "Labo";
		marker = "ice_process1";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 20;
		icon = "";
		illegal = 1;
	};

	class IceProcess2 {
		requirement[] = {"prof_chimie",10};
		displayName = "Labo";
		marker = "ice_process2";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 20;
		icon = "";
		illegal = 1;
	};

	class IceShopSell {
		requirement[] = {"prof_chimie",10};
		displayName = "Chimiste";
		marker = "ice_shopsell";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 20;
		icon = "";
		illegal = 1;
	};

	// Agriculture

	class Peche {
		requirement[] = {"prof_agricole",25};
		displayName = "Champs de Pêches";
		marker = "peaches_1";
		markersPos[] = {};
		settings[] = {"Fields","plp_ColorOrangeLight","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Peche1 {
		requirement[] = {"prof_agricole",25};
		displayName = "Champs de Pêches";
		marker = "peaches_2";
		markersPos[] = {};
		settings[] = {"Fields","plp_ColorOrangeLight","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Banane {
		requirement[] = {"prof_agricole",50};
		displayName = "Champ de bananier";
		marker = "banane_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civc_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Banane1 {
		requirement[] = {"prof_agricole",50};
		displayName = "Champ de bananier";
		marker = "banane_2";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civc_farm"};
		sharePrice = 20; //20
		icon = "";
	};

	class Coco {
		requirement[] = {"prof_agricole",100};
		displayName = "Cocotiers";
		marker = "coco_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Coco1 {
		requirement[] = {"prof_agricole",100};
		displayName = "Cocotiers";
		marker = "coco_2";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Riz {
		requirement[] = {"prof_agricole",150};
		displayName = "Récolte du riz";
		marker = "mais_big_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Mais {
		requirement[] = {"prof_agricole",200};
		displayName = "Champ de maïs";
		marker = "mais_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Mais1 {
		requirement[] = {"prof_agricole",200};
		displayName = "Champ de maïs";
		marker = "mais_2";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Mais2 {
		requirement[] = {"prof_agricole",200};
		displayName = "Champ de maïs";
		marker = "mais_3";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class Mais3 {
		requirement[] = {"prof_agricole",200};
		displayName = "Champ de maïs";
		marker = "mais_4";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};
	class PommeTerre {
		requirement[] = {"prof_agricole",250};
		displayName = "Champs de pommes de terre";
		marker = "pterre_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "";
	};

	class Cannesucre1 {
		requirement[] = {"prof_agricole",350};
		displayName = "Champs de cannes à sucre,";
		marker = "cannesucre_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 35; //20
		icon = "";
	};
	class Cannesucre2 {
		requirement[] = {"prof_agricole",350};
		displayName = "Champs de cannes à sucre,";
		marker = "cannesucre_2";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 35; //20
		icon = "";
	};

	class tabac {
		requirement[] = {"prof_agricole",450};
		displayName = "Champs de tabac";
		marker = "tabac_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 45; //20
		icon = "";
	};

	/** ******************************************************************************************************************************
    *                                                                                                                                *
    *  Ici refonte mission avec les items et items farms pour les nouvelles entreprises                                              *
    *       Dans le futur ci-dessous reclasser les items ensembles                                                                   *
    *    ATTENTION : Merci de respecter les nommages pour les nouveaux farms en anglais attaché muniscule pour créer items physique! *
    *         C33_items_...     = Les objets comme les bidons, bouteilles, palettes, caisses...                                      *
    * ****************************************************************************************************************************** */
	/*class C33_items_palmseed_Marker {
		requirement[] = {"prof_agricole",0};
		displayName = "Champs de graine de palme";
		marker = "palmseed_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "\c33\images\icones\farms\ico_graine_palme.paa";
	};

	class C33_items_potsofpaintpigment {
		requirement[] = {"prof_agricole",0};
		displayName = "Récupération de pots de pigment";
		marker = "potsofpaintpigment_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "\c33\images\icones\farms\ico_pigment.paa";
	};

	class C33_items_tomato {
		requirement[] = {"prof_agricole",0};
		displayName = "Champs de tomate";
		marker = "tomato_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "\c33\images\icones\farms\ico_tomato.paa";
	};

	class C33_items_petrole {
		requirement[] = {"prof_agricole",0};
		displayName = "Puits de pétrole";
		marker = "petrole_1";
		markersPos[] = {};
		settings[] = {"Fields","ColorGreen","plp_mark_civ_farm"};
		sharePrice = 20; //20
		icon = "\c33\images\icones\farms\ico_petrole.paa";
	};*/



};
