class Dialog_Onu {
	idd = 35400;
	name= "Dialog_Onu";
	movingEnable = true;
	onLoad = "";
	
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
			idc = 35401;

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class ClanTitleInfo: Title
		{
			idc = 35402;
			style = 1;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.237187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class itemEdit: Life_RscCombo
		{
			idc = 35403;
			rowHeight = 0.1;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
			onLBSelChanged = "_this call life_fnc_onuFrontMenuComboChange;";
		};

		class DoorList: Life_RscListBox
		{
			idc = 35404;
			rowHeight = 0.05;
			sizeEx = 0.038;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			onLBSelChanged = "_this call life_fnc_onuFrontMenuChange;";
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

		class InfoBarBg: Life_RscText
		{
			idc = -1;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.286 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		class InfoBarTextDoor: Life_RscStructuredText
		{
			idc = 35405;

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.262969 * safezoneW;
			h = 0.264 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Life_RscButtonMenu
		// Life_RscCombo
		// Life_RscEdit



		class ActionDoor: Life_RscButtonMenu
		{
			onButtonClick = "['base'] spawn life_fnc_onuFrontActionDoor";
			style =2;

			idc = 35406;
			text = "<t align = 'center'>Ouvrir</t>"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanKick: Life_RscButtonMenu
		{
			onButtonClick = "['open'] spawn life_fnc_onuFrontActionDoor"; 
			style = 2;

			idc = -1; 
			text = "<t align = 'center'>Tout Ouvrir</t>";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanPromote: Life_RscButtonMenu
		{
			idc = -1;
			onButtonClick = "['close'] spawn life_fnc_onuFrontActionDoor";
			style =2;

			text = "<t align = 'center'>Tout Fermer</t>"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanUpgrade: Life_RscButtonMenu 
		{
			idc = -1;
			onButtonClick = "[] spawn life_fnc_onuFrontActionAlert";
			style =2;

			text = "<t align = 'center'>Alert</t>"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};