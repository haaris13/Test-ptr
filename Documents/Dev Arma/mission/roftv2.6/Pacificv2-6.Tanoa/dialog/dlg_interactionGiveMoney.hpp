class interactionGiveMoney
{
	idd = 15600;

	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{

		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;
			text = "Donner de l'argent";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class MainBackground: Life_RscText
		{
			idc = -1;

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};

	};
	
	class Controls
	{	


		class Closep: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		class GiveMoney: Life_RscButtonMenu
		{
			onButtonClick = "['give', life_pInact_curTarget] call life_fnc_giveMoney;";
			text = "Donner";
			idc = -1;
			x = 0.461823 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class MoneyEditBox: Life_RscEdit
		{
			idc = 15601;
			text = 1;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};


	};
};
