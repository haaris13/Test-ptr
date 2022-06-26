
class Dialog_gouv_taxes_mod {

	idd = 9400;
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

		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Les Taxes"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class taxesList: Life_RscListBox
		{
			idc = 9401;
			rowHeight = 0.09;
			sizeEx = 0.033; //was 0.3
			onLBSelChanged = "[] spawn life_fnc_gouvTaxesModLb;";

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};

		class ItemInfo: Life_RscStructuredText
		{
			idc = 9402;

			x = 0.5 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.231 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.6};
		};

		class RscText_back: Life_RscText
		{
			idc = -1;
			text = "";
			x = 0.5 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.4};
			sizeEx = 0.04;
		};

		class value: Life_RscEdit
		{
			idc = 9403;

			text = "0"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class ValidButton: Life_RscButtonMenuFixLater
		{
			onButtonClick = "[] call life_fnc_gouvTaxesAction";
			type = 1;
			style = 2;
			idc = -1;
			text = "Valider";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};

		class RscText_1013: Life_RscText 
		{
			idc = -1;
			text = "Valeur (%) : ";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};