/*
	Config CfgMarkers

	Autor: IronBlade

	settings = ["Type","Colour","MarkerType"]
*/
class CfgMarkers
{

	//Mining

	class TinMine {
		requirement[] = {"prof_mining", 0};
		displayName = "Mine de d'étain";
		marker = "tin_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorYellow","mil_triangle"};
		sharePrice = 10;
		icon = "";
		canShare[] = {"CIV"};
	};
	
	class CopperMine {
		requirement[] = {"prof_mining",50};
		displayName = "Mine de cuivre";
		marker = "copper_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorYellow","mil_triangle"};
		sharePrice = 20;
		icon = "";
		canShare[] = {"CIV"};
	};
	
	class IronMine {
		requirement[] = {"prof_mining",150};
		displayName = "Mine de Fer";
		marker = "iron_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorYellow","mil_triangle"};
		sharePrice = 40;
		icon = "icons\ores\iron_ore.paa";
		canShare[] = {"CIV"};
	};

	class ChromiumMine {	
		requirement[] = {"prof_mining",250};
		displayName = "Mine de Chrome";
		marker = "chromium_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorYellow","mil_triangle"};
		sharePrice = 50;
		icon = "icons\ores\rhodium_ore.paa"; // Todo Icon
		canShare[] = {"CIV"};
	};

	class AluminiumMine {	
		requirement[] = {"prof_mining",350};
		displayName = "Mine D'aluminium";
		marker = "aluminium_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorYellow","mil_triangle"};
		sharePrice = 70;
		icon = "icons\ores\iron_ore.paa"; // Todo Icon
		canShare[] = {"CIV"};
	};

	class NickelMine {	
		requirement[] = {"prof_mining",550};
		displayName = "Mine De Nickel";
		marker = "nickel_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorYellow","mil_triangle"};
		sharePrice = 70;
		icon = "icons\ores\iron_ore.paa"; // Todo Icon
		canShare[] = {"CIV"};
	};
	
	class GoldMine {	
		requirement[] = {"prof_mining",750};
		displayName = "Mine D'or";
		marker = "gold_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorYellow","mil_triangle"};
		sharePrice = 80;
		icon = "icons\ores\gold_ore.paa";
		canShare[] = {"CIV"};
	};

	// Arche

	class ArcheSous {
		requirement[] = {"prof_arche",0};
		displayName = "Epave Sous-Marine";
		marker = "arche_sous_1";
		markersPos[] = {"arche_sous_pos_1","arche_sous_pos_2","arche_sous_pos_3"};
		settings[] = {"Mine","ColorBrown","mil_dot"};
		sharePrice = 0;
		icon = "";
	};

	class ArcheTerre {
		requirement[] = {"prof_arche",0};
		displayName = "Ruines";
		marker = "arche_ter_1";
		markersPos[] = {"arche_ter_pos_1","arche_ter_pos_2","arche_ter_pos_3","arche_ter_pos_4"};
		settings[] = {"Mine","ColorBrown","loc_Ruin"};
		sharePrice = 0;
		icon = "";
	};

	//Gathering

	// Champs
	class MarijuanaField {
		requirement[] = {"prof_narcos",0};
		displayName = "Champ de Cannabis";
		marker = "marijuana_1";
		markersPos[] = {"marijuana_pos_2"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 10;
		icon = "icons\drogues\ico_cannabis.paa";
		illegal = 1;
		canShare[] = {"WEST"};
	};

	class MauiwauiField {
		requirement[] = {"prof_narcos",100};
		displayName = "Champ de Maui Waui";
		marker = "mauiwaui_1";
		markersPos[] = {"mauiwaui_pos_2"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 25;
		icon = "icons\drogues\ico_mauiwaui.paa";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class PurpleField {	
		requirement[] = {"prof_narcos",300};
		displayName = "Champ de Purple Kush";
		marker = "purple_1";
		markersPos[] = {"purple_pos_2"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 50;
		icon = "icons\drogues\ico_purple.paa";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class StrawberryField {	
		requirement[] = {"prof_narcos",600};
		displayName = "Champ de Strawberry";
		marker = "straw_1";
		markersPos[] = {"straw_pos_1"};
		settings[] = {"Fields","ColorRed","mil_dot"};
		sharePrice = 70;
		icon = "icons\drogues\ico_straw.paa";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	// Process

	class MarijuanaProcessing {	
		requirement[] = {"prof_narcos",0};
		displayName = "Traitement de Cannabis";
		marker = "marijuana_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 10;
		icon = "icons\drogues\ico_cannabis.paa";
		illegal = 1;
		canShare[] = {"WEST"};
	};

	class MauiwauiProcessing {	
		requirement[] = {"prof_narcos",100};
		displayName = "Traitement de la Maui Waui";
		marker = "mauiwaui_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 25;
		icon = "icons\drogues\ico_mauiwaui.paa";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class PurpleProcessing {	
		requirement[] = {"prof_narcos",300};
		displayName = "Traitement de la Purple Kush";
		marker = "purple_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 50;
		icon = "icons\drogues\ico_purple.paa";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class StrawberryProcessing {	
		requirement[] = {"prof_narcos",600};
		displayName = "Traitement de Strawberry";
		marker = "straw_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 70;
		icon = "icons\drogues\ico_straw.paa";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class Dealer {
		requirement[] = {"prof_narcos", 0};
		displayName = "Dealer";
		marker = "dealer_mrk__";
		markersPos[] = {};
		settings[] = {"Processing","ColorPink","mil_dot"};
		sharePrice = 200;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
		needUnlock[] = {"Dealer", "dealer_mrk", 20};
	};

	//

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

	// Contrebande

	class SnakeField {
		requirement[] = {"prof_contrebande", 40};
		displayName = "Île aux serpents";
		marker = "serpent_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorRed","mil_triangle"};
		sharePrice = 10;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class SnakeProcess {
		requirement[] = {"prof_contrebande", 40};
		displayName = "Dépeçage de serpent";
		marker = "serpent_p";
		markersPos[] = {};
		settings[] = {"Processing","ColorRed","mil_triangle"};
		sharePrice = 10;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class SnakeSell {
		requirement[] = {"prof_contrebande", 40};
		displayName = "Tanneur";
		marker = "Shop_Serpent";
		markersPos[] = {};
		settings[] = {"Mine","ColorRed","mil_triangle"};
		sharePrice = 10;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class KaoriField {
		requirement[] = {"prof_contrebande", 200};
		displayName = "Forêt de Kaori";
		marker = "bois_tropical_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorRed","mil_triangle"};
		sharePrice = 50;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class WeaponsFarmShop {
		requirement[] = {"prof_contrebande", 500};
		displayName = "Traficant d'armes";
		marker = "weapons_farm_mrk";
		markersPos[] = {};
		settings[] = {"Mine","ColorRed","mil_triangle"};
		sharePrice = 75;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class WeaponsFarmProcess1 {
		requirement[] = {"prof_contrebande", 500};
		displayName = "Traficant d'armes";
		marker = "weapons_farm_process_1";
		markersPos[] = {};
		settings[] = {"Mine","ColorRed","mil_triangle"};
		sharePrice = 75;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class WeaponsFarmProcess2 {
		requirement[] = {"prof_contrebande", 500};
		displayName = "Traficant d'armes";
		marker = "weapons_farm_process_2";
		markersPos[] = {};
		settings[] = {"Mine","ColorRed","mil_triangle"};
		sharePrice = 75;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};

	class WeaponsFarmSell {
		requirement[] = {"prof_contrebande", 500};
		displayName = "Traficant d'armes";
		marker = "weapons_farm_sell";
		markersPos[] = {};
		settings[] = {"Mine","ColorRed","mil_triangle"};
		sharePrice = 75;
		icon = "";
		illegal = 1;
		canShare[] = {"CIV", "WEST"};
	};
};