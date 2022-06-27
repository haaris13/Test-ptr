class Ice_Container
{
	idd = 22100;
	name = "Ice_Container";
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
		class containerText: Life_RscText
		{
			idc = 22101;

			text = ""; //--- ToDo: Localize;
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

		class TrunkGear: Life_RscListBox
		{
			idc = 22102;
				rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.44 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
		class PlayerGear: Life_RscListBox
		{
			idc = 22103;
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
			idc = 22105;

			text = "1"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class PlayerEdit: Life_RscEdit
		{
			idc = 22106;

			text = "1"; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class TakeItem: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_iceContainerTake;";

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
			onButtonClick = "[] call life_fnc_iceContainerDrop;";

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
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};