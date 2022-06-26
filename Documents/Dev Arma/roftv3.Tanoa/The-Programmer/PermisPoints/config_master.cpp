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
class Max_Settings_PermisPoints {
    default_lang = "fr"; // fr / en / de / es
    textures_base_path = "The-Programmer\PermisPoints\textures";

    tonic_version = 5; //5 if you are on version 5.0 or 4 if you are on version 4.X

    class permis_type {
        class driver {
            associateed_license = "driver"; // Class of the license in your config_licenses.hpp
            points_variable = "driver_points"; // Variable of your choice, must be a variable never used !
            display_name = "Permis B";

            maximum_points = 12;
            max_remove_points_per_time = 8;
        };

        class trucking {
            associateed_license = "trucking";
            points_variable = "trucking_points";
            display_name = "Permis Camions";

            maximum_points = 12;
            max_remove_points_per_time = 8;
        };

        class boat {
            associateed_license = "boat";
            points_variable = "boat_points";
            display_name = "Permis Bateau";

            maximum_points = 10;
            max_remove_points_per_time = 10;
        };

        class pilot {
            associateed_license = "pilot";
            points_variable = "pilot_points";
            display_name = "Permis Pilote";

            maximum_points = 10;
            max_remove_points_per_time = 10;
        };
    };
};
