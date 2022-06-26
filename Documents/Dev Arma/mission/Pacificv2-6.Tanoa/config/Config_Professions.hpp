/*
    Autor: IronBlade
*/

class Professions {

    class prof_craft {
        displayName = "MacGyver";
        variable = "prof_craft";
        profDescription = "Devenir MacGyver vous permet de créer différents items, vêtements, gilets, accessoires pour vous équiper.";
        type = "Crafting";
        description = "L'Artisanat vous permettent de créer une variété d’objets selon votre niveau dans cette profession."; 
        unlocks[] = {};
        legal = 0;
    };

    class prof_treasure {
        displayName = "Chasse aux Trésors";
        variable = "prof_treasure";
        profDescription = "La chasse aux trésors vous permet d'obtenir des objets qui vous serviront a la revente ou pour craft.";
        type = "Hybrid";
        description = "Vous pouvez craft, Débloquer l'ouverture de coffres de qualité supérieur et approfondir votre niveau.";
        unlocks[] = {{0,"Coffre en bois"},{50,"Petit coffre"},{100,"Coffre moyen"},{200,"Coffre en fer"},{300,"Grand coffre"},{400,"Énorme coffre"},{600,"Coffre Pirate (Extrêmement rare)"}};
        legal = 1;
    };

    class prof_narcos {
        displayName = "Narcos";
        variable = "prof_narcos";
        profDescription = "Monter en puissance, seul ou en compagnie, sur les traces des Narcos, la peur n'est qu'un détaille face aux aventures qui construira votre histoire, Drogues, armes Illegales, Kignapping, cela sera votre quotidien...";
        type = "Hybrid";
        description = "Vous pouvez débloquer de nouvelles zones et approfondir votre niveau pour vous spécialiser dans les champs de drogues.";
        unlocks[] = {{0,"Cannabis"},{100,"Maui Waui"},{300,"Purple Kush"},{600,"Strawberry"}};
        legal = 0;
    };

    class prof_mining {
        displayName = "Minage";
        variable = "prof_mining";
        profDescription = "L’exploitation minière est un métier simple, qui repose sur l’obtention des minerais et autres minéraux provenant des mines.";
        type = "Hybrid";
        description = "Vous pouvez craft, débloquer des zones et approfondir votre niveau.";
        unlocks[] = {{0,"Mine d'étain"},{50,"Mine de cuivre"},{150,"Mine de fer"},{250,"Mine de chrome"},{350, "Mine D'aluminium"},{550,"Mine de nickel"},{750,"Mine d'or"}};
        legal = 1;
    };

    class prof_contrebande {
        displayName = "Contrebande";
        variable = "prof_contrebande";
        profDescription = "Les contrebandiers se faufilaient bien de roc en roc, muets et rapides, plutôt soupçonnés qu'aperçus, vous n'avez pas la rancune de pier des tombes, chasser les serpents, exercer la vente d'arme Illégale, ainsi que le bois illégale, alors FONCEZ !";
        type = "Hybrid";
        description = "Pour l'instant vous ne pourrez que débloquer le trafic de serpent dans cette profession et approfondir votre niveau.";
        unlocks[] = {{0, "Pilleur de tombe"}, {40,"Serpent"}, {200, "Kaori de forêt"}, {500,"Traficant d'armes"}, {800,"Traficant de reliques"}};
        legal = 0;
    };

    /*
    class prof_chimie {
        displayName = "Chimie";
        variable = "prof_chimie";
        profDescription = "La Chimie vous permettent de combiné une variété d'ingrédients.";
        type = "Crafting";
        description = "La Chimie vous permettent de combiné une variété d'ingrédients.";
        unlocks[] = {{10,"Ice"}};
    };
    */

    /*
    class prof_hacking {
        displayName = "Hacking";
        variable = "prof_hacking";
        profDescription = "Bientôt";
        type = "Crafting";
        description = "Le Hacking va vous permettre d'intéragir avec le monde connecté qui vous entoure.";
        unlocks[] = {};
    };
    */

    class prof_livraison {
        displayName = "Livreur";
        variable = "prof_livraison";
        profDescription = "Etre Livreur vous permet de ravitailler les stations essence... en essence... Heu... Oui je crois bien qu'on stock de l'essence là bas !";
        type = "Hybrid";
        description = "Pour le moment vous ne pouvez livrer que de l'essence, les niveaux vous permettent donc de débloquer uniquement de nouveaux camions.";
        unlocks[] = {};
        legal = 1;
    };
};

