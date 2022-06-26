/*
    Author: Yuri Zoko
    Web site: www.the-programmer.com
    Discord: discord.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.
*/

class The_Programmer_AdvancedInsurance_Sticker {
   idd = 3915;
   name = "The_Programmer_AdvancedInsurance_Sticker";
   movingenable = 0;
   enablesimulation = 1;
   onload = "uiNamespace setVariable ['The_Programmer_AdvancedInsurance_Sticker',(_this select 0)]";
   duration = 30;
   fadein = 0;
   fadeout = 1;
   class controlsBackground
   {
       class fond : Life_RscPicture
       {
           idc = 3916;
           text = "";
           x = 0.651041666666666 * safezoneW + safezoneX;
           y = -0.168482163823936 * safezoneH + safezoneY;
           w = 0.5 * safezoneW;
           h = 0.85 * safezoneH;
       };
   };
   class controls
   {
       class of : Life_RscStructuredText
       {
           idc = 3917;
           x = 0.810861000000001 * safezoneW + safezoneX;
           y = 0.165623215984777 * safezoneH + safezoneY;
           w = 0.088618166666666 * safezoneW;
           h = 0.0425118934348237 * safezoneH;
           text = "";
           shadow = 0;
       };
       class at : Life_RscStructuredText
       {
           idc = 3918;
           x = 0.903484833333333 * safezoneW + safezoneX;
           y = 0.165623215984777 * safezoneH + safezoneY;
           w = 0.088618166666666 * safezoneW;
           h = 0.0425118934348237 * safezoneH;
           text = "";
           shadow = 0;
       };
       class immatriculation : Life_RscStructuredText
       {
           idc = 3919;
           x = 0.835776499999999 * safezoneW + safezoneX;
           y = 0.249352997145576 * safezoneH + safezoneY;
           w = 0.129848500000001 * safezoneW;
           h = 0.0425118934348237 * safezoneH;
           text = "";
           shadow = 0;
       };
       class owner : Life_RscStructuredText
       {
           idc = 3920;
           x = 0.835776499999999 * safezoneW + safezoneX;
           y = 0.359724072312084 * safezoneH + safezoneY;
           w = 0.129848500000001 * safezoneW;
           h = 0.0434633682207421 * safezoneH;
           text = "";
           shadow = 0;
       };
       class number : Life_RscStructuredText
       {
           idc = 3921;
           x = 0.82 * safezoneW + safezoneX;
           y = 0.297488106565177 * safezoneH + safezoneY;
           w = 0.088618166666666 * safezoneW;
           h = 0.0425118934348237 * safezoneH;
           text = "";
           shadow = 0;
       };
   };
};