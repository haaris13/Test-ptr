class life_wanted_menu {
	idd = 2400;
	name= "life_wanted_menu";
	movingEnable = false;
	enableSimulation = true;
	
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

		
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "$STR_Wanted_Title";
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class WantedConnection: Title
		{
			idc = 2404;
			style = 1;

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class WantedList: Life_RscListBox
		{
			idc = 2401;
			onLBSelChanged = "[] spawn life_fnc_wantedGrab";
			sizeEx = 0.032;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.385 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.7};
		};

		class WantedDetails: Life_RscListBox
		{
			idc = 2402;
			sizeEx = 0.031;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.341 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		class BountyPrice: Life_RscText
		{
			idc = 2403;

			text = ""; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.033 * safezoneH;
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
			tooltip = "Close"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class PardonButtonKey: Life_RscButtonMenu
		{
			idc = 2405;
			onButtonClick = "[] call life_fnc_pardon; closeDialog 0;";
			text = "$STR_Wanted_Pardon";
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class PlayerList: Life_RscListBox
		{
			idc = 2406;
			onLBSelChanged = "";
			sizeEx = 0.031;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.363 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class WantedAddL: Life_RscCombo
		{
			idc = 2407;
			text = "$STR_Wanted_Crimes";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.679704 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.0266296 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.7};
		};
		class ButtonWantedAdd: Life_RscButtonMenu
		{
			idc = 9800;
			onButtonClick = "[] call life_fnc_wantedAddP;";
			text = "$STR_Wanted_Add";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class wantedText: Life_RscText
		{
			idc = -1;
			text = "$STR_Wanted_People";
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class citizensText: Life_RscText
		{
			idc = -1;
			text = "$STR_Wanted_Citizens";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class crimesText: Life_RscText
		{
			idc = -1;
			text = "$STR_Wanted_Crimes";
			x = 0.575782 * safezoneW + safezoneX;
			y = 0.681555 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};