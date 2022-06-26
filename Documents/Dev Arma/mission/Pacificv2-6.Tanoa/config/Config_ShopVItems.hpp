
/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        paymentType = "cash";
        legal = 1;
        level[] = { "", "", -1, "" };
        items[] = { "Phone", "waterBottle", "cacao", "banane", "apple", 
                    "redgull", "tbacon", "pickaxe", "axe", "shovel", "cut", "fuelFull", "peach", "storagebigEntre",
                     "paper", "javel", "acide_hydrochloric", "disqueuse", "BagSmallEmpty", "BagBigEmpty", "CaseBigEmpty"
        };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "insurge";
        paymentType = "cash";
        legal = 0;
        level[] = { "", "", -1, "" };
        items[] = { "pickaxe", "axe", "shovel", "cut", "waterBottle", "rabbit", "apple", "redgull", "tbacon", "fuelFull", "cagoule", "zippo", "zipties", "CaseBigEmpty" };
    };

    class narcos {
        name = "STR_Shops_Narcos";
        side = "civ";
        license = "insurge";
        paymentType = "cash";
        legal = 0;
        level[] = { "", "", -1, "" };
        items[] = { "pickaxe", "axe", "shovel", "cut", "waterBottle", "rabbit", "apple", "redgull", "tbacon", "fuelFull", "cagoule", "zippo", "zipties", "CaseBigEmpty" };
    };

    class mafia {
        name = "STR_Shops_Mafia";
        side = "civ";
        license = "mafia";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "axe", "cut", "shovel", "fuelFull", "peach", "cagoule", "zippo", "zipties", "CaseBigEmpty" };
    };

    class contreband_shop {
        name = "STR_Shops_ContreShop";
        side = "civ";
        license = "mafia";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "lockpick", "goldbar", "blastingcharge" };
    };

    class security {
        name = "";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "fuelFull", "paper"};
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "fuelFull"};
    };

    class drugdealer2 {
        name = "STR_Shops_DrugDealer2";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "mauiwaui_processed", "marijuana" };
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "purple_processed", "mauiwaui_processed", "marijuana", "strawberry_processed" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "iron_refined", "copper_refined", "tin_bar","chromium_bar","gold_bar","nickel_bar","aluminium_bar",
            "iron_refined_bad", "copper_refined_bad", "tin_bar_bad","chromium_bar_bad","gold_bar_bad","nickel_bar_bad","aluminium_bar_bad"
        };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "fuelFull",
                    "defusekit", "roadcone", "tapesignsm", "tapesignwarning", "tapesign", "arrowleft",
                    "arrowright", "portablebarrier", "portablelight", "genhal", "triflash", "coneflash", "blastingcharge", "traceur", "lockpick",
                    "alcotest", "scanner", "paper", "zipties" }; // [true,"storagebigEntre",2] call life_fnc_handleInv
    };

    class medic {
        name = "STR_Shops_Market";
        side = "med";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "waterBottle", "rabbit", "apple", "redgull", "fuelFull", "bandage",
         "morphine", "triflash", "coneflash", "roadcone", "tapesignsm", "tapesignwarning",
          "tapesign", "arrowleft", "arrowright", "portablelight", "paper"}; // [true,"glaceFolle",4] call life_fnc_handleInv
    };

    class depan {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "tbacon", "coffee", "waterBottle", "rabbit", "disqueuse", "waterBottle", "fuelFull", "triflash", "coneflash", "roadcone", 
                    "tapesignsm", "tapesignwarning", "tapesign", "arrowleft", "arrowright", "portablelight", "lockpick", "paper"
                };
    };

    class temple {
        name = "STR_Shops_Reliques";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "templeBones", "templeCoins", "templeReliques" };
    };

    class bijoutier {
        name = "STR_Shops_Bijoutier";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "gravesWatch", "gravesCollar", "gravesBracelet", "gravesRing" };
    };

    class tanneur {
        name = "STR_Shops_Tanneur";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "peauSerpent", "cut" };
    };

    class archeologue {
        name = "STR_Shops_Archeologue";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "archeTCasque", "archeTUniforme", "archeTOssements", "archeSVin", "archeSCoffreT", "archeSCoffreB", "radar", "goldcoins", "silvercoins", "pottery", "shovel", "detecteur_balise" };
    };

    class extracteurBuy {
        name = "STR_Shops_ExtracteurBuy";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "extracteur", "shovel"};
    };

    class exportBois {
        name = "STR_Shops_ExportBois";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "pinPlank", "kaoriPlank"};
    };

    class exportAgro {
        name = "STR_Shops_ExportAgro";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "cacao", "rhum"};
    };

    class hacker {
        name = "STR_Shops_Hacker";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "detecteur", "traceur", "scanner", "brouilleur"};
    };

    class artisant {
        name = "STR_Shops_Artisant";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "compoElectronique", "boiteCouture", "boiteOutil"};
    };

    class chimie {
        name = "STR_Shops_Chimie";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "acetone", "ammoniac", "acide_hydrochloric", "lithium", "phosphoreRouge", "sodiumhydroxide", "acidesulfuric", "toluene", "pseudoephedrine", "mercure", "javel", "azote", "waterBottle"};
    };

	// Test

    class trafiquant {
        name = "STR_Shops_Trafiquant";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "lightwp_unprocessed"}; 
    };

    class contrebande {
        name = "STR_Shops_Contrebande";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "lightwp_finish"}; 
    };

    class importM {
        name = "STR_Shops_Import";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "med_unprocessed"};
    };

    class exportM {
        name = "STR_Shops_Export";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { "med_finish"};
    };

    class gem {
        name = "STR_Shops_Gem";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = { 
            "diamond_cut",  
            "amethyst_cut", 
            "ruby_cut",
            "emerald_cut",
            "sapphire_cut",
            "topaz_cut"
         };
    };

    class ice {
        name = "STR_Shops_ICE";
        side = "civ";
        license = "";
        legal = 0;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = {
           "crack60",
           "crack70",
           "crack80",
           "crack90",
           "crack100",

           "ice50",
           "ice55",
           "ice60",
           "ice65",
           "ice70",
           "ice75",
           "ice80",
           "ice85",
           "ice90",
           "ice91",
           "ice92",
           "ice93",
           "ice94",
           "ice95",
           "ice96",
           "ice97",
           "ice98",
           "ice100",
           "iceBlue"
         };
    };

    class fournisseur_bar {
        name = "STR_Shops_Fournisseur";
        side = "civ";
        license = "";
        legal = 1;
        paymentType = "cash";
        level[] = { "", "", -1, "" };
        items[] = {
            "specialDonuts", 
            "nachos", 
            "tapas", 
            "cocktail", 
            "rum", 
            "vodka", 
            "whiskey", 
            "beer", 
            "juice", 
            "specialSoda2", 
            "specialSoda", 
            "specialCoffee", 
            "mineralWater"
        };
    };

    class admin {
        name = "STR_Shops_Artisant";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "" };
    };
};