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
class mobilesystem_SpeedCam_g {
   idd = 18200;
   name = "mobilesystem_SpeedCam_g";
   movingenable = false;
   enablesimulation = true;
   class controlsBackground
   {
       class fond : life_RscPicture
       {
           text = "";
           x = 0.277864583333333 * safezoneW + safezoneX;
           y = 0.0737329772944903 * safezoneH + safezoneY;
           w = 0.45 * safezoneW;
           h = 0.9 * safezoneH;
           idc = 1000;
       };
   };
   class controls
   {
       class Fermer : Life_RscButtonMenu
       {
           x = 0.660677083333334 * safezoneW + safezoneX;
           y = 0.675098328416913 * safezoneH + safezoneY;
           w = 0.05 * safezoneW;
           h = 0.03 * safezoneH;
           idc = -1;
           onButtonClick = "closeDialog 0;";
           animtexturenormal = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedisabled = "#(argb,8,8,3)color(1,1,1,0)";
           animtextureover = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturefocused = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturepressed = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedefault = "#(argb,8,8,3)color(1,1,1,0)";
           colorbackground[] = {0, 0, 0, 0};
           colorbackground2[] = {1, 1, 1, 0};
           color[] = {1, 1, 1, 0};
           color2[] = {1, 1, 1, 0};
           colortext[] = {1, 1, 1, 0};
           colordisabled[] = {1, 1, 1, 0};
       };
       class OK : Life_RscButtonMenu
       {
           x = 0.58421875 * safezoneW + safezoneX;
           y = 0.37617994100295 * safezoneH + safezoneY;
           w = 0.02 * safezoneW;
           h = 0.04 * safezoneH;
           idc = -1;
           onButtonClick = "[] spawn fc_speedcam_fnc_SpeedCamSetSpeed;";
           animtexturenormal = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedisabled = "#(argb,8,8,3)color(1,1,1,0)";
           animtextureover = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturefocused = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturepressed = "#(argb,8,8,3)color(1,1,1,0)";
           animtexturedefault = "#(argb,8,8,3)color(1,1,1,0)";
           colorbackground[] = {0, 0, 0, 0};
           colorbackground2[] = {1, 1, 1, 0};
           color[] = {1, 1, 1, 0};
           color2[] = {1, 1, 1, 0};
           colortext[] = {1, 1, 1, 0};
           colordisabled[] = {1, 1, 1, 0};
       };
       class Edit : Life_RscEdit
       {
           x = 0.51078125 * safezoneW + safezoneX;
           y = 0.37617994100295 * safezoneH + safezoneY;
           h = 0.034 * safezoneH;
           w = 0.043 * safezoneW;
           idc = 1400;
           text = "";
           sizeex = 0.040;
       };
		class List: life_RscListbox
		{
			      idc = 1500;
			      sizeEx = 0.040;
            x = 0.296875 * safezoneW + safezoneX;
            y = 0.425221238938053 * safezoneH + safezoneY;
            w = 0.409 * safezoneW;
            h = 0.235 * safezoneH;
		};
   };
};