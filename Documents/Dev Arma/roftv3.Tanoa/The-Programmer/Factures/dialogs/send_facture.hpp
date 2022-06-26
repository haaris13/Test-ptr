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
class maxence_create_bill {
   idd = 5540;
   name = "maxence_create_bill";
   movingenable = false;
   enablesimulation = true;
   onload = "[] spawn max_facture_fnc_factureMenu;";
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           idc = 5541;
           text = "";
           x = 0.286979166666667 * safezoneW + safezoneX;
           y = 0.110127826941986 * safezoneH + safezoneY;
           w = 0.4296875 * safezoneW;
           h = 0.779744346116028 * safezoneH;
       };
   };
   class controls
   {
       class text : Life_RscEditBill
       {
           idc = 5542;
           text = "";
           x = 0.498958333333333 * safezoneW + safezoneX;
           y = 0.40707958175076 * safezoneH + safezoneY;
           w = 0.161979166666667 * safezoneW;
           h = 0.175024646371167 * safezoneH;
           linespacing = 1;
           style = 0 + 16 + 0x200;
       };
       class players : Life_RscCombo
       {
           idc = 5543;
           x = 0.334895833333333 * safezoneW + safezoneX;
           y = 0.482888770586307 * safezoneH + safezoneY;
           w = 0.114583333333333 * safezoneW;
           h = 0.0225192923438802 * safezoneH;
       };
       class value : Life_RscEditBill
       {
           idc = 5544;
           text = "";
           x = 0.334895833333333 * safezoneW + safezoneX;
           y = 0.555992506474894 * safezoneH + safezoneY;
           w = 0.104166666666667 * safezoneW;
           h = 0.0251284374779083 * safezoneH;
       };
       class currency : Life_RscTextBill
       {
           idc = 5545;
           text = "";
           x = 0.439244791666667 * safezoneW + safezoneX;
           y = 0.555992506474894 * safezoneH + safezoneY;
           h = 0.0251284374779083 * safezoneH;
           w = 0.0112760416666667 * safezoneW;
       };
       class company : Life_RscEditBill
       {
           idc = 5546;
           text = "";
           x = 0.334895833333333 * safezoneW + safezoneX;
           y = 0.40707958175076 * safezoneH + safezoneY;
           w = 0.115625 * safezoneW;
           h = 0.0255654526641857 * safezoneH;
       };
       class send : Life_RscButtonInvisibleBill
       {
           idc = -1;
           x = 0.577604166666666 * safezoneW + safezoneX;
           y = 0.597887413962635 * safezoneH + safezoneY;
           w = 0.0833333333333337 * safezoneW;
           h = 0.0402640117994101 * safezoneH;
           text = "";
           onbuttonclick = "[] spawn max_facture_fnc_sendFacture;";
       };
   };
};