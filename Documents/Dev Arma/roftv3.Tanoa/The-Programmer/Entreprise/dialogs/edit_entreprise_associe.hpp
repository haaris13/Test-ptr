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
class entreprise_associe_menu {
   idd = 5450;
   name = "entreprise_associe_menu";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class RscPicture : Life_RscPicture
       {
           text = "";
           x = 0.20859375 * safezoneW + safezoneX;
           y = 0.0353848946986201 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 0.96 * safezoneH;
           idc = 5451;
       };
   };
   class controls
   {
       class nameentreprisetext : Life_RscText
       {
           idc = 5455;
           colortext[] = {0,0,0,1};
           x = 0.503125 * safezoneW + safezoneX;
           y = 0.36 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.1171875 * safezoneW;
           text = "";
           colorshadow[] = {1,1,1,0};
       };
       class pdgnametext : Life_RscText
       {
           idc = 5457;
           colortext[] = {0,0,0,1};
           x = 0.503125 * safezoneW + safezoneX;
           y = 0.4 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.1171875 * safezoneW;
           text = "";
           colorshadow[] = {1,1,1,0};
       };
       class bankentreprise : Life_RscText
       {
           idc = 5471;
           colortext[] = {0,0,0,1};
           x = 0.48125 * safezoneW + safezoneX;
           y = 0.455 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0796874999999996 * safezoneW;
           text = "";
           colorshadow[] = {1,1,1,0};
       };
       class priceManageBank : Life_RscEdit
       {
           x = 0.5640625 * safezoneW + safezoneX;
           y = 0.451327433628319 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0588541666666667 * safezoneW;
           text = "";
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           idc = 5472;
           style = 528;
           colorshadow[] = {1,1,1,0};
           shadow = 0;
       };
       class allPlayersList : Life_RscCombo
       {
           x = 0.503125 * safezoneW + safezoneX;
           y = 0.529205998033431 * safezoneH + safezoneY;
           w = 0.109895833333333 * safezoneW;
           h = 0.02 * safezoneH;
           idc = 5454;
           sizeex = 0.035;
           colortext[] = {0,0,0,1};
           colorselectbackground[] = {0.95, 0.95, 0.95, 0.5};
           colorBackground[] = {0.4,0.4,0.4,0.6};
       };
       class employeslist : Life_RscListBox
       {
           x = 0.632291666666667 * safezoneW + safezoneX;
           y = 0.596453048180924 * safezoneH + safezoneY;
           w = 0.0796875 * safezoneW;
           h = 0.113077679449361 * safezoneH;
           idc = 5453;
           sizeex = 0.035;
           colortext[] = {0,0,0,1};
           colorselect[] = {0,0,0,1};
           colorselect2[] = {0,0,0,1};
       };
       class addemploye : Life_RscButtonInvisible_Company
       {
           idc = 5456;
           x = 0.6253215 * safezoneW + safezoneX;
           y = 0.529205998033431 * safezoneH + safezoneY;
           w = 0.0600951666666667 * safezoneW;
           h = 0.0273328416912491 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_sendInvitePlayerEntreprise;";
       };
       class objetslist : Life_RscListBox
       {
           x = 0.399218749999999 * safezoneW + safezoneX;
           y = 0.628318584070796 * safezoneH + safezoneY;
           w = 0.150260416666667 * safezoneW;
           h = 0.0688298918387414 * safezoneH;
           idc = 5459;
           sizeex = 0.035;
           colortext[] = {0,0,0,1};
           colorselect[] = {0,0,0,1};
           colorselect2[] = {0,0,0,1};
       };
       class putmoney : Life_RscButtonInvisible_Company
       {
           idc = 5469;
           x = 0.6253215 * safezoneW + safezoneX;
           y = 0.451327433628319 * safezoneH + safezoneY;
           w = 0.0600951666666667 * safezoneW;
           h = 0.0255653883972466 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_putMoneyToEntACC;";
       };
       class removeemploye : Life_RscButtonInvisible_Company
       {
           idc = 5461;
           x = 0.5640625 * safezoneW + safezoneX;
           y = 0.622418879056047 * safezoneH + safezoneY;
           w = 0.0682291666666663 * safezoneW;
           h = 0.0258997050147493 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_entrepriseKick;";
       };
       class removeitem : Life_RscButtonInvisible_Company
       {
           idc = 5468;
           x = 0.322135416666667 * safezoneW + safezoneX;
           y = 0.620051868239922 * safezoneH + safezoneY;
           w = 0.0598958333333333 * safezoneW;
           h = 0.0259658308751227 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_removeAllowedItem;";
       };
       class addobject : Life_RscButtonInvisible_Company
       {
           idc = 5462;
           x = 0.322135416666667 * safezoneW + safezoneX;
           y = 0.673149213372665 * safezoneH + safezoneY;
           w = 0.0598958333333333 * safezoneW;
           h = 0.0230159783677484 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_addAllowedItem;";
       };
       class buy100stockage : Life_RscButtonInvisible_Company
       {
           idc = 5466;
           x = 0.322135416666667 * safezoneW + safezoneX;
           y = 0.484759095378564 * safezoneH + safezoneY;
           w = 0.09609375 * safezoneW;
           h = 0.0254992625368735 * safezoneH;
           onbuttonclick = "[1] spawn max_entreprise_fnc_stockageBuy;";
       };
       class buy1000stockage : Life_RscButtonInvisible_Company
       {
           idc = 5467;
           x = 0.322135416666667 * safezoneW + safezoneX;
           y = 0.517207472959685 * safezoneH + safezoneY;
           w = 0.09609375 * safezoneW;
           h = 0.0215661258603743 * safezoneH;
           onbuttonclick = "[2] spawn max_entreprise_fnc_stockageBuy;";
       };
       class Historique : Life_RscButtonInvisible_Company
       {
           idc = 5476;
           x = 0.6253215 * safezoneW + safezoneX;
           y = 0.395280235988201 * safezoneH + safezoneY;
           w = 0.0600951666666667 * safezoneW;
           h = 0.0255653883972466 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_historicMenu;";
       };
       class leaveEntreprise : Life_RscButtonInvisible_Company
       {
           idc = 5465;
           x = 0.322135416666667 * safezoneW + safezoneX;
           y = 0.544960668633234 * safezoneH + safezoneY;
           w = 0.0966145833333333 * safezoneW;
           h = 0.0263274336283191 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_entrepriseLeave;";
       };
       class allItemsList : Life_RscCombo
       {
           idc = 5463;
           x = 0.425260416666667 * safezoneW + safezoneX;
           y = 0.597436332350049 * safezoneH + safezoneY;
           w = 0.102864583333333 * safezoneW;
           h = 0.0220326941986234 * safezoneH;
           colorpicture[] = {1,1,1,1};
           colorpictureselected[] = {1,1,1,1};
           colorpicturedisabled[] = {1,1,1,1};
           colortext[] = {0,0,0,1};
           colorselectbackground[] = {0.95, 0.95, 0.95, 0.5};
           sizeex = 0.035;
           colorBackground[] = {0.4,0.4,0.4,0.6};
       };
       class priceItemAdd : Life_RscEdit
       {
           idc = 5464;
           x = 0.321614583333334 * safezoneW + safezoneX;
           y = 0.646 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0598958333333333 * safezoneW;
           text = "";
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,1};
           style = 528;
           colorshadow[] = {1,1,1,0};
           shadow = 0;
       };
       class closeButton : Life_RscButtonInvisible_Company
       {
           idc = -1;
           x = 0.257413833333333 * safezoneW + safezoneX;
           y = 0.490258357915438 * safezoneH + safezoneY;
           w = 0.0259194999999999 * safezoneW;
           h = 0.0466147984267448 * safezoneH;
           onbuttonclick = "closeDialog 0;";
       };
   };
};