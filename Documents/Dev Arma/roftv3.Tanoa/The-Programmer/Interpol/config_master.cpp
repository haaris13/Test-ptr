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

class Max_Settings_Interpol {
    default_lang = "fr"; // fr / en / de / es

    eye_colors[] = {"marron","bleu","bleu-gris","gris","noisette","vert","noir","ambre","violet","turquoise"};
    min_cop_level_remove_crime = 2;
    phone_numbers_script = true;

    crimes[] = { // WARNING : DO NOT USE ' IT CANNOT BE SAVED IN YOUR DATABASE !!
        //{"DISPLAYED TEXT","PRICE"},
        {"Refus d’obtempérer ",0}
       
    };
};
