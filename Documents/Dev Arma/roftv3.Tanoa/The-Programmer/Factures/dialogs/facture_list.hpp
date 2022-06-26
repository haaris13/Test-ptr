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
class facture_list {
   idd = 4510;
   name = "facture_list";
   movingenable = 0;
   enablesimulation = 1;
   onload = "[] spawn max_facture_fnc_factureListMenu;";
   class controlsBackground
   {
       class Fond : Life_RscPicture
       {
           idc = 4511;
           text = "";
           x = 0.286979166666667 * safezoneW + safezoneX;
           y = 0.110127826941986 * safezoneH + safezoneY;
           w = 0.4296875 * safezoneW;
           h = 0.779744346116028 * safezoneH;
       };
   };
   class controls
   {
       class create_facture : Life_RscButtonInvisibleBill
       {
           idc = 4512;
           text = "";
           onbuttonclick = "";
           x = 0.287187 * safezoneW + safezoneX;
           y = 0.308251720747296 * safezoneH + safezoneY;
           w = 0.138333833333333 * safezoneW;
           h = 0.0290147492625369 * safezoneH;
       };
       class received_factures : Life_RscButtonInvisibleBill
       {
           idc = 4513;
           text = "";
           onbuttonclick = "[(getPlayerUID player)] remoteExec [""max_facture_fnc_getFacturesReceived"",2];";
           x = 0.287187 * safezoneW + safezoneX;
           y = 0.699598820058997 * safezoneH + safezoneY;
           w = 0.069063 * safezoneW;
           h = 0.0417974434611603 * safezoneH;
       };
       class sended_factures : Life_RscButtonInvisibleBill
       {
           idc = 4514;
           text = "";
           onbuttonclick = "[(getPlayerUID player)] remoteExec [""max_facture_fnc_getFacturesSended"",2];";
           x = 0.355729166666667 * safezoneW + safezoneX;
           y = 0.699598820058997 * safezoneH + safezoneY;
           w = 0.069063 * safezoneW;
           h = 0.0417974434611603 * safezoneH;
       };
       class facture_list : Life_RscListBoxBill
       {
           idc = 4515;
           text = "";
           sizeex = 0.035;
           onlbselchanged = "_this spawn max_facture_fnc_lbChangedFacture;";
           x = 0.296562 * safezoneW + safezoneX;
           y = 0.351715830875123 * safezoneH + safezoneY;
           w = 0.119063 * safezoneW;
           h = 0.332649950835792 * safezoneH;
       };
       class pay_facture : Life_RscButtonInvisibleBill
       {
           idc = 4516;
           text = "";
           onbuttonclick = "";
           x = 0.4609375 * safezoneW + safezoneX;
           y = 0.671399213372665 * safezoneH + safezoneY;
           w = 0.061666666666667 * safezoneW;
           h = 0.0375486725663714 * safezoneH;
       };
       class refuse_facture : Life_RscButtonInvisibleBill
       {
           idc = 4517;
           text = "";
           onbuttonclick = "";
           x = 0.521770333333333 * safezoneW + safezoneX;
           y = 0.671399213372665 * safezoneH + safezoneY;
           w = 0.061042166666667 * safezoneW;
           h = 0.0375486725663714 * safezoneH;
       };
       class from : Life_RscTextBill
       {
           idc = 4518;
           text = "";
           x = 0.46 * safezoneW + safezoneX;
           y = 0.382497541789577 * safezoneH + safezoneY;
           h = 0.0275319567354966 * safezoneH;
           w = 0.188541666666667 * safezoneW;
       };
       class to : Life_RscTextBill
       {
           idc = 4519;
           text = "";
           x = 0.46 * safezoneW + safezoneX;
           y = 0.431115416996035 * safezoneH + safezoneY;
           h = 0.0275319567354966 * safezoneH;
           w = 0.188541666666667 * safezoneW;
       };
       class information : Life_RscStructuredText
       {
           idc = 4520;
           text = "";
           x = 0.46 * safezoneW + safezoneX;
           y = 0.487162614636153 * safezoneH + safezoneY;
           h = 0.125423422728646 * safezoneH;
           w = 0.190625 * safezoneW;
       };
       class status : Life_RscStructuredText
       {
           idc = 4521;
           text = "";
           x = 0.455 * safezoneW + safezoneX;
           y = 0.272 * safezoneH + safezoneY;
           h = 0.0251284374779083 * safezoneH;
           w = 0.153125 * safezoneW;
       };
       class id : Life_RscTextBill
       {
           idc = 4522;
           text = "";
           x = 0.465 * safezoneW + safezoneX;
           y = 0.294438917487677 * safezoneH + safezoneY;
           h = 0.0251284374779083 * safezoneH;
           w = 0.145130208333333 * safezoneW;
       };
       class value : Life_RscStructuredText
       {
           idc = 4523;
           text = "";
           x = 0.46 * safezoneW + safezoneX;
           y = 0.6 * safezoneH + safezoneY;
           h = 0.055 * safezoneH;
           w = 0.2 * safezoneW;
           shadow = 0;
       };
   };
};