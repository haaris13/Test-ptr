class Life_impound_menu
{
	idd = 2800;
	movingEnabled = 0;
	enableSimulation = 1;
	onLoad = "['Action','Garage',false] spawn life_fnc_showHelp;";
	
	class controlsBackground
	{
		
		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			text = "Garage"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class MainBackgroundLeft: Life_RscText
		{
			idc = -1;

			x = 0.314375 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.429 * safezoneH;
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
			h = 0.429 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};

	};
	class controls
	{
		
		class CloseBtn: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; //--- ToDo: Localize;
			x = 0.675312 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "Fermer"; //--- ToDo: Localize;
		};
		class RetrieveVehicle: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_unimpound;";

			idc = -1;
			text = "Récupérer"; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0644531 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		/*class SellVehicle: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_sellGarage; closeDialog 0;";

			idc = -1;
			text = "Vendre"; //--- ToDo: Localize;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};*/
		/*class AssurerVehicle: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_assureVeh; closeDialog 0;";

			idc = 2801;
			text = "Assurer"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};*/
		class VehicleList: Life_RscListBox
		{
			idc = 2802;
			onLBSelChanged = "_this call life_fnc_garageLBChange;";
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
		
		class MainHideText: Life_RscText
		{
			idc = 2825;

			text = ""; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.0366667 * safezoneH;
		};
		
		class vehicleInfomationList: Life_RscStructuredText
		{
			idc = 2803;
			sizeEx = 0.5;
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

		class greyBackgroundRight1: Life_RscStructuredText
		{
			idc = 2804;
			sizeEx = 0.5;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.600 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.143 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
		class maxSpeedProgress: Life_RscProgress
		{
			idc = 2810;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class fuelCapacityProgress: Life_RscProgress
		{
			idc = 2812;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class trunkCapacityProgress: Life_RscProgress
		{
			idc = 2814;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class armorRatingProgress: Life_RscProgress
		{
			idc = 2816;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class maxSpeedText: Life_RscStructuredText
		{
			idc = 2811;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
	
		};
		class fuelCapText: Life_RscStructuredText
		{
			idc = 2813;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class trunkCapText: Life_RscStructuredText
		{
			idc = 2815;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class armorRatingText: Life_RscStructuredText
		{
			idc = 2817;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};
