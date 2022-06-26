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
class Max_Points_License_Search {
   idd = 9500;
   name = "Max_Points_License_Search";
   movingenable = 0;
   enablesimulation = 1;
   onload = "";
   class controlsBackground
   {
       class fond : life_RscPicture
       {
           x = 0.254166666666667 * safezoneW + safezoneX;
           y = 0.0960914454277286 * safezoneH + safezoneY;
           w = 0.5 * safezoneW;
           h = 0.85 * safezoneH;
           idc = 9501;
           text = "";
       };
   };
   class controls
   {
       class search_bar : Life_RscEdit
       {
           idc = 9502;
           text = "";
           x = 0.355 * safezoneW + safezoneX;
           y = 0.521278269419863 * safezoneH + safezoneY;
           w = 0.3028125 * safezoneW;
           h = 0.04 * safezoneH;
       };
       class search : Life_RscButtonInvisible_Points_License
       {
           idc = -1;
           onbuttonclick = "[] call max_permisPoints_fnc_getInfoPermis;";
           x = 0.644270833333333 * safezoneW + safezoneX;
           y = 0.580278269419862 * safezoneH + safezoneY;
           w = 0.0692708333333333 * safezoneW;
           h = 0.04 * safezoneH;
       };
       class close : Life_RscButtonInvisible_Points_License
       {
           idc = -1;
           onbuttonclick = "closeDialog 0;";
           x = 0.296458333333333 * safezoneW + safezoneX;
           y = 0.580278269419862 * safezoneH + safezoneY;
           w = 0.0702083333333334 * safezoneW;
           h = 0.04 * safezoneH;
       };
   };
};