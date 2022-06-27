
class dlg_phone_new_messages {

	idd = 24400;
	movingEnable = true;
	enableSimulation = true;
	
	class controlsBackground {
		
		class TabletBackground: Life_RscPicture
		{
			idc = -1;
			text = "textures\tabletbg.paa";
				x = 0.2525 * safezoneW + safezoneX;
				y = 0.06 * safezoneH + safezoneY;
				w = 0.495 * safezoneW;
				h = 0.858 * safezoneH;
		};
	};
	
	class controls {

		class TitleConv: Life_RscTitle
		{
			idc = -1;

			text = "Nouvelle conversation"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class ConvBg: Life_RscText
		{
			idc = -1;

			x = 0.278075 * safezoneW + safezoneX;
			y = 0.26702 * safezoneH + safezoneY;
			w = 0.443438 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0,0,0,0.3};
		};

		class selectionContact : Life_RscCombo
		{
			idc = 24401;
			rowHeight = 0.1;

			onLBSelChanged = "_this call life_fnc_phoneMessageNewMenuLbContactChange;";

			x = 0.340156 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class NumberEdit: Life_RscEdit
		{
			idc = 24402;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			text = "";
			colorBackground[] = {-1,-1,-1,-1};
		};


		class SelectionTitle: Life_RscText
		{
			idc = 24403;
			style = 1;

			text = "Selection"; //--- ToDo: Localize;
			x = 0.335 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		
		class NumberTitle: Life_RscText
		{
			idc = 24404;
			style = 1;

			text = "Numéro:"; //--- ToDo: Localize;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class SendMessageTitleInfo: Life_RscTitle
		{
			idc = 24405;
			style = 1;
			text = "Envoyer un message";
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class SendMessageEdit: Life_RscEditLarge
		{
			idc = 24406;

			text = "";
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.309375 * safezoneW;
			h = 0.187 * safezoneH;
			tooltip = "Message";
		};

		class SendMessageButton : Life_RscButtonMenu //
		{
			onButtonClick = "[] call life_fnc_phoneMessageNewMenuSendAction";
			style =2;

			idc = 24407;
			text = "<t align = 'center'>Envoyer</t>";
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.0280001 * safezoneH;
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