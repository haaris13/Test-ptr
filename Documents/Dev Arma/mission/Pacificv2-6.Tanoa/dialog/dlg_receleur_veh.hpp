class Receleur_Veh
{
	idd = 72400;
	name = "Receleur_Veh";
	movingEnabled = 1;
	enableSimulation = 1;
	
	class controlsBackground
	{
		class TabletBackground: life_RscPicture
		{
			idc = -1;

			text = "textures\tabletbg.paa"; //--- ToDo: Localize;
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};
	
	class controls
	{

		class RscTitleBackground: Life_RscText
		{
			idc = -1;

			text = "Retirer Plaque d'Immatriculation"; //--- ToDo: Localize;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MainBackGround: Life_RscText
		{
			idc = -1;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.429 * safezoneH;
		};
		class priceInfo: Life_RscStructuredText
		{
			idc = 72401;

			x = 0.407187 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class vehicleList: Life_RscListBox
		{
			idc = 72402;
			onLBSelChanged = "_this call life_fnc_receleurVehSelection";
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class BtnSell: Life_RscButtonMenu
		{
			onButtonclick = "[] call life_fnc_receleurRemoveAction;";

			idc = 72403;
			text = "Retirer"; //--- ToDo: Localize;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0644531 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class CloseButtonKey: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";
			idc = -1;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};