/*
    Author: Yuri Zoko
    Web site: www.the-programmer.com
    Discord: discord.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.
*/

class The_Programmer_AdvancedInsurance_VehicleResell {
   idd = 3905;
   name = "The_Programmer_AdvancedInsurance_VehicleResell";
   movingenable = 0;
   enablesimulation = 1;
   class controlsBackground
   {
       class fond : Life_RscPicture
       {
           idc = 3907;
           text = "";
           x = 0.247916666666666 * safezoneW + safezoneX;
           y = 0.094124877089479 * safezoneH + safezoneY;
           w = 0.5 * safezoneW;
           h = 0.85 * safezoneH;
       };
   };
   class controls
   {
       class resell : Life_RscButtonMenuInvisible2Insure
       {
           idc = 3908;
           text = "";
           onbuttonclick = "[] spawn advanced_insurance_fnc_vehicleResell;";
           x = 0.431708333333333 * safezoneW + safezoneX;
           y = 0.631409046214356 * safezoneH + safezoneY;
           w = 0.13 * safezoneW;
           h = 0.035 * safezoneH;
       };
       class list : Life_RscCombo
       {
           x = 0.415104166666667 * safezoneW + safezoneX;
           y = 0.459376106194691 * safezoneH + safezoneY;
           w = 0.164583333333333 * safezoneW;
           h = 0.03 * safezoneH;
           idc = 3906;
       };
   };
};