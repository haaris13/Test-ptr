class Dialog_paper_create {
	idd = 8400;
	name= "Dialog_paper_create";
	movingEnable = false;
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

		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Ecrire"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class TitleText: Life_RscText
		{
			idc = -1;

			text = "Titre:"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class LocationText: Life_RscText
		{
			idc = -1;

			text = "Signer:"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.242344 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class includeSignBox : Life_Checkbox
		{
			idc = 8406;

			x = 0.319531 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY; //was 90
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Ajouter une Signature"; //--- ToDo: Localize;
		};

		class textEdit: Life_RscEditLarge
		{
			idc = 8401;
			text = "";
			colorBackground[] = {0,0,0,0.3};
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.422812 * safezoneW;
			h = 0.374 * safezoneH;
		};

		class SendMessage: Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "[] spawn life_fnc_papierMenuCreateAction;";
			style = 2;

			text = "<t align = 'center' size = '0.85' >Créer</t>"; //--- ToDo: Localize;
			x = 0.608281 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	
		class RscText_1013: Life_RscText
		{
			idc = -1;

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.422812 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class searchBox : Life_RscEdit
		{
			idc = 8402;
			text = "";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
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