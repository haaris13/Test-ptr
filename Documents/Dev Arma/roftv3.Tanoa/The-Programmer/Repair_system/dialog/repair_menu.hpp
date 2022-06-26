/*
    Author: Jean_Park
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Discord : https://discord.gg/DhFUFsq

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class Life_Button_Invisible_Repair : Life_RscButtonMenu {
    animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
    animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
    colorBackground[] = {0, 0, 0, 0};
    colorBackground2[] = {1, 1, 1, 0};
    color[] = {1, 1, 1, 0};
    color2[] = {1, 1, 1, 0};
    colorText[] = {1, 1, 1, 0};
    colorDisabled[] = {1, 1, 1, 0};
};

class repair_menu {
   idd = 4001;
   name = "repair_menu";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class fond : Life_RscPicture
       {
           idc = 1000;
           text = "";
           x = 0.192187499999999 * safezoneW + safezoneX;
           y = 0.0606932153392332 * safezoneH + safezoneY;
           w = 0.575 * safezoneW;
           h = 0.93 * safezoneH;
       };
   };
   class controls
   {
       class liste_piece : Life_RscListBox
       {
           x = 0.340104166666667 * safezoneW + safezoneX;
           y = 0.486184857423795 * safezoneH + safezoneY;
           w = 0.13 * safezoneW;
           h = 0.28 * safezoneH;
           idc = 1001;
           sizeex = 0.04;
           font = "RobotoCondensed";
           onlbselchanged = "call TheProgrammer_fnc_RepairLbChange";
       };
       class info : Life_RscStructuredText
       {
           idc = 1002;
           x = 0.4765625 * safezoneW + safezoneX;
           y = 0.518633235004916 * safezoneH + safezoneY;
           h = 0.25 * safezoneH;
           w = 0.18575 * safezoneW;
       };
       class text_button : Life_RscStructuredText
       {
           idc = 1006;
           x = 0.446875 * safezoneW + safezoneX;
           y = 0.791742871189773 * safezoneH + safezoneY;
           h = 0.035 * safezoneH;
           w = 0.1 * safezoneW;
       };
       class reparer : Life_Button_Invisible_Repair
       {
           text = "";
           x = 0.436979166666667 * safezoneW + safezoneX;
           y = 0.7809267453294 * safezoneH + safezoneY;
           w = 0.12 * safezoneW;
           h = 0.06 * safezoneH;
           idc = 1003;
       };
   };
};