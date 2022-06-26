/*
    Author: Yuri Zoko
    Web site: www.the-programmer.com
    Discord: discord.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.
*/
class The_Programmer_AdvancedInsurance_MainMenu {
   idd = 3890;
   name = "The_Programmer_AdvancedInsurance_MainMenu";
   movingenable = false;
   enablesimulation = true;
   onload = "[0] spawn advanced_insurance_fnc_insurance;";
   class controlsBackground
   {
       class background : life_RscPicture
       {
           idc = 3891;
           text = "";
           x = 0.2 * safezoneW + safezoneX;
           y = 0.03 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 1.1 * safezoneH;
       };
   };
   class controls
   {
       class button_level1 : Life_RscButtonMenuInvisibleInsure
       {
           idc = -1;
           x = 0.302635333333333 * safezoneW + safezoneX;
           y = 0.707611798287345 * safezoneH + safezoneY;
           w = 0.0416355000000001 * safezoneW;
           h = 0.0200285442435776 * safezoneH;
           onbuttonclick = "[1] spawn advanced_insurance_fnc_insurance;";
       };
       class button_level2 : Life_RscButtonMenuInvisibleInsure
       {
           idc = -1;
           x = 0.4170265 * safezoneW + safezoneX;
           y = 0.707611798287345 * safezoneH + safezoneY;
           w = 0.0413068333333337 * safezoneW;
           h = 0.0200285442435776 * safezoneH;
           onbuttonclick = "[2] spawn advanced_insurance_fnc_insurance;";
       };
       class button_level3 : Life_RscButtonMenuInvisibleInsure
       {
           idc = -1;
           x = 0.530568166666666 * safezoneW + safezoneX;
           y = 0.707611798287345 * safezoneH + safezoneY;
           w = 0.0423485000000003 * safezoneW;
           h = 0.0200285442435776 * safezoneH;
           onbuttonclick = "[3] spawn advanced_insurance_fnc_insurance;";
       };
       class button_level4 : Life_RscButtonMenuInvisibleInsure
       {
           idc = -1;
           x = 0.644381333333334 * safezoneW + safezoneX;
           y = 0.707611798287345 * safezoneH + safezoneY;
           w = 0.0425978333333331 * safezoneW;
           h = 0.0200285442435776 * safezoneH;
           onbuttonclick = "[4] spawn advanced_insurance_fnc_insurance;";
       };
       class description_level1 : Life_RscStructuredText
       {
           idc = 3892;
           x = 0.280131833333334 * safezoneW + safezoneX;
           y = 0.585223596574691 * safezoneH + safezoneY;
           w = 0.088618166666666 * safezoneW;
           h = 0.12243577545195 * safezoneH;
           text = "";
           shadow = 0;
       };
       class description_level2 : Life_RscStructuredText
       {
           idc = 3893;
           x = 0.393891666666667 * safezoneW + safezoneX;
           y = 0.585223596574691 * safezoneH + safezoneY;
           w = 0.088618166666666 * safezoneW;
           h = 0.12243577545195 * safezoneH;
           text = "";
           shadow = 0;
       };
       class description_level3 : Life_RscStructuredText
       {
           idc = 3894;
           x = 0.507130666666666 * safezoneW + safezoneX;
           y = 0.585223596574691 * safezoneH + safezoneY;
           w = 0.088618166666666 * safezoneW;
           h = 0.12243577545195 * safezoneH;
           text = "";
           shadow = 0;
       };
       class description_level4 : Life_RscStructuredText
       {
           idc = 3895;
           x = 0.621464666666668 * safezoneW + safezoneX;
           y = 0.585223596574691 * safezoneH + safezoneY;
           w = 0.088618166666666 * safezoneW;
           h = 0.12243577545195 * safezoneH;
           text = "";
           shadow = 0;
       };
   };
};