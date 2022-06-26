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
class entreprise_create {
   idd = 5430;
   name = "entreprise_create";
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
       class nameentreprisetextEDIT : Life_RscEdit
       {
           x = 0.618229166666667 * safezoneW + safezoneX;
           y = 0.279252704031465 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.124479166666666 * safezoneW;
           idc = 5433;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           text = "";
           shadow = 0;
       };
       class signatureedit : Life_RscEdit
       {
           x = 0.5625 * safezoneW + safezoneX;
           y = 0.446411012782694 * safezoneH + safezoneY;
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
           x = 0.321476333333334 * safezoneW + safezoneX;
           y = 0.38157194100295 * safezoneH + safezoneY;
           w = 0.0899819999999996 * safezoneW;
           h = 0.0294408416912491 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_createEntreprise;";
       };
       class pdgnametext : Life_RscText
       {
           idc = 5434;
           x = 0.618229166666667 * safezoneW + safezoneX;
           y = 0.298918387413963 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.124479166666666 * safezoneW;
           colortext[] = {0,0,0,1};
           text = "";
           shadow = 0;
       };
       class typeentreprise : Life_RscCombo
       {
           colortext[] = {0,0,0,1};
           colorscrollbar[] = {1,1,1,0};
           colorBackground[] = {0.4,0.4,0.4,0.6};
           colorselectbackground[] = {0.95, 0.95, 0.95, 0.5};
           x = 0.618229166666667 * safezoneW + safezoneX;
           y = 0.319766470009833 * safezoneH + safezoneY;
           w = 0.124479166666666 * safezoneW;
           h = 0.02 * safezoneH;
           idc = 5432;
           onlbselchanged = "[_this] spawn max_entreprise_fnc_lbChangedCreateMenu;";
       };
       class employesmax : Life_RscText
       {
           x = 0.65 * safezoneW + safezoneX;
           y = 0.361848574237954 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796875 * safezoneW;
           idc = 5435;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           text = "0";
           shadow = 0;
       };
       class stockcommun : Life_RscText
       {
           x = 0.65 * safezoneW + safezoneX;
           y = 0.38157194100295 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796875 * safezoneW;
           idc = 5436;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           text = "0";
           shadow = 0;
       };
       class stockprive : Life_RscText
       {
           x = 0.65 * safezoneW + safezoneX;
           y = 0.401237624385448 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796875 * safezoneW;
           idc = 5437;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           text = "0";
           shadow = 0;
       };
       class Prixcreermodif : Life_RscText
       {
           idc = 5427;
           colortext[] = {0,0,0,1};
           x = 0.65 * safezoneW + safezoneX;
           y = 0.344149459193706 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796875 * safezoneW;
           text = "";
           shadow = 0;
       };
   };
};
