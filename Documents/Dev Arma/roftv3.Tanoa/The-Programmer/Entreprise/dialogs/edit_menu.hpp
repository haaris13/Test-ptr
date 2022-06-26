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
class entreprise_edit {
   idd = 5430;
   name = "entreprise_edit";
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
           idc = 5431;
       };
   };
   class controls
   {
       class nameentreprisetextTEXT : Life_RscText
       {
           x = 0.4328125 * safezoneW + safezoneX;
           y = 0.261553588987217 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.124479166666666 * safezoneW;
           idc = 5438;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
           text = "";
           shadow = 0;
       };
       class signatureedit : Life_RscEdit
       {
           x = 0.363020833333333 * safezoneW + safezoneX;
           y = 0.446411012782695 * safezoneH + safezoneY;
           h = 0.0367158308751229 * safezoneH;
           w = 0.174479166666667 * safezoneW;
           idc = 5439;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           text = "";
           shadow = 0;
           sizeEx = 0.05;
       };
       class valider : Life_RscButtonInvisible_Company
       {
           idc = 5429;
           x = 0.584375 * safezoneW + safezoneX;
           y = 0.36708947885939 * safezoneH + safezoneY;
           w = 0.113020833333334 * safezoneW;
           h = 0.0294408416912491 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_changeTypeEntreprise;";
       };
       class pdgnametext : Life_RscText
       {
           idc = 5434;
           x = 0.4328125 * safezoneW + safezoneX;
           y = 0.28023598820059 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.124479166666666 * safezoneW;
           colortext[] = {0,0,0,1};
           text = "";
           colorshadow[] = {1,1,1,0};
       };
       class typeentreprise : Life_RscCombo
       {
           x = 0.4328125 * safezoneW + safezoneX;
           y = 0.323699606686333 * safezoneH + safezoneY;
           w = 0.124479166666666 * safezoneW;
           h = 0.02 * safezoneH;
           colortext[] = {0,0,0,1};
           colorscrollbar[] = {1,1,1,0};
           colorBackground[] = {0.4,0.4,0.4,0.6};
           colorselectbackground[] = {0.95, 0.95, 0.95, 0.5};
           idc = 5432;
           onlbselchanged = "[_this] spawn max_entreprise_fnc_lbChangedCreateMenu;";
       };
       class employesmax : Life_RscText
       {
           x = 0.458854166666667 * safezoneW + safezoneX;
           y = 0.36708947885939 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796875 * safezoneW;
           idc = 5435;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           text = "0";
           colorshadow[] = {1,1,1,0};
       };
       class stockcommun : Life_RscText
       {
           x = 0.458854166666667 * safezoneW + safezoneX;
           y = 0.388721730580137 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796875 * safezoneW;
           idc = 5436;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           text = "0";
           colorshadow[] = {1,1,1,0};
       };
       class stockprive : Life_RscText
       {
           x = 0.458854166666667 * safezoneW + safezoneX;
           y = 0.410087181907571 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796875 * safezoneW;
           idc = 5437;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           text = "0";
           colorshadow[] = {1,1,1,0};
       };
       class EtatActuel : Life_RscText
       {
           idc = 5428;
           colortext[] = {0,0,0,1};
           x = 0.4328125 * safezoneW + safezoneX;
           y = 0.303033923303836 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.124479166666666 * safezoneW;
           colorshadow[] = {1,1,1,0};
           text = "";
       };
       class Prixcreermodif : Life_RscText
       {
           idc = 5427;
           colortext[] = {0,0,0,1};
           x = 0.458854166666667 * safezoneW + safezoneX;
           y = 0.347099311701081 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796875 * safezoneW;
           colorshadow[] = {1,1,1,0};
           text = "";
       };
   };
};