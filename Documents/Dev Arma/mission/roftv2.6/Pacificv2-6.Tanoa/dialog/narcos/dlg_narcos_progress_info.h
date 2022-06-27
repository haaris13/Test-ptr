class Narcos_Progress_Info {
	idd = 12900;
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
		
		class Title: Life_RscTitle
		{	
			idc = -1;

			text = "Information de la progression"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		
	
	};

	class controls {


		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; //--- ToDo: Localize;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "$STR_Global_Close";
			sizeEx = (			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 1) * GUI_GRID_H;
		};

		class InfoBox: Life_RscStructuredText
		{
			idc = 12901;

			x = 0.283438 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.433125 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.6};
		};
	};
};