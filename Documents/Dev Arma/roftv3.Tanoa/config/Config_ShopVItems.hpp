
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
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "mais", "toolKit", "cacao", "crevettes",
                    "redgull", "tbacon", "pickaxe", "axe", "shovel", "cut", "fuelFull", "laptop", "paper", "javel", "acide_hydrochloric", "disqueuse", "filet"};
    };

    class medicament {
        name = "STR_Item_MedU";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "med_unprocessed" };
    };

    class medicamentpro {
        name = "STR_Item_MedP";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "med_processed" };
    };

    class poisson {
        name = "STR_Item_PoiU";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "poi_unprocessed" };
    };

    class poissonpro {
        name = "STR_Item_PoiP";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "poi_processed","salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark", "Canned_Fish" };
    };

    class comptoireMers {
        name = "STR_Item_ComptMers";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark"};
    };

    class cigare {
        name = "STR_Item_CigU";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cig_unprocessed", "cigare", "cigarette" };
    };

    class exportC {
        name = "STR_Item_CigP";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cig_processed" };
    };
    class export_pallette {
        name = "STR_Item_Exportateur_Palette";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "Multifruit_Bottle_Palette", "Apple_Banana_Bottle_Palette", "Coconut_Apple_Bottle_Palette", "Apple_Grape_Bottle_Palette", "Canned_Cocoa_Palette", "Canned_Coconut_Palette", "Canned_Corn_Palette", "Canned_Peach_Palette", "Canned_Fish_Palette" };
    };
    class munition {
        name = "STR_Item_MunU";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "mun_unprocessed" };
    };

    class munitionpro {
        name = "STR_Item_MunP";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "mun_processed" };
    };
    class bcc {
        name = "STR_License_bcc";
        side = "civ";
        license = "bcc";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "redgull", "tbacon" };//"lockpick", "pickaxe", "axe", "cut", "shovel", "fuelFull", "blastingcharge",  "laptop", "cagoule", "zippo"
    };



    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        license = "insurge";
        level[] = { "", "", -1, "" };
        items[] = { "boltcutter","gpstracker","cuttingpliers","waterBottle", "rabbit", "redgull", "tbacon", "lockpick", "pickaxe", "axe", "cut", "shovel", "fuelFull", "blastingcharge", "laptop", "cagoule", "zippo", "pelle", "sacdesport", "nitro", "nitro2", "nitro3" };
    };

    class mafia {
        name = "STR_Shops_Mafia";
        side = "civ";
        license = "mafia";
        level[] = { "", "", -1, "" };
        items[] = { "boltcutter","gpstracker","cuttingpliers","waterBottle", "rabbit", "redgull", "tbacon", "lockpick", "pickaxe", "axe", "cut", "shovel", "fuelFull", "blastingcharge",  "laptop", "cagoule", "zippo", "pelle", "sacdesport", "nitro", "nitro2", "nitro3" };
    };
    
    
    // alharis //
    class hlg {
        name = "STR_License_Hlg";
        side = "civ";
        license = "hlg";
        level[] = { "", "", -1, "" };
        items[] = { "boltcutter","waterBottle", "rabbit", "redgull", "tbacon", "lockpick", "pickaxe", "axe", "cut", "shovel", "fuelFull", "blastingcharge",  "laptop", "cagoule", "zippo" };
    };
    
     // alharis //
    class malfrat {
        name = "STR_Malfrat";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "boltcutter","gpstracker","cuttingpliers","redgull", "tbacon", "fuelFull", "toolKit", "disqueuse", "ACE_wirecutter", "spikeStrip", "blastingcharge", "lockpick", "pelle", "sacdesport", "nitro", "nitro2", "nitro3", "zippo" };
    };

    class security {
        name = "";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "redgull", "tbacon", "fuelFull", "paper"};
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "waterBottle", "rabbit", "redgull", "tbacon", "pickaxe", "axe", "cut", "shovel", "fuelFull", "blastingcharge", "laptop", "pelle", "sacdesport", "nitro", "nitro2", "nitro3"  };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts" };
    };

      class casino {
        name = "Casino";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ticket" };
    };


    class slevin {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {"rabbit", "poulet", "mouton","paper"};
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "coffee", "donuts", "redgull", "toolKit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "strawberry_processed", "khat_processed", "datura_processed", "uranium","weed_butter","laitMua","hellsoup","kat","yaabaa" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_cuts", "iron_refined", "copper_refined", "tin_bar", "silver_bar","rhodium_bar","platinum_bar","gold_bar","iridium_bar","graphite_bar",
            "iron_refined_bad", "copper_refined_bad", "tin_bar_bad", "silver_bar_bad","rhodium_bar_bad","platinum_bar_bad","gold_bar_bad","iridium_bar_bad","graphite_bar_bad",
            "aluminum_refined", "aluminum_refined_bad"
        };
    };

     class exportPacificAir  {
        name = "STR_Item_Palettes_Export";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "palette_export"
        };
    };

     class exportAnatoly  {
        name = "STR_Item_Anatoly";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {"wine_process_bottle"};
    };

    class boisTanoa  {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "palette" };
    };

     class manciniBtp  {
        name = "STR_Shops_Minerals";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ciment" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class baguePprecieuse {
        name = "STR_Item_baguePPExport";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "baguePprecieuse" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "goldbar" };
    };

        //retrait cop "roadcone", "roadbarrier", "tapesignsm", "tapesignwarning", "tapesign", "arrowleft", "arrowright", "portablebarrier", "triflash", "coneflash", 

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts","zipties","speedcam", "coffee", "spikeStrip", "toolKit", "waterBottle", "rabbit", "redgull", "fuelFull",
                    "defusekit", "portablelight", "blastingcharge", "traceur", "lockpick",
                    "alcotest", "scanner", "paper", "cagoule","desherbant" }; // [true,"storagebigEntre",2] call life_fnc_handleInv 
    };

        // retrait onu "roadcone", "roadbarrier", "tapesignsm", "tapesignwarning", "tapesign", "arrowleft", "arrowright", "portablebarrier", "triflash", "coneflash", "routbarr",

    class onu {
        name = "STR_Shops_Cop";
        side = "onu";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "redgull", "fuelFull", "toolKit", "portablelight", "lockpick", "paper" }; // [true,"portablebarrier",1] call life_fnc_handleInv
    };

        // retrait medic "triflash", "coneflash", "routbarr", "roadcone", "roadbarrier", "tapesignsm", "tapesignwarning", "tapesign", "arrowleft", "arrowright", "portablebarrier", 

    class medic {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "waterBottle", "rabbit", "redgull", "toolKit", "fuelFull", "portablelight", "paper"}; // [true,"glaceFolle",4] call life_fnc_handleInv
    };


        // retrait depan   "triflash", "coneflash", "routbarr", "roadcone", "roadbarrier", "tapesignsm", "tapesignwarning", "tapesign", "arrowleft", "arrowright", "portablebarrier", "PlasticBarrier_02_grey_F", "Land_PlasticBarrier_02_F", "Land_PlasticBarrier_01_line_x4_F", "Land_PlasticBarrier_01_line_x2_F", "PlasticBarrier_01_white_F", "Land_TyreBarrier_01_line_x4_F", "Land_TyreBarrier_01_F", "Land_TyreBarrier_01_line_x6_F"

    class depan {
        name = "STR_Shops_Market";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "donuts", "coffee", "waterBottle", "rabbit", "redgull", "fuelFull", "toolKit", "portablelight", "lockpick", "paper"
                    
                };
    };

    class temple {
        name = "STR_Shops_Reliques";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "templeBones", "templeCoins", "templeReliques" };
    };

    class bijoutier {
        name = "STR_Shops_Bijoutier";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "gravesWatch", "gravesCollar", "gravesBracelet", "gravesRing", "goldbar" };
    };

    class tanneur {
        name = "STR_Shops_Tanneur";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "peauSerpent", "cut" };
    };

    class archeologue {
        name = "STR_Shops_Archeologue";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "archeTCasque", "archeTUniforme", "archeTOssements", "archeSVin", "archeSCoffreT", "archeSCoffreB", "radar", "goldcoins", "silvercoins", "pottery", "shovel", "detecteur_balise" };
    };

    class extracteurBuy {
        name = "STR_Shops_ExtracteurBuy";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "extracteur", "shovel"};
    };

    class exportBois {
        name = "STR_Shops_Tonnerie";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "tropicalTonnerie", "parcTonnerie", "tropicalCharpente", "parcCharpente"};
    };

    class hacker {
        name = "STR_Shops_Hacker";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "codesBank", "detecteur", "scanner"};// "traceur",
    };

    class artisant {
        name = "STR_Shops_Artisant";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "compoElectronique", "boiteCouture", "boiteOutil"};
    };

    class chimie {
        name = "STR_Shops_Chimie";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "acetone", "ammoniac", "acide_hydrochloric", "lithium", "phosphoreRouge", "sodiumhydroxide", "acidesulfuric", "toluene", "pseudoephedrine", "mercure", "javel", "azote", "waterBottle"};
    };

    class compo {
        name = "STR_Shops_Artisant";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ventirad","cable","processeur","alimentation","ssd","carteMere","carteGraphique","boitier","rambar","pcgamer" };
    };

    class joti {
        name = "STR_Shops_Artisant";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "bracelet_incru","bracelet_orne","collier_orne","petite_parure","grande_parure","boucle_oreil"};
    };

    class polloPalace {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "glaceFolle","weed_butter","laitMua","glaceFolle","spaceCake","fioleblinded","hellsoup","kat","yaabaa"};
    };
	// Test

    class braconnier {
        name = "STR_Shops_Braconnier";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ivoire_unprocessed"};
    };

    class contrebande {
        name = "STR_Shops_Contrebande";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "ivoire_processed"};
    };

    class importM {
        name = "STR_Shops_Import";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "med_unprocessed"};
    };

    class exportM {
        name = "STR_Shops_Export";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "med_processed"};
    };

    class prison {
        name = "STR_Shops_BradBelick";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "pepite_or"};
    };

    //shop rajout max
    class Jusdefruit {
        name = "STR_Shops_Jusdefruit";
        side = "civ";
        items[] = { "multifruit", "Jus_Pomme_Raisin", "Jus_Pomme_Banane", "Jus_Pomme_Coco","Sushic","Polenta","Sucre","frite", "Multifruit_Bottle", "Apple_Banana_Bottle", "Coconut_Apple_Bottle", "Apple_Grape_Bottle", "Canned_Cocoa", "Canned_Coconut", "Canned_Corn", "Canned_Peach" };
    };
    // entreprise
    class grenat {
        name = "STR_Shops_grenat";
        side = "civ";
        items[] = { "grenat_cuts" };
    };
    class diamond_cut {
        name = "STR_Shops_diamond";
        side = "civ";
        items[] = { "diamond_cuts" };
    };
    //acheteur de tortue
 /*   class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        items[] = { "turtle_soup", "turtle_raw" };
    };*/
    //Herboriste
    class herboriste {
        name = "STR_Shops_herbo";
        side = "civ";
        items[] = { "arrosoir","desherbant", "seed_cocaine", "seed_cannabis", "seed_strawberry", "seed_khat", "seed_heroine" };
    };

    class gem {
        name = "STR_Shops_Gem";
        items[] = {
            "amethyst_uncut",
            "amethyst_cut",
            "ruby_uncut",
            "ruby_cut",
            "emerald_uncut",
            "emerald_cut",
            "sapphire_uncut",
            "sapphire_cut",
            "topaz_uncut",
            "topaz_cut",
            "aquamarine_uncut",
            "aquamarine_cut",
            "amber_uncut",
            "amber_cut",
            "jade_uncut",
            "jade_cut",
            "tigereye_uncut",
            "tigereye_cut",
            "quartz_uncut",
            "quartz_cut",
            "redruby_cut",
            "grenat_cut",
            "grandidierite_cut",
            "diamond_cut",
            "diamond_uncut",
            "moonlightstone_cut",
            "redruby_uncut",
            "grenat_uncut",
            "grandidierite_uncut",
            "moonlightstone_uncut"
         };
    };

    class ice {
        name = "STR_Shops_ICE";
        items[] = {
           "crack60",
           "crack70",
           "crack80",
           "crack90",
           "crack100",

            "morphineill",
            "morphine95",
            "morphine90",
            "morphine70",
            "morphine50",
            
            "krokodilpur",
            "krokodil95",
            "krokodil80",
            "krokodil65",
            "krokodil50",

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

    class admin {
        name = "STR_Shops_Artisant";
        side = "";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = { "" };
    };

    class AchatProduits {
        name = "STR_Shops_AchatProduits";
        side = "civ";
        items[] = { "C33_items_palmoilcontainer", "C33_items_alcoolcontainer", "C33_items_melassecontainer", "C33_items_tomatocontainer", "C33_items_petrolecontainer" };
    };

    class acheteurProduitEntreprise  {  // accéssible par véhicules roulant
        name = "STR_Acheteur_Produits_Entreprise";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {"C33_items_paintcans", "C33_items_palette", "C33_items_conduitealu", "C33_items_cagetteplastique", "old_advertising_poster"};
    };

    class exportateurProduitsEntreprise  { // uniquement par vois aérienne
        name = "STR_Exportateur_Produits_Entreprise";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            "Land_Defibrillator_F", "Land_ChairPlastic_F", "Land_TablePlastic_01_F", "Land_Camping_Light_F", 
            "GurneyTabl", "Land_PortableLight_double_F", "Land_PortableLight_single_F", "Land_CampingTable_F", "Land_CampingTable_small_F", "Land_Portable_generator_F", "Land_CampingChair_V2_F", "Land_CampingChair_V1_F", 
            "Land_ChairWood_F", "Land_WoodenTable_small_F", "Land_TableSmall_01_F", "Land_WoodenTable_large_F", "Land_TableBig_01_F", "Land_ArmChair_01_F", "Land_Sofa_01_F", "Land_Sunshade_F", "Land_Sunshade_01_F", "Land_TentDome_F", "Land_TentA_F",
            "Campfire_burning_F", "Land_Bench_F", "Land_Bench_01_F", "Land_Bench_02_F", "Land_Bench_03_F", "Land_Bench_04_F", "Land_WaterCooler_01_new_F",
            "C33_machines_pontvoiture", "C33_furniture_barbecue", "C33_furniture_coffeetable", "C33_furniture_woodenchairmetallegs", 
            "C33_furniture_barstool_brown", "C33_furniture_barstool_white", "C33_furniture_barstool_grey", "C33_furniture_barstool_red"
        };
    };
};
