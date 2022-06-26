////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Cobanr, v1.063, #Facagi)
////////////////////////////////////////////////////////
class Life_Clothing {
	idd = 3100;
	name= "Life_Clothing";
	movingEnable = true;
	enableSimulation = true;
	//onLoad = "[] execVM 'core\client\keychain\init.sqf'";
	
	class controlsBackground {

		class Background: Life_RscText
		{
			idc = -1;

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};

		class Mainbackground: Life_RscText
		{
			idc = -1;

			x = 0.278281 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.473 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};

		class VehicleInformationHeader: Life_RscText
		{
			idc = -1;

			text = "Information"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class MainBackgroundRight: Life_RscText
		{
			idc = -1;

			x = 0.510312 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.308 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
	};
	
	class controls {	


		class ShopTitle: Life_RscTitle
		{
			idc = 3103;	
			text = "Boutique de vêtements";
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class itemList: Life_RscListBox
		{
			idc = 3101;
			onLBSelChanged = "[_this] call life_fnc_changeClothes;";
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.396 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};

		class ButtonBuy: Life_RscButtonMenu
		{
			idc = 3104;
			text = "$STR_Global_Buy";
			onButtonClick = "[0] call life_fnc_clothingBuySell;";
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};

		class itemCostLabel: Life_RscStructuredText
		{
			idc = 3102;

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.6925 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};
		class itemCostLabelTotal: Life_RscStructuredText
		{
			idc = 3106;

			x = 0.357343 * safezoneW + safezoneX;
			y = 0.692555 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0};
		};

		
		class buttonFilter: Life_RscButtonMenuIcon
		{
			onButtonClick = "[0,0] call life_fnc_clothingFilterShop";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa"; //--- ToDo: Localize;
			x = 0.463385 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
			tooltip = "Tenues"; //--- ToDo: Localize;
		};
		class buttonFilter1: Life_RscButtonMenuIcon
		{
			onButtonClick = "[0,1] call life_fnc_clothingFilterShop";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa"; //--- ToDo: Localize;
			x = 0.463385 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
			tooltip = "Chapeau"; //--- ToDo: Localize;
		};
		class buttonFilter2: Life_RscButtonMenuIcon
		{
			onButtonClick = "[0,2] call life_fnc_clothingFilterShop";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\goggles_ca.paa"; //--- ToDo: Localize;
			x = 0.463385 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
			tooltip = "Visage"; //--- ToDo: Localize;
		};
		class buttonFilter3: Life_RscButtonMenuIcon
		{
			onButtonClick = "[0,3] call life_fnc_clothingFilterShop";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa"; //--- ToDo: Localize;
			x = 0.463385 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
			tooltip = "Gilets"; //--- ToDo: Localize;
		};
		class buttonFilter4: Life_RscButtonMenuIcon
		{
			onButtonClick = "[0,4] call life_fnc_clothingFilterShop";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa"; //--- ToDo: Localize;
			x = 0.463385 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
			tooltip = "Sacs à dos"; //--- ToDo: Localize;
		};
		
		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			x = 0.463385 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.0129167 * safezoneW;
			h = 0.022926 * safezoneH;


			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		// Info

		class vehicleInfomationList: Life_RscStructuredText
		{
			idc = 3107;

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.132 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class greyBackgroundRight: Life_RscText
		{
			idc = -1;

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.143 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Protect, resistance explo, chargement, poids

		class protectProgress: Life_RscProgress
		{
			idc = 3201;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class resExploProgress: Life_RscProgress
		{
			idc = 3202;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class chargeProgress: Life_RscProgress
		{
			idc = 3203;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class poidProgress: Life_RscProgress
		{
			idc = 3204;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class protectText: Life_RscStructuredText
		{
			idc = 3211;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class resExploText: Life_RscStructuredText
		{
			idc = 3212;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class chargeText: Life_RscStructuredText
		{
			idc = 3213;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class poidText: Life_RscStructuredText
		{
			idc = 3214;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};