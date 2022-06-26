class chimieDialog_Ice {

	idd = 22000;
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";

	class controlsBackground {

		class TabletBackground: life_RscPicture
		{
			idc = -1;

			text = "textures\chimieFinal.paa"; //--- ToDo: Localize;
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
			idc = 22001;
			onLBSelChanged = "[] call life_fnc_icelbChangeLeft;";
			rowHeight = 0.09;
			sizeEx = 0.033;
			x = 0.273125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};


		class listRight: Life_RscListBox
		{
			idc = 22002;
			rowHeight = 0.09;
			sizeEx = 0.033; 
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Button Recup :

		class ButtonRecup2: Life_RscLittleButtonMenu
		{
			onButtonclick = "[] spawn life_fnc_iceActionRecupGlobal;";
			idc = 22012;
			text = "Récupérer Contenue"; //--- ToDo: Localize;
			x = 0.634062 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		// Progress :

		class Tile1ProgressBarBG: Life_RscText
		{
			idc = -1;

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.22 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};
		class Tile1ProgressBar: Life_RscProgressVertical
		{
			idc = 22021;

			x = 0.443281 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.187 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};
		class Tile1ProgressBarText: Life_RscStructuredTextMinimum
		{
			idc = 22022;

			text = "0%"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitle1: Life_RscStructuredTextMinimum
		{
			idc = 22023;

			text = "";
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitle1BG: Life_RscText
		{
			idc = -1;

			x = 0.4175 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		class TextTitleTemp1: Life_RscStructuredTextMinimum
		{
			idc = 22024;

			text = "50°C"; //--- ToDo: Localize;
			x = 0.434 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0340312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitleTemp1BG: Life_RscText
		{
			idc = -1;

			x = 0.434 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0340312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		// 2

		class Tile2ProgressBarBG: Life_RscText
		{
			idc = -1;

			x = 0.536094 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.22 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};
		class Tile2ProgressBar: Life_RscProgressVertical
		{
			idc = 22031;

			x = 0.54125 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0154689 * safezoneW;
			h = 0.187 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};
		class Tile2ProgressBarText: Life_RscStructuredTextMinimum
		{
			idc = 22032;

			text = "0%"; //--- ToDo: Localize;
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitle2: Life_RscStructuredTextMinimum
		{
			idc = 22033;

			text = "";
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitle2BG: Life_RscText
		{
			idc = -1;

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		class TextTitleTemp2: Life_RscStructuredTextMinimum
		{
			idc = 22034;

			text = "50°C"; //--- ToDo: Localize;
			x = 0.53197 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0340312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitleTemp2BG: Life_RscText
		{
			idc = -1;

			x = 0.53197 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0340312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		// Recup

		class ButtonRecup3: Life_RscLittleButtonMenu
		{
			onButtonclick = "['fiole1'] spawn life_fnc_iceActionRecupFiole";
			idc = 22041;
			text = "Récupérer Contenue"; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class ButtonRecup4: Life_RscLittleButtonMenu
		{
			onButtonclick = "['fiole2'] spawn life_fnc_iceActionRecupFiole";
			idc = 22042;
			text = "Récupérer Contenue"; //--- ToDo: Localize;
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		}; 

		// Vider

		class ButtonVider1: Life_RscLittleButtonMenu
		{
			onButtonclick = "['fiole1'] spawn life_fnc_iceActionVideFiole;";
			idc = 22051;
			text = "Vider Fiole"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class ButtonVider2: Life_RscLittleButtonMenu
		{
			onButtonclick = "['fiole2'] spawn life_fnc_iceActionVideFiole;";
			idc = 22052;
			text = "Vider Fiole"; //--- ToDo: Localize;
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		// Transférer:


		class ButtonTransf: Life_RscLittleButtonMenu
		{
			onButtonclick = "[] spawn life_fnc_iceActionButtonTransf";
			idc = 22061;
			text = "Transférer"; //--- ToDo: Localize;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class qtyEdit: Life_RscEdit 
		{
			idc = 22062;

			text = "1"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class TextQtyMl: Life_RscStructuredTextMinimum
		{
			idc = 22063;

			text = "cl"; //--- ToDo: Localize;
			x = 0.309219 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};


		// Combiner :

		class ButtonCombiner: Life_RscLittleButtonMenu
		{
			onButtonclick = "[] spawn life_fnc_iceActionFusion;";
			idc = 22064;

			text = "Combiner les Fioles";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};


		// Selection :

		class FioleCheck1 : Life_Checkbox
		{
			idc = 22071;

			tooltip = "Selection Fiole 1";
			x = 0.416469 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			sizeEx = 0.04;
			onCheckedChanged = "['fiole1',_this select 1] call life_fnc_iceCheckFiole;";
		};

		class FioleCheck2 : Life_Checkbox
		{

			idc = 22072;
			tooltip = "Selection Fiole 2";
			x = 0.571756 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			sizeEx = 0.04;
			onCheckedChanged = "['fiole2',_this select 1] call life_fnc_iceCheckFiole;";
		};
	};
};