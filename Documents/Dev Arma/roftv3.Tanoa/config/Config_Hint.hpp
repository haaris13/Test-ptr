/*
    Config Hints

    Autor:IronBlade
*/
class CfgHints
{
	class Farm
	{
		// Topic title (displayed only in topic listbox in Field Manual)
		displayName = "Farm";
		class Recolte
		{
			displayName = "Récolter des ressources";

			description = "Pour récolter des ressources il suffit d'appuyer sur la touche %3Espace%4 à proximité d'une zone de récolte.";

            tip = "Certaines récoltes nécessite un outil.";

			arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa";

            multipleShow = false;
		};

        class Process
        {
            displayName = "Traiter des ressources";

            description = "Une fois les ressources récoltées il suffit d'aller à une zone de traitement.";

            tip = "Les zones de traitement sont indiquées sur la carte.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa";

            multipleShow = false;
        };

        class Furnace
        {
            displayName = "Le Four";

            description = "Le Four vous permet de raffiner les minerais en lingots, chaque minerais a besoin d'une température pour être fondu.%1 Les températures vous seront transmises par l'acheteur de minerais, si vous lui vendez un lingot mal raffiné.%1%3Si la température du four est trop basse alors le minerai ne risque pas de fondre pour devenir un lingot !%4%1Si vous ne connaissez pas la température nécessaire 7000°C devrait suffire pour avoir un résultat.";

            tip = "Si vous dépassez de trop la température nécessaire, vous risquez d'obtenir des lingots mal raffinés.%1Attention ne laissez pas un lingot dans le four trop longtemps.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\ActionMenu_ca.paa";

            multipleShow = true;
        };
	};

    class Action
    {
        displayName = "Liste des Actions";

        class Commencer
        {
            displayName = "Pour Commencer";

            description = "Bonjour, et Bienvenue sur l'île, je me présente je suis Botis, votre assistant et je vais vous aider tout au long de votre aventure !%1%1Plus d'infos sur %3<a href='https://pacific-island.com/forum'>pacific-island.com</a>%4";

            tip = "Pour que tout se passe bien, Merci de lire les Règles. (Pour me désactiver allez dans les paramètres de la tablette) %1Il est important de changer la touche %3[H]%4 qui gère l'aide par une autre touche.%1Sinon il vous sera impossible de ranger l'arme !";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\CallSupport_CA.paa";

            multipleShow = false;
        };

        class Touches
        {
            displayName = "Les Touches";

            description = "Plusieurs touches sont nécessaire dans les actions !%1%1%2La touche %3Espace%4, sert à la plupart des actions (Récoltes, maisons)%1%2La touche %3Y%4 pour ouvrir le Menu Joueur.%1%2La touche %3T%4 pour ouvrir le coffre.%1%2La touche %3Shift+V%4 pour mettre les mains derrière la tête.%1%2La touche %3U%4 pour verrouiller ou déverrouiller un véhicule.";

            tip = "La liste des touches peut être revue sur la %3Carte%4.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Use_ca.paa";

            multipleShow = false;
        };

        class AchatVehicule
        {
            displayName = "Véhicule";

            description = "Le véhicule acheté a apparu à côté du vendeur.%1Maintenant allez à la préfecture pour immatriculer votre véhicule.";

            tip = "Si vous voulez vous pouvez l'assurer depuis votre Garage.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Checkpoints_ca.paa";

            multipleShow = true;
        };

        class Garage
        {
            displayName = "Le Garage";

            description = "Dans le garage vous pouvez voir la liste de vos véhicules et les assurer.%1%1 Un Véhicule Assuré est protégé contre le vol et la dégradation.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";

            multipleShow = true;
        };

        class Caisse
        {
            displayName = "La Caisse";

            description = "Pour poser la caisse appuyez sur %3Espace%4.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class Fatigue
        {
            displayName = "La Fatigue";

            description = "Vous êtes fatigué.%1Attendez un peu pour reprendre votre soufle ou consommez des produits dopants.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Stamina_OverEncumbrance_CA.paa";

            multipleShow = false;
        };

        class Perks
        {
            displayName = "Les Compétences";

            description = "Les Compétences vous permettent d'être plus compétent et d'avoir des bonus dans différents dommaines.%1Vous accédez à des slots de compétences et de nouvelles compétences tous les 5 Niveaux. ";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\NormalDamage_ca.paa";

            multipleShow = true;
        };

        class Reputation
        {
            displayName = "La Réputation";

            description = "La Réputation évolue de manière à suivre vos action.%1%2Si vous tuez une personne, votre réputation va baisser, si vous vous évadez de prison aussi...%1%1La réputation affecte les prix des Armes, Véhicules (Plus la réputation est basse, plus c'est cher).";

            tip = "La réputation peut aller de 5000/-10000.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\NormalDamage_ca.paa";

            multipleShow = false;
        };

        class Capture
        {
            displayName = "La Capture de Drapeaux";

            description = "Les Drapeaux définissent les propriétaires des zones.%1Le temps de capture est définit par les joueurs dans la zone:%1%2Les Membres de votre propre Gang.%1%2Les Gangs Rivaux%1%2Les autres groupes.%1%1Si une zone est abandonnée par ces membres elle retourne à la Police.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Team_switch_ca.paa";

            multipleShow = false;
        };

        class Kaelevra
        {
            displayName = "Chez Wiki Casino";

            description = "Bienvenue au restaurant %3Chez Wiki Casino%4 nous vous proposons une gastronomie venant des quatre coins du monde.%1Donc Vous avez:%1%2 Tacos 60.000$%1%2 Plat du jour 60.000$%1%2 Tajin 30.000$%1%2 Riz cantonais 9.000$%1%2 Paela 5.000$ Assiette Grec 5.000$%1%2 Sushi de sardine 5.000$%1%2 Saké 25cl 4.000$%1%2 Bouteille de vodka 50cl 2.000$%1%2 Biere 25cl 2.000$%1%2 Bouteille de champagne 1L 2.000$%1%2 Bouteille de vin 1L 2.000$%1%2 Bouteille de Ruhm 50cl 4.000$%1%2 Bouteille Grand Corsé 1L 4.000$%1%2 Tiket du casino 950$%1%2   %1%1En espérant que vous avez passé un agréable moment !";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };
    };

    class Shop
    {
        displayName = "Shop";
        class Vehicule
        {
            displayName = "Le Concessionnaire";

            description = "Ici vous avez la liste des véhicules achetables dans ce concessionnaire.%1%1Un véhicule a plusieurs caractéristiques: %1%2Une Vitesse maximale.%1%2Un Coffre (Pour stocker des objets).%1%2Une Resistance.%1%2Un Réservoir d'essence.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";

            multipleShow = true;
        };

        class Weapons
        {
            displayName = "L'Armurerie";

            description = "Ici vous avez la liste des armes achetables dans cette armurerie.%1%1Les Munitions/Attachments qui sont mis en évidence en orange sont compatibles avec vos armes actuellement équipées.%1%1Les Objets en Rouge sont ceux que vous n'avez pas débloqué !";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";

            multipleShow = true;
        };

        class Item
        {
            displayName = "La Quincaillerie";

            description = "Ici vous avez la liste des objets achetables dans cette quincaillerie.%1%1Ces objets peuvent être utilisés ou sont nécessaires pour une action.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Slots_ca.paa";

            multipleShow = true;
        };

        class Licence
        {
            displayName = "Les Licences";

            description = "Ici vous avez la liste des licences achetables.%1%1Ces Licences servent à acheter: de l'équipement et des vehicules ou à réaliser des actions.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Tasks_ca.paa";

            multipleShow = true;
        };

        class Clothing
        {
            displayName = "Les Vêtements";

            description = "Ici vous avez la liste des vétements achetables.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Gear_ca.paa";

            multipleShow = true;
        };
    };

    // Prof:
    class Prof
    {
        displayName = "Professions";
        class Global
        {
            displayName = "Les Professions";

            description = "Voici la liste des Professions disponible %1%1Chaque Profession permet d'améliorer ses compétences dans le domaine concerné et de débloquer de nouvelles choses (Activités, Craft, Actions).";

            tip = "Pour vous améliorer dans une profession il suffit de réaliser des actions dans le domaine de la profession. Example: ramasser du raisin pour augmenter la cueillette. ";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class prof_craft
        {
            displayName = "MacGyver";

            description = "La profession MacGyver permet de craft des équipements inédits. %1%1 Pour avoir les composants nécessaires, il faut faire de la %3Chasse aux Trésors%4.";

            tip = "Pour vous améliorer en MacGyver il suffit de craft (3 Niveaux Gagnés par Craft).";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Reload_ca.paa";

            multipleShow = true;
        };

        class prof_gathering
        {
            displayName = "Cueillette";

            description = "La Cueillette est une profession qui se définie autour de la récupération des ressources provenant des divers champs/plantations.%1 Vous pouvez cueillir sans aucun équipement.";

            tip = "Pour améliorer la Cueillette il suffit de cueillir à la main (15/100 de chance de gagner un niveau par cueillette).";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class prof_mining
        {
            displayName = "Minage";

            description = "L’exploitation minière est un métier simple, qui repose sur l’obtention des minerais et autres minéraux provenant des mines.";

            tip = "Pour améliorer le Minage il suffit de récolter avec un outil (15/100 de chance de gagner un niveau par minage).";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class prof_treasure
        {
            displayName = "Chasse aux Trésors";

            description = "La chasse aux trésors vous permet d'obtenir des objets qui vous serviront à la revente ou au craft (Voir %3MacGyver%4). %1%1Il existe deux chasses aux trésors: %1%1%2Terrestre:%1Pour faire de la chasse aux trésors terrestre il vous faut un %3Récépteur Trafiqué%4 disponible à l'archéologue.%1%1%2Maritime:%1Pour faire de la chasse aux trésors maritime il vous faut un %3Détecteur de trésor%4 disponible à l'archéologue.";

            tip = "Pour améliorer la Chasse aux Trésors il faut ouvrir des coffres et trouver les trésors.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";

            multipleShow = true;
        };

        class prof_chimie
        {
            displayName = "Chimie";

            description = "La chimie vous permet d'effectuer différents mélanges Exotiques.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };
    };

    // Atouts:
    class Atouts
    {
        displayName = "Atouts";

        class glaceFolle
        {
            displayName = "La Glace Folle";

            description = "L'effet Glace Folle Activé !%1A Partir de maintenant et pour une heure la taille de votre sac est augmentée de 80 Places.";

            tip = "Effet d'une Heure.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Thermal_imaging_ca.paa";

            multipleShow = true;
        };

        class spaceCake
        {
            displayName = "Le Space Cake";

            description = "L'effet Space Cake Activé !%1A Partir de maintenant et pour une heure la vitesse de récolte et de traitement est augmentée de 20 Pourcents.";

            tip = "Effet d'une Heure.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Thermal_imaging_ca.paa";

            multipleShow = true;
        };

        class sushi
        {
            displayName = "Le Sushi de sardine";

            description = "Vous allez être plus hydraté pendant une heure.";

            tip = "Effet d'une Heure.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class grec
        {
            displayName = "L'Assiette Grecque";

            description = "Vous vous êtes goinfré, maintenant et pendant une heure vous avez moins besoin de manger.";

            tip = "Effet d'une Heure.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class paela
        {
            displayName = "La Paela";

            description = "Vous avez la forme plus que jamais ! On peut dire que c'est un produit dopant.";

            tip = "Effet d'une Heure.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class rizCantonais
        {
            displayName = "Le Riz Cantonais";

            description = "Vous allez récolter des ressources légales plus rapidement !";

            tip = "Effet d'une Heure.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };
    };

    class LittleBank
    {
        displayName = "Banques de quartier";

        class BraquerBanque
        {
            displayName = "Les Banques de quartier";

            description = "Les Banques de quartier sont un moyen simple de ce faire de l'argent.%1Comment Faire:%1%2Il vous faut une charge.%1%2Aller lancer %3l'action sur la porte%4.%1%2Attendre la fin du décompte.%1%2Ouvrir la grille avec une disqueuse.%1%2Vider le coffre.%1%2Ne Pas Mourir.%1%1Attention si vous voulez une grosse somme d'argent il faut que tous les membres de votre groupe soient à moins de 35m de la porte tout au long de l'action !";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Mines_CA.paa";

            multipleShow = false;
        };
    };

    class Immatriculation
    {
        displayName = "Immatriculation";

        class Legale
        {
            displayName = "Immatriculation Légales";

            description = "Ici vous pouvez immatriculer vos véhicules de manière légale.%1Les Immatriculations légales vous permettent de voyager librement dans l'île, par contre si vous effectuez une infraction un joueur pourra vous dénoncer à la Police.%1 Votre Immatriculation est unique et donc ne peut pas être reproduite légalement%1La Police dispose d’un moyen d’identifier le propriétaire d'une plaque légale.";

            tip = "Les plaques d'Immatriculation sont constituées obligatoirement de 9 caractéres.%1Les Insultes sont interdites !";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";

            multipleShow = true;
        };

        class Illegal
        {
            displayName = "Immatriculation illégales";

            description = "Ici vous pouvez immatriculer vos véhicules de manière illégale.%1Les Immatriculations illégales vous permettent de voyager incognito dans l'ile, par contre si la Police cherche dans leurs ordinateurs le numéro de votre plaque il est possible, si il n’est pas attribué légalement à un véhicule du même type que vous soyez découvert et arrêté.";

            tip = "Les plaques d'Immatriculation sont constituées obligatoirement de 9 caractéres.%1Il est impossible pour un même joueurs de posséder deux fois la même plaque d'immatriculation.%1Les Insultes sont interdites !";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";

            multipleShow = true;
        };
    };

    class Licences
    {
        displayName = "Licences";

        class driver
        {
            displayName = "Permis de conduire";

            description = "Cette Licence permet d'acheter des véhicules aux concessionnaires";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";

            multipleShow = true;
        };

        class boat
        {
            displayName = "Permis de conduire maritime";

            description = "Cette Licence permet d'acheter des véhicules aux concessionnaires maritimes.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\SDV_ca.paa";

            multipleShow = true;
        };

        class pilot
        {
            displayName = "Licence de Pilote";

            description = "Cette Licence permet d'acheter des véhicules aux concessionnaires aériens.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\HookingUp_ca.paa";

            multipleShow = true;
        };

        class trucking
        {
            displayName = "Permis Poids Lourds";

            description = "Cette Licence permet d'acheter des véhicules aux concessionnaires Poids Lourds.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\VehicleGUI_ca.paa";

            multipleShow = true;
        };

        class gun
        {
            displayName = "Permis de port d'arme";

            description = "Cette Licence permet d'acheter des armes aux armureries.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Rifle_ca.paa";

            multipleShow = true;
        };

        class dive
        {
            displayName = "Licence de Plongée";

            description = "Cette Licence permet d'acheter des vétements aux vendeurs de Plongée";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Underwater_ca.paa";

            multipleShow = true;
        };

        class home
        {
            displayName = "Droit de Propriété";

            description = "Cette Licence permet d'acheter des maisons.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class iron
        {
            displayName = "Fonte du Fer";

            description = "Cette Licence permet de fondre du %3Fer%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class copper
        {
            displayName = "Fonte de Cuivre";

            description = "Cette Licence permet de fondre du %3Cuivre%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class tin
        {
            displayName = "Fonte de l'Étain";

            description = "Cette Licence permet de fondre de %3L'Étain%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class silver
        {
            displayName = "Fonte de l'argent";

            description = "Cette Licence permet de fondre de %3L'argent%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class rhodium
        {
            displayName = "Fonte du Rhodium";

            description = "Cette Licence permet de fondre du %3Rhodium%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class platinum
        {
            displayName = "Fonte du Platine";

            description = "Cette Licence permet de fondre du %3Platine%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class gold
        {
            displayName = "Traitement de l'Or";

            description = "Cette Licence permet de fondre de %3l'Or%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class graphite
        {
            displayName = "Traitement du Graphite";

            description = "Cette Licence permet de fondre du %3Graphite%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class iridium
        {
            displayName = "Traitement de l'Iridium";

            description = "Cette Licence permet de fondre de l'%3Iridium%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        // Illégal:
        class cocaine
        {
            displayName = "Transformation de la Purple Kush";

            description = "Cette Licence permet de transformer de la %3Purple Kush%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class heroin
        {
            displayName = "Transformation Maui Waui";

            description = "Cette Licence permet de transformer de la %3Maui Waui%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class marijuana
        {
            displayName = "Traitement du Cannabis";

            description = "Cette Licence permet de transformer du %3Cannabis%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class insurge
        {
            displayName = "Entrainement insurgé";

            description = "Cette Licence permet d'acheter des armes, vehicules, vétements et de débloquer des zones d'apparition Insurgé.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Automatic_ca.paa";

            multipleShow = true;
        };

        class arche
        {
            displayName = "Licence d'archéologie";

            description = "Cette licence permet de récupérer des caisses et autres, sur les épaves (Marquées sur la Carte) légalement.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class forestiere
        {
            displayName = "Licence Forestière";

            description = "Cette Licence permet de transformer du %3Bois%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class sejour
        {
            displayName = "Autorisation de séjour";

            description = "Cette Licence permet d'apparaitre dans les villes controlées par l'Etat";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class mafia
        {
            displayName = "Entrainement Mafieux";

            description = "Cette Licence permet d'acheter des armes, vehicules, vêtements Mafieux.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Shotguns_ca.paa";

            multipleShow = true;
        };

        class strawberry
        {
            displayName = "Transformation Strawberry";

            description = "Cette Licence permet de transformer de la %3Strawberry%4 à moindre coût.";

            tip = "";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };
    };

    // Entreprise :
    class Kaelevra
    {
        displayName = "Chez Myroslav";

        class tajin
        {
            displayName = "Le Tajin";

            description = "Le %3Tajin%4 est un plat de resistance.%1Il va vous permettre de gagner de la réputation.%1%3Attention vous devez rester sur la zone du restaurant !%4";

            tip = "Gain de 250 de réputation.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };

        class platJour
        {
            displayName = "Le Plat du jour";

            description = "Le %3Plat du jour%4 est un plat de resistance.%1Il va vous permettre de gagner de la réputation.%1%3Attention vous devez rester sur la zone du restaurant !%4";

            tip = "Gain de 500 de réputation.";

            arguments[] = {};

            image =  "\a3\ui_f\data\gui\cfg\hints\Miss_icon_ca.paa";

            multipleShow = true;
        };
    };
};
