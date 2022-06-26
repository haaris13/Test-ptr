/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
#define true 1
#define false 0

class Max_Settings_Entreprise {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "The-Programmer\Entreprise\textures";

    allow_acces_to_create_company_forearch_player = true;
    allowed_licenses[] = { "license_civ_entrepreneur" }; //Only if allow_acces_to_create_company_forearch_player = false // OPTIONAL OPTION
    allowed_playerid[] = { "76561198168200130" }; //Only if allow_acces_to_create_company_forearch_player = false // OPTIONAL OPTION

    price_upgrade_100_storage = 1000;
    price_upgrade_1000_storage = 100000;

    open_color = "ColorGreen"; // check : https://community.bistudio.com/wiki/CfgMarkerColors_Arma_3
    close_color = "ColorBlack";
    open_or_close_for_new_employes = true;

    blacklisted_virtual_items[] = {"defibrillator","goldbar","blastingcharge","boltcutter","defusekit"}; // Items that the company's CEO cannot buy from his employees (config class of the item)

    class positions_entreprises {
        class entreprise1 {
            markerVar = "ent_ctm";
            radius = 200;
            price = 250000;
        };
        class entreprise2 {
            markerVar = "ent_gold";
            radius = 250;
            price = 35000;
        };
        class entreprise3 {
            markerVar = "ent_shelby";
            radius = 200;
            price = 58000;
        };
        class entreprise4 {
            markerVar = "ent_dir";
            radius = 200;
            price = 142000;
        };
        class entreprise5 {
            markerVar = "ent_myroslav";
            radius = 200;
            price = 210000;
        };

        class entreprise6 {
            markerVar = "ent_bcc";
            radius = 200;
            price = 210000;
        };

         class entreprise7 {
            markerVar = "ent_sciage_bois";
            radius = 200;
            price = 210000;
        };

        class entreprise8 {
            markerVar = "ent_Pacific_air";
            radius = 200;
            price = 210000;
        };

        class entreprise9 {
            markerVar = "ent_amb_us";
            radius = 200;
            price = 10;
        };

        class entreprise10 {
            markerVar = "ent_Aloca";
            radius = 200;
            price = 210000;
        };

        class entreprise11 {
            markerVar = "ent_bccc";
            radius = 200;
            price = 210000;
        };

          class entreprise12 {
            markerVar = "ent_casino";
            radius = 200;
            price = 210000;
        };

          class entreprise13 {
            markerVar = "ent_pacificnews";
            radius = 200;
            price = 210000;
        };
        
          class entreprise14 {
            markerVar = "ent_cmpmers";
            radius = 200;
            price = 210000;
        };
        
          class entreprise15 {
            markerVar = "ent_cabNazaret";
            radius = 200;
            price = 210000;
        };

          class entreprise16 {
            markerVar = "ent_brinks";
            radius = 200;
            price = 210000;
        };

         class entreprise17 {
            markerVar = "ent_pacificExport";
            radius = 200;
            price = 210000;
        };

         class entreprise18 {
            markerVar = "ent_mancini_btp";
            radius = 200;
            price = 210000;
        };

        class entreprise19 {
            markerVar = "ent_avocattt";
            radius = 200;
            price = 210000;
        };

        class entreprise20 {
            markerVar = "ent_spawn_anatoly";
            radius = 200;
            price = 210000;
        };

         class entreprise21 {
            markerVar = "ent_pacific_custom";
            radius = 200;
            price = 210000;
        };

        /** ******************************************************
         *  Nouvelle entreprises
         * ******************************************************/
        class entreprise_tftf {
            markerVar = "ent_tftf";
            radius = 200;
            price = 250000;
        };
        class entreprise_pp {
            markerVar = "ent_pp";
            radius = 200;
            price = 250000;
        };
        class entreprise_twp {
            markerVar = "ent_twp";
            radius = 200;
            price = 250000;
        };
    };

    class types_entreprises {
        class autoentreprise {
            displayName = "Auto-entreprise";
            max_stock_commum = 1500;
            max_stock_private = 500;
            max_players = 1;
            price = 25000;
        };
        class sarl {
            displayName = "SARL";
            max_stock_commum = 4000;
            max_stock_private = 2000;
            max_players = 3;
            price = 75000;
        };
        class sas {
            displayName = "SAS";
            max_stock_commum = 5000;
            max_stock_private = 3500;
            max_players = 5;
            price = 150000;
        };
        class sa {
            displayName = "SA";
            max_stock_commum = 35000;
            max_stock_private = 1500;
            max_players = 14;
            price = 250000;
        };
    };
};
