class Processing {

    // Contrebande
    class serpent {
        marker = "SnakeProcess";
        Required[] = {{"serpent",1}};
        Given[] = {{"peauSerpent",3}};
        Text = "Dépeçage des Serpent";
        Cost = 121;
        Profession = "prof_contrebande";
        Professionfactor = 300;
        zoneExp[] = {200,5};
        illegal = true;
    };

    class kaoriPlank {
        marker = "";
        Required[] = {{"kaori",1}};
        Given[] = {{"kaoriPlank",3}};
        Text = "Sciage du bois";
        Cost = 305;
        Profession = "prof_contrebande";
        Professionfactor = 700;
        zoneExp[] = {500,5};
        illegal = true;
    };

    class lightwp_processed {
        marker = "WeaponsFarmProcess1";
        Required[] = {{"lightwp_unprocessed",1}};
        Given[] = {{"lightwp_processed",1}};
        Text = "Falsification des documents de traçabilité";
        Profession = "prof_contrebande";
        Professionfactor = 125;
        Cost = 55;
        illegal = true;
    };

    class lightwp_finish {
        marker = "WeaponsFarmProcess2";
        Required[] = {{"lightwp_processed",1}};
        Given[] = {{"lightwp_finish",1}};
        Text = "Suppression des numéros de série";
        Profession = "prof_contrebande";
        Professionfactor = 125;
        Cost = 55;
        illegal = true;
    };

    //
    class med_processed {
        Required[] = {{"med_unprocessed",1}};
        Given[] = {{"med_processed",1}};
        Text = "Enregistrement des Médicaments";
        Professionfactor = 100;
        Cost = 35;
        Profession = "";
        illegal = false;
    };

    class med_finish {
        Required[] = {{"med_processed",1}};
        Given[] = {{"med_finish",1}};
        Text = "Autorisation des Médicaments";
        Professionfactor = 100;
        Cost = 35;
        Profession = "";
        illegal = false;
    };

    class pinPlank {
        Required[] = {{"pin",1}};
        Given[] = {{"pinPlank",3}};
        Text = "Sciage du bois";
        Professionfactor = 457;
        Cost = 156;
        Profession = "";
        illegal = false;
    };

    class rhum {
        Required[] = {{"cannesucre",1}};
        Given[] = {{"rhum",14}};
        Text = "Distilation";
        Professionfactor = 417;
        Cost = 5;
        Profession = "";
        illegal = false;
    };

    //Illegal

    class marijuana {
        marker = "MarijuanaProcessing";
        Required[] = {{"cannabis",1}};
        Given[] = {{"marijuana",15}};
        Text = "Traitement de la Marijuana";
        Cost = 300;
        Profession = "prof_narcos";
        Professionfactor = 490;
        zoneExp[] = {100,5};
        illegal = true;
    };

    class mauiwaui {
        marker = "MauiwauiProcessing";
        Required[] = {{"mauiwaui_unprocessed",1}};
        Given[] = {{"mauiwaui_processed",3}};
        Text = "Traitement de la Maui Waui";
        Professionfactor = 284;
        Cost = 180;
        Profession = "prof_narcos";
        zoneExp[] = {300,5};
        illegal = true;
    };

    class purple {
        marker = "PurpleProcessing";
        Required[] = {{"purple_unprocessed",1}};
        Given[] = {{"purple_processed",2}};
        Text = "Traitement de la Purple Kush";
        Cost = 195;
        Profession = "prof_narcos";
        Professionfactor = 290;
        zoneExp[] = {600,5};
        illegal = true;
    };

    class strawberry {
        marker = "StrawberryProcessing";
        Required[] = {{"strawberry_unprocessed",1}};
        Given[] = {{"strawberry_processed",1}};
        Text = "Traitement de la Strawberry";
        Cost = 290;
        Profession = "prof_narcos";
        Professionfactor = 420;
        zoneExp[] = {750,5};
        illegal = true;
    };
};

class CfgFurnace {

    class tin {
        Required[] = {"tin_ore",1};
        Given[] = {"tin_bar",1};
        GivenBad[] = {"tin_bar_bad",1};
        Text = "Traitement de l'Étain";
        Cost = 0;
        Profession = "prof_mining";
        Professionfactor = 155;
        Time = 20;
        Temperature = 232;
        zoneExp[] = {100,5};
        illegal = false;
    };

    class copper {
        Required[] = {"copper_unrefined",1};
        Given[] = {"copper_refined",1};
        GivenBad[] = {"copper_refined_bad",1};
        Text = "Traitement de cuivre";
        Cost = 15;
        Profession = "prof_mining";
        Professionfactor = 155;
        Time = 25;
        Temperature = 1085;
        zoneExp[] = {250,5};
        illegal = false;
    };

    class iron {
        Required[] = {"iron_unrefined",1};
        Given[] = {"iron_refined",1};
        GivenBad[] = {"iron_refined_bad",1};
        Text = "Traitement du Fer";
        Cost = 39;
        Profession = "prof_mining";
        Professionfactor = 175;
        Time = 30;
        Temperature = 1538;
        zoneExp[] = {400,5};
        illegal = false;
    };

    class chromium {
        Required[] = {"chromium_ore",1};
        Given[] = {"chromium_bar",1};
        GivenBad[] = {"chromium_bar_bad",1};
        Text = "Traitement du Chrome";
        Cost = 73;
        Profession = "prof_mining";
        Professionfactor = 198;
        Time = 45;
        Temperature = 1907;
        zoneExp[] = {550,5};
        illegal = false;
    };
    
    class aluminium {
        Required[] = {"aluminium_ore",1};
        Given[] = {"aluminium_bar",1};
        GivenBad[] = {"aluminium_bar_bad",1};
        Text = "Traitement de l'aluminium";
        Cost = 114;
        Profession = "prof_mining";
        Professionfactor = 194;
        Time = 45;
        Temperature = 660;
        zoneExp[] = {750,5};
        illegal = false;
    };
    
    class nickel {
        Required[] = {"nickel_ore",1};
        Given[] = {"nickel_bar",1};
        GivenBad[] = {"nickel_bar_bad",1};
        Text = "Traitement du nickel";
        Cost = 188;
        Profession = "prof_mining";
        Professionfactor = 230;
        Time = 45;
        Temperature = 1455;
        zoneExp[] = {900,5};
        illegal = false;
    };

    class gold {
        Required[] = {"gold_ore",1};
        Given[] = {"gold_bar",1};
        GivenBad[] = {"gold_bar_bad",1};
        Text = "Traitement de l'or";
        Cost = 345;
        Profession = "prof_mining";
        Professionfactor = 300;
        Time = 45;
        Temperature = 1064;
        zoneExp[] = {950,5};
        illegal = false;
    };
};