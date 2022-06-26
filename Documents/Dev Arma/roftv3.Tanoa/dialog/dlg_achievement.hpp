#include "player_sys.sqf"

class playerAchievements {

	idd = 2060;
	movingEnable = true;
	enableSimulation = true;
	
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
	};
	
	class controls {

		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Succés"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class MasterButtonGroup: Life_RscControlsGroup
		{
			idc = 2061;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.433125 * safezoneW;
			h = 0.451 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		
			class controls {};
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
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};