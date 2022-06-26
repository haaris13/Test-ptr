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
class Max_Points_License_Remove {
   idd = 8700;
   name = "Max_Points_License_Remove";
   movingenable = 0;
   enablesimulation = 1;
   class controlsBackground
   {
       class fond : life_RscPicture
       {
           x = 0.254166666666667 * safezoneW + safezoneX;
           y = 0.0960914454277286 * safezoneH + safezoneY;
           w = 0.5 * safezoneW;
           h = 0.85 * safezoneH;
           idc = 8701;
           text = "";
       };
   };
   class controls
   {
       class Nom : Life_RscText
       {
           idc = 8702;
           text = "";
           x = 0.300104166666667 * safezoneW + safezoneX;
           y = 0.387413962635202 * safezoneH + safezoneY;
           w = 0.101458333333333 * safezoneW;
           h = 0.0284464110127827 * safezoneH;
       };
       class EtatPermis : Life_RscText
       {
           idc = 8703;
           text = "";
           x = 0.300104166666667 * safezoneW + safezoneX;
           y = 0.470993117010817 * safezoneH + safezoneY;
           w = 0.101458333333333 * safezoneW;
           h = 0.0284464110127827 * safezoneH;
       };
       class NBPoints : Life_RscText
       {
           idc = 8704;
           text = "";
           x = 0.300104166666667 * safezoneW + safezoneX;
           y = 0.551150442477876 * safezoneH + safezoneY;
           w = 0.101458333333333 * safezoneW;
           h = 0.0284464110127826 * safezoneH;
       };
       class PointRemove : Life_RscEdit
       {
           idc = 8705;
           text = "1";
           x = 0.431979166666667 * safezoneW + safezoneX;
           y = 0.444955752212389 * safezoneH + safezoneY;
           w = 0.125833333333333 * safezoneW;
           h = 0.04 * safezoneH;
       };
       class permis_type : Life_RscCombo
       {
           idc = 8706;
           onlbselchanged = "_this call max_permisPoints_fnc_removePointsLbChanged;";
           x = 0.565569233333333 * safezoneW + safezoneX;
           y = 0.444955752212389 * safezoneH + safezoneY;
           w = 0.1474516 * safezoneW;
           h = 0.04 * safezoneH;
       };
       class Raison : Life_RscEdit
       {
           idc = 8707;
           text = "";
           sizeex = 0.045;
           x = 0.431979166666667 * safezoneW + safezoneX;
           y = 0.522173058013766 * safezoneH + safezoneY;
           w = 0.282604166666667 * safezoneW;
           h = 0.182841691248771 * safezoneH;
           linespacing = 1;
           style = 0 + 16 + 0x200;
       };
       class Valider : Life_RscButtonInvisible_Points_License
       {
           idc = 8708;
           onbuttonclick = "";
           x = 0.642083333333333 * safezoneW + safezoneX;
           y = 0.716735496558505 * safezoneH + safezoneY;
           w = 0.0751041666666667 * safezoneW;
           h = 0.0354768928220256 * safezoneH;
       };
       class Close : Life_RscButtonInvisible_Points_License
       {
           idc = -1;
           onbuttonclick = "closeDialog 0;";
           x = 0.291145833333333 * safezoneW + safezoneX;
           y = 0.716735496558505 * safezoneH + safezoneY;
           w = 0.075 * safezoneW;
           h = 0.0354768928220256 * safezoneH;
       };
   };
};