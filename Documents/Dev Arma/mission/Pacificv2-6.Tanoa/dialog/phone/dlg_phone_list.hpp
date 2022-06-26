class Dialog_Phone_List {

	idd = 24100;
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

			text = "Mes Cartes Sim"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class PhoneList: Life_RscListBox
		{
			idc = 24101;
			rowHeight = 0.09;
			sizeEx = 0.033; //was 0.3
			onLBSelChanged = "_this call life_fnc_phoneListLbChange;";

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
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		class PhoneInfo: Life_RscStructuredText
		{
			idc = 24102;

			x = 0.5 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.6};
		};

		class ApplyButton: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_phoneUseAction;";
			idc = 24103;

			text = "Utiliser"; //--- ToDo: Localize;
			x = 0.378125 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class RemoveButton: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_phoneDeleteAction;";
			idc = 24104;

			text = "Supprimer"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};