class Life_pub {
	idd = 9000;
	name= "life_pub";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_pub";
	
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

			text = "Volcan Telecom"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class LocationText: Life_RscText
		{
			idc = 9002;

			text = "Mode Inconnu:"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class includeLocationBox : Life_Checkbox
		{
			idc = 9050;

			x = 0.360469 * safezoneW + safezoneX;
			y = 0.293 * safezoneH + safezoneY; //was 90
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Envoyer en mode Inconnu"; //--- ToDo: Localize;
		};


		class TextToSend: Life_RscTitle
		{
			idc = 9002;

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
			idc = 9003;
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
			onButtonClick = "[] call life_fnc_pub_send;";
			style = 2;

			text = "<t align = 'center' size = '0.85' >Envoyer</t>"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.033 * safezoneH;
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
			idc = 9004;
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
			idc = 9002;

			text = "Envoyer a:"; //--- ToDo: Localize;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.7};
		};		
		class searchBox : Life_RscEdit
		{
			idc = 9005;
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
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};