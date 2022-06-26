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
#define false 0
#define true 1

class Max_Settings_WhitelistMenu {
    default_lang = "fr"; // fr / en / de / es

    tonic_version = 4; //5 if you are on version 5.0 or 4 if you are on version 4.X 

    cop_level_data[] = {"cops",7,"coplevel"}; // Format is : {"Category class name (below)",Maximum Level,"Column name in database"}
    medic_level_data[] = {"medics",5,"mediclevel"};
    adac_level_data[] = {"",5,"adaclevel"}; // You can put "" for the category class name to hide it

    class categories { // One class inside = One button = One licenses list
        class companies {
            displayName = "STR_CATEGORY_BUSINESS"; // You can put text or a localize in the localization.hpp file of this script
            condition_addLicense = "(call life_adminlevel) >= 1"; // Condition which allow or not to add the license
            condition_removeLicense = "(call life_adminlevel) >= 1"; // Condition which allow or not to remove the license
            licenses[] = {
                //{"DISPLAY NAME","LICENSE CLASS NAME","SPECIFIC CONDITION (optional)"}
                // DO NOT FORGET THE COMA AFTER THE END OF THE LINE IF IT'S NOT THE LAST ONE
                {"Driver licence","driver"},
                {"Boat licence","boat"}
            };

       class Entreprise_grenat {
            displayName = "STR_CATEGORY_ENTREPRISES_GRENAT";
            condition_addLicense = "pdg_ent_grenat";
            condition_removeLicense = "pdg_ent_grenat";
            licenses[] = {"Traitemetn Grenat"};
        };


        };

         class Entreprise_grenat {
            displayName = "STR_CATEGORY_ENTREPRISES_GRENAT";
            condition_addLicense = "pdg_ent_grenat";
            condition_removeLicense = "pdg_ent_grenat";
            licenses[] = {"Traitemetn Grenat"};
        };

      


           class PDG_Bismuth {
            displayName = "STR_License_bismuth"; // You can put text or a localize in the localization.hpp file of this script
            condition_addLicense = "pdg_ent_bismuth"; // Condition which allow or not to add the license
            condition_removeLicense = "pdg_ent_bismuth"; // Condition which allow or not to remove the license
            licenses[] = {
                //{"DISPLAY NAME","LICENSE CLASS NAME","SPECIFIC CONDITION (optional)"}
                // DO NOT FORGET THE COMA AFTER THE END OF THE LINE IF IT'S NOT THE LAST ONE
                {"Traitemetn Bismuth","ent_bismuth"}
            };
        };

            class pdg_ent_grenat {
            displayName = "STR_License_Grenat"; // You can put text or a localize in the localization.hpp file of this script
            condition_addLicense = "ent_grenat"; // Condition which allow or not to add the license
            condition_removeLicense = "ent_grenat"; // Condition which allow or not to remove the license
            licenses[] = {
                //{"DISPLAY NAME","LICENSE CLASS NAME","SPECIFIC CONDITION (optional)"}
                // DO NOT FORGET THE COMA AFTER THE END OF THE LINE IF IT'S NOT THE LAST ONE
                {"Traitemetn Grenat","ent_grenat"}
                
            };
        };

        class gangsters {
            displayName = "STR_CATEGORY_GANGSTERS";
            condition_addLicense = "(call life_adminlevel) >= 1";
            condition_removeLicense = "(call life_adminlevel) >= 1";
            licenses[] = {};
        };

        class cops {
            displayName = "STR_CATEGORY_COPS";
            condition_addLicense = "(call life_adminlevel) >= 1";
            condition_removeLicense = "(call life_adminlevel) >= 1";
            licenses[] = {
                {"Pilot","cAir"}
            };
        };

        class medics {
            displayName = "STR_CATEGORY_MEDICS";
            condition_addLicense = "(call life_adminlevel) >= 1";
            condition_removeLicense = "(call life_adminlevel) >= 1";
            licenses[] = {
                {"Pilot","mAir"}
            };
        };
    };
};
