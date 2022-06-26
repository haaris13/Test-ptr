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
class employes_menu_entreprise {
   idd = 5440;
   name = "employes_menu_entreprise";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           text = "";
           x = 0.20859375 * safezoneW + safezoneX;
           y = 0.0353848946986201 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 0.96 * safezoneH;
           idc = 5445;
       };
   };
   class controls
   {
       class employeslist : Life_RscListBox
       {
           x = 0.439583333333334 * safezoneW + safezoneX;
           y = 0.404572271386431 * safezoneH + safezoneY;
           w = 0.244270833333333 * safezoneW;
           h = 0.0978859390363816 * safezoneH;
           idc = 5448;
           sizeex = 0.035;
           colorText[] = {0,0,0,1};
           colorselect[] = {0,0,0,1};
           colorselect2[] = {0,0,0,1};
       };
       class objetslist : Life_RscListBox
       {
           x = 0.439583333333334 * safezoneW + safezoneX;
           y = 0.540265486725664 * safezoneH + safezoneY;
           w = 0.244270833333333 * safezoneW;
           h = 0.1 * safezoneH;
           idc = 5446;
           sizeex = 0.035;
           colorText[] = {0,0,0,1};
           colorselect[] = {0,0,0,1};
           colorselect2[] = {0,0,0,1};
       };
       class leave : Life_RscButtonInvisible_Company
       {
           idc = -1;
           x = 0.309497166666666 * safezoneW + safezoneX;
           y = 0.540265486725664 * safezoneH + safezoneY;
           w = 0.0389403333333337 * safezoneW;
           h = 0.0211897738446408 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_entrepriseLeave;";
       };
       class pdgnametext : Life_RscText
       {
           idc = 5444;
           x = 0.539583333333333 * safezoneW + safezoneX;
           y = 0.344240658800393 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.147395833333333 * safezoneW;
           text = "";
           colorshadow[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
       };
       class nameentreprisetext : Life_RscText
       {
           idc = 5443;
           colortext[] = {0,0,0,1};
           x = 0.539583333333333 * safezoneW + safezoneX;
           y = 0.328599311701081 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.147395833333333 * safezoneW;
           text = "";
           colorshadow[] = {1,1,1,0};
       };
   };
};