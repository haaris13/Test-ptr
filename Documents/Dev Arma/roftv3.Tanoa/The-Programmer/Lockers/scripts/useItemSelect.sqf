/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
if (_item isEqualTo (getText (missionConfigFile >> "Max_Settings_Lockers" >> "item_locker"))) exitWith {
    [] spawn max_lockers_fnc_placeLocker;
};
