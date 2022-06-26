 //wip perks
class CfgPerks
{
	// Civil :

	//TIER 1	(lvl: 5)
	class storageV1
	{
		name = "Stockage optimisé";
		description = "Vous disposez de 5 places supplémentaires dans votre inventaire.";
		side = "civ";
		tier = 1;
		icon = "\a3\ui_f\data\gui\cfg\hints\Slots_ca.paa";
	};
	class dehydrationV1
	{
		name = "Déshydratation limitée";
		description = "Votre déshydratation est réduite de 5 (normalement de 15 toutes les 10 minutes)";
		side = "civ";
		tier = 1;
		icon = "\a3\ui_f\data\gui\cfg\hints\Death_ca.paa";
	};
	class professional
	{
		name = "Professionnel";
		description = "Si vous avez de la chance, il se peux que vous gagnez 1 ou 2 point supplémentaire quand vous augmentez votre niveau de profession.";
		side = "civ";
		tier = 1;
		icon = "\a3\ui_f\data\gui\cfg\hints\Minesweep_CA.paa";
	};

	//TIER 2	(lvl: 10)
	class lucky
	{
		name = "Chanceux";
		description = "Vous avez 10% de chance de plus de gagner des éléments rare.";
		side = "civ";
		tier = 2;
		icon = "\a3\ui_f\data\gui\cfg\hints\Minesweep_CA.paa";
	};
	class hungerV1
	{
		name = "Faim limitée";
		description = "Votre faim est réduite de 5 (normalement de 15 toutes les 15 minutes)";
		side = "civ";
		tier = 2;
		icon = "\a3\ui_f\data\gui\cfg\hints\Death_ca.paa";
	};
	class hide //TODO
	{
		name = "Contrebande";
		description = "Vous pouvez cacher des objets dans différentes parties de votre véhicule.";
		side = "civ";
		tier = 2;
		icon = "\a3\ui_f\data\gui\cfg\hints\Entering_ca.paa";
	};

	//TIER 3	(lvl: 15)
	class thug //TODO
	{
		name = "Braqueur";
		description = "Le montant pris dans la caisse d'une station ou une banque augmente de 10%.";
		side = "civ"; //1 civ, 2west, 3indp
		tier = 3;
		icon = "\a3\ui_f\data\gui\cfg\hints\GUI_ca.paa";
	};

	class farmer
	{
		name = "Farmeur";
		description = "Vitesse de collecte a augmenté de 25%.";
		side = "civ";
		tier = 3;
		icon = "\a3\ui_f\data\gui\cfg\hints\Timing_ca.paa";
	};

	/*class mechanic
	{
		name = "Mécanicien";
		description = "Vous pouvez réparer des véhicules (Méme si un mécano est en service).";
		side = "civ";
		tier = 3;
		icon = "\a3\ui_f\data\gui\cfg\hints\VehicleRepair_CA.paa";
	};*/

	//TIER 4	(lvl: 20)
	class traceur //TODO
	{
		name = "Traceur";
		description = "Vous pouvez utiliser le détecteur de traceur et l'enlever, ainsi que placer des traceurs sur vos véhicules.";
		side = "civ";
		tier = 4;
		icon = "\a3\ui_f\data\gui\cfg\hints\Map_ca.paa";
	};
	class speedcraft
	{
		name = "Doué";
		description = "Les crafts sont instantanés.";
		side = "civ";
		tier = 4;
		icon = "\a3\ui_f\data\gui\cfg\hints\Timing_ca.paa";
	};

	//TIER 5	(lvl: 25)
	/*class mitrailleur
	{
		name = "Mitrailleur";
		description = "Débloquez les mitrailleuses.";
		side = "civ";
		tier = 5;
		icon = "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";
	};*/

	class fooddrink
	{
		name = "Endurance";
		description = "Le taux de déshydratation/faim est réduit par 10%";
		side = "civ";
		tier = 5;
		icon = "";
	};

	class chasseur
	{
		name = "Chasseur";
		description = "Le Sonar augmente sa porté a 1.6km";
		side = "civ";
		tier = 5;
		icon = "";
	};

	class salaireCivV1
	{
		name = "Gosse de riche";
		description = "Le Salaire est augmenté de 10%.";
		side = "civ";
		tier = 5;
		icon = "\a3\ui_f\data\gui\cfg\hints\Rules_ca.paa";
	};

	//TIER 6	(lvl: 30)
	class salaireCivV2
	{
		name = "Gosse de riche";
		description = "Le Salaire est augmenté de 10%.";
		side = "civ";
		tier = 6;
		icon = "\a3\ui_f\data\gui\cfg\hints\Rules_ca.paa";
	};

	class braqueur
	{
		name = "Braqueur";
		description = "Les braquages de stations sont 10% plus rapide.";
		side = "civ";
		tier = 6;
		icon = "";
	};

	class optimisation
	{
		name = "Optimisation des ressources";
		description = "Lors du craft vous avez une chance de ne pas utiliser certaines ressources.";
		side = "civ";
		tier = 6;
		icon = "\a3\ui_f\data\gui\cfg\hints\Minesweep_CA.paa";
	};

	//TIER 7	(lvl: 35)
	class chimiste //TODO
	{
		name = "Chimiste";
		description = "Vous pouvez produire de la Ice.";
		side = "civ";
		tier = 7;
		icon = "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";
	};
	class processor
	{
		name = "Industriel";
		description = "La vitesse de traitement des ressources est réduit de 50%.";
		side = "civ";
		tier = 7;
		icon = "\a3\ui_f\data\gui\cfg\hints\Timing_ca.paa";
	};
	class dehydrationV2
	{
		name = "Déshydratation ilimitée";
		description = "Votre déshydratation est réduite de 5 (normalement de 15 toutes les 10 minutes).";
		side = "civ";
		tier = 7;
		icon = "\a3\ui_f\data\gui\cfg\hints\Death_ca.paa";
	};

	//TIER 8	(lvl: 40)
	class vehiclesweapons
	{
		name = "Véhicules armés";
		description = "Vous pouvez améliorer le Pick-up en version armé.";
		side = "civ";
		tier = 8;
		icon = "\a3\ui_f\data\gui\cfg\hints\Firing_ca.paa";
	};

	class salaireCivV3
	{
		name = "Gosse de riche";
		description = "Le Salaire est augmenté de 10%.";
		side = "civ";
		tier = 8;
		icon = "\a3\ui_f\data\gui\cfg\hints\Rules_ca.paa";
	};


	//TIER 9	(lvl: 45)
	class saboteur //TODO
	{
		name = "Saboteur";
		description = "Vous pouvez saboter les véhicules.";
		side = "civ";
		tier = 9;
		icon = "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa";
	};
	class hungerV2
	{
		name = "Faim ilimitée";
		description = "Votre faim est réduite de 5 (normalement de 15 toutes les 15 minutes).";
		side = "civ";
		tier = 9;
		icon = "\a3\ui_f\data\gui\cfg\hints\Death_ca.paa";
	};
	class storageV2
	{
		name = "Stockage optimisé";
		description = "Vous disposez de 5 places supplémentaires dans votre inventaire.";
		side = "civ";
		tier = 9;
		icon = "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";
	};

	//TIER 10	(lvl: 50)
	class respectable
	{
		name = "Respectable";
		description = "Le montant de réputation que vous gagnez est augmenté de 5 toutes les 5 minutes (normalement de 2 toutes les 5min en civil et 5 par 5min en Insurgé)";
		side = "civ"; //1 civ, 2west, 3indp
		tier = 10;
		icon = "\a3\ui_f\data\gui\cfg\hints\CompetitiveRules_ca.paa";
	};
	class weaponsPrix
	{
		name = "Marchander";
		description = "Les Prix des armes sont réduit de 15%.";
		side = "civ";
		tier = 10;
		icon = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
	};
	class nocraft
	{
		name = "La flemme";
		description = "Vous pouvez acheter des items normalement uniquement craftable.";
		side = "civ";
		tier = 10;
		icon = "\a3\ui_f\data\gui\cfg\hints\VehicleAmmo_CA.paa";
	};

	//TIER 11	(lvl: 55)
	class Malfrat
	{
		name = "Malfrat";
		description = "Vous avez un rabais sur tous les items qui sont present dans le Shop Malfrat environ 10%.";
		side = "civ"; //1 civ, 2west, 3indp
		tier = 11;
		icon = "\a3\ui_f\data\gui\cfg\hints\CompetitiveRules_ca.paa";
	};
	class Negociant
	{
		name = "Negociant";
		description = "Les Prix des véhicules sont réduit de 10%.";
		side = "civ";
		tier = 11;
		icon = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
	};
	class Insouciant
	{
		name = "Insouciant";
		description = "En cas de perte de réputation celle-ci est réduit de 15%.";
		side = "civ";
		tier = 11;
		icon = "\a3\ui_f\data\gui\cfg\hints\VehicleAmmo_CA.paa";
	};

	//TIER 12	(lvl: 60)
	class fournaise
	{
		name = "fournaise";
		description = "reduit du temps de fonte de 50%";
		side = "civ"; //1 civ, 2west, 3indp
		tier = 12;
		icon = "\a3\ui_f\data\gui\cfg\hints\CompetitiveRules_ca.paa";
	};
	class Immobilier
	{
		name = "Immobilier";
		description = "Les Prix des maisons sont réduit de 5%.";
		side = "civ";
		tier = 12;
		icon = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
	};
	class Dealer
	{
		name = "Dealer";
		description = "La revente au Dealer augmente de 5%.";
		side = "civ";
		tier = 12;
		icon = "\a3\ui_f\data\gui\cfg\hints\VehicleAmmo_CA.paa";
	};

	//TIER 13	(lvl: 65)
	class Immobilier1
	{
		name = "Agent Immobilier";
		description = "Le prix de Maison diminue de 5%";
		side = "civ"; //1 civ, 2west, 3indp
		tier = 13;
		icon = "\a3\ui_f\data\gui\cfg\hints\CompetitiveRules_ca.paa";
	};
	class Blanchisseur
	{
		name = "Blanchisseur";
		description = "Le blanchisseur baisse ses tarifs de 5%.";
		side = "civ";
		tier = 13;
		icon = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
	};
	class coffre
	{
		name = "Coffre";
		description = "Augmentation des coffres de véhicules de 50.";
		side = "civ";
		tier = 13;
		icon = "\a3\ui_f\data\gui\cfg\hints\VehicleAmmo_CA.paa";
	};

	//TIER 14	(lvl: 70)
	class coffre1
	{
		name = "coffre2";
		description = "Augmentation des coffres de véhicules de 50.";
		side = "civ"; //1 civ, 2west, 3indp
		tier = 14;
		icon = "\a3\ui_f\data\gui\cfg\hints\CompetitiveRules_ca.paa";
	};
	/*class coffreaerien
	{
		name = "Marchander";
		description = "Aug.";
		side = "civ";
		tier = 14;
		icon = "\a3\ui_f\data\gui\cfg\hints\Chat_ca.paa";
	};*/
	class ecoconduite
	{
		name = "ecoConduite";
		description = "Baisse de la consommation de carburant de 10%.";
		side = "civ";
		tier = 14;
		icon = "\a3\ui_f\data\gui\cfg\hints\VehicleAmmo_CA.paa";
	};

 // gendarme rajouté par alharis
	class fastlearnerCop
	{
		name = "Apprendre vite";
		description = "La quantité d’expérience que vous gagnez est augmentée de 10%";
		side = "cop";
		tier = 1;
		icon = "";
	};




	/*class respectable
	{
		name = "Respectable";
		description = "Le montant de réputation que vous gagnez est augmenté de 10%";
		side = "civ"; //1 civ, 2west, 3indp
		tier = 1;
		icon = "";
	};
	class thug
	{
		name = "Thug";
		description = "Le montant pris dans la caisse d'une station augmente de 10%";
		side = "civ"; //1 civ, 2west, 3indp
		tier = 1;
		icon = "";
	};

	//TIER 2
	class strength
	{
		name = "Force";
		description = "La taille de votre Sac à dos est augmenté de 12 pour chaque sac à dos";
		side = "civ";
		tier = 2;
		icon = "";
	};
	
	class processor
	{
		name = "Processeur";
		description = "La difficulté de traitement des articles est réduit de 10%";
		side = "civ";
		tier = 2;
		icon = "";
	};
	class grandeBouche
	{
		name = "Grande Bouche";
		description = "La revendiquation des zones est 20% plus rapide";
		side = "civ";
		tier = 2;
		icon = "";
	};


	//TIER 3


	class lucky
	{
		name = "Chanceux";
		description = "Vous avez 5% de chance de plus de gagner des éléments rare.";
		side = "civ";
		tier = 3;
		icon = "";
	};
	

	//TIER 4
	class stronghold
	{
		name = "Bastion";
		description = "Le revenu de control de zones de gang est augmentée.";
		side = "civ";
		tier = 4;
		icon = "";
	};
	class strengthV2
	{
		name = "Force";
		description = "La taille de votre Sac à dos est augmenté de 12 pour chaque sac à dos.";
		side = "civ";
		tier = 4;
		icon = "";
	};
	class processorV2
	{
		name = "Processeur";
		description = "Le temps de traitement des ressources et réduit de 10%";
		side = "civ";
		tier = 4;
		icon = "";
	};
	



	//TIER 5
	class mechanic
	{
		name = "Mechanic";
		description = "Réparation des véhicules 15% plus rapide.";
		side = "civ";
		tier = 5;
		icon = "";
	};

	class deliveryman
	{
		name = "Delivery Man";
		description = "Une augmentation de salaire des missions de livraison de 15 %.";
		side = "civ";
		tier = 5;
		icon = "";
	};

	class fastlearnerV2
	{
		name = "Apprendre vite";
		description = "La quantité d’expérience que vous gagnez est augmentée par 10%.";
		side = "civ";
		tier = 5;
		icon = "";
	};
	class luckyV2
	{
		name = "Trés Chanceux";
		description = "Vous avez 5% de chance de plus de gagner des éléments rare.";
		side = "civ";
		tier = 5;
		icon = "";
	};


	//TIER 6
	class farmerV2
	{
		name = "Cultivateur";
		description = "Vitesse de collecte a augmenté de 10%.";
		side = "civ";
		tier = 6;
		icon = "";
	};

	class maintenance
	{
		name = "Immobilier";
		description = "Vous pouvez vendre vos maisons pour leur prix d’achat original.";
		side = "civ";
		tier = 6;
		icon = "";
	};

	class weaponsexpert
	{
		name = "Expert d'Armes";
		description = "Débloque le RPG-7. (Peut être utilisé uniquement sur un véhicule armé (Prowler et Qilin))";
		side = "civ";
		tier = 6;
		icon = "";
	};

	class preparateur
	{
		name = "Préparateur";
		description = "Vous pouvez louer les véhicules armés";
		side = "civ";
		tier = 6;
		icon = "";
	};


	//TIER 7
	class sniperP1
	{
		name = "Fusil de précision V1";
		description = "Débloquez la game de Fusil de précision de calibre moyen";
		side = "civ";
		tier = 7;
		icon = "";
	};

	class sniperP2
	{
		name = "Fusil de précision V2";
		description = "Débloquez la game de Fusil de précision de gros calibre";
		side = "civ";
		tier = 7;
		icon = "";
	};

	class weaponsPrix
	{
		name = "Commercial";
		description = "Les Prix des armes sont réduit de 15%.";
		side = "civ";
		tier = 7;
		icon = "";
	};

	class housePlus
	{
		name = "Vacanciers";
		description = "Vous pouvez avoir une troisième maison.";
		side = "civ";
		tier = 7;
		icon = "";
	};

	class mitrailleur
	{
		name = "Mitrailleur";
		description = "Débloquez la game d'armes Mitrailleur";
		side = "civ";
		tier = 7;
		icon = "";
	};

		class farmer
	{
		name = "Cultivateur";
		description = "Vitesse de collecte a augmenté de 10%";
		side = "civ";
		tier = 8;
		icon = "";
	};





	// Police:

	//TIER 1

	class fastlearnerCop
	{
		name = "Apprendre vite";
		description = "La quantité d’expérience que vous gagnez est augmentée par 10%";
		side = "cop";
		tier = 1;
		icon = "";
	};

	class mechanicCopV1
	{
		name = "Mécanicien";
		description = "Réparation des véhicules 10% plus rapide.";
		side = "cop"; //1 civ, 2 cop, 3indp
		tier = 1;
		icon = "";
	};

	//TIER 2:
	class starveCop
	{
		name = "Plein les Poches";
		description = "Vous étes moins vite assoiffé.";
		side = "cop";
		tier = 2;
		icon = "";
	};

	class captureCopV1
	{
		name = "Grande Bouche";
		description = "La capture des zones et 10% plus rapide.";
		side = "cop"; //1 civ, 2 cop, 3indp
		tier = 2;
		icon = "";
	};

	// TIER 3:
	class searchCopV1
	{
		name = "Fouilleur";
		description = "La fouille des véhicules est de 10% plus rapide";
		side = "cop";
		tier = 3;
		icon = "";
	};

	class vehCopV1
	{
		name = "Transporteur";
		description = "La mise en fourriére des véhicules est de 10% plus rapide";
		side = "cop";
		tier = 3;
		icon = "";
	};

	// TIER 4:

	class salaireCopV1
	{
		name = "Riche";
		description = "Le Salaire est augmenté de 10%";
		side = "cop";
		tier = 4;
		icon = "";
	};

	class mechanicCopV2
	{
		name = "Mécanicien";
		description = "Réparation des véhicules 10% plus rapide.";
		side = "cop"; //1 civ, 2 cop, 3indp
		tier = 4;
		icon = "";
	};

	// TIER 5:
	class strengthCop
	{
		name = "Force";
		description = "La taille de votre Sac à dos est augmenté de 12 pour chaque sac à dos";
		side = "cop";
		tier = 5;
		icon = "";
	};

	class starveFCop
	{
		name = "Plein les Poches";
		description = "Vous étes moins vite affamé.";
		side = "cop";
		tier = 5;
		icon = "";
	};

	// TIER 6:
	class searchCopV2
	{
		name = "Fouilleur";
		description = "La fouille des véhicules est de 10% plus rapide";
		side = "cop";
		tier = 6;
		icon = "";
	};

	class captureCopV2
	{
		name = "Grande Bouche";
		description = "La capture des zones et 10% plus rapide.";
		side = "cop"; //1 civ, 2 cop, 3indp
		tier = 6;
		icon = "";
	};

	// TIER 7:

	class ASP1
	{
		name = "Sniper";
		description = "L'ASP1 est disponible";
		side = "cop"; //1 civ, 2 cop, 3indp
		tier = 7;
		icon = "";
	};

	class salaireCopV2
	{
		name = "Riche";
		description = "Le Salaire est augmenté de 10%";
		side = "cop";
		tier = 7;
		icon = "";
	};
	*/

};
