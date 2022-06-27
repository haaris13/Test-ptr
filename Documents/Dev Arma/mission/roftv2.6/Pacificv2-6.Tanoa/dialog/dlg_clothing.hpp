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

			x = 0.00534484 * safezoneW + safezoneX;
			y = 0.038197 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};

		class Mainbackground: Life_RscText
		{
			idc = -1;

			x = 0.00534484 * safezoneW + safezoneX;
			y = 0.0601876 * safezoneH + safezoneY;
			w = 0.180343 * safezoneW;
			h = 0.329859 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};

		class VehicleInformationHeader: Life_RscText
		{
			idc = -1;

			text = "Information"; //--- ToDo: Localize;
			x = 0.00534484 * safezoneW + safezoneX;
			y = 0.401042 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class RightSideBG: Life_RscText
		{
			idc = -1;

			x = 0.00534484 * safezoneW + safezoneX;
			y = 0.423033 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.286 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
	};
	
	class controls {	


		class ShopTitle: Life_RscTitle
		{
			idc = 3103;	
			text = "Boutique de vêtements";
			x = 0.00534484 * safezoneW + safezoneX;
			y = 0.038197 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class itemList: Life_RscListBox
		{
			idc = 3101;
			onLBSelChanged = "[_this] call life_fnc_changeClothes;";
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.0711829 * safezoneH + safezoneY;
			w = 0.1693 * safezoneW;
			h = 0.242 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};

		class ButtonBuy: Life_RscButtonMenu
		{
			idc = 3104;
			text = "$STR_Global_Buy";
			onButtonClick = "[0] call life_fnc_clothingBuySell;";
			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.357061 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};

		class itemCostLabel: Life_RscStructuredText
		{
			idc = 3102;

			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.1693 * safezoneW;
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
			x = 0.187625 * safezoneW + safezoneX;
			y = 0.082 * safezoneH + safezoneY;
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
			x = 0.187625 * safezoneW + safezoneX;
			y = 0.115 * safezoneH + safezoneY;
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
			x = 0.187625 * safezoneW + safezoneX;
			y = 0.148 * safezoneH + safezoneY;
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
			x = 0.187625 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
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
			x = 0.187625 * safezoneW + safezoneX;
			y = 0.214 * safezoneH + safezoneY;
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
			x = 0.185688 * safezoneW + safezoneX;
			y = 0.038197 * safezoneH + safezoneY;
			w = 0.0133854 * safezoneW;
			h = 0.022 * safezoneH;


			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		// Info

		class vehicleInfomationList: Life_RscStructuredText
		{
			idc = 3107;

			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.434028 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.11 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class greyBackgroundRight: Life_RscText
		{
			idc = -1;

			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.554977 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.143 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Protect, resistance explo, chargement, poids

		class protectProgress: Life_RscProgress
		{
			idc = 3201;

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class protectText: Life_RscStructuredText
		{
			idc = 3211;

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class resExploProgress: Life_RscProgress
		{
			idc = 3202;

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class resExploText: Life_RscStructuredText
		{
			idc = 3212;

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class chargeProgress: Life_RscProgress
		{
			idc = 3203;

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class chargeText: Life_RscStructuredText
		{
			idc = 3213;

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class poidProgress: Life_RscProgress
		{
			idc = 3204;

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		
		class poidText: Life_RscStructuredText
		{
			idc = 3214;

			x = 0.0153125 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};