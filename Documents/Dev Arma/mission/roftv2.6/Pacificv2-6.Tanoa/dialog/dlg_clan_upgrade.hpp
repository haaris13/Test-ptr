class Dialog_Clan_Upgrade
{
	idd = 6500;
	movingEnabled = 0;
	enableSimulation = 1;
	
	class controlsBackground
	{
		
		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			text = "Amélioration Clan"; //--- ToDo: Localize;
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
		class ClanInformationHeader: Life_RscText
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
			h = 0.209 * safezoneH;
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

		class ValidUpgrade: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_clanMenuUpgradeAction;";

			idc = 6501;
			text = "Améliorer"; //--- ToDo: Localize;
			x = 0.415953 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class upgradeList: Life_RscListBox
		{
			idc = 6502;
			onLBSelChanged = "_this call life_fnc_clanMenuUpgradeLbChange;";
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
			idc = 6503;

			text = ""; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.0366667 * safezoneH;
		};
		
		class upgradeInfomationList: Life_RscStructuredText
		{
			idc = 6504;

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.187 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
	};
};
