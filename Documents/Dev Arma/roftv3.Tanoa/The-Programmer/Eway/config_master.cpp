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

class Max_Settings_Ebay {
    default_lang = "fr"; // fr / en

    textures_base_path = "The-Programmer\Eway\textures";

    price_per_day = 5;
    fee_sell_item = .03; // PERCENTAGE OF THE PRICE
    maximum_ads_per_player = 15;

    blacklist_virtualItems[] = {""};
    blacklist_items[] = {""};
    blacklist_vehicles[] = {""};
    blacklist_houses[] = {""};

    allow_sell_VirtualItems = true; // true / false
    allow_sell_items = true;
    allow_sell_Vehicles = true;
    allow_sell_Houses = true;
};
