class Dialog_House_Upgrade
{
	idd = 16100;

	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{
		class RscTitleBackground: Life_RscText
		{
			idc = -1;

			text = "Choix d'Amélioration"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class MainBackGround: Life_RscText
		{
			idc = -1;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
		};

	};
	
	class Controls
	{

		class priceInfo: Life_RscStructuredText
		{
			idc = 16102;

			x = 0.407187 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
		class list: Life_RscListBox
		{
			idc = 16101;
			onLBSelChanged = "_this call life_fnc_houseUpgradeLbChange";
			rowHeight = 0.09;
			sizeEx = 0.033; //was 0.3
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};
		class ButtonAction: Life_RscButtonMenu
		{
			onButtonclick = "[] spawn life_fnc_houseUpgradeValid;";
			idc = 16103;

			text = "Valider"; //--- ToDo: Localize;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0644531 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class BtnClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; //--- ToDo: Localize;
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0134375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
				
	};
};