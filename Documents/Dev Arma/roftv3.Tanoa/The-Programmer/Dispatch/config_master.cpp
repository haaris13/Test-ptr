/*
    author: Maxence Lyon
    altis DEV: https://altisdev.com/user/maxence-lyon
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

class Max_Settings_Dispatch {
    default_lang = "fr"; // fr / en / de / es

    textures_base_path = "The-Programmer\Dispatch\textures";

    phone_numbers_script_enable = true;
    gps_script_enable = false;

    enable_east = true;

    messages_preset[] = {
        //{"TITLE","MESSaGE"}
        {"STR_ON_WAY_HEADER","STR_ON_WAY_TEXT"},
        {"STR_NOT_MANY_INFORMATIONS_HEADER","STR_NOT_MANY_INFORMATIONS_TEXT"},
        {"STR_NO_STAFF_HEADER","STR_NO_STAFF_TEXT"}
    };
};
