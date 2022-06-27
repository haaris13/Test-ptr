/*
	Config Insurgé

*/

class CfgNarcos {
	class Steps {
		class ClothingV1 {
			displayName = "Friperie";
			description = "Avec l'argent nécessaire, on va pouvoir commercer tout doucement, acheter enfin de l'équipement, c'est comme ça que commence les narcos !";
			amount = 500000;
			icon = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
			unlock[] = {{6, "Uniformes"}, {2, "Casques"}, {2, "Gilet pare-balles"}};
		};

		class WeaponsV1 {
			displayName = "Armurerie";
			description = "Nous voilà, enfin à ce qu’on cherchait, les armes, on va pouvoir enfin montrer que nous sommes pas là pour rigoler.";
			amount = 1100000;
			icon = "\a3\ui_f\data\gui\cfg\hints\Handgun_ca.paa";
			unlock[] = {{11, "Fusil d'assault"}};
		};

		class VehiclesV1 {
			displayName = "Vehicules";
			description = "Grâce à ceci nous pourrons nous déplacer et propager la propagande aux citoyens plus facilement, une aide primordiale pour les narcos !";
			amount = 1800000;
			icon = "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";
			unlock[] = {{2, "Vehicules Blindé"}, {1, "Camion"}};
		};

		class BaseV1 {
			displayName = "Base Narcos";
			description = "La base !";
			amount = 3500000;
			icon = "\a3\ui_f\data\gui\cfg\hints\CompetitiveRules_ca.paa";
			unlock[] = {};
		};

		class AirV1 {
			displayName = "L'envol";
			description = "Parfait pour prendre son envol, et controller le ciel !";
			amount = 3600000;
			icon = "\a3\ui_f\data\gui\cfg\hints\takeoff_ca.paa";
			unlock[] = {{2, "Hélicoptères"}};
		};

		class AirV2 {
			displayName = "L'aigle";
			description = "Les mastodontes du ciel !";
			amount = 3800000;
			icon = "\a3\ui_f\data\gui\cfg\hints\slingloading_ca.paa";
			unlock[] = {{6, "Hélicoptères"}};
		};
	};
};
