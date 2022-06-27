#define BGX 0.35
#define BGY 0.2
#define BGW 0.3

class Narcos_Interaction
{
	idd = 37600;
	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{
		class Title: Life_RscTitle
		{
			idc = 37501;
			
			text = "Cagnote";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0.1,0.1,0.1,1};
		};

	};
	
	class controls
	{
		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";
			
			idc = 37602;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		class ButtonOne: Life_RscButtonMenu
		{
			idc = 37650;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};

		class ButtonTwo: Life_RscButtonMenu
		{
			idc = 37651;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonThree: Life_RscButtonMenu
		{
			idc = 37652;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonFour: Life_RscButtonMenu
		{
			idc = 37653;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonFive: Life_RscButtonMenu
		{
			idc = 37654;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonSix: Life_RscButtonMenu
		{
			idc = 37655;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonSeven: Life_RscButtonMenu
		{
			idc = 37656;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonEight: Life_RscButtonMenu
		{
			idc = 37657;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonNine: Life_RscButtonMenu
		{
			idc = 37658;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
		class ButtonTen: Life_RscButtonMenu
		{
			idc = 37659;
			
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.9};
		};
	};
};