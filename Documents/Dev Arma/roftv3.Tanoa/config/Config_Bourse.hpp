/*
	Config for DynMarket

	type = "hide","show";
*/

class CfgBourse {

	hideGlobal[] = {
						"redgull","rabbit_raw","peach","tbacon","lockpick", "pickaxe", "axe", "shovel", "cut",
						"fuelFull","storagesmall", "storagebig","donuts", "coffee", "spikeStrip", "waterBottle",
						"rabbit", "apple", "defusekit","goldbar", "blastingcharge","pottery","silvercoins","goldcoins",
						"ice50","ice55","ice60","ice65","ice70","ice75","ice80","ice85","ice90","ice91","ice92","ice93",
						"ice94","ice95","ice96","ice97","ice98","ice100","crack60","crack70","crack80","crack90",
						"krokodil50","krokodil65","krokodil80","krokodil95","morphine50","morphine70",
						"morphine90","morphine95","mais","raisin","cacao","banane"
						
					};

	class Category {

		class all {

			displayname = "Tous";

			type = "hide";
			list[] = {};
		};

		class debutant {

			displayname = "Débutant";

			type = "show";
			list[] = {
				"mais","Jus_Pomme_Coco","Jus_Pomme_Banane","Jus_Pomme_Raisin", "multifruit", "gravesWatch","gravesCollar","gravesBracelet","gravesRing","sucre","frite","sushic","polenta",
				"Canned_Fish","Canned_Peach","Canned_Corn","Canned_Coconut","Canned_Cocoa","Apple_Grape_Bottle","Coconut_Apple_Bottle","Apple_Banana_Bottle","Multifruit_Bottle",
				"Canned_Fish_Palette","Canned_Peach_Palette","Canned_Corn_Palette","Canned_Coconut_Palette","Canned_Cocoa_Palette","Apple_Grape_Bottle_Palette","Coconut_Apple_Bottle_Palette","Apple_Banana_Bottle_Palette","Multifruit_Bottle_Palette",
				"C33_items_palmoilcontainer", "C33_items_alcoolcontainer", "C33_items_melassecontainer", "C33_items_tomatocontainer", "C33_items_petrolecontainer"
			};
		};

		class ressources {

			displayname = "Classiques";

			type = "show";
			list[] = {"med_processed","cig_processed","poi_processed","graphite_bar","copper_refined","tin_bar","silver_bar","iron_refined","tropicalCharpente","tropicalTonnerie","platinum_bar","iridium_bar","rhodium_bar","gold_bar"};
		};

		class illegal {

			displayname = "Illégal";

			type = "show";
			list[] = {"ivoire_processed","peauSerpent","parcTonnerie","marijuana","parcCharpente","heroin_processed","cocaine_processed","turtle_raw","khat_processed","strawberry_processed","datura_processed","uranium","mun_processed","crack100","iceBlue","morphineill","krokodilpur",};
		};

		class gems_uncut {

			displayname = "Gemmes non taillées";

			type = "show";
			list[] = {"quartz_uncut","tigereye_uncut","moonlightstone_uncut","grenat_uncut","jade_uncut","amber_uncut","aquamarine_uncut","topaz_uncut","sapphire_uncut","emerald_uncut","ruby_uncut","amethyst_uncut","diamond_uncut","grandidierite_uncut","redruby_uncut"};
		};

		class gems_cut {

			displayname = "Gemmes taillées";

			type = "show";
			list[] = {"quartz_cut","tigereye_cut","moonlightstone_cut","grenat_cut","jade_cut","amber_cut","aquamarine_cut","topaz_cut","sapphire_cut","emerald_cut","ruby_cut","amethyst_cut","diamond_cut","grandidierite_cut","redruby_cut"};
		};

		class archeologie {

			displayname = "Archéologie";

			type = "show";
			list[] = {"archeSVin","archeTOssements","archeTCasque","archeTUniforme","archeSCoffreB","archeSCoffreT"};
		};

		class temple {

			displayname = "Temple";

			type = "show";
			list[] = {
				"cable","templeCoins","templeReliques"
			};
		};
	};
};