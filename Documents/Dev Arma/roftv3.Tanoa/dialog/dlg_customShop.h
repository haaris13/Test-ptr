class Life_Vehicle_Custom
{
	idd = 16200;
	movingEnabled = 0;
	enableSimulation = 1;
	onLoad = "";
	
	class controlsBackground
	{
		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			text = "Amélioration"; //--- ToDo: Localize;
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

		class CustomBackground: Life_RscText
		{
			idc = 16208;

			x = 0.855533 * safezoneW + safezoneX;
			y = 0.0821782 * safezoneH + safezoneY;
			w = 0.133969 * safezoneW;
			h = 0.230902 * safezoneH;
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

		class TitleAnim: Life_RscTitle
		{
			idc = 16201;

			text = "Custom";
			x = 0.85562 * safezoneW + safezoneX;
			y = 0.0601876 * safezoneH + safezoneY;
			w = 0.133969 * safezoneW;
			h = 0.0219906 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};
	
	class controls
	{
	
		
		class CloseBtn: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			x = 0.185688 * safezoneW + safezoneX;
			y = 0.038197 * safezoneH + safezoneY;
			w = 0.0133854 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};

		class ValidCustom: Life_RscButtonMenu
		{
			onButtonClick = "[true] spawn life_fnc_validMenuCustom;";

			idc = 16209;
			text = "Valider"; //--- ToDo: Localize;
			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.357061 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class VehicleList: Life_RscListBox
		{
			idc = 16202;
			onLBSelChanged = "_this call life_fnc_lbChangeMenuCustom";
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
			idc = 16204;
			onLBSelChanged = "_this call life_fnc_lbcolorMenuCustom";

			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.324075 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.0220001 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};


		class vehicleInfomationList: Life_RscStructuredText
		{
			idc = 16203;

			x = 0.0104975 * safezoneW + safezoneX;
			y = 0.434028 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.11 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class maxSpeedProgress : Life_RscProgress
		{
			idc = 16210;
			text = ""; //--- ToDo: Localize;
			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.565972 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class fuelCapacityProgress : Life_RscProgress
		{
			idc = 16211;
			text = ""; //--- ToDo: Localize;
			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.598958 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class trunkCapacityProgress : Life_RscProgress
		{
			idc = 16212;
			text = ""; //--- ToDo: Localize;
			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.631944 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class armorRatingProgress : Life_RscProgress
		{
			idc = 16213;
			text = ""; //--- ToDo: Localize;
			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.66493 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};

		class maxSpeedText: Life_RscStructuredText
		{
			idc = 16220;

			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.565972 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class fuelCapText: Life_RscStructuredText
		{
			idc = 16221;

			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.598958 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class trunkCapText: Life_RscStructuredText
		{
			idc = 16222;

			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.631944 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class armorRatingText: Life_RscStructuredText
		{
			idc = 16223;

			x = 0.0156501 * safezoneW + safezoneX;
			y = 0.66493 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};

		// Anims ******************

		class AnimList: Life_RscListBox
		{
			idc = 16224;
			onLBSelChanged = "_this call life_fnc_lbAnimateCustom";
			rowHeight = 0.035;
			sizeEx = 0.03;
			x = 0.860686 * safezoneW + safezoneX;
			y = 0.0931735 * safezoneH + safezoneY;
			w = 0.123664 * safezoneW;
			h = 0.175925 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class totalPriceText: Life_RscStructuredText
		{
			idc = 16225;

			x = 0.077482 * safezoneW + safezoneX;
			y = 0.357061 * safezoneH + safezoneY;
			w = 0.103053 * safezoneW;
			h = 0.0219906 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class animPriceText: Life_RscStructuredText
		{
			idc = 16226;

			x = 0.860686 * safezoneW + safezoneX;
			y = 0.280094 * safezoneH + safezoneY;
			w = 0.123664 * safezoneW;
			h = 0.0219906 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
	};
};