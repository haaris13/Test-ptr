class life_admin_menu {
	idd = 2900;
	name= "life_admin_menu";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn admin_fnc_adminMenu;";

	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};

		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (2 / 250);
		};
	};

	class controls {


		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 2901;
			text = "$STR_Admin_Title";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};

		class searchBox_Admin : Life_RscEdit
		{
			idc = 2912;
			text = "";
			x = 0.12; y = 0.26;
			w = 0.30; h = 0.05;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.7};
		};

		class PlayerList_Admin : Life_RscListBox
		{
			idc = 2902;
			text = "";
			sizeEx = 0.035;
			//colorBackground[] = {0,0,0,0};
			onLBSelChanged = "[_this] spawn admin_fnc_adminQuery";

			x = 0.12; y = 0.32;
			w = 0.30; h = 0.4;
		};

		class PlayerBInfo : Life_RscStructuredText
		{
			idc = 2903;
			text = "";
			x = 0.42;
			y = 0.25;
			w = 0.35;
			h = 0.6;
		};

/* ============  ROW 1  ============ */

		class Teleport : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_Teleport";
			onButtonClick = "[] call admin_fnc_adminTeleport; ['InfoWithSound', 'Cliquez sur la destination désiré'] spawn life_fnc_showPredefinedNotification;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class TeleportHere : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_TpHere";
			onButtonClick = "[] call admin_fnc_adminTpHere;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class Compensate : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_Compensate";
			onButtonClick = "createDialog ""Life_Admin_Compensate"";";
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class Spectate : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_Spectate";
			onButtonClick = "[] call admin_fnc_adminSpectate;";
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class Freeze : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_Freeze";
			onButtonClick = "[] call admin_fnc_adminFreeze;";
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};

/* ============  ROW 2  ============ */

		class God : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_God";
			onButtonClick = "[] call admin_fnc_adminGodMode;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class Markers : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_Markers";
			onButtonClick = "[] spawn admin_fnc_adminMarkers;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class Travers : Life_RscButtonMenu {
			idc = -1;
			text = "Travers";
			onButtonClick = "[] spawn admin_fnc_adminShowBullet;";
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class TraversZone : Life_RscButtonMenu {
			idc = -1;
			text = "Travers sur Zone 100m";
			onButtonClick = "[] spawn admin_fnc_adminShowBulletZone;";
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (12.51 / 40);
			h = (1 / 25);
		};

		/*
		class name : Life_RscButtonMenu {
			idc = -1;
			text = "name";
			onButtonClick = "do something";
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};
		*/
		
/* ============  ROW 3  ============ */

		class AdminID : Life_RscButtonMenu {
			idc = -1;
			text = "On Map";
			onButtonClick = "[] spawn admin_fnc_admingetID;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.928;
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class Debug : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Admin_Debug";
			onButtonClick = "[] call admin_fnc_adminDebugCon;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.928;
			w = (6.25 / 40);
			h = (1 / 25);
		};

		class DebugMode : Life_RscButtonMenu {
			idc = -1;
			text = "Debug Mode";
			onButtonClick = "life_debug = 1";
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.928;
			w = (6.25 / 40);
			h = (1 / 25);
		};

	};
};
