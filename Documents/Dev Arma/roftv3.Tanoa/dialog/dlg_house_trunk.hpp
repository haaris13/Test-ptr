class Dialog_HouseTrunkMenu
{
	idd = 3700;
	name = "Dialog_HouseTrunkMenu";
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground
	{
	
		class RscBackgroundLeft: Life_RscText
		{
			idc = -1;

			x = 0.304062 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.495 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};

		class RscBackgroundRight: Life_RscText
		{
			idc = -1;

			x = 0.505156 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.495 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};

		class YourInvHeader: Life_RscTitle
		{
			idc = -1;

			text = "Votre Inventaire"; //--- ToDo: Localize;
			x = 0.304062 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class vehicleTrunkText: Life_RscText
		{
			idc = 3701;

			text = "Coffre"; //--- ToDo: Localize;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.190781 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};

	class Controls
	{

		class filterCombo : Life_RscCombo
		{
			idc = 3709;
			rowHeight = 0.1;
			onLBSelChanged = "[] call life_fnc_houseInvUpdate;";

			
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
			
		class VehicleWeight: Life_RscTitle
		{
			idc = 3704;
			style = 1;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class TrunkGear: Life_RscListBox
		{
			onLBSelChanged = "[1] call life_fnc_houseInvMenuLBChange;";
			idc = 3702;
				rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.407 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
		class PlayerGear: Life_RscListBox
		{
			onLBSelChanged = "[0] call life_fnc_houseInvMenuLBChange;";
			idc = 3703;
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.44 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
		class TrunkEdit: Life_RscEdit
		{
			idc = 3705;

			text = "1"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class PlayerEdit: Life_RscEdit
		{
			idc = 3706;

			text = "1"; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class TakeItem: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_houseInvTakeItem;";

			idc = -1;
			text = "Prendre"; //--- ToDo: Localize;
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class StoreItem: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_houseInvStoreItem;";

			idc = -1;
			text = "Déposer"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};

		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			x = 0.695937 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0129167 * safezoneW;
			h = 0.022926 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};