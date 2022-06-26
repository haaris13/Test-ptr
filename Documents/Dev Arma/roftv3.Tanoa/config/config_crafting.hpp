/*
	Liste des Crafts

	Autor:Ironblade
*/

class Gathering {
	class TrucdeOuf {
		type = 1;
		item = "TrucdeOuf";
		displayName = "";
		description = "Permet de courir pendant 4 minutes";
		levelRequirement = 50;
		itemRequirement[]  = {{"redgull",1},{"peauSerpent",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};

	class ACE_epinephrine {
		type = 2;
		item = "ACE_epinephrine";
		displayName = "";
		description = "Augmente la chance de réussir un RCP";
		levelRequirement = 75;
		itemRequirement[]  = {{"TrucdeOuf",1},{"plastique",2},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class spaceCake {
		type = 1;
		item = "spaceCake";
		displayName = "";
		description = "Augmente la vitesse de récolte";
		levelRequirement = 150;
		itemRequirement[]  = {{"marijuana",15},{"seed_cannabis",10},{"banane",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class weed_butter {
		type = 1;
		item = "weed_butter";
		displayName = "";
		description = "";
		levelRequirement = 200;
		itemRequirement[]  = {{"cannabis",2},{"peach",3}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class glaceFolle {
		type = 1;
		item = "glaceFolle";
		displayName = "";
		description = "Augmentation de la capacité du Sac";
		levelRequirement = 250;
		itemRequirement[]  = {{"multifruit",1},{"raisin",4},{"strawberry_processed",15}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class kat {
		type = 1;
		item = "kat";
		displayName = "";
		description = "";
		levelRequirement = 300;
		itemRequirement[]  = {{"khat_unprocessed",2},{"banane",3}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class fioleblinded {
		type = 1;
		item = "fioleblinded";
		displayName = "";
		description = "Potion de Mort";
		levelRequirement = 350;
		itemRequirement[]  = {{"peauSerpent",5},{"waterBottle",1},{"ammoniac",1},{"javel",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class yaabaa {
		type = 1;
		item = "yaabaa";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"datura_unprocessed",2},{"tabac",3}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class laitMua {
		type = 1;
		item = "laitMua";
		displayName = "";
		description = "";
		levelRequirement = 500;
		itemRequirement[]  = {{"heroin_unprocessed",2},{"coco",3}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class hellsoup {
		type = 1;
		item = "hellsoup";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"crevettes",3},{"cocaine_unprocessed",2},{"waterBottle",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class avon_SF12 {
		type = 2;
		item = "avon_SF12";
		displayName = "";
		description = "Masque de proctection pour la recolte d'Uranium";
		levelRequirement = 450;
		itemRequirement[]  = {{"tissu",5},{"plastique",3},{"ver",3},{"neoprene",3},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class TRYK_U_B_PCUHsW5 {
		type = 2;
		item = "TRYK_U_B_PCUHsW5";
		displayName = "";
		description = "Combinaison de proctection pour la recolte d'Uranium";
		levelRequirement = 450;
		itemRequirement[]  = {{"tissu",5},{"plastique",5},{"ver",3},{"neoprene",3},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	/*class DemoCharge_Remote_Mag {
		type = 2;
		item = "DemoCharge_Remote_Mag";
		displayName = "";
		description = "";
		levelRequirement = 650;
		itemRequirement[]  = {{"tissu",5},{"plastique",3},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};*/
	

};
class Exploitant {
	class Jus_Pomme_Raisin {
		type = 1;
		item = "Jus_Pomme_Raisin";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"apple",1}, {"raisin",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Jus_Pomme_Banane {
		type = 1;
		item = "Jus_Pomme_Banane";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"apple",1}, {"banane",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Jus_Pomme_Coco {
		type = 1;
		item = "Jus_Pomme_Coco";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"apple",1}, {"coco",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class multifruit {
		type = 1;
		item = "multifruit";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"apple",1}, {"coco",1}, {"raisin",1}, {"banane",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};

	// Emmett 12/06/2021
	class Canned_Fish_salema_raw {
		type = 1;
		item = "Canned_Fish";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"salema_raw",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Canned_Fish_ornate_raw {
		type = 1;
		item = "Canned_Fish";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"mackerel_raw",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Canned_Fish_tuna_raw {
		type = 1;
		item = "Canned_Fish";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"tuna_raw",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Canned_Fish_mullet_raw {
		type = 1;
		item = "Canned_Fish";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"mullet_raw",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Canned_Fish_catshark_raw {
		type = 1;
		item = "Canned_Fish";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"catshark_raw",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Canned_Peach {
		type = 1;
		item = "Canned_Peach";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"peach",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Canned_Corn {
		type = 1;
		item = "Canned_Corn";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"mais",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Canned_Coconut {
		type = 1;
		item = "Canned_Coconut";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"coco",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Canned_Cocoa {
		type = 1;
		item = "Canned_Cocoa";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"cacao",3},{"Metal_Tin_Can",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Apple_Grape_Bottle {
		type = 1;
		item = "Apple_Grape_Bottle";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"Jus_Pomme_Raisin",3},{"Empty_Glass_Bottle",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Coconut_Apple_Bottle {
		type = 1;
		item = "Coconut_Apple_Bottle";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"Jus_Pomme_Coco",3},{"Empty_Glass_Bottle",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Apple_Banana_Bottle {
		type = 1;
		item = "Apple_Banana_Bottle";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"Jus_Pomme_Banane",3},{"Empty_Glass_Bottle",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Multifruit_Bottle {
		type = 1;
		item = "Multifruit_Bottle";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"multifruit",3},{"Empty_Glass_Bottle",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};

	// end Emmett


	/*
	class tabac {
		type = 1;
		item = "multifruit";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"apple",1}, {"coco",1}, {"raisin",1}, {"banane",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class cigarettes {
		type = 1;
		item = "multifruit";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"apple",1}, {"coco",1}, {"raisin",1}, {"banane",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class cigarres {
		type = 1;
		item = "multifruit";
		displayName = "";
		description = "recette";
		levelRequirement = 0;
		itemRequirement[]  = {{"apple",1}, {"coco",1}, {"raisin",1}, {"banane",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};

	*/
	
	

};

class Mining {
	class CutQuartz {
		type = 1;
		item = "quartz_cut";
		displayName = "";
		description = "";
		levelRequirement = 50;
		itemRequirement[]  = {{"quartz_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutTigersEye {
		type = 1;
		item = "tigereye_cut";
		displayName = "";
		description = "";
		levelRequirement = 100;
		itemRequirement[]  = {{"tigereye_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutMoonlightstone {
		type = 1;
		item = "moonlightstone_cut";
		displayName = "";
		description = "";
		levelRequirement = 150;
		itemRequirement[]  = {{"moonlightstone_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutGrenat {
		type = 1;
		item = "grenat_cut";
		displayName = "";
		description = "";
		levelRequirement = 200;
		itemRequirement[]  = {{"grenat_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutJade {
		type = 1;
		item = "jade_cut";
		displayName = "";
		description = "";
		levelRequirement = 250;
		itemRequirement[]  = {{"jade_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutAmber {
		type = 1;
		item = "amber_cut";
		displayName = "";
		description = "";
		levelRequirement = 300;
		itemRequirement[]  = {{"amber_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutAquamarine {
		type = 1;
		item = "aquamarine_cut";
		displayName = "";
		description = "";
		levelRequirement = 350;
		itemRequirement[]  = {{"aquamarine_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutTopaz {
		type = 1;
		item = "topaz_cut";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"topaz_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutAmethyst {
		type = 1;
		item = "amethyst_cut";
		displayName = "";
		description = "";
		levelRequirement = 450;
		itemRequirement[]  = {{"amethyst_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutSapphire {
		type = 1;
		item = "sapphire_cut";
		displayName = "";
		description = "";
		levelRequirement = 500;
		itemRequirement[]  = {{"sapphire_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutEmerald {
		type = 1;
		item = "emerald_cut";
		displayName = "";
		description = "";
		levelRequirement = 550;
		itemRequirement[]  = {{"emerald_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutRuby {
		type = 1;
		item = "ruby_cut";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"ruby_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class CutDiamond {
		type = 1;
		item = "diamond_cut";
		displayName = "";
		description = "";
		levelRequirement = 650;
		itemRequirement[]  = {{"diamond_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Cutgrandidierite {
		type = 1;
		item = "grandidierite_cut";
		displayName = "";
		description = "";
		levelRequirement = 700;
		itemRequirement[]  = {{"grandidierite_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class Cutredruby {
		type = 1;
		item = "redruby_cut";
		displayName = "";
		description = "";
		levelRequirement = 800;
		itemRequirement[]  = {{"redruby_uncut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};
	class bracelet_incru {
		type = 1;
		item = "bracelet_incru";
		displayName = "";
		description = "";
		levelRequirement = 825;
		itemRequirement[]  = {{"silver_bar",5},{"rhodium_bar",5},{"emerald_cut",3}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class bracelet_orne {
		type = 1;
		item = "bracelet_orne";
		displayName = "";
		description = "";
		levelRequirement = 850;
		itemRequirement[]  = {{"gold_bar",5},{"silver_bar",5},{"moonlightstone_cut",2},{"sapphire_cut",2}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class boucle_oreil {
		type = 1;
		item = "boucle_oreil";
		displayName = "";
		description = "";
		levelRequirement = 875;
		itemRequirement[]  = {{"gold_bar",2},{"diamond_cut",2}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class collier_orne {
		type = 1;
		item = "collier_orne";
		displayName = "";
		description = "";
		levelRequirement = 900;
		itemRequirement[]  = {{"gold_bar",5},{"platinum_bar",5},{"redruby_cut",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class petite_parure {
		type = 1;
		item = "petite_parure";
		displayName = "";
		description = "";
		levelRequirement = 925;
		itemRequirement[]  = {{"boucle_oreil",1},{"bracelet_incru",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class grande_parure {
		type = 1;
		item = "grande_parure";
		displayName = "";
		description = "";
		levelRequirement = 950;
		itemRequirement[]  = {{"boucle_oreil",1},{"bracelet_incru",1},{"bracelet_orne",1},{"collier_orne",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
};

class Chimie {
	class ACE_M14 {
		type = 2;
		item = "ACE_M14";
		displayName = "";
		description = "Grenade incendiaire";
		levelRequirement = 10;
		itemRequirement[]  = {{"phosphoreRouge",2},{"C3P",1},{"plastique",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
};

class TreasureHunting {
};

class Hacking {

};

class MacGyver {

	/*class Empty_Glass_Bottle {
		type = 1;
		item = "Empty_Glass_Bottle";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"Farm_Sandpile",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class Metal_Tin_Can {
		type = 1;
		item = "Metal_Tin_Can";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"iron_refined",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class Wooden_Transport_Pallet {
		type = 1;
		item = "Wooden_Transport_Pallet";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"tropical",2},{"iron_refined",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};*/

	class pickaxe {
		type = 1;
		item = "pickaxe";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"ver",1},{"steel",1},{"aluminium",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class shovel {
		type = 1;
		item = "shovel";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"plastique",1},{"aluminium",1},{"pottery",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class axe {
		type = 1;
		item = "axe";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"plastique",1},{"steel",1},{"pottery",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class cut {
		type = 1;
		item = "cut";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"tissu",1},{"steel",1},{"pottery",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class filet {
		type = 1;
		item = "filet";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"tissu",5},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};


		class V12_CASQUETTE_CAMO1 {
		type = 1;
		item = "V12_CASQUETTE_CAMO1";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"tissu",2},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
		class V12_CASQUETTE_CAMO2 {
		type = 1;
		item = "V12_CASQUETTE_CAMO2";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"tissu",2},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class V12_CASQUETTE_CAMO {
		type = 1;
		item = "V12_CASQUETTE_CAMO";
		displayName = "";
		description = "";
		levelRequirement = 0;
		itemRequirement[]  = {{"tissu",2},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

		class EF_FSMGV {
		type = 1;
		item = "EF_FSMGV";
		displayName = "";
		description = "";
		levelRequirement = 10;
		itemRequirement[]  = {{"tissu",3},{"boiteCouture",2}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

		class U_FRITH_RUIN_SDR_Tshirt_wht_stk {
		type = 1;
		item = "U_FRITH_RUIN_SDR_Tshirt_wht_stk";
		displayName = "";
		description = "";
		levelRequirement = 20;
		itemRequirement[]  = {{"tissu",6},{"boiteCouture",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

		class U_FRITH_RUIN_WKR_dark {
		type = 1;
		item = "U_FRITH_RUIN_WKR_dark";
		displayName = "";
		description = "";
		levelRequirement = 20;
		itemRequirement[]  = {{"tissu",6},{"boiteCouture",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

		class U_FRITH_RUIN_WKR_lite {
		type = 1;
		item = "U_FRITH_RUIN_WKR_lite";
		displayName = "";
		description = "";
		levelRequirement = 20;
		itemRequirement[]  = {{"tissu",6},{"boiteCouture",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_FRITH_RUIN_TSH_oli_bet {
		type = 1;
		item = "U_FRITH_RUIN_TSH_oli_bet";
		displayName = "";
		description = "";
		levelRequirement = 20;
		itemRequirement[]  = {{"tissu",6},{"boiteCouture",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	


	

	



	class V_TacVestIR_blk {
		type = 2;
		item = "V_TacVestIR_blk";
		displayName = "";
		description = "";
		levelRequirement = 10;
		itemRequirement[]  = {{"tissu",5},{"plastique",3},{"boiteCouture",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};


//rajout craft v2.2 01.05.2021

	class U_I_L_Uniform_01_tshirt_olive_F {
		type = 2;
		item = "U_I_L_Uniform_01_tshirt_olive_F";
		displayName = "";
		description = "";
		levelRequirement = 12;
		itemRequirement[]  = {{"tissu",2},{"cannabis",4}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};





	class pince {
		type = 1;
		item = "pince";
		displayName = "";
		description = "";
		levelRequirement = 50;
		itemRequirement[]  = {{"steel",2},{"plastique",2},{"aluminium",2}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	

	
	// ---------------Sangles----------------

	class zipties {
		type = 1;
		item = "zipties";
		displayName = "";
		description = "";
		levelRequirement = 100;
		itemRequirement[]  = {{"plastique",3}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	
	// ---------------Cagoule----------------

	class lockpick {
		type = 1;
		item = "lockpick";
		displayName = "";
		description = "";
		levelRequirement = 100;
		itemRequirement[]  = {{"ver",5},{"steel",2}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	// --------------------------------------

	class cagoule {
		type = 1;
		item = "cagoule";
		displayName = "";
		description = "";
		levelRequirement = 200;
		itemRequirement[]  = {{"tissu",6}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	// --------------Telemetre-------------

	class Rangefinder {
		type = 2;
		item = "Rangefinder";
		displayName = "";
		description = "";
		levelRequirement = 300;
		itemRequirement[] = {{"ver",5},{"plastique",5},{"compoElectronique",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	// ---------------Sangles----------------

	/*class zipties {
		type = 2;
		item = "ACE_CableTie";
		displayName = "";
		description = "";
		levelRequirement = 100;
		itemRequirement[]  = {{"plastique",3}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class ACE_TacticalLadder_Pack {
		type = 2;
		item = "ACE_TacticalLadder_Pack";
		displayName = "Echelle";
		description = "";
		levelRequirement = 10;
		itemRequirement[]  = {{"kevlar",5},{"plastique",3},{"boiteOutil",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};*/
	// ---------Ghille Simple--------------

	class U_B_T_Sniper_F {
		type = 2;
		item = "U_B_T_Sniper_F";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"tissu",2},{"neoprene",3},{"kevlar",3},{"boiteCouture",2},{"cannabis",4}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_O_T_Sniper_F {
		type = 2;
		item = "U_O_T_Sniper_F";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"tissu",2},{"neoprene",3},{"kevlar",3},{"boiteCouture",2},{"cannabis",4}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_I_GhillieSuit {
		type = 2;
		item = "U_I_GhillieSuit";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"tissu",2},{"neoprene",2},{"kevlar",3},{"boiteCouture",2},{"cannabis",4}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_O_GhillieSuit {
		type = 2;
		item = "U_O_GhillieSuit";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"tissu",2},{"neoprene",2},{"kevlar",3},{"boiteCouture",2},{"cannabis",4}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_B_GhillieSuit {
		type = 2;
		item = "U_B_GhillieSuit";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"tissu",2},{"neoprene",2},{"kevlar",3},{"boiteCouture",2},{"cannabis",4}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};



	


	// -----------------Sac a dos---------------------

	class TRYK_B_Coyotebackpack_BLK {
		type = 2;
		item = "TRYK_B_Coyotebackpack_BLK";
		displayName = "";
		description = "";
		levelRequirement = 550;
		itemRequirement[]  = {{"tissu",20},{"neoprene",8},{"aluminium",1},{"boiteCouture",2}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class B_Bergen_hex_F {
		type = 2;
		item = "B_Bergen_hex_F";
		displayName = "";
		description = "";
		levelRequirement = 550;
		itemRequirement[]  = {{"tissu",10},{"neoprene",8},{"aluminium",1},{"boiteCouture",2},{"cannabis",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class B_Bergen_mcamo_F {
		type = 2;
		item = "B_Bergen_mcamo_F";
		displayName = "";
		description = "";
		levelRequirement = 550;
		itemRequirement[]  = {{"tissu",10},{"neoprene",8},{"aluminium",1},{"boiteCouture",2},{"cannabis",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class B_Bergen_dgtl_F {
		type = 2;
		item = "B_Bergen_dgtl_F";
		displayName = "";
		description = "";
		levelRequirement = 550;
		itemRequirement[]  = {{"tissu",10},{"neoprene",8},{"aluminium",1},{"boiteCouture",2},{"cannabis",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class B_Bergen_tna_F {
		type = 2;
		item = "B_Bergen_tna_F";
		displayName = "";
		description = "";
		levelRequirement = 550;
		itemRequirement[]  = {{"tissu",10},{"neoprene",8},{"aluminium",1},{"boiteCouture",2},{"cannabis",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	// -----------------Ghillie Complete----------------

	class U_B_T_FullGhillie_tna_F {
		type = 2;
		item = "U_B_T_FullGhillie_tna_F";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_I_FullGhillie_lsh {
		type = 2;
		item = "U_I_FullGhillie_lsh";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	 /* class U_B_FullGhillie_ard {
		type = 2;
		item = "U_B_FullGhillie_ard";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
/*
	class U_B_T_FullGhillie_tna_F {
		type = 2;
		item = "U_B_T_FullGhillie_tna_F";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_O_T_FullGhillie_tna_F {
		type = 2;
		item = "U_O_T_FullGhillie_tna_F";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_I_FullGhillie_lsh {
		type = 2;
		item = "U_I_FullGhillie_lsh";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_O_FullGhillie_lsh {
		type = 2;
		item = "U_O_FullGhillie_lsh";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_B_FullGhillie_lsh {
		type = 2;
		item = "U_B_FullGhillie_lsh";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_I_FullGhillie_sard {
		type = 2;
		item = "U_I_FullGhillie_sard";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_O_FullGhillie_sard {
		type = 2;
		item = "U_O_FullGhillie_sard";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

	class U_B_FullGhillie_sard {
		type = 2;
		item = "U_B_FullGhillie_sard";
		displayName = "";
		description = "";
		levelRequirement = 600;
		itemRequirement[]  = {{"tissu",5},{"neoprene",6},{"kevlar",1},{"boiteCouture",4},{"cannabis",7}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};*/
	// ----------------- Armes
	class optic_SOS {
		type = 2;
		item = "optic_SOS";
		displayName = "";
		description = "";
		levelRequirement = 150;
		itemRequirement[]  = {{"ver",5},{"steel",3},{"neoprene",3}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	//// aug
	class canon {
		type = 1;
		item = "canon";
		displayName = "";
		description = "";
		levelRequirement = 700;
		itemRequirement[]  = {{"pottery",15},{"steel",10},{"kevlar",10},{"platinum_bar",10},{"boiteOutil",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class culasse {
		type = 1;
		item = "culasse";
		displayName = "";
		description = "";
		levelRequirement = 700;
		itemRequirement[]  = {{"pottery",15},{"aluminium",10},{"steel",10},{"platinum_bar",10},{"boiteOutil",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class cross {
		type = 1;
		item = "cross";
		displayName = "";
		description = "";
		levelRequirement = 700;
		itemRequirement[]  = {{"plastique",10},{"tissu",10},{"aluminium",10},{"platinum_bar",10},{"boiteOutil",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class hlc_rifle_augsrcarb_b {
		type = 2;
		item = "hlc_rifle_augsrcarb_b";
		displayName = "";
		description = "";
		levelRequirement = 700;
		itemRequirement[]  = {{"boiteOutil",1},{"canon",1},{"culasse",1},{"cross",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class hlc_30Rnd_556x45_B_AUG {
		type = 2;
		item = "hlc_30Rnd_556x45_B_AUG";
		displayName = "";
		description = "";
		levelRequirement = 700;
		itemRequirement[]  = {{"platinum_bar",30},{"copper_refined",30},{"silvercoins",10}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};

class RH_mk2 {
		type = 2;
		item = "RH_mk2";
		displayName = "";
		description = "";
		levelRequirement = 300;
		itemRequirement[]  = {{"steel",2},{"plastique",2},{"aluminium",2},{"kevlar",3},};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};


	class RH_Deagleg {
		type = 2;
		item = "RH_Deagleg";
		displayName = "";
		description = "";
		levelRequirement = 550;
		itemRequirement[]  = {{"kevlar",5},{"goldcoins",30},{"boiteOutil",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class RH_7Rnd_50_AE {
		type = 2;
		item = "RH_7Rnd_50_AE";
		displayName = "";
		description = "";
		levelRequirement = 550;
		itemRequirement[]  = {{"rhodium_bar",15},{"silver_bar",10},{"silvercoins",10}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class RH_bullb {
		type = 2;
		item = "RH_bullb";
		displayName = "";
		description = "";
		levelRequirement = 300;
		itemRequirement[]  = {{"aluminium",5},{"silvercoins",3},{"boiteOutil",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class RH_6Rnd_454_Mag {
		type = 2;
		item = "RH_6Rnd_454_Mag";
		displayName = "";
		description = "";
		levelRequirement = 300;
		itemRequirement[]  = {{"silver_bar",15},{"copper_refined",10},{"silvercoins",10}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class RH_ttracker_g {
		type = 2;
		item = "RH_ttracker_g";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"kevlar",5},{"goldcoins",15},{"boiteOutil",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	class RH_6Rnd_45ACP_Mag {
		type = 2;
		item = "RH_6Rnd_45ACP_Mag";
		displayName = "";
		description = "";
		levelRequirement = 400;
		itemRequirement[]  = {{"rhodium_bar",15},{"copper_refined",10},{"neoprene",1}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
	// -----------------Fumigene-----------------

	class SmokeShell {
		type = 2;
		item = "SmokeShell";
		displayName = "";
		description = "";
		levelRequirement = 850;
		itemRequirement[]  = {{"steel",3},{"plastique",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};

	class SmokeShellBlue {
		type = 2;
		item = "SmokeShellBlue";
		displayName = "";
		description = "";
		levelRequirement = 850;
		itemRequirement[]  = {{"steel",3},{"plastique",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};

	class SmokeShellRed {
		type = 2;
		item = "SmokeShellRed";
		displayName = "";
		description = "";
		levelRequirement = 850;
		itemRequirement[]  = {{"steel",3},{"plastique",1}};
		requiresCampfire = 0;
		requiresWorkbench = 0;
		requiresSea = 0;
	};

	class U_B_survival_uniform {
		type = 2;
		item = "U_B_survival_uniform";
		displayName = "";
		description = "";
		levelRequirement = 900;
		itemRequirement[]  = {{"tissu",10},{"neoprene",2},{"cannabis",5}};
		requiresCampfire = 0;
		requiresWorkbench = 1;
		requiresSea = 0;
	};
};
