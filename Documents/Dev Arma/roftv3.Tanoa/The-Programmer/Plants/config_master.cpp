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

class Max_Settings_Plants {
    default_lang = "fr"; // fr / en / de / es

    check_all_plants_loop_every_x_seconds = 45;
    save_plants_between_reboot = true;

    item_to_put_water = "arrosoir";
    item_to_delete_plant = "desherbant";

    class Plants {
        class cocaine {
            className = "tp_weed"; // You can use classname of the object or P3D path, for example : a3\vegetation_f_exp\shrub\b_gardenia_f.p3d
            zones[] = { "plant_cocaine" };
            zoneSize = 50;
            allow_to_plant_in_house = true;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_cocaine"; // Classname of the item required in your config_vItems.hpp
            itemGiven = "cocaine_unprocessed"; // Classname of the item required in your config_vItems.hpp
            amount_min = 1;
            amount_max = 5;
            time_to_growth = 1 * 1800; // 15 minutes
            number_of_watering_needed = 1;
        };

        class cannabis {
            className = "tp_weed_2";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = true;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_cannabis";
            itemGiven = "cannabis";
            amount_min = 1;
            amount_max = 5;
            time_to_growth = 1 * 1800; // 30 minutes
            number_of_watering_needed = 1;
        };

        class strawberry {
            className = "tp_strawberry";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = true;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_strawberry";
            itemGiven = "strawberry_unprocessed";
            amount_min = 1;
            amount_max = 5;
            time_to_growth = 1800;
            number_of_watering_needed = 1;
        };
      
       class khat {
            className = "tp_sunflower";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = true;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_khat";
            itemGiven = "khat_unprocessed";
            amount_min = 1;
            amount_max = 5;
            time_to_growth = 1800;
            number_of_watering_needed = 1;
        };

        class heroine {
            className = "tp_chili_pepper";
            zones[] = {};
            zoneSize = 0;
            allow_to_plant_in_house = true;
            allow_to_plant_everywhere = true;
            itemNeeded = "seed_heroine";
            itemGiven = "heroin_unprocessed";
            amount_min = 1;
            amount_max = 5;
            time_to_growth = 1800;
            number_of_watering_needed = 1;
        };
    };
};
