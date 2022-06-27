class life_weapon_shop_noweapons
{
	idd = 38400;
	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{
		
		class YourInventoryHeader: Life_RscText
		{
			idc = -1;

			text = "Votre Inventaire"; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RscTitleBackground: Life_RscText
		{
			idc = -1;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	
		class RscText_1000: Life_RscText
		{
			idc = -1;

			x = 0.309219 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.484 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		
		class Mainbackground: Life_RscText
		{
			idc = -1;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.484 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
	};
	class controls {
	
		class ShopTitle: Life_RscTitle
		{
			idc = 38401;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class itemList: Life_RscListBox
		{
			idc = 38403;
			onLBSelChanged = "_this call life_fnc_weaponShopSelection";
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.396 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};
		class playerinvList: Life_RscListBox
		{
			idc = 38420;
			onLBSelChanged = "_this call life_fnc_weaponShopSelection";
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.396 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};
		class ButtonBuy: Life_RscButtonMenu
		{
			idc = 38405;
			onButtonClick = "[] spawn life_fnc_weaponShopBuy; true";

			text = "Acheter"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonSell: Life_RscButtonMenu
		{
			idc = 38406;
			onButtonClick = "[] spawn life_fnc_weaponShopSell; true";

			text = "Vendre "; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		
		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			x = 0.690781 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0129167 * safezoneW;
			h = 0.022926 * safezoneH;


			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		
		class buttonFilter4: Life_RscButtonMenuIcon
		{
			idc = 384011;
			x = 0.690781 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "[0,4] call life_fnc_weaponShopFilterShop";
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};

			tooltip = "Items";
			
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\binoculars_ca.paa";
		};
		class itemCostLabel : Life_RscStructuredText
		{
			idc = 38407;
			text = ""; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.68062 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};
		
		class itemSaleValueLabel : Life_RscStructuredText
		{
			idc = 38408;
			text = ""; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.68062 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};

	};
};
