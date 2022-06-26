class Dialog_Depan_System {
	idd = 24500;
	name= "Dialog_Depan_System";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground {
		class TabletBackground: Life_RscPicture
		{
			idc = -1;
			text = "textures\tabletbg.paa";
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};
		
		class MapView: Life_RscMapControl
		{
			idc = 24506;
			maxSatelliteAlpha = 1;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;

			x = 0.468438 * safezoneW + safezoneX;
			y = 0.4249 * safezoneH + safezoneY;
			w = 0.250281 * safezoneW;
			h = 0.264 * safezoneH;
			widthRailWay = 1;
		};
	};
	
	class controls {

		class Title: Life_RscTitle
		{
			idc = 24501;

			text = "Demandes dépaneur";

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.234 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class HelpList: Life_RscListBox
		{
			idc = 24502;
			rowHeight = 0.05;
			sizeEx = 0.038;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.174687 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			onLBSelChanged = "_this call life_fnc_depanMenuLbChange;";
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

		class InfoBarBg: Life_RscText
		{
			idc = -1;

			x = 0.468438 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.253281 * safezoneW;
			h = 0.153 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		class InfoBarTextPlayer: Life_RscStructuredText
		{
			idc = 24503;

			x = 0.473594 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.242906 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Life_RscButtonMenu
		// Life_RscCombo
		// Life_RscEdit

		class AcceptButton: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_depanMenuAccept;";
			style = 2;

			idc = 24504;

			text = "<t align = 'center'>Accepter</t>"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.699 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class RefuseButton: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_depanMenuRefuse;";
			style = 2;

			idc = 24505;

			text = "<t align = 'center'>Refuser</t>"; //--- ToDo: Localize;
			x = 0.3863 * safezoneW + safezoneX;
			y = 0.699 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};