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
_config = missionConfigFile >> "Max_Settings_Plants" >> "Plants";
_exit = false;

if (_item isEqualTo (getText (missionConfigFile >> "Max_Settings_Plants" >> "item_to_put_water"))) exitWith {
    [] spawn max_plants_fnc_waterPlante;
};

if (_item isEqualTo (getText (missionConfigFile >> "Max_Settings_Plants" >> "item_to_delete_plant"))) exitWith {
    [] spawn max_plants_fnc_deletePlante;
};

for "_i" from 0 to (count _config)-1 do {
    _curConfig = _config select _i;
    if (_item isEqualTo (getText (_curConfig >> "itemNeeded"))) exitWith {
        [_item] spawn max_plants_fnc_plantPlante;
        [] call life_fnc_p_updateMenu;
        _exit = true;
    };
};

if (_exit) exitWith {};