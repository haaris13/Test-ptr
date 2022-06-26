/*
    Author: Yuri Zoko
    Web site: www.the-programmer.com
    Discord: discord.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.
*/

class The_Programmer_AdvancedInsurance_CutTracker {
   idd = 3910;
   name = "The_Programmer_AdvancedInsurance_CutTracker";
   movingenable = 0;
   enablesimulation = 1;
   class controlsBackground
   {
       class fond : Life_RscPicture
       {
           idc = 3911;
           text = "";
           x = 0.247916666666666 * safezoneW + safezoneX;
           y = 0.094124877089479 * safezoneH + safezoneY;
           w = 0.5 * safezoneW;
           h = 0.85 * safezoneH;
       };
   };
   class controls
   {
       class cut : Life_RscButtonMenuInvisible2Insure
       {
           idc = 3912;
           text = "";
           onbuttonclick = "[1] spawn advanced_insurance_fnc_cutTracker;";
           x = 0.676041666666667 * safezoneW + safezoneX;
           y = 0.481076030039285 * safezoneH + safezoneY;
           w = 0.0314999999999997 * safezoneW;
           h = 0.0648326283812672 * safezoneH;
       };
   };
};