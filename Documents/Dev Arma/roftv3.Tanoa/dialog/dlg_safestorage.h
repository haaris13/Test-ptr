class SafeStorage
{
	idd = 3500;
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground
	{
		class RscBackground: Life_RscText
		{
			idc = -1;

			x = 0.335 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.297 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscTitleText: Life_RscTitle
		{
			idc = 3501;

			x = 0.335 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			text = "Inventaire sécurisé";
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};
	};
	
	class Controls
	{
		class TrunkGear: Life_RscListBox
		{
			idc = 3502;
			rowHeight = 0.09;
			sizeEx = 0.033; //was 0.3
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.253 * safezoneH;
			colorBackground[] = {0.4,0.4,0.4,0.3};
		};
		class TrunkEdit: Life_RscEdit
		{
			idc = 3505;

			text = "1"; //--- ToDo: Localize;
			x = 0.407188 * safezoneW + safezoneX;
			y = 0.627482 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class TakeItem: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_safeTake;";

			idc = -1;
			text = "Prendre"; //--- ToDo: Localize;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.626556 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};
		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			x = 0.455157 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0139063 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};