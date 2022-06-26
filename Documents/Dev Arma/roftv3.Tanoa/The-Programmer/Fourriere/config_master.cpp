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

class Max_Settings_Fourriere {
    default_lang = "fr"; // fr / en / de / es

    tonic_version = 4; //5 if you are on version 5.0 or 4 if you are on version 4.X

    price_unimpound = 0.20; // * BUY PRICE = FEE PRICE
    minimum_retreive_price = 0;
    send_money_to_company_id = -1; // -1 if you don't have Company Sysem or if you don't want to send the payments to a commpany bank account. Otherwise, put the id of the company in the table 'entreprises' of your database

    enable_search_bar = true; // A search bar will be added in the menu if there is more than 10 vehicles to display
    broadcast_informations_when_impounding_to_everyone = false;

    vehicle_bonus_impound_multiplier = 0.10; // TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier
    send_bonus_to_cops_account = false; // Only if you have the product Government System enabled
    impound_duration = 25; // Time in seconds to impound a vehice (random of +- 5 seconds)

 
    condition_open_impound_of_everyone = "license_civ_dep"; // This is not necessarily a condition only for cops, you can set a condition to check if the player has a certain license for example. All the players that match this condition will be able to see and unimpound the vehicle of everyone in the impound. Put "" to desactivate
    price_unimpound_condition_matched = 0.05; // * BUY PRICE = UNIMPOUND PRICE, only if the player match the condition "condition_open_impound_of_everyone"
    only_condition_can_open_impound = true; // If true, only players that match "condition_open_impound_of_everyone" will be able to open the impound of everyone. Otherwise, all the players can open their own impound and "condition_open_impound_of_everyone" can open the impound of everyone
};
