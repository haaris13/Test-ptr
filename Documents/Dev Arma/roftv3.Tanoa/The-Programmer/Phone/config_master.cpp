/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.familledeschats.ovh (Une Vache Sur CS)
    Web site: http://62.210.144.223/ (http://familledeschats.ovh)
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
#define false 0
#define true 1

class Max_Settings_Phone {
    default_lang = "fr"; // fr / en / de / es

    tonic_version = 4; //5 if you are on version 5.0 or 4 if you are on version 4.X
    textures_base_path = "The-Programmer\Phone\textures";

    price_buy_sim = 10;
    price_offer_1 = 500;
    price_offer_2 = 750;
    price_offer_3 = 950;

    calls_management_script_enable = true; // ONLY IF YOU HAVE INSTALLED OUR PRODUCT "DISPATCH SYSTEM"

    phone_number_first_connexion = false; // CREATE PHONE NUMBER ON FIRST CONNEXION

    messages_to_depanneurs = true; // AUTORISER L'ENVOIE DE MESSAGE AUX DEPANNEURS (true/false)
    calls_to_depanneurs = true; // AUTORISER L'APPEL VERS LES DEPANNEURS (true/false)
    licence_depanneurs = "license_civ_dep"; // LICENCE DES DEPANNEURS ("license_civ" + variable de la licence)

    start_with_0 = true; // LE TOUT PREMIER NUMERO DU TELEPHONE EST UN 0
    first_numbers = 6; // PREMIERS NUMERO(S) D'UN NUMERO DE TELEPHONE APRES LE 0 SI ACTIVE
    numbers_after_first_numbers = 8; // NOMBRE DE NUMERO GENERES APRES LES NUMERO DE LA LIGNE DU DESSUS

    allow_anonymous_messages = true;
    allow_anonymous_calls = true;
    anonymous_prefix = "#31#";

    allow_group_call = true;
    group_call_players_limit = 9; // -1 = unlimited

    num_cop = 17; // NUMERO POUR ENVOYER UN MESSAGE AUX GENDARMES
    num_med = 18; // NUMERO POUR ENVOYER UN MESSAGE AUX MEDECINS
    num_cop_med = 112; // NUMERO POUR ENVOYER UN MESSAGE AUX GENDARMES ET MEDECINS
    num_dep = 60; // NUMERO POUR ENVOYER UN MESSAGE AUX DEPANNEURS
    num_east = 80; // NUMERO POUR ENVOYER UN MESSAGE AUX ESAT (ADAC)

    time_before_delete_dep_marker = 300; // in seconds

    display_online_contacts = true; // DISPLAY (with color) IF YOUR CONTACT IS ONLINE

    class phone_contact_customization {
        police_contact = true;
        medic_contact = true;
        contact_cop_med = true;
        contact_dep = true;
        east_contact = true;

        customized_contact[] = {
            //{"DISPLAY NAME","NUMBER"}
        };
    };

    class special_numbers {
        class entreprise1 {
            number = 606150;
            displayname = "Sunrise Beach";
            license = "license_civ_miro";
        };
         class entreprise2 {
            number = 606151;
            displayname = "Diamond Company";
            license = "license_civ_diamondd";
        };
         class entreprise3 {
            number = 152;
            displayname = "C.M.T";
            license = "license_civ_cmt";
        };
         class entreprise4 {
            number = 606153;
            displayname = "BCC";
            license = "license_civ_bcc";
        };
         class entreprise5 {
            number = 606154;
            displayname = "Pacific Industrie";
            license = "license_civ_grenat";
        };
        class entreprise6 {
            number = 606155;
            displayname = "Sciage Industrie";
            license = "license_civ_palettes";
        };

        class entreprise7 {
            number = 606156;
            displayname = "Pacific Air";
            license = "license_civ_PacificAir";
        };

        class entreprise9 {
            number = 606710;
            displayname = "Cabinet Maître Nazarer";
            license = "license_civ_nazar";
        };

        class entreprise10 {
            number = 606606;
            displayname = "The Brink's Company";
            license = "license_civ_brinks";
        };

        class entreprise11 {
            number = 606607;
            displayname = "Anatoly Corp";
            license = "license_civ_anatoly";
        };
        class entreprise12 {
            number = 606608;
            displayname = "Pacific Custom";
            license = "license_civ_custom";
        };
        class entreprise13 {
            number = 606609;
            displayname = "Mancini BTP";
            license = "license_civ_mancini";
        };

        class entreprise14 {
            number = 606610;
            displayname = "Pacific Export";
            license = "license_civ_pacificExport";
        };

        /** **********************************************************************************
         *   Remise à niv des tel pour les nouvelles société
         * **********************************************************************************/
        class entreprise_tftf {
            number = 401;
            displayname = "Tout Feux Tout Flammes (TFTF)";
            license = "license_civ_EntTFTF";
        };
        class entreprise_pp {
            number = 402;
            displayname = "Pacific Petrol (PP)";
            license = "license_civ_EntPP";
        };
        class entreprise_twp {
            number = 403;
            displayname = "The Wood Pacific (TWP)";
            license = "license_civ_EntTWP";
        };
        // La 404 est pour les taxi indépendant uniquement par fréquence à ce jour !
        class entreprise_taxi {
            number = 405;
            displayname = "Société TAXI";
            license = "license_civ_Aloca";
        };
    };
};
