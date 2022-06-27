class Life_Vehicle_Fourriere
{
	idd = 29100;
	movingEnabled = 0;
	enableSimulation = 1;
	
	class controlsBackground
	{
		
		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			text = "Fourrière";
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

			text = "Informations"; //--- ToDo: Localize;
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
			tooltip = "$STR_Global_Close";
		};
		class GetVehicle: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_fourriereGetVeh; closeDialog 0;";

			idc = 29101;
			text = "Sortir"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.05 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class VehicleList: Life_RscListBox
		{
			idc = 29102;
			onLBSelChanged = "_this call life_fnc_fourriereLBChange;";
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
			idc = 29125;

			text = ""; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.0366667 * safezoneH;
		};
		
		class vehicleInfomationList: Life_RscStructuredText
		{
			idc = 29103;

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.289 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
	};
};
