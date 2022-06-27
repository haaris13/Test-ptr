/*
	Config For Containers

	Autor: IronBlade
*/

class CfgContainers {
	class Filters {
		class all {

			displayname = "Tous";

			type = "hide";
			list[] = {};
		};

		class outils {

			displayname = "Outils";
			type = "show";

			list[] = {
				"pickaxe","shovel","axe","cut","zippo","fuelEmpty","fuelFull",
				"defuseKit","alcotest","scanner","mouchard",
				"lockpick","zipties","cagoule","blastingCharge","traceur","detecteur",
				"extracteur",
				"radar","detecteur_balise",
				"brouilleur","pince",
				"morphine","bandage"
			};
		};

		class nourriture {

			displayname = "Nourriture";
			type = "show";

			list[] = {
				"redgull","coffee","waterBottle","boutrhum","vinsRouge","sake","franta","spirit",
				"tbacon","donuts","rabbitRaw","rabbit","rice","cereals","bakedbeans",
				"apple","peach","mais","raisin","cacao","banane",
				"sushi","grec","paela","rizCantonais","tajin","platJour"
			};
		};

		class ressources {

			displayname = "Ressources";
			type = "show";

			list[] = {
				"graphite_ore","tropical","copper_unrefined","iron_unrefined","tin_ore","silver_ore","rhodium_ore","platinum_ore","iridium_ore","gold_ore",
				"graphite_bar","copper_refined","tin_bar","silver_bar","iron_refined","tropicalCharpente","tropicalTonnerie","platinum_bar","iridium_bar","rhodium_bar","gold_bar",
				"archeSVin","archeTOssements","archeTCasque","archeTUniforme","archeSCoffreB","archeSCoffreT"
			};
		};

		class illegal {

			displayname = "Illegal";
			type = "show";

			list[] = {
				"goldBar",
				"mauiwauiUnprocessed","mauiwauiProcessed","cannabis","marijuana","purpleUnprocessed","purpleProcessed","strawberry_unprocessed","strawberry_processed","khat_unprocessed","khat_processed",
				"templeBones","templeCoins","templeReliques",
				"gravesWatch","gravesCollar","gravesBracelet","gravesRing",
				"serpent","peauSerpent",
				"parc","parcTonnerie","parcCharpente"
			};
		};

		class gems {

			displayname = "Gemmes";

			type = "show";
			list[] = {
				"quartz_uncut","tigereye_uncut","jade_uncut","amber_uncut","aquamarine_uncut","topaz_uncut","sapphire_uncut","emerald_uncut","ruby_uncut","amethyst_uncut","diamond_uncut","grandidierite_uncut","redruby_uncut",
				"quartz_cut","tigereye_cut","jade_cut","amber_cut","aquamarine_cut","topaz_cut","sapphire_cut","emerald_cut","ruby_cut","amethyst_cut","diamond_cut","grandidierite_cut","redruby_cut"
			};
		};

		class crafting {

			displayname = "Crafting";
			type = "show";

			list[] = {
				"neoprene","aluminium","steel","kevlar","plastique","ver",
				"boiteCouture","boiteOutil","compoElectronique",
				"goldcoins","silvercoins","pottery",
				"woodencontainer","smallchest","mediumchest","leadbox","largechest","piratechest"
			};
		};


		class entreprise {

			displayname = "Entreprise";
			type = "show";

			list[] = {
				"cable","ventirad","alimentation","ssd","carteMere","processeur","boitier","rambar","pcgamer","carteGraphique",
				"spaceCake","weed_butter","glaceFolle","laitMua","hellsoup","fioleblinded","yaabaa","kat",
				"riz","poulet","mouton","paper","ticket","bons","assiette","assiette_sale","tacos"
			};
		};

		class chimie {

			displayname = "Chimie";
			type = "show";

			list[] = {
				"acetone","ammoniac","acide_hydrochloric","lithium","phosphoreRouge","sodiumhydroxide","acidesulfuric","toluene","pseudoephedrine","mercure","javel","azote",
				"crack60","crack70","crack80","crack90","crack100",
				"ice50","ice55","ice60","ice65","ice70","ice75","ice80","ice85","ice90","ice91","ice92","ice93","ice94","ice95","ice96","ice97","ice98","ice99","ice100","iceBlue"
			};
		};

		class barriere {

			displayname = "Barriere";
			type = "show";

			list[] = {
				"spikeStrip","roadcone","roadbarrier","tapesignsm","tapesignwarning","tapesign","arrowleft","arrowright","portablebarrier","portablelight"
			};
		};
	};
};