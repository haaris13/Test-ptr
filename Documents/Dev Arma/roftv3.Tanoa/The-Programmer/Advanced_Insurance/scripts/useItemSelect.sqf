/*
    Author: Yuri Zoko
    Web site: www.the-programmer.com
    Discord: discord.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.
*/

_config = missionConfigFile >> "The_Programmer_AdvancedInsure";
_tracker = getText (_config >> "tracker");
_cuttingpliers = getText (_config >> "cuttingpliers");

if (_item isEqualTo _tracker) exitWith {
    [cursorObject] spawn advanced_insurance_fnc_gpsTracker;
    closeDialog 0;
};

if (_item isEqualTo _cuttingpliers) exitWith {
    [cursorObject] spawn advanced_insurance_fnc_checkTracker;
    closeDialog 0;
};
