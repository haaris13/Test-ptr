class Life_Vehicle_Shop_v2
{
	idd = 2300;
	movingEnabled = 0;
	enableSimulation = 1;
	onLoad = "ctrlShow [2330,false];";
	
	class controlsBackground
	{
		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			text = "Concessionnaire"; //--- ToDo: Localize;
			x = 0.00534484 * safezoneW + safezoneX;
			y = 0.038197 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class VehicleInfoHeader: Life_RscText
		{
			idc = -1;

			text = "Information"; //--- ToDo: Localize;
			x = 0.00534484 * safezoneW + safezoneX;
			y = 0.401042 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class MainBackground: Life_RscText
		{
			idc = -1;

			x = 0.00534484 * safezoneW + safezoneX;
			y = 0.0601876 * safezoneH + safezoneY;
			w = 0.180343 * safezoneW;
			h = 0.329859 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
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
		class yolobarBG: Life_RscText
		{
			idc = -1;

			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.554977 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.143 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
	};
	
	class controls
	{
	
		
		class CloseBtn: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = 0.185688 * safezoneW + safezoneX;
			y = 0.038197 * safezoneH + safezoneY;
			w = 0.0133854 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};

/*
		
		class RentCar: Life_RscButtonMenu
		{
			onButtonClick = "[false] spawn life_fnc_vehicleShopBuy;";

			idc = 2308;
			text = "Louer"; //--- ToDo: Localize;
			x = 0.113551 * safezoneW + safezoneX;
			y = 0.357061 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

*/

		class BuyCar: Life_RscButtonMenu
		{
			onButtonClick = "[true] spawn life_fnc_vehicleShopBuy;";

			idc = 2309;
			text = "Acheter"; //--- ToDo: Localize;
			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.357061 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class VehicleList: Life_RscListBox
		{
			idc = 2302;
			onLBSelChanged = "_this call life_fnc_vehicleShopLBChange";
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.0711829 * safezoneH + safezoneY;
			w = 0.170038 * safezoneW;
			h = 0.252892 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class ColorList: Life_RscCombo
		{
			idc = 2304;
			onLBSelChanged = "_this call life_fnc_vehicleShopLBColorChange";

			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.324075 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.0220001 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};


		class vehicleInfomationList: Life_RscStructuredText
		{
			idc = 2303;

			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.434028 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.11 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class maxSpeedProgress : Life_RscProgress
		{
			idc = 2310;
			text = ""; //--- ToDo: Localize;
			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.565972 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class fuelCapacityProgress : Life_RscProgress
		{
			idc = 2312;
			text = ""; //--- ToDo: Localize;
			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.598958 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class trunkCapacityProgress : Life_RscProgress
		{
			idc = 2314;
			text = ""; //--- ToDo: Localize;
			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.631944 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class armorRatingProgress : Life_RscProgress
		{
			idc = 2316;
			text = ""; //--- ToDo: Localize;
			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.66493 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class maxSpeedText: Life_RscStructuredText
		{
			idc = 2311;

			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.565972 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class fuelCapText: Life_RscStructuredText
		{
			idc = 2313;

			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.598958 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class trunkCapText: Life_RscStructuredText
		{
			idc = 2315;

			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.631944 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class armorRatingText: Life_RscStructuredText
		{
			idc = 2317;

			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.66493 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
	};
};