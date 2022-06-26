class shellDialog {

	idd = 21000;
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";

	class controlsBackground {

		class TabletBackground: life_RscPicture
		{
			idc = -1;

			text = "textures\tabletbg.paa"; //--- ToDo: Localize;
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};

	class controls { 


		class listShell: Life_RscListBox 
		{
			idc = 21001;
			onLBSelChanged = "";
			rowHeight = 0.04;
			sizeEx = 0.03;
			x = 0.299046 * safezoneW + safezoneX;
			y = 0.247108 * safezoneH + safezoneY;
			w = 0.401907 * safezoneW;
			h = 0.439812 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,0.4};
			colorSelectBackground[] = {0.2,0.2,0.2,0.4};
			colorSelectBackground2[] = {0.2,0.2,0.2,0.4};
		};

		class ButtonAction: Life_RscButtonMenu
		{
			onButtonclick = "[] call life_fnc_shellEnter";
			idc = 21002;

			text = "Valider"; //--- ToDo: Localize;
			x = 0.639122 * safezoneW + safezoneX;
			y = 0.697916 * safezoneH + safezoneY;
			w = 0.0618319 * safezoneW;
			h = 0.0329859 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class shellText: Life_RscEdit 
		{
			idc = 21003;

			text = ""; //--- ToDo: Localize;
			x = 0.299046 * safezoneW + safezoneX;
			y = 0.697916 * safezoneH + safezoneY;
			w = 0.32977 * safezoneW;
			h = 0.0329859 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class CloseButtonKey: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";
			idc = -1;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};