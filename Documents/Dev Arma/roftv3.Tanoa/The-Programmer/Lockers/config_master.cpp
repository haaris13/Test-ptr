/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
#define false 0
#define true 1

class Max_Settings_Lockers {
    default_lang = "fr"; // fr / en / de

    textures_base_path = "The-Programmer\Lockers\textures";
    sell_locker_multiplier = 0.2; // Money earned on the resale of a locker
    itemsWeightMultiplier = 1; // Weight Multiplier for Arma 3 items

    default_size = 500;
    maximum_lockers_per_player = 1; // -1 = unlimited

    classnames_lockers_buyables[] = {
        //{"classname", price}
        {"Land_OfficeCabinet_02_F", 500000},
        {"ACE_Box_Ammo", 500000},
        {"SP_Casier3", 500000},
        {"C_IDAP_CargoNet_01_supplies_F", 500000}
    };

    locker_size_price[] = {
        //{"size", price, "condition"}
        //{"1500", 0, ""},
        {"1000", 500000, ""}
        //{"500", 5000, ""},
        //{"1000", 10000, ""},
        //{"2000", 20000, ""},
        //{"5000", 50000, ""}
    };

    cops_can_open_lockers = true;

    civilians_can_rob_lockers = true;
    required_item_civ_rob_locker = "lockpick"; // "" = no item required
    consume_item_on_use = true;
    percentage_chance_success = 0.20; // Percentage chance that the player will be able to open the locker
    percentage_chance_alarm = 0.80; // Percentage chance that the police will be notified when a locker is robbed
    minimum_cops_online = 5; // To allow civilian to rob lockers
    marker_duration = 180; // If the locker alarm goes off, a marker is placed on all players' map

    item_locker = "locker";
    3d_object_locker = "C_IDAP_CargoNet_01_supplies_F";
    place_only_in_own_house = 0; // Else you can place the locker in any house

    class groups_lockers {
        class cops {
            locker_owner_variable = "all_cops";
            condition = "playerSide isEqualTo west";
            default_size = 20000;
        };

        class medics {
            locker_owner_variable = "all_medics";
            condition = "playerSide isEqualTo independent";
            default_size = 15000;
        };
    };
};
