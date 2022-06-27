/*
	Config for Illegal

	Autor: IronBlade
*/


class CfgIllegal {

	class Invoices {
		class Mining {
			condition = "";
			title = "Facture DaltGreen";
			text = "Je soussigné Pdg de DaltGreen<br/>certifie d'avoir achété %1 %2 pour un montant de %3$.<br/>Fait à Lobaka le %4.";
			signature = "DaltGreen";
		};

		class Gems {
			condition = "";
			title = "Facture DaltGreen";
			text = "Je soussigné Pdg de DaltGreen<br/>certifie d'avoir achété %1 %2 pour un montant de %3$.<br/>Fait à Regina le %4.";
			signature = "DaltGreen";
		};

		class Archeologue {
			condition = "license_civ_arche";
			title = "Facture Archeologue";
			text = "Je soussigné Archeologue agrée de Tanoa.<br/>certifie d'avoir achété %1 %2 pour un montant de %3$.<br/>Fait à Petit Nicolet le %4.";
			signature = "Archeologue";
		};

		class Market {
			title = "Facture Liqourland";
			text = "Je soussigné Pdg de Liqourland.<br/>certifie d'avoir achété %1 %2 pour un montant de %3$.<br/>Fait le %4.";
			signature = "Liqourland";
		};

		class ExpoAgro {
			title = "Facture Corgill";
			text = "Je soussigné Pdg de Corgill.<br/>certifie d'avoir achété %1 %2 pour un montant de %3$.<br/>Fait à Blue Pearl le %4.";
			signature = "Corgill";
		};

		class ExpoWood {
			title = "Facture WoodWork";
			text = "Je soussigné Pdg de WoodWork.<br/>certifie d'avoir achété %1 %2 pour un montant de %3$.<br/>Fait le %4 .";
			signature = "WoodWork";
		};

		class ExpoMed {
			title = "Facture MedoLic";
			text = "Je soussigné Pdg de MedoLic.<br/>certifie d'avoir achété %1 %2 pour un montant de %3$.<br/>Fait le %4.";
			signature = "MedoLic";
		};

		class TanoaOil {
			title = "Facture Tanoil";
			text = "Je soussigné Pdg de Tanoil.<br/>certifie d'avoir achété une livraison d'essence pour un montant de %3$.<br/>Fait le %4.";
			signature = "Tanoil";
		};
	};

	class VirtualItems {

		class DefaultMining {
			legal = 1;
			invoiceOnSell = 1;
			invoiceType = "Mining";
		};

		class tin_bar : DefaultMining {
        	xpFactor = 170;
        };

		class tin_bar_bad : DefaultMining {
        	xpFactor = 85;
        };

		class copper_refined : DefaultMining {
        	xpFactor = 170;
        };

		class copper_refined_bad : DefaultMining {
        	xpFactor = 85;
        };

		class chromium_bar : DefaultMining {
        	xpFactor = 212;
        };

		class chromium_bar_bad : DefaultMining {
        	xpFactor = 106;
        };

		class nickel_bar : DefaultMining {
        	xpFactor = 254;
        };

		class nickel_bar_bad : DefaultMining {
        	xpFactor = 127;
        };

		class aluminium_bar : DefaultMining {
        	xpFactor = 220;
        };

		class aluminium_bar_bad : DefaultMining {
        	xpFactor = 110;
        };

		class iron_refined : DefaultMining {
        	xpFactor = 191;
        };

		class iron_refined_bad : DefaultMining {
        	xpFactor = 95;
        };

		class gold_bar : DefaultMining {
        	xpFactor = 335;
        };

		class gold_bar_bad : DefaultMining {
        	xpFactor = 167;
        };


		class DefaultGems {
			legal = 1;
			invoiceOnSell = 1;
			invoiceType = "Gems";
		};

		class diamond_cut : DefaultGems {
        	xpFactor = 900;
        };

		class ruby_cut : DefaultGems {
        	xpFactor = 900;
        };

		class emerald_cut : DefaultGems {
        	xpFactor = 900;
        };

		class sapphire_cut : DefaultGems {
        	xpFactor = 900;
        };

        class amethyst_cut : DefaultGems {
        	xpFactor = 900;
        };

		class topaz_cut : DefaultGems {
        	xpFactor = 900;
        };

        class DefaultArcheologue {
        	legal = 1;
			invoiceOnSell = 1;
			invoiceType = "Archeologue";
		};

        class archeTOssements : DefaultArcheologue {
        	xpFactor = 600;
        };

        class archeTUniforme : DefaultArcheologue {
        	xpFactor = 600;
        };

        class archeSVin : DefaultArcheologue {
        	xpFactor = 600;
        };

        class archeSCoffreB : DefaultArcheologue {
        	xpFactor = 600;
        };

        class archeSCoffreT : DefaultArcheologue {
        	xpFactor = 600;
        };

        class archeTCasque : DefaultArcheologue {
        	xpFactor = 600;
        };

        
        class DefaultMarket {
        	legal = 1;
        	invoiceOnSell = 1;
			invoiceType = "Market";
        };

        class cacao: DefaultMarket {
        	xpFactor = 0;
        };

		class DefaultExpoAgro {
			legal = 1;
        	invoiceOnSell = 1;
			invoiceType = "ExpoAgro";
		};

        class rhum: DefaultMarket {
        	xpFactor = 29;
        };

		class DefaultExpoWood {
			legal = 1;
        	invoiceOnSell = 1;
			invoiceType = "ExpoWood";
		};

        class pinPlank: DefaultExpoWood {
        	xpFactor = 152;
        };

        class DefaultExpoMed {
        	legal = 1;
			invoiceOnSell = 1;
			invoiceType = "ExpoMed";
        };

        class med_finish: DefaultExpoMed {
        	xpFactor = 200;
        };

        class DefaultTanoaOil {
        	legal = 1;
			invoiceOnSell = 1;
			invoiceType = "TanoaOil";
        };

        class refuel_oil: DefaultTanoaOil {
        	xpFactor = 0;
        };

  		
        class DefaultDrugs {
        	legal = 0;
			invoiceOnSell = 0;
			invoiceType = "";
        };

        class marijuana: DefaultDrugs {
        	xpFactor = 46;
        };

        class mauiwaui_processed: DefaultDrugs {
        	xpFactor = 135;
        };

        class purple_processed: DefaultDrugs {
        	xpFactor = 207;
        };

        class strawberry_processed: DefaultDrugs {
        	xpFactor = 600;
        };


        class DefaultIllegal {
        	legal = 0;
			invoiceOnSell = 0;
			invoiceType = "";
        };

        class kaoriPlank: DefaultIllegal {
        	xpFactor = 233;
        };

        class peauSerpent: DefaultIllegal {
        	xpFactor = 100;
        };

        class lightwp_finish: DefaultIllegal {
        	xpFactor = 250;
        };

        class gravesWatch: DefaultIllegal {
        	xpFactor = 0;
        };

        class gravesCollar: DefaultIllegal {
        	xpFactor = 0;
        };

        class gravesBracelet: DefaultIllegal {
        	xpFactor = 0;
        };

        class gravesRing: DefaultIllegal {
        	xpFactor = 0;
        };
	};

	class MoneyLaundering {
		checkActivateMoney = 1000;

		class CasesLaundering {
            
			class BagSmall {
				item = "BagSmall";
				needLaundering = 0;
				moneyResult = 750;
				xp = 20;
			};

			class BagBig {
				item = "BagBig";
				needLaundering = 10000;
				moneyResult = 8000;
				xp = 100;
			};

			class CaseBig {
				item = "CaseBig";
				needLaundering = 100000;
				moneyResult = 85000;
				xp = 200;
			};
		};
	};
};