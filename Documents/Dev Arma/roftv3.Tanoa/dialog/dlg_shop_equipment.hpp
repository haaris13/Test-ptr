class life_weapon_shop
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

			x = 0.309352 * safezoneW + safezoneX;
			y = 0.269098 * safezoneH + safezoneY;
			w = 0.190648 * safezoneW;
			h = 0.329859 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};
		
		class Mainbackground: Life_RscText
		{
			idc = -1;

			x = 0.505153 * safezoneW + safezoneX;
			y = 0.269098 * safezoneH + safezoneY;
			w = 0.185496 * safezoneW;
			h = 0.329859 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};

		class WeaponsInformationHeader: Life_RscText
		{
			idc = -1;

			text = "Information"; //--- ToDo: Localize;
			x = 0.309352 * safezoneW + safezoneX;
			y = 0.609953 * safezoneH + safezoneY;
			w = 0.180343 * safezoneW;
			h = 0.0219906 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};

		class MainBackgroundRightInfo: Life_RscText
		{
			idc = -1;

			x = 0.309352 * safezoneW + safezoneX;
			y = 0.631944 * safezoneH + safezoneY;
			w = 0.381297 * safezoneW;
			h = 0.197916 * safezoneH;
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
			rowHeight = 0.09;
			sizeEx = 0.033; //was 0.3
			x = 0.510408 * safezoneW + safezoneX;
			y = 0.280094 * safezoneH + safezoneY;
			w = 0.17519 * safezoneW;
			h = 0.230902 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};
		class playerinvList: Life_RscListBox
		{
			idc = 38420;
			onLBSelChanged = "_this call life_fnc_weaponShopSelection";
			rowHeight = 0.09;
			sizeEx = 0.033;
			x = 0.314401 * safezoneW + safezoneX;
			y = 0.280094 * safezoneH + safezoneY;
			w = 0.180343 * safezoneW;
			h = 0.230902 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};
		class ButtonBuy: Life_RscButtonMenu
		{
			idc = 38405;
			onButtonClick = "[] spawn life_fnc_weaponShopBuy; true";

			text = "Acheter"; //--- ToDo: Localize;
			x = 0.510305 * safezoneW + safezoneX;
			y = 0.565972 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonSell: Life_RscButtonMenu
		{
			idc = 38406;
			onButtonClick = "[] call life_fnc_weaponShopSell; true";

			text = "Vendre "; //--- ToDo: Localize;
			x = 0.314504 * safezoneW + safezoneX;
			y = 0.565972 * safezoneH + safezoneY;
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
			tooltip = "Close"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		class buttonFilter: Life_RscButtonMenuIcon
		{
			idc = -1;
			
			x = 0.690781 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "[0,0] call life_fnc_weaponShopFilterShop";
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
		
		
			tooltip = "Armes principale";
			
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\primaryweapon_ca.paa";
		};
		
		class buttonFilter1: Life_RscButtonMenuIcon
		{
			idc = -1;
			x = 0.690781 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "[0,1] call life_fnc_weaponShopFilterShop";
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
		
		
			tooltip = "Armes Secondaires";
			
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";

		};
		
		
		class buttonFilter2: Life_RscButtonMenuIcon
		{
			idc = -1;
			x = 0.690781 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "[0,2] call life_fnc_weaponShopFilterShop";
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
		
		
			tooltip = "Munitions";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargomag_ca.paa";
			
		};
		class buttonFilter3: Life_RscButtonMenuIcon
		{
			idc = -1;
			x = 0.690781 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "[0,3] call life_fnc_weaponShopFilterShop";
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};
		
			tooltip = "Attachements";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		};
		class buttonFilter4: Life_RscButtonMenuIcon
		{
			idc = -1;
			x = 0.690781 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "[0,4] call life_fnc_weaponShopFilterShop";
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0.9};

			tooltip = "Autres Articles";
			
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\binoculars_ca.paa";
		};
		class itemCostLabel : Life_RscStructuredText
		{
			idc = 38407;
			text = ""; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.521991 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};
		
		class itemSaleValueLabel : Life_RscStructuredText
		{
			idc = 38408;
			text = ""; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.521991 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};

		class greyBackgroundRight: Life_RscStructuredText
		{
			idc = 38409;

			x = 0.314504 * safezoneW + safezoneX;
			y = 0.642939 * safezoneH + safezoneY;
			w = 0.180343 * safezoneW;
			h = 0.175925 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};


		// Zone Bars
		class weaponsInfomationList: Life_RscText
		{
			idc = -1;

			x = 0.510305 * safezoneW + safezoneX;
			y = 0.642939 * safezoneH + safezoneY;
			w = 0.17519 * safezoneW;
			h = 0.175925 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Frequ tir, presision, portee, impact, poids

		class freqTirProgress: Life_RscProgress
		{
			idc = 38501;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.653934 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class freqTirText: Life_RscStructuredText
		{
			idc = 38511;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.653934 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class presisionProgress: Life_RscProgress
		{
			idc = 38502;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.68692 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class presisionText: Life_RscStructuredText
		{
			idc = 38512;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.68692 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class porteProgress: Life_RscProgress
		{
			idc = 38503;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.719906 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class porteText: Life_RscStructuredText
		{
			idc = 38513;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.719906 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class impactProgress: Life_RscProgress
		{
			idc = 38504;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.752892 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class impactText: Life_RscStructuredText
		{
			idc = 38514;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.752892 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class poidProgress: Life_RscProgress
		{
			idc = 38505;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.785878 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class poidText: Life_RscStructuredText
		{
			idc = 38515;

			x = 0.515458 * safezoneW + safezoneX;
			y = 0.785878 * safezoneH + safezoneY;
			w = 0.164885 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};
