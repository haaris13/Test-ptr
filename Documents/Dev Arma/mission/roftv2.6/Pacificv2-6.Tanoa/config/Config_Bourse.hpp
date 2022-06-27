/*
	Config for DynMarket

	type = "hide","show";
*/

class CfgBourse {

	hideGlobal[] = {
						"redgull","franta","spirit","rice","cereals","bakedbeans","rabbit_raw","peach","tbacon",
						"lockpick", "pickaxe", "axe", "shovel", "cut",
						"fuelFull","storagesmall", "storagebig","donuts", "coffee", "spikeStrip", "waterBottle",
						"rabbit", "apple", "defusekit","goldbar", "blastingcharge","pottery","silvercoins","goldcoins",
						"crack60","crack70","crack80","crack90","crack100",
						"ice50","ice55","ice60","ice65","ice70","ice75","ice80","ice85","ice90","ice91","ice92","ice93",
						"ice94","ice95","ice96","ice97","ice98","ice100","iceBlue"
					};

	class Category {

		class all {

			displayname = "Tous";

			type = "hide";
			list[] = {};
		};

		class exportation {

			displayname = "Exportation";

			type = "show";
			list[] = {"rhum","pinPlank","med_finish"};
		};

		class ressources {

			displayname = "Minage";

			type = "show";
			list[] = {"tin_bar","copper_refined","iron_refined","chromium_bar","aluminium_bar","nickel_bar","gold_bar"};
		};

		class Narcos {

			displayname = "Narcos";

			type = "show";
			list[] = {"marijuana","mauiwaui_processed","purple_processed","strawberry_processed"};
		};

		class Contrebande {

			displayname = "Contrebande";

			type = "show";
			list[] = {"peauSerpent","kaoriPlank","lightwp_finish","templeBones","templeCoins","templeReliques"};
		};

		class gems_cut {

			displayname = "Gemmes taillées";

			type = "show";
			list[] = {"topaz_cut","sapphire_cut","emerald_cut","ruby_cut","amethyst_cut","diamond_cut"};
		};

		class archeologie {

			displayname = "Archéologie";

			type = "show";
			list[] = {"archeSVin","archeTOssements","archeTCasque","archeTUniforme","archeSCoffreB","archeSCoffreT"};
		};

	};
};