class Life_Dialog_FluidCargo
{

	idd = 26000;
	name= "Life_Dialog_FluidCargo";
	movingEnabled = 0;
	enableSimulation = 1;
	onLoad = "if(sunOrMoon < 0.2)then{((_this select 0) displayCtrl 26020) ctrlSetText 'textures\tablet_dark.paa';};";

	class controlsBackground {

		class TabletBackground: life_RscPicture
		{
			idc = 26020;

			text = "textures\tablet_light.paa";
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};

	class controls {

		class CloseButtonKey: HiddenButton
		{
			onButtonClick = "closeDialog 0;";
			idc = -1;
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.0175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			tooltip = "Fermer";
			text = "";
		};

		// -------------------------------------------- 

		class ProgressBar : Life_RscProgressVertical
		{
			idc = 26001;
			x = 0.312312 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW; h = 0.418 * safezoneH;
		};

		class TextTypeFluid: Life_RscStructuredTextMinimum
		{
			idc = 26002;

			text = ""; //--- ToDo: Localize;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0917811 * safezoneW;
			h = 0.0198 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextTitleTypeFluid: Life_RscText
		{
			idc = -1;

			x = 0.386562 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		// Zone Info:

		class TextTitleInfoFluid: Life_RscText 
		{
			idc = -1;

			x = 0.365937 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.121 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		class TextInfoFluid1: Life_RscStructuredTextMinimum
		{
			idc = -1;

			text = "Volume du réservoir:"; //--- ToDo: Localize;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0917811 * safezoneW;
			h = 0.0198 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextInfoFluid1Result: Life_RscStructuredTextMinimum
		{
			idc = 26003;

			text = "3.000L"; //--- ToDo: Localize;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextInfoFluid2: Life_RscStructuredTextMinimum
		{
			idc = -1;

			text = "Volume de remplissage:"; //--- ToDo: Localize;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0917811 * safezoneW;
			h = 0.0198 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class TextInfoFluid2Result: Life_RscStructuredTextMinimum
		{
			idc = 26004;

			text = "2.100L"; //--- ToDo: Localize;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
		// *******************************************************		

		class listRight: Life_RscListBox
		{
			idc = 26005;
			rowHeight = 0.06;
			sizeEx = 0.03; 
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.179437 * safezoneW;
			h = 0.385 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class qtyEdit: Life_RscEdit 
		{
			idc = 26008;

			text = "1"; //--- ToDo: Localize;
			x = 0.634062 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class qtyText: Life_RscStructuredTextMinimum 
		{
			idc = -1;

			text = "L"; //--- ToDo: Localize;
			x = 0.670156 * safezoneW + safezoneX;
			y = 0.2976 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ButtonTrans: Life_RscLittleButtonMenu
		{
			onButtonclick = "[] spawn life_fnc_fluidRefuelVehAction";
			idc = 26006;
			text = "<t align='center'>Transférer vers:</t>";
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};

		class ButtonVider: Life_RscLittleButtonMenu
		{
			onButtonclick = "[] spawn life_fnc_fluidVehEmpty";
			idc = 26007;
			text = "<t align='center' font='PuristaBold'>Vider</t>";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
	};
};