class Dialog_Clan_Veh_List
{
	idd = 6900;
	movingEnabled = 0;
	enableSimulation = 1;
	
	class controlsBackground
	{
		
		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			text = "Garage de Clan"; //--- ToDo: Localize;
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
		class RetrieveVehicle: Life_RscButtonMenu
		{
			onButtonClick = "[1] call life_fnc_clanVehicleTakeMenuAction;";

			idc = -1;
			text = "Sortir"; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0644531 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class RemoveVehicle: Life_RscButtonMenu
		{
			onButtonClick = "[0] call life_fnc_clanVehicleTakeMenuAction;";

			idc = 6904;
			text = "Retirer"; //--- ToDo: Localize;
			x = 0.431422 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class VehicleList: Life_RscListBox
		{
			idc = 6902;
			onLBSelChanged = "_this call life_fnc_clanVehicleTakeMenuLb;";
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
			idc = -1;

			text = ""; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.0366667 * safezoneH;
		};
		
		class vehicleInfomationList: Life_RscStructuredText
		{
			idc = 6903;

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
		class maxSpeedProgress: Life_RscProgress
		{
			idc = 6910;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class fuelCapacityProgress: Life_RscProgress
		{
			idc = 6912;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class trunkCapacityProgress: Life_RscProgress
		{
			idc = 6914;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class armorRatingProgress: Life_RscProgress
		{
			idc = 6916;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,1};
		};
		class maxSpeedText: Life_RscStructuredText
		{
			idc = 6911;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class fuelCapText: Life_RscStructuredText
		{
			idc = 6913;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class trunkCapText: Life_RscStructuredText
		{
			idc = 6915;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class armorRatingText: Life_RscStructuredText
		{
			idc = 6917;

			x = 0.520625 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.159844 * safezoneW;
			h = 0.022 * safezoneH;
		};

	};
};
