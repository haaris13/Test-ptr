class Life_Dialog_Furnace
{

	idd = 23000;
	name= "Life_Dialog_Furnace";
	movingEnabled = 0;
	enableSimulation = 1;
	onLoad = "";

	class controlsBackground {

		class TabletBackground: life_RscPicture
		{
			idc = -1;

			text = "textures\furnace.paa"; //--- ToDo: Localize;
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};

	class controls {

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
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		// -------------------------------------------- 

		// List

		class listleft: Life_RscListBox 
		{
			idc = 23001;
			rowHeight = 0.09;
			sizeEx = 0.033;
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.451 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};


		class listRight: Life_RscListBox
		{
			idc = 23002;
			rowHeight = 0.09;
			sizeEx = 0.033; 
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.451 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Button deposer :

		class ButtonDeposer: Life_RscLittleButtonMenu
		{
			onButtonclick = "[] spawn life_fnc_furnaceActionDrop;";
			idc = 23011;
			text = "Déposer";
			x = 0.398937 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0598126 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class ButtonRecup: Life_RscLittleButtonMenu
		{
			onButtonclick = "[] call life_fnc_furnaceActionTake;";
			idc = 23012;
			text = "Récupérer";
			x = 0.539187 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};


		// Zone Furnace : 

		class TextTitle1: Life_RscStructuredTextMinimum
		{
			idc = 23003;

			text = "";
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.066 * safezoneH;
			colorBackground[] = {0,0,0,0};
			tooltip = "Fermer1";
		};

		class TextTitleTemp1: Life_RscStructuredTextMinimum
		{
			idc = 23004;

			text = "0°C"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitleTemp1BG: Life_RscText
		{
			idc = -1;

			x = 0.474219 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		// Transférer:


		class ButtonTransf: Life_RscLittleButtonMenu
		{
			onButtonclick = "[] spawn life_fnc_furnaceActionTemp;";
			idc = 23021;
			text = "Chauffer"; //--- ToDo: Localize;
			x = 0.511344 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class qtyEdit: Life_RscEdit 
		{
			idc = 23022;

			text = ""; //--- ToDo: Localize;
			x = 0.454625 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0350625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class TextQtyC: Life_RscStructuredTextMinimum
		{
			idc = 23023;

			text = "°C"; //--- ToDo: Localize;
			x = 0.490719 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitleEditTemp: Life_RscText 
		{
			idc = -1;

			x = 0.449469 * safezoneW + safezoneX;
			y = 0.6606 * safezoneH + safezoneY;
			w = 0.102094 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};
	};
};