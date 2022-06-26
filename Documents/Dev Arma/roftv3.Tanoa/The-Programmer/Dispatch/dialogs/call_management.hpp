/*
    author: Maxence Lyon
    altis DEV: https://altisdev.com/user/maxence-lyon
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
class maxence_call_management {
   idd = 6930;
   name = "maxence_call_management";
   movingenable = false;
   enablesimulation = true;
   onload = "";
   class controlsBackground
   {
       class fond : Life_RscPicture
       {
           idc = 6931;
           text = "";
           x = 0.208333333333334 * safezoneW + safezoneX;
           y = 0.00884955752212389 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 1.02 * safezoneH;
       };
       class boutonassign : Life_RscPicture
       {
           idc = 6932;
           text = "";
           x = 0.346 * safezoneW + safezoneX;
           y = 0.4432 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 1.02 * safezoneH;
       };
       class boutonReply : Life_RscPicture
       {
           idc = 6933;
           text = "";
           x = 0.274875 * safezoneW + safezoneX;
           y = 0.682 * safezoneH + safezoneY;
           w = 0.6 * safezoneW;
           h = 1.02 * safezoneH;
       };
       class show_call : Life_RscButtonMenu
       {
           idc = 6940;
           text = "";
           x = 0.302282666666666 * safezoneW + safezoneX;
           y = 0.723294449360864 * safezoneH + safezoneY;
           w = 0.184215166666667 * safezoneW;
           h = 0.0264 * safezoneH;
           onbuttonclick = "";
           colorbackground[] = {1,1,1,0};
           colorbackgroundfocused[] = {1,1,1,0};
           colorbackground2[] = {1,1,1,0};
           color[] = {1,1,1,0};
           colorfocused[] = {1,1,1,0};
           color2[] = {1,1,1,0};
           colortext[] = {1,1,1,0};
           colordisabled[] = {1,1,1,0};
           colorsecondary[] = {1,1,1,0};
           colorfocusedsecondary[] = {1,1,1,0};
           color2secondary[] = {1,1,1,0};
           colordisabledsecondary[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           tooltipcolorshade[] = {1,1,1,0};
       };
       class sendMSG : Life_RscButtonMenu
       {
           idc = 6942;
           text = "";
           x = 0.5340535 * safezoneW + safezoneX;
           y = 0.695762492625368 * safezoneH + safezoneY;
           w = 0.159175666666667 * safezoneW;
           h = 0.0264 * safezoneH;
           onbuttonclick = "[] spawn max_callsmanage_fnc_sendMessageManagement;";
           colorbackground[] = {1,1,1,0};
           colorbackgroundfocused[] = {1,1,1,0};
           colorbackground2[] = {1,1,1,0};
           color[] = {1,1,1,0};
           colorfocused[] = {1,1,1,0};
           color2[] = {1,1,1,0};
           colortext[] = {1,1,1,0};
           colordisabled[] = {1,1,1,0};
           colorsecondary[] = {1,1,1,0};
           colorfocusedsecondary[] = {1,1,1,0};
           color2secondary[] = {1,1,1,0};
           colordisabledsecondary[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           tooltipcolorshade[] = {1,1,1,0};
       };
       class closeButton : Life_RscButtonMenu
       {
           idc = -1;
           text = "";
           x = 0.566666166666667 * safezoneW + safezoneX;
           y = 0.761001154375615 * safezoneH + safezoneY;
           w = 0.156771333333333 * safezoneW;
           h = 0.0264 * safezoneH;
           onbuttonclick = "closeDialog 0;";
           colorbackground[] = {1,1,1,0};
           colorbackgroundfocused[] = {1,1,1,0};
           colorbackground2[] = {1,1,1,0};
           color[] = {1,1,1,0};
           colorfocused[] = {1,1,1,0};
           color2[] = {1,1,1,0};
           colortext[] = {1,1,1,0};
           colordisabled[] = {1,1,1,0};
           colorsecondary[] = {1,1,1,0};
           colorfocusedsecondary[] = {1,1,1,0};
           color2secondary[] = {1,1,1,0};
           colordisabledsecondary[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           tooltipcolorshade[] = {1,1,1,0};
       };
   };
   class controls
   {
       class requests : Life_RscListbox
       {
           idc = 6943;
           x = 0.296354166666667 * safezoneW + safezoneX;
           y = 0.346749852507375 * safezoneH + safezoneY;
           w = 0.292708333333333 * safezoneW;
           h = 0.131126253687316 * safezoneH;
           colorbackground[] = {0,0,0,0.5};
           onlbselchanged = "[] spawn max_callsmanage_fnc_lbChangedCallsMenu;";
           sizeex = 0.04;
       };
       class mapcontrol : Life_RscMapControl
       {
           idc = 6944;
           x = 0.5952465 * safezoneW + safezoneX;
           y = 0.308426349065881 * safezoneH + safezoneY;
           w = 0.128711833333333 * safezoneW;
           h = 0.198948282202557 * safezoneH;
           maxsatellitealpha = 0.75;
           alphafadestartscale = 1.15;
           alphafadeendscale = 1.29;
           widthRailWay = 4;
       };
       class Life_RscEdit_1400 : Life_RscEdit
       {
           idc = 6945;
           text = "";
           x = 0.501761833333333 * safezoneW + safezoneX;
           y = 0.59488692232055 * safezoneH + safezoneY;
           w = 0.221675666666667 * safezoneW;
           h = 0.0943952802359884 * safezoneH;
           linespacing = 1;
           style = 16;
           colorbackground[] = {1,1,1,0};
           colortext[] = {0,0,0,0.9};
           colorshadow[] = {0,0,0,1};
           colordisabled[] = {0,0,0,0.8};
       };
       class Life_RscCheckbox_2800 : Life_Checkbox
       {
           idc = 6946;
           x = 0.643355666666667 * safezoneW + safezoneX;
           y = 0.559063294985251 * safezoneH + safezoneY;
           w = 0.0175315 * safezoneW;
           h = 0.0264 * safezoneH;
           sizeex = 0.04;
           color[] = {0,0,0,0.7};
           colorfocused[] = {0,0,0,1};
           colorhover[] = {0,0,0,1};
           colorpressed[] = {0,0,0,1};
           colordisabled[] = {0,0,0,0.2};
       };
       class Life_RscCombo_2100 : Life_RscCombo
       {
           idc = 6947;
           x = 0.502282666666666 * safezoneW + safezoneX;
           y = 0.5610298633235 * safezoneH + safezoneY;
           w = 0.1253215 * safezoneW;
           h = 0.0264 * safezoneH;
           onlbselchanged = "[] spawn max_callsmanage_fnc_lbChangedMessage;";
       };
       class time_input : Life_RscText
       {
           idc = 6948;
           text = "";
           x = 0.358567666666666 * safezoneW + safezoneX;
           y = 0.686571085545724 * safezoneH + safezoneY;
           w = 0.130494833333333 * safezoneW;
           h = 0.0264 * safezoneH;
           style = 1;
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
       };
       class distance_input : Life_RscText
       {
           idc = 6949;
           text = "";
           x = 0.354166666666666 * safezoneW + safezoneX;
           y = 0.660702369714848 * safezoneH + safezoneY;
           w = 0.136458333333333 * safezoneW;
           h = 0.0264 * safezoneH;
           style = 1;
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
       };
       class dispatch_input : Life_RscText
       {
           idc = 6950;
           text = "";
           x = 0.347515500000001 * safezoneW + safezoneX;
           y = 0.637909222222222 * safezoneH + safezoneY;
           w = 0.142102 * safezoneW;
           h = 0.0264 * safezoneH;
           style = 1;
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
       };
       class name_input : Life_RscText
       {
           idc = 6951;
           text = "";
           x = 0.349702833333333 * safezoneW + safezoneX;
           y = 0.559665096361849 * safezoneH + safezoneY;
           w = 0.140401333333333 * safezoneW;
           h = 0.0264 * safezoneH;
           style = 1;
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
       };
       class position_input : Life_RscText
       {
           idc = 6952;
           text = "";
           x = 0.3475155 * safezoneW + safezoneX;
           y = 0.585682812192724 * safezoneH + safezoneY;
           w = 0.129047 * safezoneW;
           h = 0.0264 * safezoneH;
           style = 1;
           colortext[] = {0,0,0,1};
           colorshadow[] = {1,1,1,0};
       };
       class Picture_Position_Button : Life_RscButton
       {
           idc = 6953;
           x = 0.476264333333333 * safezoneW + safezoneX;
           y = 0.587882812192723 * safezoneH + safezoneY;
           w = 0.012375 * safezoneW;
           h = 0.022 * safezoneH;
           onbuttonclick = "";
           type = 1;
           access = 0;
           colorshadow[] = {0,0,0,0};
           color[] = {1,1,1,1};
           coloractive[] = {1,1,1,1};
           colorbackground[] = {0,0,0,0};
           colorbackgroundfocused[] = {1,1,1,0};
           style = 48 + 0x800;
           colorselectedbg[] = {1,1,1,0};
           text = "";
       };
       class accept_call : Life_RscButtonMenu
       {
           idc = 6954;
           text = "";
           x = 0.375520833333333 * safezoneW + safezoneX;
           y = 0.486725663716814 * safezoneH + safezoneY;
           w = 0.1047005 * safezoneW;
           h = 0.0264 * safezoneH;
           onbuttonclick = "[] spawn max_callsmanage_fnc_acceptCall;";
           colorbackground[] = {1,1,1,0};
           colorbackgroundfocused[] = {1,1,1,0};
           colorbackground2[] = {1,1,1,0};
           color[] = {1,1,1,0};
           colorfocused[] = {1,1,1,0};
           color2[] = {1,1,1,0};
           colortext[] = {1,1,1,0};
           colordisabled[] = {1,1,1,0};
           colorsecondary[] = {1,1,1,0};
           colorfocusedsecondary[] = {1,1,1,0};
           color2secondary[] = {1,1,1,0};
           colordisabledsecondary[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           tooltipcolorshade[] = {1,1,1,0};
       };
       class delete_call : Life_RscButtonMenu
       {
           idc = 6955;
           text = "";
           x = 0.4829725 * safezoneW + safezoneX;
           y = 0.484759095378564 * safezoneH + safezoneY;
           w = 0.105048333333333 * safezoneW;
           h = 0.0264 * safezoneH;
           onbuttonclick = "[] spawn max_callsmanage_fnc_deleteCall;";
           colorbackground[] = {1,1,1,0};
           colorbackgroundfocused[] = {1,1,1,0};
           colorbackground2[] = {1,1,1,0};
           color[] = {1,1,1,0};
           colorfocused[] = {1,1,1,0};
           color2[] = {1,1,1,0};
           colortext[] = {1,1,1,0};
           colordisabled[] = {1,1,1,0};
           colorsecondary[] = {1,1,1,0};
           colorfocusedsecondary[] = {1,1,1,0};
           color2secondary[] = {1,1,1,0};
           colordisabledsecondary[] = {1,1,1,0};
           tooltipcolortext[] = {1,1,1,0};
           tooltipcolorbox[] = {1,1,1,0};
           tooltipcolorshade[] = {1,1,1,0};
       };
       class assignTo : Life_RscCombo
       {
           idc = 6956;
           x = 0.296354166666667 * safezoneW + safezoneX;
           y = 0.484759095378564 * safezoneH + safezoneY;
           w = 0.0760416666666663 * safezoneW;
           h = 0.0264 * safezoneH;
       };
   };
};