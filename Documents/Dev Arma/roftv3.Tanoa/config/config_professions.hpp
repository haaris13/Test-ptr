/*
    Autor: IronBlade, updated alharis
*/

class Professions {

    class prof_craft {
        displayName = "MacGyver";
        variable = "prof_craft";
        profDescription = "Devenir MacGyver vous permet de crée différents items, vétements, gilets, accessoires pour vous équiper.";
        type = "Crafting";
        description = "Le Artisanat vous permettent de crée une variété d’objets.";
        unlocks[] = {};
    };


    class prof_gathering {

        displayName = "Narcos";
        variable = "prof_gathering";
        profDescription = "Recolter et traiter les ressources interdites. Vous pouvez recueillir sans aucun équipement.";
        type = "Hybrid";
        description = "Vous pouvez Craft, Débloquer des Zones et approfondir votre niveau.";
        unlocks[] = {{0,"Serpent"}, {100,"Cannabis"},{200,"Strawberry"},{300,"Khat"},{400,"Datura"},{500,"Maui Waui"},{600,"Purple Kush"},{800,"Uranium"}}; 
    };
    class prof_mining {

        displayName = "Minage";
        variable = "prof_mining";
        profDescription = "L’exploitation minière est un métier simple, qui repose sur l’obtention des minerais et autres minéraux provenant des mines.";
        type = "Hybrid";
        description = "Vous pouvez Craft, Débloquer des Zones et approfondir votre niveau.";
        unlocks[] = {{0,"Mine d'étain"},{50,"Mine de cuivre"},{120,"Mine d'argent"},{200,"Mine de Fer"},{300,"Mine de Graphite"},{400,"Mine D'iridium"},{500,"Mine de Rhodium"},{600,"Mine de Platine"},{700,"Mine d'Or"}};
    };


    class prof_treasure {

        displayName = "Chasse aux Trésors";
        variable = "prof_treasure";
        profDescription = "La chasse aux trésors vous permet d'optenir des objets qui vous serviront a la revente ou pour craft.";
        type = "Hybrid";
        description = "Vous pouvez Craft, Débloquer l'ouverture de coffres et approfondir votre niveau.";
        unlocks[] = {{0,"Coffre en bois"},{50,"Petit coffre"},{100,"Coffre moyen"},{200,"Coffre en fer"},{300,"Grand coffre"},{400,"Énorme coffre"},{600,"Coffre Pirate (Extrêmement rare)"}};
    };

    class prof_chimie {

        displayName = "Chimie";
        variable = "prof_chimie";
        profDescription = "La Chimie vous permettent de combiné une variété d'ingrédients.";
        type = "Crafting";
        description = "La Chimie vous permettent de combiné une variété d'ingrédients.";
        unlocks[] = {{10,"Ice"}};
    };

    class prof_hacking {
        displayName = "Hacking";
        variable = "prof_hacking";
        profDescription = "Bientôt";
        type = "Crafting";
        description = "Le Hacking va vous permettre d'intéragir avec le monde connecté qui vous entoure.";
        unlocks[] = {};
    };

    class prof_livraison {
        displayName = "Livreur";
        variable = "prof_livraison";
        profDescription = "Etre Livreur vous permet de ravitailler les stations essence en essence.";
        type = "Hybrid";
        description = "Pour le moment vous pouvez livrer que de l'essence, les niveaux vous permettent de débloquer de nouveaux camions et avions";
        unlocks[] = {};
    };

    class prof_agricole {
        displayName = "Exploitant agricole";
        variable = "prof_agricole";
        profDescription = "Etre Exploitant vous permet de récolter les ressources issues de la terre.";
        type = "Hybrid";
        description = "Récoltez et traiter les ressources consommables, les niveaux vous permettent de débloquer de nouvelles ressources.";
        unlocks[] = {{25,"Peche"},{50,"Banane"},{100,"Coco"},{150,"Riz"},{200,"Mais"},{250,"Pomme de terre"},{350,"Cannes à sucre"},{450,"Tabac"}};
    };

    class prof_interim {
        displayName = "Interimaire";
        variable = "prof_interim";
        profDescription = "Etre Interimaire vous permet d'accomplir plusieurs tache issues du pôle emploie afin d'obtenir un salaire plus éléver à la fin des missions.";
        type = "Hybrid";
        description = "Augmente les gains à la fin de chaque missions";
        unlocks[] = {{50,"plus 10%"},{100,"plus 20%"},{200,"plus 30%"},{300,"plus 40%"},{400,"plus 50%"},{500,"plus 60%"}};
    };
};
