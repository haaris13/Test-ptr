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

class Max_Settings_Facture {
    default_lang = "fr"; // fr / en / de / es

    tonic_version = 5; //5 if you are on version 5.0 or 4 if you are on version 4.X
    textures_base_path = "The-Programmer\Factures\textures";

    send_for_cops = true;
    send_for_meds = true;
    send_for_east = true;

    send_for_all_civilan = true;
    send_autorized_license_civ[] = { "license_civ_dep","license_civ_custom","license_civ_Aloca","license_civ_depanneur","license_civ_cmt","license_civ_bcc","license_civ__civbcc","license_civ_miro","license_civ_grenat","license_civ_diamondd","licence_civ_palettes" }; //ONLY IF send_for_all_civilan=false !
};
