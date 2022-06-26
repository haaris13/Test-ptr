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
class boutique_orange {
   idd = 1420;
   name = "boutique_orange";
   movingenable = false;
   enablesimulation = true;
   onload = "[0] spawn max_phone_fnc_boutique_orange";
   class controlsBackground
   {
       class life_RscPicture : life_RscPicture
       {
           text = "";
           x = 0.20859375 * safezoneW + safezoneX;
           y = 0.0353848946986201 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 0.99 * safezoneH;
           idc = 1428;
       };
   };
   class controls
   {
       class forfait1 : Life_RscButtonMenu
       {
           idc = -1;
           x = 0.340226333333333 * safezoneW + safezoneX;
           y = 0.350974670154155 * safezoneH + safezoneY;
           w = 0.1102945 * safezoneW;
           h = 0.219507827480661 * safezoneH;
           animtexturenormal = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedisabled = "#(argb,8,8,3)color(1,1,1,0)";
           animtextureover = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturefocused = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturepressed = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedefault = "#(argb,8,8,3)color(1,1,1,0)";
           colorbackground[] = {0, 0, 0, 0};
           colorbackground2[] = {1, 1, 1, 0};
           color[] = {0, 0, 0, 1};
           color2[] = {0, 0, 0, 1};
           colortext[] = {0.941176,0.972549,1,1};
           onbuttonclick = "[1] spawn max_phone_fnc_boutique_orange;";
       };
       class forfait2 : Life_RscButtonMenu
       {
           idc = -1;
           x = 0.454036458333333 * safezoneW + safezoneX;
           y = 0.350974670154155 * safezoneH + safezoneY;
           w = 0.110546875 * safezoneW;
           h = 0.219507827480661 * safezoneH;
           animtexturenormal = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedisabled = "#(argb,8,8,3)color(1,1,1,0)";
           animtextureover = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturefocused = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturepressed = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedefault = "#(argb,8,8,3)color(1,1,1,0)";
           colorbackground[] = {0, 0, 0, 0};
           colorbackground2[] = {1, 1, 1, 0};
           color[] = {0, 0, 0, 1};
           color2[] = {0, 0, 0, 1};
           colortext[] = {0.941176,0.972549,1,1};
           onbuttonclick = "[2] spawn max_phone_fnc_boutique_orange;";
       };
       class forfait3 : Life_RscButtonMenu
       {
           idc = -1;
           x = 0.5671875 * safezoneW + safezoneX;
           y = 0.350974670154155 * safezoneH + safezoneY;
           w = 0.111458333333333 * safezoneW;
           h = 0.219507827480661 * safezoneH;
           animtexturenormal = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedisabled = "#(argb,8,8,3)color(1,1,1,0)";
           animtextureover = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturefocused = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturepressed = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedefault = "#(argb,8,8,3)color(1,1,1,0)";
           colorbackground[] = {0, 0, 0, 0};
           colorbackground2[] = {1, 1, 1, 0};
           color[] = {0, 0, 0, 1};
           color2[] = {0, 0, 0, 1};
           colortext[] = {0.941176,0.972549,1,1};
           onbuttonclick = "[3] spawn max_phone_fnc_boutique_orange;";
       };
       class cartesim : Life_RscButtonMenu
       {
           idc = -1;
           x = 0.520833333333333 * safezoneW + safezoneX;
           y = 0.306518555512271 * safezoneH + safezoneY;
           w = 0.157291666666667 * safezoneW;
           h = 0.0387983792086368 * safezoneH;
           animtexturenormal = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedisabled = "#(argb,8,8,3)color(1,1,1,0)";
           animtextureover = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturefocused = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturepressed = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedefault = "#(argb,8,8,3)color(1,1,1,0)";
           colorbackground[] = {0, 0, 0, 0};
           colorbackground2[] = {1, 1, 1, 0};
           color[] = {0, 0, 0, 1};
           color2[] = {0, 0, 0, 1};
           colortext[] = {0.941176,0.972549,1,1};
           onbuttonclick = "[4] spawn max_phone_fnc_boutique_orange;";
       };
       class smsActuel : Life_RscStructuredText
       {
           idc = 1421;
           text = "";
           x = 0.329288833333333 * safezoneW + safezoneX;
           y = 0.647064558140747 * safezoneH + safezoneY;
           w = 0.136857 * safezoneW;
           h = 0.022 * safezoneH;
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
       };
       class appelActuel : Life_RscStructuredText
       {
           idc = 1422;
           text = "";
           x = 0.553645833333333 * safezoneW + safezoneX;
           y = 0.647064558140747 * safezoneH + safezoneY;
           w = 0.136857 * safezoneW;
           h = 0.022 * safezoneH;
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
       };
       class numActuel : Life_RscStructuredText
       {
           idc = 1423;
           text = "";
           x = 0.439453125 * safezoneW + safezoneX;
           y = 0.622361100832621 * safezoneH + safezoneY;
           w = 0.136857 * safezoneW;
           h = 0.022 * safezoneH;
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
       };
       class price_sim : Life_RscStructuredText
       {
           idc = 1424;
           x = 0.652604166666667 * safezoneW + safezoneX;
           y = 0.315634218289086 * safezoneH + safezoneY;
           h = 0.0296827164318222 * safezoneH;
           w = 0.0260416666666667 * safezoneW;
           text = "";
       };
       class price_offer1 : Life_RscStructuredText
       {
           idc = 1425;
           x = 0.340226333333333 * safezoneW + safezoneX;
           y = 0.533865525611382 * safezoneH + safezoneY;
           h = 0.0361991150442479 * safezoneH;
           w = 0.1102945 * safezoneW;
           text = "";
       };
       class price_offer2 : Life_RscStructuredText
       {
           idc = 1426;
           x = 0.454036458333333 * safezoneW + safezoneX;
           y = 0.533865525611382 * safezoneH + safezoneY;
           h = 0.0361991150442479 * safezoneH;
           w = 0.110546875 * safezoneW;
           text = "";
       };
       class price_offer3 : Life_RscStructuredText
       {
           idc = 1427;
           x = 0.5671875 * safezoneW + safezoneX;
           y = 0.533865525611382 * safezoneH + safezoneY;
           h = 0.0361991150442479 * safezoneH;
           w = 0.1102945 * safezoneW;
           text = "";
       };
   };
};
