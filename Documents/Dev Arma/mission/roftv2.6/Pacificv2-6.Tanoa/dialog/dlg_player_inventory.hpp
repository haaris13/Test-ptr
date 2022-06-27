#include "player_sys.sqf"

class playerInventory {

	idd = 2050;
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

			text = "Inventaire"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class PlayersName: Title
		{
			idc = 2009;
			style = 1;

			text = "Inventaire"; //--- ToDo: Localize;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.345469 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class itemList: Life_RscListBox
		{
			idc = 2005;
			rowHeight = 0.1;
			onLBSelChanged = "_this call life_fnc_p_inventoryLBChange;";
			sizeEx = 0.025;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};

		/*
		class NearPlayers: Life_RscCombo
		{
			idc = 2022;

			x = 0.360781 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};

		class iNearPlayers: Life_RscCombo
		{
			idc = 2023;

			x = 0.319531 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		
		class DropButton: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_giveItem;";
			idc = 1007;

			text = "Give"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		*/
		class UseButton: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_useItem;";
			idc = 1008;
			text = "Utiliser"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class RemoveButton: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_removeItem;";
			idc = 1009;

			text = "Supprimer"; //--- ToDo: Localize;
			x = 0.438112 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.05672 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class itemEdit: Life_RscEdit
		{
			idc = 2010;

			text = "1"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
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
				
		class ItemInfo: Life_RscStructuredText
		{
			idc = 2024;

			x = 0.5 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.216563 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.6};
		};
	};
};