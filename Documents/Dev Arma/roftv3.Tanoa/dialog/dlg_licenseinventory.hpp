
class playerLicenses {

	idd = 2100;
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

			text = "Vos Licences"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class licenseList: Life_RscListBox
		{
			idc = 2101;
			rowHeight = 0.09;
			sizeEx = 0.033; //was 0.3
			onLBSelChanged = "_this call life_fnc_p_licencesLBChange;";

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
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

		class ItemInfo: Life_RscStructuredText
		{
			idc = 2124;

			x = 0.5 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.6};
		};

		/*
		class RemoveButton: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_removeLicense;";
			idc = 2102;

			text = "Supprimer"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};*/
	};
};