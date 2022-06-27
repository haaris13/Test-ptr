/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    // Outils Farm : ---------------------------------------------
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 5;
        buyPrice = 90;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\misc\farm\ico_pickaxe.paa";
        type = 0;
    };

    class shovel {
        variable = "shovel";
        displayName = "STR_Item_Shovel";
        weight = 5;
        buyPrice = 90;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\misc\farm\ico_shovel.paa";
        type = 0;
    };

    class axe {
        variable = "axe";
        displayName = "STR_Item_Axe";
        weight = 5;
        buyPrice = 90;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\misc\farm\ico_Axe.paa";
        type = 0;
    };

    class cut {
        variable = "cut";
        displayName = "STR_Item_Cut";
        weight = 3;
        buyPrice = 90;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\misc\farm\ico_cut.paa";
        type = 0;
    };

    // ----------------------------------------------------------

    // MoneyCase



    class BagSmallEmpty {
        variable = "BagSmallEmpty";
        displayName = "STR_Item_BagSmallEmpty";
        weight = 1;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\money\ico_sacpapier.paa";
        type = 0;
    };

    class BagSmall {
        variable = "BagSmall";
        displayName = "STR_Item_BagSmall";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\money\ico_sacpapierargent.paa";
        type = 0;
    };

    class BagBigEmpty {
        variable = "BagBigEmpty";
        displayName = "STR_Item_BagBigEmpty";
        weight = 2;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\money\ico_sacplastique.paa";
        type = 0;
    };

    class BagBig {
        variable = "BagBig";
        displayName = "STR_Item_BagBig";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\misc\money\ico_sacplastiqueargent.paa";
        type = 0;
    };

    class CaseBigEmpty {
        variable = "CaseBigEmpty";
        displayName = "STR_Item_CaseBigEmpty";
        weight = 10;
        buyPrice = 200;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\money\ico_malette.paa";
        type = 0;
    };

    class CaseBig {
        variable = "CaseBig";
        displayName = "STR_Item_CaseBig";
        weight = 20;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\misc\money\ico_maletteargent.paa";
        type = 0;
    };

    // Misc : ---------------------------------------------------

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 5;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_fuelempty.paa";
        type = 0;
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 10;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_fuel.paa";
        type = 0;
    };

    class laptop {
        variable = "laptop";
        displayName = "STR_Item_Laptop";
        weight = 10;
        buyPrice = 5000;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_laptop.paa";
        type = 0;
    };

    class campfire {
        variable = "campfire";
        displayName = "STR_Item_Campfire";
        weight = 2;
        buyPrice = 0;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class zippo {
        variable = "zippo";
        displayName = "STR_Item_Zippo";
        weight = 1;
        buyPrice = 150;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\misc\use\ico_zippo.paa";
        type = 0;
    };

    class Phone {
        variable = "Phone";
        displayName = "STR_Item_Phone";
        weight = 2;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_phone.paa";
        type = 0;
    };


    // -------------------------------------------------------------

    // ------ Gendarme : -------------------------------------------

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 250;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "icons\misc\cop\ico_spikestrip.paa";
        type = 0;
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 500;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\misc\banque\ico_defusekit.paa";
        type = 0;
    };

    class alcotest {
        variable = "alcotest";
        displayName = "STR_Item_alcotest";
        weight = 1;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class scanner {
        variable = "scanner";
        displayName = "STR_Item_scanner";
        weight = 25;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    // Place
    class roadcone {
        variable = "roadcone";
        displayName = "STR_Item_Roadcone";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class roadbarrier {
        variable = "roadbarrier";
        displayName = "STR_Item_RoadBarrier";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class tapesignsm {
        variable = "tapesignsm";
        displayName = "STR_Item_TapeSignM";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class tapesignwarning {
        variable = "tapesignwarning";
        displayName = "STR_Item_TapeSignWarning";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class tapesign {
        variable = "tapesign";
        displayName = "STR_Item_TapeSign";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class arrowleft {
        variable = "arrowleft";
        displayName = "STR_Item_ArrowLeft";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class arrowright {
        variable = "arrowright";
        displayName = "STR_Item_ArrowRight";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class portablebarrier {
        variable = "portablebarrier";
        displayName = "STR_Item_PortableBarrier";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class portablelight {
        variable = "portablelight";
        displayName = "STR_Item_portablelight";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class triflash {
        variable = "triflash";
        displayName = "STR_Item_triflash";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class coneflash {
        variable = "coneflash";
        displayName = "STR_Item_coneflash";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class routbarr {
        variable = "routbarr";
        displayName = "STR_Item_routbarr";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class genhal {
        variable = "genhal";
        displayName = "STR_Item_genhal";
        weight = 2;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    // Rally:
    class PlasticBarrier_02_grey_F {
        variable = "PlasticBarrier_02_grey_F";
        displayName = "STR_Item_PlasticBarrier_02_grey_F";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class Land_PlasticBarrier_02_F {
        variable = "Land_PlasticBarrier_02_F";
        displayName = "STR_Item_Land_PlasticBarrier_02_F";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };
    
    class Land_PlasticBarrier_01_line_x4_F {
        variable = "Land_PlasticBarrier_01_line_x4_F";
        displayName = "STR_Item_Land_PlasticBarrier_01_line_x4_F";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };
    
    class Land_PlasticBarrier_01_line_x2_F {
        variable = "Land_PlasticBarrier_01_line_x2_F";
        displayName = "STR_Item_Land_PlasticBarrier_01_line_x2_F";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };
    
    class PlasticBarrier_01_white_F {
        variable = "PlasticBarrier_01_white_F";
        displayName = "STR_Item_PlasticBarrier_01_white_F";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };
    
    class Land_TyreBarrier_01_line_x4_F {
        variable = "Land_TyreBarrier_01_line_x4_F";
        displayName = "STR_Item_Land_TyreBarrier_01_line_x4_F";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };
    
    class Land_TyreBarrier_01_F {
        variable = "Land_TyreBarrier_01_F";
        displayName = "STR_Item_Land_TyreBarrier_01_F";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };
    
    class Land_TyreBarrier_01_line_x6_F {
        variable = "Land_TyreBarrier_01_line_x6_F";
        displayName = "STR_Item_Land_TyreBarrier_01_line_x6_F";
        weight = 1;
        buyPrice = 50;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    //

    class mouchard {
        variable = "mouchard";
        displayName = "STR_Item_mouchard";
        weight = 1;
        buyPrice = 50000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\misc\use\ico_tracer.paa";
        type = 0;
    };

    class paper {
        variable = "paper";
        displayName = "STR_Item_Paper";
        weight = 1;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_paper.paa";
        type = 0;
    };

    // -------------------------------------------------------------



    // ------ Rebeles : -------------------------------------------

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 8;
        buyPrice = 2000;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\misc\use\ico_lockpick.paa";
        type = 0;
    };

    class zipties {
        variable = "zipties";
        displayName = "STR_Item_ZipTies";
        weight = 2;
        buyPrice = 50;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_zipties.paa";
        type = 0;
    };

    class cagoule {
        variable = "cagoule";
        displayName = "STR_Item_Cagoule";
        weight = 2;
        buyPrice = 70;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\rebel\ico_cagoule.paa";
        type = 0;
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 10;
        buyPrice = 5000;
        sellPrice = 2500;
        illegal = true;
        edible = -1;
        icon = "icons\misc\banque\ico_blastingCharge.paa";
        type = 0;
    };

    class disqueuse {
        variable = "disqueuse";
        displayName = "STR_Item_disqueuse";
        weight = 1;
        buyPrice = 250;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_grinder.paa";
        type = 0;
    };

    // ----------------------------------------------
    


    // Maison ---------------------------------------

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 40;
        buyPrice = 75000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_storageSmall.paa";
        type = 0;
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 80;
        buyPrice = 150000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_storageBig.paa";
        type = 0;
    };


    // -- Banque -----------------------------

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 30;
        buyPrice = -1;
        sellPrice = 30000;
        illegal = true;
        edible = -1;
        icon = "icons\misc\banque\ico_goldbar.paa";
        type = 0;
    };

    class codesBank {
        variable = "codesBank";
        displayName = "STR_Item_CodesBank";
        weight = 1;
        buyPrice = 20000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
    };

    // -------------------------------------




    // Hacker : ---------------------------

    class traceur {
        variable = "traceur";
        displayName = "STR_Item_Traceur";
        weight = 5;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\misc\use\ico_tracer.paa";
        type = 0;
    };

    class detecteur {
        variable = "detecteur";
        displayName = "STR_Item_Detecteur";
        weight = 1;
        buyPrice = 6000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\misc\use\ico_tracer.paa";
        type = 0;
    };

    // -------------------------------------




    // -------------- Drugs -----------------

    class mauiwaui_unprocessed {
        variable = "mauiwauiUnprocessed";
        displayName = "STR_Item_mauiwauiU";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\drogues\ico_mauiwaui.paa";
        processedItem = "mauiwaui_processed";
        type = 1;
    };

    class mauiwaui_processed {
        variable = "mauiwauiProcessed";
        displayName = "STR_Item_mauiwauiP";
        weight = 2;
        buyPrice = -1;
        sellPrice = 297;
        illegal = true;
        edible = -1;
        icon = "icons\farms\drogues\ico_mauiwaui.paa";
        type = 1;
        base = "mauiwaui_unprocessed";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 20;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\drogues\ico_cannabis.paa";
        processedItem = "marijuana";
        type = 1;
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 1;
        buyPrice = -1;
        sellPrice = 98;
        illegal = true;
        edible = -1;
        icon = "icons\farms\drogues\ico_marijuana.paa";
        type = 1;
        base = "cannabis";
    };

    class purple_unprocessed { // purple
        variable = "purpleUnprocessed";
        displayName = "STR_Item_PurpleU";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\drogues\ico_purple.paa";
        processedItem = "purple_processed";
        type = 1;
    };

    class purple_processed { // purple
        variable = "purpleProcessed";
        displayName = "STR_Item_PurpleP";
        weight = 3;
        buyPrice = -1;
        sellPrice = 474;
        illegal = true;
        edible = -1;
        icon = "icons\farms\drogues\ico_purple.paa";
        type = 1;
        base = "purple_unprocessed";
    };


    class strawberry_unprocessed {
        variable = "strawberry_unprocessed";
        displayName = "STR_Item_StrawU";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\drogues\ico_straw.paa";
        processedItem = "strawberry_processed";
        type = 1;
    };

    class strawberry_processed {
        variable = "strawberry_processed";
        displayName = "STR_Item_StrawP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 1415;
        illegal = true;
        edible = -1;
        icon = "icons\farms\drogues\ico_straw.paa";
        type = 1;
        base = "strawberry_unprocessed";
    };

    // -----------------------------------------------



    // Farm Secret -----------------------------------

    class templeBones {
        variable = "templeBones";
        displayName = "STR_Item_TempleBones";
        weight = 10;
        buyPrice = -1;
        sellPrice = 630;
        illegal = true;
        edible = -1;
        icon = "icons\farms\arches\ico_bones.paa";
        type = 1;
    };

    class templeCoins {
        variable = "templeCoins";
        displayName = "STR_Item_TempleCoins";
        weight = 10;
        buyPrice = -1;
        sellPrice = 660;
        illegal = true;
        edible = -1;
        icon = "icons\farms\secret\ico_coins.paa";
        type = 1;
    };

    class templeReliques {
        variable = "templeReliques";
        displayName = "STR_Item_TempleReliques";
        weight = 10;
        buyPrice = -1;
        sellPrice = 690;
        illegal = true;
        edible = -1;
        icon = "icons\farms\secret\ico_reliques.paa";
        type = 1;
    };

    class extracteur {
        variable = "extracteur";
        displayName = "STR_Item_Extracteur";
        weight = 4;
        buyPrice = 2000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\secret\ico_extracteur.paa";
        type = 0;
    };

    // ------------------------------------------------



    // Farm Cimetières --------------------------------

    class gravesWatch {
        variable = "gravesWatch";
        displayName = "STR_Item_GravesWatch";
        weight = 7;
        buyPrice = -1;
        sellPrice = 15;
        illegal = true;
        edible = -1;
        icon = "icons\farms\cimetieres\ico_watch.paa";
        type = 1;
    };

    class gravesCollar {
        variable = "gravesCollar";
        displayName = "STR_Item_GravesCollar";
        weight = 8;
        buyPrice = -1;
        sellPrice = 40;
        illegal = true;
        edible = -1;
        icon = "icons\farms\cimetieres\ico_gravesCollar.paa";
        type = 1;
    };

    class gravesBracelet {
        variable = "gravesBracelet";
        displayName = "STR_Item_GravesBracelet";
        weight = 8;
        buyPrice = -1;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\farms\cimetieres\ico_Bracelet.paa";
        type = 1;
    };

    class gravesRing {
        variable = "gravesRing";
        displayName = "STR_Item_GravesRing";
        weight = 10;
        buyPrice = -1;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "icons\farms\cimetieres\ico_Ring.paa";
        type = 1;
    };

    // --------------------------------------------


    // ----------------------------- Arche:

    class archeTOssements {
        variable = "archeTOssements";
        displayName = "STR_Item_ArcheTOssements";
        weight = 5;
        buyPrice = -1;
        sellPrice = 180;
        illegal = false;
        edible = -1;
        icon = "icons\farm\arches\ico_bones.paa";
        type = 1;
    };

    class archeTCasque {
        variable = "archeTCasque";
        displayName = "STR_Item_ArcheTCasque";
        weight = 5;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        icon = "icons\farms\arches\ico_Helmet.paa";
        type = 1;
    };

    class archeTUniforme {
        variable = "archeTUniforme";
        displayName = "STR_Item_ArcheTUniforme";
        weight = 5;
        buyPrice = -1;
        sellPrice = 220;
        illegal = false;
        edible = -1;
        icon = "icons\farm\arches\ico_uniformWW2.paa";
        type = 1;
    };

    // sub

    class archeSVin {
        variable = "archeSVin";
        displayName = "STR_Item_ArcheSVin";
        weight = 5;
        buyPrice = -1;
        sellPrice = 180;
        illegal = false;
        edible = -1;
        icon = "icons\farms\arches\ico_wine.paa";
        type = 1;
    };

    class archeSCoffreB {
        variable = "archeSCoffreB";
        displayName = "STR_Item_ArcheSCoffreB";
        weight = 5;
        buyPrice = -1;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        icon = "icons\farms\arches\ico_archeSCoffreB.paa";
        type = 1;
    };

    class archeSCoffreT {
        variable = "archeSCoffreT";
        displayName = "STR_Item_ArcheSCoffreT";
        weight = 5;
        buyPrice = -1;
        sellPrice = 220;
        illegal = false;
        edible = -1;
        icon = "icons\farms\arches\ico_archeSCoffreT.paa";
        type = 1;
    };

    // ----------------------------------------


    // ---------------- Nouriture et Boisson -
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 2;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 100;
        icon = "icons\misc\food\ico_redbull.paa";
        type = 0;
    };

    class franta {
        variable = "franta";
        displayName = "STR_Item_franta";
        weight = 2;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 50;
        icon = "icons\misc\food\ico_franta.paa";
        type = 0;
    };
    
    class spirit {
        variable = "spirit";
        displayName = "STR_Item_spirit";
        weight = 2;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 40;
        icon = "icons\misc\food\ico_spirit.paa";
        type = 0;
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 50;
        icon = "icons\misc\food\ico_coffee.paa";
        type = 0;
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 3;
        sellPrice = 2;
        illegal = false;
        edible = 50;
        icon = "icons\misc\food\ico_waterBottle.paa";
        type = 0;
    };

    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 10;
        icon = "icons\misc\food\ico_apple.paa";
        type = 0;
    };

     class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 10;
        icon = "icons\misc\food\ico_peach.paa";
        type = 0;
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 5;
        sellPrice = 4;
        illegal = false;
        edible = 40;
        icon = "icons\misc\food\ico_tbacon.paa";
        type = 0;
    };

    class bakedbeans {
        variable = "bakedbeans";
        displayName = "STR_Item_BakedBeans";
        weight = 1;
        buyPrice = 3;
        sellPrice = 2;
        illegal = false;
        edible = 25;
        icon = "icons\misc\food\ico_bakedbeans.paa";
        type = 0;
    };

    class rice {
        variable = "rice";
        displayName = "STR_Item_Rice";
        weight = 2;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\misc\food\ico_rice.paa";
        type = 0;
    };

    class cereals {
        variable = "cereals";
        displayName = "STR_Item_Cereals";
        weight = 4;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 100;
        icon = "icons\misc\food\ico_cereals.paa";
        type = 0;
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 8;
        sellPrice = 4;
        illegal = false;
        edible = 30;
        icon = "icons\misc\food\ico_donuts.paa";
        type = 0;
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 5;
        sellPrice =2;
        illegal = false;
        edible = 20;
        icon = "icons\misc\food\ico_cookedMeat.paa";
        type = 0;
    };

    // ---------------------------------------


    // --Farm Simple--------------------------

    //Food

    // New Items :
    class cannesucre {
        variable = "cannesucre";
        displayName = "STR_Item_Canne";
        weight = 20;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = 50;
        icon = "icons\farms\sugarcanne\ico_sugarcane.paa";
        type = 0;
    };

    class rhum {
        variable = "rhum";
        displayName = "STR_Item_Rhum";
        weight = 1;
        buyPrice = -1;
        sellPrice = 30;
        illegal = false;
        edible = 30;
        icon = "icons\farms\sugarcanne\ico_rhum.paa";
        type = 1;
        base = "cannesucre";
    };

    class cacao {
        variable = "cacao";
        displayName = "STR_Item_Cacao";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = 15;
        icon = "icons\farms\simple\ico_cacao.paa";
        type = 0;
    };

    class banane {
        variable = "banane";
        displayName = "STR_Item_Banane";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = 75;
        icon = "icons\farms\simple\ico_Bananas.paa";
        type = 0;
    };

    // ------------------------------------


    // -------- Farm Serpent --------------

    class serpent {
        variable = "serpent";
        displayName = "STR_Item_Serpent";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = 10;
        icon = "icons\farms\snake\ico_snak.paa";
        type = 1;
    };

    class peauSerpent {
        variable = "peauSerpent";
        displayName = "STR_Item_PeauSerpent";
        weight = 2;
        buyPrice = -1;
        sellPrice = 208;
        illegal = true;
        edible = 10;
        icon = "icons\farms\snake\ico_snak.paa";
        type = 1;
        base = "serpent";
    };

    // -----------------------------------

    // ----------------- Crevettes ------------

    class crevettes {
        variable = "crevettes";
        displayName = "STR_Item_crevettes";
        weight = 3;
        buyPrice = -1;
        sellPrice = 150;
        illegal = false;
        edible = 20;
        type = 0;
    };

    class filet {
        variable = "filet";
        displayName = "STR_Item_filet";
        weight = 2;
        buyPrice = 1000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        type = 0;
    };

    // -----------------------------------

    // ----------------- bois ------------

    class kaori {
        variable = "kaori";
        displayName = "STR_Item_Kaori";
        weight = 20;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\wood\buche\ico_logKaori.paa";
        type = 1;
    };

     class kaoriPlank {
        variable = "kaoriPlank";
        displayName = "STR_Item_KaoriPlank";
        weight = 5;
        buyPrice = -1;
        sellPrice = 508;
        illegal = true;
        edible = -1;
        icon = "icons\farms\wood\planche\ico_woodKaori.paa";
        type = 1;
        base = "kaori";
    };

    //°°

    class pin {
        variable = "pin";
        displayName = "STR_Item_Pin";
        weight = 20;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\wood\buche\ico_logPin.paa";
        type = 1;
        processedItem = "pinPlank";
    };

    class pinPlank {
        variable = "pinPlank";
        displayName = "STR_Item_PinPlank";
        weight = 5;
        buyPrice = -1;
        sellPrice = 165;
        illegal = false;
        edible = -1;
        icon = "icons\farms\wood\planche\ico_woodPin.paa";
        type = 1;
        base = "pin";
    };

    //---------------------------------

   
   // ---------------- Poissons -------

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\misc\food\ico_meat.paa";
        type = 0;
    };

    // ---------------------------------



    // ----------- Gems: ---------------
    // Uncut

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 9;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\brut\ico_diamond.paa";
        type = 1;
        noReset = 1;
    };

    class ruby_uncut {
        variable = "ruby_uncut";
        displayName = "STR_Item_RubyUncut";
        weight = 9;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\brut\ico_ruby.paa";
        type = 1;
        noReset = 1;
    };

    class emerald_uncut {
        variable = "emerald_uncut";
        displayName = "STR_Item_EmeraldUncut";
        weight = 9;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\brut\ico_emerald.paa";
        type = 1;
        noReset = 1;
    };

    class sapphire_uncut {
        variable = "sapphire_uncut";
        displayName = "STR_Item_SapphireUncut";
        weight = 9;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\brut\ico_sapphire.paa";
        type = 1;
        noReset = 1;
    };

     class amethyst_uncut {
        variable = "amethyst_uncut";
        displayName = "STR_Item_AmethystU";
        weight = 9;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\brut\ico_amethyst.paa";
        type = 1;
        noReset = 1;
    };

    class topaz_uncut {
        variable = "topaz_uncut";
        displayName = "STR_Item_TopazUncut";
        weight = 9;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\brut\ico_topaz.paa";
        type = 1;
        noReset = 1;
    };

    // Cut
	
    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 8;
        buyPrice = -1;
        sellPrice = 8200;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\cut\ico_diamond.paa";
        type = 1;
        noReset = 1;
    };

    class ruby_cut {
        variable = "ruby_cut";
        displayName = "STR_Item_RubyCut";
        weight = 8;
        buyPrice = -1;
        sellPrice = 2733;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\cut\ico_ruby.paa";
        type = 1;
        noReset = 1;
    };

    class emerald_cut {
        variable = "emerald_cut";
        displayName = "STR_Item_EmeraldCut";
        weight = 8;
        buyPrice = -1;
        sellPrice = 1171;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\cut\ico_emerald.paa";
        type = 1;
        noReset = 1;
    };

    class sapphire_cut {
        variable = "sapphire_cut";
        displayName = "STR_Item_SapphireCut";
        weight = 8;
        buyPrice = -1;
        sellPrice = 820;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\cut\ico_sapphire.paa";
        type = 1;
        noReset = 1;
    };

     class amethyst_cut {
        variable = "amethyst_cut";
        displayName = "STR_Item_AmethystC";
        weight = 8;
        buyPrice = -1;
        sellPrice = 410;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\cut\ico_amethyst.paa";
        type = 1;
        noReset = 1;
    };

    class topaz_cut {
        variable = "topaz_cut";
        displayName = "STR_Item_TopazCut";
        weight = 8;
        buyPrice = -1;
        sellPrice = 164;
        illegal = false;
        edible = -1;
        icon = "icons\farms\gems\cut\ico_topaz.paa";
        type = 1;
        noReset = 1;
    };

    // ----------------------------------------



    // Minerais : -----------------------------


    // Cuivre
    class copper_unrefined {
        variable = "copper_unrefined";
        displayName = "STR_Item_CopperOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ores\ico_cuivre.paa";
        type = 1;
    };

    class copper_refined {
        variable = "copper_refined";
        displayName = "STR_Item_CopperIngot";
        weight = 6;
        buyPrice = -1;
        sellPrice = 217;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ingot\ico_cuivre.paa";
        type = 1;
        base = "copper_unrefined";
    };

    class copper_refined_bad {
        variable = "copper_refined_bad";
        displayName = "STR_Item_CopperIngot";
        weight = 6;
        buyPrice = -1;
        sellPrice = 108;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\bad\ico_cuivre.paa";
        type = 1;
        good = "copper_refined";
        furnace = "copper";
    };

    
    // Fer: 
    class iron_unrefined {
        variable = "iron_unrefined";
        displayName = "STR_Item_IronOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ores\ico_iron.paa";
        type = 1;
    };

    class iron_refined {
        variable = "iron_refined";
        displayName = "STR_Item_IronIngot";
        weight = 6;
        buyPrice = -1;
        sellPrice = 255;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ingot\ico_iron.paa";
        type = 1;
        base = "iron_unrefined";
    };

    class iron_refined_bad {
        variable = "iron_refined_bad";
        displayName = "STR_Item_IronIngotBad";
        weight = 6;
        buyPrice = -1;
        sellPrice = 127;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\bad\ico_iron.paa";
        type = 1;
        good = "iron_refined";
        furnace = "iron";
    };


    // étain
    class tin_ore {
        variable = "tin_ore";
        displayName = "STR_Item_TinOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ores\ico_tin.paa";
        type = 1;
    };

    class tin_bar {
        variable = "tin_bar";
        displayName = "STR_Item_TinBar";
        weight = 6;
        buyPrice = -1;
        sellPrice = 194;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ingot\ico_tin.paa";
        type = 1;
        base = "tin_ore";
    };

    class tin_bar_bad {
        variable = "tin_bar_bad";
        displayName = "STR_Item_TinBarBad";
        weight = 6;
        buyPrice = -1;
        sellPrice = 82;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\bad\ico_tin.paa";
        type = 1;
        good = "tin_bar";
        furnace = "tin";
    };

    // Chrome
    class chromium_ore {
        variable = "chromium_ore";
        displayName = "STR_Item_ChromiumOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ores\ico_chromium.paa";
        type = 1;
    };

    class chromium_bar {
        variable = "chromium_bar";
        displayName = "STR_Item_ChromiumBar";
        weight = 6;
        buyPrice = -1;
        sellPrice = 294;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ingot\ico_chromium.paa";
        type = 1;
        base = "chromium_ore";
    };

    class chromium_bar_bad {
        variable = "chromium_bar_bad";
        displayName = "STR_Item_ChromiumBarBad";
        weight = 6;
        buyPrice = -1;
        sellPrice = 147;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\bad\ico_chromium.paa";
        type = 1;
        good = "chromium_bar";
        furnace = "chromium";
    };

	// Nickel
    class nickel_ore {
        variable = "nickel_ore";
        displayName = "STR_Item_NickelOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ores\ico_nickel.paa";
        type = 1;
    };
	
    class nickel_bar {
        variable = "nickel_bar";
        displayName = "STR_Item_NickelBar";
        weight = 6;
        buyPrice = -1;
        sellPrice = 375;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ingot\ico_nickel.paa";
        type = 1;
        base = "nickel_ore";
    };

    class nickel_bar_bad {
        variable = "nickel_bar_bad";
        displayName = "STR_Item_NickelBarBad";
        weight = 6;
        buyPrice = -1;
        sellPrice = 187;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\bad\ico_nickel.paa";
        type = 1;
        good = "nickel_bar";
        furnace = "nickel";
    };
	

    // aluminium
    class aluminium_ore {
        variable = "aluminium_ore";
        displayName = "STR_Item_AluminiumOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ores\ico_graphite.paa";
        type = 1;
    };
	
    class aluminium_bar {
        variable = "aluminium_bar";
        displayName = "STR_Item_AluminiumBar";
        weight = 6;
        buyPrice = -1;
        sellPrice = 313;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ingot\ico_graphite.paa";
        type = 1;
        base = "aluminium_ore";
    };

    class aluminium_bar_bad {
        variable = "aluminium_bar_bad";
        displayName = "STR_Item_AluminiumBar";
        weight = 6;
        buyPrice = -1;
        sellPrice = 156;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\bad\ico_graphite.paa";
        type = 1;
        good = "aluminium_bar";
        furnace = "aluminium";
    };

    // gold
    class gold_ore {
        variable = "gold_ore";
        displayName = "STR_Item_GoldOre";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ores\ico_gold.paa";
        type = 1;
    };

    class gold_bar {
        variable = "gold_bar";
        displayName = "STR_Item_GoldBar";
        weight = 6;
        buyPrice = -1;
        sellPrice = 510;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\ingot\ico_gold.paa";
        type = 1;
        base = "gold_ore";
    };

    class gold_bar_bad {
        variable = "gold_bar_bad";
        displayName = "STR_Item_GoldBarBad";
        weight = 6;
        buyPrice = -1;
        sellPrice = 255;
        illegal = false;
        edible = -1;
        icon = "icons\farms\mine\bad\ico_gold.paa";
        type = 1;
        good = "gold_bar";
        furnace = "gold";
    };

    // ---------------------------------------

    // -------------------- Chasse au trésor :


    class radar {
        variable = "radar";
        displayName = "STR_Item_Radar";
        weight = 2;
        buyPrice = 1200;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_radar.paa";
        type = 0;
    };

    class detecteur_balise {
        variable = "detecteur_balise";
        displayName = "STR_Item_Detecteur_balise";
        weight = 2;
        buyPrice = 1500;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_detecteur.paa";
        type = 0;
    };

    // -------------------------
    

    // ------------------ Coffres:

    class woodencontainer {
        variable = "woodencontainer";
        displayName = "STR_Item_WoodenContainer";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_chest.paa";
        type = 0;
    };

    class smallchest {
        variable = "smallchest";
        displayName = "STR_Item_SmallChest";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_chest.paa";
        type = 0;
    };

    class mediumchest {
        variable = "mediumchest";
        displayName = "STR_Item_MediumChest";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_chest.paa";
        type = 0;
    };

    class leadbox {
        variable = "leadbox";
        displayName = "STR_Item_LeadBox";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_chest.paa";
        type = 0;
    };

    class largechest {
        variable = "largechest";
        displayName = "STR_Item_LargeChest";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_chest.paa";
        type = 0;
    };

    class hugechest {
        variable = "hugechest";
        displayName = "STR_Item_HugeChest";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_chest.paa";
        type = 0;
    };
	
    class piratechest {
        variable = "piratechest";
        displayName = "STR_Item_PirateChest";
        weight = 15;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\tresor\ico_chest.paa";
        type = 0;
    };

    // --------------------------------

    // --------------------- Tresor

    class neoprene {
        variable = "neoprene";
        displayName = "STR_Item_Neoprene";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class aluminium {
        variable = "aluminium";
        displayName = "STR_Item_Aluminium";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class steel {
        variable = "steel";
        displayName = "STR_Item_Steel";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class kevlar {
        variable = "kevlar";
        displayName = "STR_Item_Kevlar";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class plastique {
        variable = "plastique";
        displayName = "STR_Item_Plastique";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };
    class tissu {
        variable = "tissu";
        displayName = "STR_Item_Tissu";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };

    class ver {
        variable = "ver";
        displayName = "STR_Item_Ver";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
    };
    

    class goldcoins {
        variable = "goldcoins";
        displayName = "STR_Item_GoldCoins";
        weight = 1;
        buyPrice = -1;
        sellPrice = 450; // TODO
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
    };

    class silvercoins {
        variable = "silvercoins";
        displayName = "STR_Item_Silvercoins";
        weight = 1;
        buyPrice = -1;
        sellPrice = 300; // TODO
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
    };
	
    class boutrhum {
        variable = "boutrhum";
        displayName = "STR_Item_Boutrhum";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1; // TODO
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
    };

    class pottery {
        variable = "pottery";
        displayName = "STR_Item_Pottery";
        weight = 1;
        buyPrice = -1;
        sellPrice = 200; // TODO
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
    };

    // ---------------------------


    // ---------------- Items de craft :

    class boiteCouture {
        variable = "boiteCouture";
        displayName = "STR_Item_BoiteCouture";
        weight = 1;
        buyPrice = 500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_sewingkit.paa";
        type = 0;
    };

    class boiteOutil {
        variable = "boiteOutil";
        displayName = "STR_Item_BoiteOutil";
        weight = 1;
        buyPrice = 700;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_toolbox.paa";
        type = 0;
    };

    class compoElectronique {
        variable = "compoElectronique";
        displayName = "STR_Item_CompoElectronique";
        weight = 1;
        buyPrice = 1000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_electroniccomponent.paa";
        type = 0;
    };

    // ----------------------------


    // Entreprise --------------------------

    class storagebigEntre {
        variable = "storagebigEntre";
        displayName = "STR_Item_Palette";
        weight = 50;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_caisseentreprise.paa";
        type = 0;
    };


    // Geek ------------------


    class brouilleur {
        variable = "brouilleur";
        displayName = "STR_Item_Brouilleur";
        weight = 4;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ent\geek\ico_brouilleur.paa";
        type = 0;
    };

    class pince {
        variable = "pince";
        displayName = "STR_Item_Pince";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
    };

    // Medic: ------------------------------

    class morphine {
        variable = "morphine";
        displayName = "STR_Item_morphine";
        weight = 1;
        buyPrice = 20;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_morphine.paa";
        type = 0;
    };

    class bandage {
        variable = "bandage";
        displayName = "STR_Item_bandage";
        weight = 1;
        buyPrice = 5;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\misc\use\ico_bandage.paa";
        type = 0;
    };

    // Chimie --------------------------------------------

    class acetone {
        variable = "acetone";
        displayName = "STR_Item_acetone";
        weight = 10;
        buyPrice = 7000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_acetone.paa";
        type = 1;
    };

    class ammoniac {
        variable = "ammoniac";
        displayName = "STR_Item_ammoniac";
        weight = 20;
        buyPrice = 8000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_ammoniac.paa";
        type = 1;
    };

    class acide_hydrochloric {
        variable = "acide_hydrochloric";
        displayName = "STR_Item_acide_hydrochloric";
        weight = 25;
        buyPrice = 8000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\chimie\ico_acide_hydrochloric.paa";
        type = 1;
    };

    class lithium {
        variable = "lithium";
        displayName = "STR_Item_lithium";
        weight = 20;
        buyPrice = 20000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_lithium.paa";
        type = 1;
    };

    class phosphoreRouge {
        variable = "phosphoreRouge";
        displayName = "STR_Item_PhosphoreRouge";
        weight = 10;
        buyPrice = 18000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_phosphoreRouge.paa";
        type = 1;
    };

    class sodiumhydroxide {
        variable = "sodiumhydroxide";
        displayName = "STR_Item_Sodiumhydroxide";
        weight = 10;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_sodiumhydroxide.paa";
        type = 1;
    };

    class acidesulfuric {
        variable = "acidesulfuric";
        displayName = "STR_Item_Acidesulfuric";
        weight = 20;
        buyPrice = 6000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_acidesulfuric.paa";
        type = 1;
    };

    class toluene {
        variable = "toluene";
        displayName = "STR_Item_Toluene";
        weight = 20;
        buyPrice = 40000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_toluene.paa";
        type = 1;
    };

    class pseudoephedrine {
        variable = "pseudoephedrine";
        displayName = "STR_Item_Pseudoephedrine";
        weight = 10;
        buyPrice = 15000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_pseudoephedrine.paa";
        type = 1;
    };

    class mercure {
        variable = "mercure";
        displayName = "STR_Item_mercure";
        weight = 5;
        buyPrice = 5000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_mercure.paa";
        type = 1;
    };

    class javel {
        variable = "javel";
        displayName = "STR_Item_javel";
        weight = 5;
        buyPrice = 2000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\chimie\ico_javel.paa";
        type = 1;
    };

    class azote {
        variable = "azote";
        displayName = "STR_Item_azote";
        weight = 10;
        buyPrice = 6000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\farms\chimie\ico_azote.paa";
        type = 1;
    };



    class crack60 {
        variable = "crack60";
        displayName = "STR_Item_crack60";
        weight = 10;
        buyPrice = -1;
        sellPrice = 40000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_crack.paa";
        type = 1;
    };

    class crack70 {
        variable = "crack70";
        displayName = "STR_Item_crack70";
        weight = 10;
        buyPrice = -1;
        sellPrice = 42000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_crack.paa";
        type = 1;
    };

    class crack80 {
        variable = "crack80";
        displayName = "STR_Item_crack80";
        weight = 10;
        buyPrice = -1;
        sellPrice = 44000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_crack.paa";
        type = 1;
    };

    class crack90 {
        variable = "crack90";
        displayName = "STR_Item_crack90";
        weight = 10;
        buyPrice = -1;
        sellPrice = 46000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_crack.paa";
        type = 1;
    };

    class crack100 {
        variable = "crack100";
        displayName = "STR_Item_crack100";
        weight = 10;
        buyPrice = -1;
        sellPrice = 48000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_crack.paa";
        type = 1;
    };

    // ICE

    class ice50 {
        variable = "ice50";
        displayName = "STR_Item_ice50";
        weight = 10;
        buyPrice = -1;
        sellPrice = 90000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBlanc.paa";
        type = 1;
    };

    class ice55 : ice50 {
        variable = "ice55";
        displayName = "STR_Item_ice55";
        weight = 10;
        buyPrice = -1;
        sellPrice = 950000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBlanc.paa";
        type = 1;
    };

    class ice60 : ice50 {
        variable = "ice60";
        displayName = "STR_Item_ice60";
        weight = 10;
        buyPrice = -1;
        sellPrice = 100000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBlanc.paa";
        type = 1;
    };
    
    class ice65 : ice50 {
        variable = "ice65";
        displayName = "STR_Item_ice65";
        weight = 10;
        buyPrice = -1;
        sellPrice = 115000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBlanc.paa";
        type = 1;
    };
    
    class ice70 : ice50 {
        variable = "ice70";
        displayName = "STR_Item_ice70";
        weight = 10;
        buyPrice = -1;
        sellPrice = 120000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBlanc.paa";
        type = 1;
    };
    
    class ice75 : ice50 {
        variable = "ice75";
        displayName = "STR_Item_ice75";
        weight = 10;
        buyPrice = -1;
        sellPrice = 125000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBlanc.paa";
        type = 1;
    };
    
    class ice80 : ice50 {
        variable = "ice80";
        displayName = "STR_Item_ice80";
        weight = 10;
        buyPrice = -1;
        sellPrice = 130000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBlanc.paa";
        type = 1;
    };
    
    class ice85 : ice50 {
        variable = "ice85";
        displayName = "STR_Item_ice85";
        weight = 10;
        buyPrice = -1;
        sellPrice = 135000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBlanc.paa";
        type = 1;
    };
    
    class ice90 : ice50 {
        variable = "ice90";
        displayName = "STR_Item_ice90";
        weight = 10;
        buyPrice = -1;
        sellPrice = 140000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice91 : ice50 {
        variable = "ice91";
        displayName = "STR_Item_ice91";
        weight = 10;
        buyPrice = -1;
        sellPrice = 145000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice92 : ice50 {
        variable = "ice92";
        displayName = "STR_Item_ice92";
        weight = 10;
        buyPrice = -1;
        sellPrice = 150000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice93 : ice50 {
        variable = "ice93";
        displayName = "STR_Item_ice93";
        weight = 10;
        buyPrice = -1;
        sellPrice = 155000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice94 : ice50 {
        variable = "ice94";
        displayName = "STR_Item_ice94";
        weight = 10;
        buyPrice = -1;
        sellPrice = 160000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice95 : ice50 {
        variable = "ice95";
        displayName = "STR_Item_ice95";
        weight = 10;
        buyPrice = -1;
        sellPrice = 165000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice96 : ice50 {
        variable = "ice96";
        displayName = "STR_Item_ice96";
        weight = 10;
        buyPrice = -1;
        sellPrice = 170000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice97 : ice50 {
        variable = "ice97";
        displayName = "STR_Item_ice97";
        weight = 10;
        buyPrice = -1;
        sellPrice = 175000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice98 : ice50 {
        variable = "ice98";
        displayName = "STR_Item_ice98";
        weight = 10;
        buyPrice = -1;
        sellPrice = 180000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class ice100 : ice50 {
        variable = "ice100";
        displayName = "STR_Item_ice100";
        weight = 10;
        buyPrice = -1;
        sellPrice = 185000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleuatre.paa";
        type = 1;
    };
    
    class iceBlue : ice50 {
        variable = "iceBlue";
        displayName = "STR_Item_iceBlue";
        weight = 10;
        buyPrice = -1;
        sellPrice = 190000;
        illegal = true;
        edible = -1;
        icon = "icons\farms\chimie\ico_IceBleu.paa";
        type = 1;
    };

    // --------------Aérien----------------

    class lightwp_unprocessed {
        variable = "lightwp_unprocessed";
        displayName = "STR_Item_LightwpU";
        weight = 10;
        buyPrice = 55;
        sellPrice = 27;
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
    };

    class lightwp_processed {
        variable = "lightwp_processed";
        displayName = "STR_Item_LightwpP";
        weight = 8;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
        base = "lightwp_unprocessed";
    };

    class lightwp_finish {
        variable = "lightwp_finish";
        displayName = "STR_Item_LightwpT";
        weight = 8;
        buyPrice = -1;
        sellPrice = 810;
        illegal = true;
        edible = -1;
        icon = "";
        type = 0;
        base = "lightwp_processed";
    };

    class med_unprocessed {
        variable = "med_unprocessed";
        displayName = "STR_Item_MedU";
        weight = 10;
        buyPrice = 40;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = ""; // Médicaments étrangés
        type = 0;
    };

    class med_processed {
        variable = "med_processed";
        displayName = "STR_Item_MedP";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
        base = "med_unprocessed";
    };

    class med_finish {
        variable = "med_finish";
        displayName = "STR_Item_MedT";
        weight = 6;
        buyPrice = -1;
        sellPrice = 390;
        illegal = false;
        edible = -1;
        icon = "";
        type = 0;
        base = "med_processed";
    };
	

    // Drugs:

    class fioleblinded {
        variable = "fioleblinded";
        displayName = "STR_Item_Fioleblinded";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ent\pollos\ico_bottle.paa";
        type = 0;
    };


    class mineralWater {
        variable = "mineralWater";
        displayName = "STR_Item_MineralWater";
        weight = 1;
        buyPrice = 4;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ent\bar\ico_glass.paa";
        type = 0;
    };

    class specialCoffee {
        variable = "specialCoffee";
        displayName = "STR_Item_SpecialCoffee";
        weight = 1;
        buyPrice = 8;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ent\bar\ico_coffee.paa";
        type = 0;
    };

    class specialSoda {
        variable = "specialSoda";
        displayName = "STR_Item_SpecialSoda";
        weight = 1;
        buyPrice = 8;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ent\bar\ico_soda.paa";
        type = 0;
    };

    class specialSoda2 {
        variable = "specialSoda2";
        displayName = "STR_Item_SpecialSoda2";
        weight = 1;
        buyPrice = 8;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ent\bar\ico_soda.paa";
        type = 0;
    };

    class juice {
        variable = "juice";
        displayName = "STR_Item_Juice";
        weight = 1;
        buyPrice = 1500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ent\bar\ico_juice.paa";
        type = 0;
    };

    class beer {
        variable = "beer";
        displayName = "STR_Item_Beer";
        weight = 1;
        buyPrice = 2000;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ent\bar\ico_beer.paa";
        type = 0;
    };

    class whiskey {
        variable = "whiskey";
        displayName = "STR_Item_Whiskey";
        weight = 1;
        buyPrice = 12;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ent\bar\ico_whiskey.paa";
        type = 0;
    };

    class vodka {
        variable = "vodka";
        displayName = "STR_Item_Vodka";
        weight = 1;
        buyPrice = 1500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ent\bar\ico_vodka.paa";
        type = 0;
    };

    class rum {
        variable = "rum";
        displayName = "STR_Item_Rum";
        weight = 1;
        buyPrice = 12;
        sellPrice = -1;
        illegal = false;
        edible = 100;
        icon = "icons\ent\bar\ico_rum.paa";
        type = 0;
    };

    class cocktail {
        variable = "cocktail";
        displayName = "STR_Item_Cocktail";
        weight = 1;
        buyPrice = 1500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ent\bar\ico_cocktail.paa";
        type = 0;
    };

    class tapas {
        variable = "tapas";
        displayName = "STR_Item_Tapas";
        weight = 1;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = 50;
        icon = "icons\ent\bar\ico_tapas.paa";
        type = 0;
    };

    class nachos {
        variable = "nachos";
        displayName = "STR_Item_Nachos";
        weight = 1;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = 50;
        icon = "icons\ent\bar\ico_guacamole.paa";
        type = 0;
    };

    class specialDonuts {
        variable = "specialDonuts";
        displayName = "STR_Item_SpecialDonuts";
        weight = 1;
        buyPrice = 500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ent\bar\ico_donut.paa";
        type = 0;
    };

    class testAtouts {
        variable = "testAtouts";
        displayName = "STR_Item_testAtouts";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ent\pollos\ico_bottle.paa";
        type = 0;
    };

    class joint1 {
        variable = "joint1";
        displayName = "STR_Item_Joint1";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ent\pollos\ico_drug.paa";
        type = 0;
    };

    class joint2 {
        variable = "joint2";
        displayName = "STR_Item_Joint2";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ent\pollos\ico_drug.paa";
        type = 0;
    };

    class joint3 {
        variable = "joint3";
        displayName = "STR_Item_Joint3";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ent\pollos\ico_drug.paa";
        type = 0;
    };

    class blunt1 {
        variable = "blunt1";
        displayName = "STR_Item_Blunt1";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ent\pollos\ico_drug.paa";
        type = 0;
    };

    class blunt2 {
        variable = "blunt2";
        displayName = "STR_Item_Blunt2";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ent\pollos\ico_drug.paa";
        type = 0;
    }; 
};