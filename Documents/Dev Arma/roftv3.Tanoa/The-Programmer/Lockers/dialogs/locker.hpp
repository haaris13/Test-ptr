/*
    Author: Maxence
    Web site: www.the-programmer.com
    Discord: https://discord.the-programmer.com

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.
*/
class Life_RscButtonInvisibleLockers : Life_RscButtonMenu {
    animTextureNormal = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureDisabled = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureOver = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureFocused = "#(argb,8,8,3)color(1,1,1,0)";
    animTexturePressed = "#(argb,8,8,3)color(1,1,1,0)";
    animTextureDefault = "#(argb,8,8,3)color(1,1,1,0)";
    colorBackground[] = {0, 0, 0, 0};
    colorBackground2[] = {1, 1, 1, 0};
    color[] = {1, 1, 1, 0};
    color2[] = {1, 1, 1, 0};
    colorText[] = {1, 1, 1, 0};
    colorDisabled[] = {1, 1, 1, 0};
};

class Max_Locker_Menu {
   idd = 5000;
   name = "Max_Locker_Menu";
   movingenable = 0;
   enablesimulation = 1;
   class controlsBackground
   {
       class RscPicture : Life_RscPicture
       {
           text = "";
           x = 0.20859375 * safezoneW + safezoneX;
           y = 0.0353848946986201 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 0.96 * safezoneH;
           idc = 5001;
       };
   };
   class controls
   {
       class LockerGear : Life_RscListBox
       {
           idc = 5002;
           x = 0.511354166666667 * safezoneW + safezoneX;
           y = 0.388397246804326 * safezoneH + safezoneY;
           w = 0.206354166666666 * safezoneW;
           h = 0.181907571288102 * safezoneH;
           sizeex = 0.04;
           colortext[] = {0,0,0,1};
           colorSelect[] = {0,0,0,1};
           colorSelect2[] = {0,0,0,1};
       };
       class PlayerGear : Life_RscListBox
       {
           idc = 5003;
           x = 0.299583333333333 * safezoneW + safezoneX;
           y = 0.388397246804326 * safezoneH + safezoneY;
           w = 0.206145833333334 * safezoneW;
           h = 0.181907571288102 * safezoneH;
           sizeex = 0.04;
           colortext[] = {0,0,0,1};
           colorSelect[] = {0,0,0,1};
           colorSelect2[] = {0,0,0,1};
       };
       class LockerWeight : Life_RscStructuredText
       {
           idc = 5004;
           text = "";
           x = 0.613541666666666 * safezoneW + safezoneX;
           y = 0.266470009832841 * safezoneH + safezoneY;
           w = 0.106770833333333 * safezoneW;
           h = 0.0403146509341204 * safezoneH;
       };
       class LockerEdit : Life_RscEdit
       {
           idc = 5005;
           text = "1";
           sizeex = 0.04;
           x = 0.511354166666667 * safezoneW + safezoneX;
           y = 0.633470993117011 * safezoneH + safezoneY;
           w = 0.12 * safezoneW;
           h = 0.03 * safezoneH;
       };
       class PlayerEdit : Life_RscEdit
       {
           idc = 5006;
           text = "1";
           sizeex = 0.04;
           x = 0.3875 * safezoneW + safezoneX;
           y = 0.633470993117011 * safezoneH + safezoneY;
           w = 0.12 * safezoneW;
           h = 0.03 * safezoneH;
       };
       class TakeItem : Life_RscButtonInvisibleLockers
       {
           idc = -1;
           onbuttonclick = "[] call max_lockers_fnc_lockerTakeItem;";
           x = 0.50875 * safezoneW + safezoneX;
           y = 0.667905604719764 * safezoneH + safezoneY;
           w = 0.2146875 * safezoneW;
           h = 0.036125860373648 * safezoneH;
       };
       class StoreItem : Life_RscButtonInvisibleLockers
       {
           idc = -1;
           onbuttonclick = "[] call max_lockers_fnc_lockerStoreItem;";
           x = 0.294270833333333 * safezoneW + safezoneX;
           y = 0.668888888888889 * safezoneH + safezoneY;
           w = 0.213541666666667 * safezoneW;
           h = 0.036125860373648 * safezoneH;
       };
       class ButtonUpgrade : Life_RscButtonInvisibleLockers
       {
           idc = -1;
           text = "";
           onbuttonclick = "[] spawn max_lockers_fnc_upgradeLocker;";
           x = 0.294375 * safezoneW + safezoneX;
           y = 0.705624385447395 * safezoneH + safezoneY;
           w = 0.213541666666667 * safezoneW;
           h = 0.0210226155358895 * safezoneH;
       };
       class ButtonSell : Life_RscButtonInvisibleLockers
       {
           idc = -1;
           onbuttonclick = "[] spawn max_lockers_fnc_sellLocker;";
           x = 0.509375 * safezoneW + safezoneX;
           y = 0.705624385447395 * safezoneH + safezoneY;
           w = 0.2140625 * safezoneW;
           h = 0.0210226155358895 * safezoneH;
       };
       class category_weapons : Life_RscButtonInvisibleLockers
       {
           idc = 1000;
           onbuttonclick = "[1] call max_lockers_fnc_lockerFilter;";
           x = 0.294791666666667 * safezoneW + safezoneX;
           y = 0.319203539823009 * safezoneH + safezoneY;
           w = 0.0838541666666667 * safezoneW;
           h = 0.036125860373648 * safezoneH;
       };
       class category_clothes : Life_RscButtonInvisibleLockers
       {
           idc = 1001;
           onbuttonclick = "[2] call max_lockers_fnc_lockerFilter;";
           x = 0.380989583333333 * safezoneW + safezoneX;
           y = 0.319203539823009 * safezoneH + safezoneY;
           w = 0.0838541666666667 * safezoneW;
           h = 0.036125860373648 * safezoneH;
       };
       class category_vitems : Life_RscButtonInvisibleLockers
       {
           idc = 1002;
           onbuttonclick = "[0] call max_lockers_fnc_lockerFilter;";
           x = 0.466927083333333 * safezoneW + safezoneX;
           y = 0.319203539823009 * safezoneH + safezoneY;
           w = 0.0838541666666667 * safezoneW;
           h = 0.036125860373648 * safezoneH;
       };
       class category_stuff : Life_RscButtonInvisibleLockers
       {
           idc = 1003;
           onbuttonclick = "[3] call max_lockers_fnc_lockerFilter;";
           x = 0.552864583333333 * safezoneW + safezoneX;
           y = 0.319203539823009 * safezoneH + safezoneY;
           w = 0.0838541666666667 * safezoneW;
           h = 0.036125860373648 * safezoneH;
       };
       class category_ammo : Life_RscButtonInvisibleLockers
       {
           idc = 1004;
           onbuttonclick = "[4] call max_lockers_fnc_lockerFilter;";
           x = 0.638802083333333 * safezoneW + safezoneX;
           y = 0.319203539823009 * safezoneH + safezoneY;
           w = 0.0838541666666667 * safezoneW;
           h = 0.036125860373648 * safezoneH;
       };
       class curCategory_1 : Life_RscText
       {
           colorbackground[] = {1,0,0,1};
           idc = 1005;
           x = 0.299583333333333 * safezoneW + safezoneX;
           y = 0.359882005899705 * safezoneH + safezoneY;
           w = 0.0743750000000003 * safezoneW;
           h = 0.003 * safezoneH;
       };
       class curCategory_2 : Life_RscText
       {
           colorbackground[] = {1,0,0,1};
           idc = 1006;
           x = 0.3875 * safezoneW + safezoneX;
           y = 0.359882005899705 * safezoneH + safezoneY;
           w = 0.0743750000000003 * safezoneW;
           h = 0.003 * safezoneH;
       };
       class curCategory_3 : Life_RscText
       {
           colorbackground[] = {1,0,0,1};
           idc = 1007;
           x = 0.47375 * safezoneW + safezoneX;
           y = 0.359882005899705 * safezoneH + safezoneY;
           w = 0.0743750000000003 * safezoneW;
           h = 0.003 * safezoneH;
       };
       class curCategory_4 : Life_RscText
       {
           colorbackground[] = {1,0,0,1};
           idc = 1008;
           x = 0.559166666666666 * safezoneW + safezoneX;
           y = 0.359882005899705 * safezoneH + safezoneY;
           w = 0.0743750000000003 * safezoneW;
           h = 0.003 * safezoneH;
       };
       class curCategory_5 : Life_RscText
       {
           colorbackground[] = {1,0,0,1};
           idc = 1009;
           x = 0.6440625 * safezoneW + safezoneX;
           y = 0.359882005899705 * safezoneH + safezoneY;
           w = 0.0743750000000003 * safezoneW;
           h = 0.003 * safezoneH;
       };
   };
};