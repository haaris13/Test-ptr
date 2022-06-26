class Life_cell_phone {
	idd = 3000;
	name= "life_cell_phone";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_cellphone";
	
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

		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Menu Principale"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class LocationText: Life_RscText
		{
			idc = 3002;

			text = "Ajouter Position:"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class includeLocationBox : Life_Checkbox
		{
			idc = 3050;

			x = 0.360469 * safezoneW + safezoneX;
			y = 0.293 * safezoneH + safezoneY; //was 90
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Indiquez votre emplacement avec le message."; //--- ToDo: Localize;
		};


		class TextToSend: Life_RscTitle
		{
			idc = 3002;

			text = "Message à envoyer:"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.7};
		};
		class textEdit: Life_RscEditLarge
		{
			idc = 3003;
			text = "";
			colorBackground[] = {0,0,0,0.3};
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.396 * safezoneH;
		

		};
		class SendMessage: Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "[] call life_fnc_cellphone_send;";
			style = 2;

			text = "<t align = 'center' size = '0.85' >Envoyer</t>"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class YourInbox: Life_RscButtonMenu
		{
			idc = -1;
			style = 2;
			onButtonClick = "[] call life_fnc_cellphone_inbox";
			text = "<t align = 'center' size = '0.85' >Réception</t>"; //--- ToDo: Localize;
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class AdminMsgButton: Life_RscButtonMenu
		{
			idc = 3020;
			onButtonClick = "[] call TON_fnc_cell_adminmsg";
			style = 2;

			text = "<t color='#ff0000' align = 'center' size = '0.85' >Joueur</t>"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0752812 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class AdminMsgAllButton: Life_RscButtonMenu
		{
			idc = 3021;
			onButtonClick = "[] call TON_fnc_cell_adminmsgall";
			style = 2;

			text = "<t color='#ff0000' align = 'center' size = '0.85' >Serveur</t>"; //--- ToDo: Localize;
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0752812 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	
		class RscText_1013: Life_RscText
		{
			idc = -1;

				x = 0.283437 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.396 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class SendList: Life_RscListbox
		{
			idc = 3004;
			sizeEx = 0.038;
			text = ""; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.352 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class SendingTo: Life_RscTitle
		{
			idc = 3002;

			text = "Envoyer à:"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.7};
		};		
		class searchBox : Life_RscEdit
		{
			idc = 3005;
			text = "";
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.7};
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