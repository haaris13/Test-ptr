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
class entreprise_pdg_menu {
   idd = 5450;
   name = "entreprise_pdg_menu";
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
           x = 0.5140625 * safezoneW + safezoneX;
           y = 0.36 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.106770833333333 * safezoneW;
           text = "";
           colorshadow[] = {1,1,1,0};
       };
       class pdgnametext : Life_RscText
       {
           idc = 5457;
           colortext[] = {0,0,0,1};
           x = 0.5140625 * safezoneW + safezoneX;
           y = 0.3915 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.119270833333333 * safezoneW;
           text = "";
           colorshadow[] = {1,1,1,0};
       };
       class bankentreprise : Life_RscText
       {
           idc = 5471;
           colortext[] = {0,0,0,1};
           x = 0.485416666666667 * safezoneW + safezoneX;
           y = 0.442 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0869791666666663 * safezoneW;
           text = "";
           colorshadow[] = {1,1,1,0};
       };
       class priceManageBank : Life_RscEdit
       {
           x = 0.626041666666667 * safezoneW + safezoneX;
           y = 0.501074483775811 * safezoneH + safezoneY;
           h = 0.02 * safezoneH;
           w = 0.0600951666666667 * safezoneW;
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
           x = 0.500520833333334 * safezoneW + safezoneX;
           y = 0.550860373647984 * safezoneH + safezoneY;
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
           x = 0.611979166666666 * safezoneW + safezoneX;
           y = 0.597436332350049 * safezoneH + safezoneY;
           w = 0.0989583333333336 * safezoneW;
           h = 0.100695427728614 * safezoneH;
           idc = 5453;
           sizeex = 0.035;
           colortext[] = {0,0,0,1};
           colorselect[] = {0,0,0,1};
           colorselect2[] = {0,0,0,1};
       };
       class addemploye : Life_RscButtonInvisible_Company
       {
           idc = 5456;
           x = 0.626884 * safezoneW + safezoneX;
           y = 0.550860373647984 * safezoneH + safezoneY;
           w = 0.0600951666666667 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_sendInvitePlayerEntreprise;";
       };
       class objetslist : Life_RscListBox
       {
           x = 0.397656249999999 * safezoneW + safezoneX;
           y = 0.623985004916421 * safezoneH + safezoneY;
           w = 0.120052083333334 * safezoneW;
           h = 0.0721801868239919 * safezoneH;
           idc = 5459;
           sizeex = 0.035;
           colortext[] = {0,0,0,1};
           colorselect[] = {0,0,0,1};
           colorselect2[] = {0,0,0,1};
       };
       class putmoney : Life_RscButtonInvisible_Company
       {
           idc = 5469;
           x = 0.625122166666667 * safezoneW + safezoneX;
           y = 0.445427728613569 * safezoneH + safezoneY;
           w = 0.0600951666666667 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_putMoneyToEntACC;";
       };
       class takemoney : Life_RscButtonInvisible_Company
       {
           idc = 5470;
           x = 0.625643 * safezoneW + safezoneX;
           y = 0.473180924287119 * safezoneH + safezoneY;
           w = 0.0600951666666667 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_takeMoneyFromEntACC;";
       };
       class removeemploye : Life_RscButtonInvisible_Company
       {
           idc = 5461;
           x = 0.536458333333333 * safezoneW + safezoneX;
           y = 0.623985004916421 * safezoneH + safezoneY;
           w = 0.0713541666666667 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_entrepriseKick;";
       };
       class promoteemploye : Life_RscButtonInvisible_Company
       {
           idc = 5474;
           x = 0.536458333333333 * safezoneW + safezoneX;
           y = 0.645617256637168 * safezoneH + safezoneY;
           w = 0.0713541666666667 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_entrepriseSetAssociates;";
       };
       class demoteemploye : Life_RscButtonInvisible_Company
       {
           idc = 5475;
           x = 0.536458333333333 * safezoneW + safezoneX;
           y = 0.668854473942969 * safezoneH + safezoneY;
           w = 0.0713541666666667 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_entrepriseRemoveAssociates;";
       };
       class removeitem : Life_RscButtonInvisible_Company
       {
           idc = 5468;
           x = 0.321614583333334 * safezoneW + safezoneX;
           y = 0.623985004916421 * safezoneH + safezoneY;
           w = 0.0598958333333333 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_removeAllowedItem;";
       };
       class addobject : Life_RscButtonInvisible_Company
       {
           idc = 5462;
           x = 0.321614583333334 * safezoneW + safezoneX;
           y = 0.677082350049164 * safezoneH + safezoneY;
           w = 0.0598958333333333 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_addAllowedItem;";
       };
       class buy100stockage : Life_RscButtonInvisible_Company
       {
           idc = 5466;
           x = 0.321614583333334 * safezoneW + safezoneX;
           y = 0.477114060963618 * safezoneH + safezoneY;
           w = 0.09609375 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[1] spawn max_entreprise_fnc_stockageBuy;";
       };
       class buy1000stockage : Life_RscButtonInvisible_Company
       {
           idc = 5467;
           x = 0.321614583333334 * safezoneW + safezoneX;
           y = 0.503041052114061 * safezoneH + safezoneY;
           w = 0.09609375 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[2] spawn max_entreprise_fnc_stockageBuy;";
       };
       class Historique : Life_RscButtonInvisible_Company
       {
           idc = 5476;
           x = 0.6253215 * safezoneW + safezoneX;
           y = 0.396263520157326 * safezoneH + safezoneY;
           w = 0.0600951666666667 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_historicMenu;";
       };
       class buyPositionORaddObject : Life_RscButtonInvisible_Company
       {
           idc = 5473;
           x = 0.321614583333334 * safezoneW + safezoneX;
           y = 0.527623156342183 * safezoneH + safezoneY;
           w = 0.0955729166666667 * safezoneW;
           h = 0.02 * safezoneH;
       };
       class disbandEntreprise : Life_RscButtonInvisible_Company
       {
           idc = 5465;
           x = 0.321614583333334 * safezoneW + safezoneX;
           y = 0.550860373647984 * safezoneH + safezoneY;
           w = 0.0966145833333333 * safezoneW;
           h = 0.02 * safezoneH;
           onbuttonclick = "[] spawn max_entreprise_fnc_entrepriseDisband;";
       };
       class allItemsList : Life_RscCombo
       {
           idc = 5463;
           x = 0.44 * safezoneW + safezoneX;
           y = 0.597436332350049 * safezoneH + safezoneY;
           w = 0.077864583333333 * safezoneW;
           h = 0.0220326941986234 * safezoneH;
           colorpicture[] = {1,1,1,1};
           colorpictureselected[] = {1,1,1,1};
           colorpicturedisabled[] = {1,1,1,1};
           colortext[] = {0,0,0,1};
           colorselectbackground[] = {0.95, 0.95, 0.95, 0.5};
           colorBackground[] = {0.4,0.4,0.4,0.6};
       };
       class priceItemAdd : Life_RscEdit
       {
           idc = 5464;
           x = 0.321614583333334 * safezoneW + safezoneX;
           y = 0.648567109144543 * safezoneH + safezoneY;
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