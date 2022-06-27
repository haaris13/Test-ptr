class Dialog_Phone_Contacts {
	idd = 24200;
	name= "Dialog_Phone_Contacts";
	movingEnable = false;
	enableSimulation = true;
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
			idc = 24201;

			text = "Contacts";

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.234 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class ContactList: Life_RscListBox
		{
			idc = 24202;
			rowHeight = 0.05;
			sizeEx = 0.038;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.174687 * safezoneW;
			h = 0.429 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			onLBSelChanged = "_this call life_fnc_phoneContactListLbChange;";
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

		class InfoBarBg: Life_RscText
		{
			idc = -1;

			x = 0.468438 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.253281 * safezoneW;
			h = 0.286 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		class InfoBarTextPlayer: Life_RscStructuredText
		{
			idc = 24203;

			x = 0.473594 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.242906 * safezoneW;
			h = 0.264 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Life_RscButtonMenu
		// Life_RscCombo
		// Life_RscEdit

		class RemoveButton: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_phoneContactDeleteAction;";
			style =2;

			idc = 24204;

			text = "<t align = 'center'>Supprimer</t>"; //--- ToDo: Localize;
			x = 0.3863 * safezoneW + safezoneX;
			y = 0.699 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class AddBg: Life_RscText
		{
			idc = -1;

			x = 0.468438 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.1721875 * safezoneW;
			h = 0.186 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		class AddTitleInfo: Title
		{
			idc = 24205;
			style = 1;
			text = "Ajouter un contact";
			x = 0.488438 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.088 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class NameContactEdit: Life_RscEdit
		{
			idc = 24206;

			text = "";
			x = 0.488438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.1321875 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Nom";
		};

		class NumberContactEdit: Life_RscEdit
		{
			idc = 24207;

			text = "";
			x = 0.488438 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.1321875 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = "Numéro";
		};

		class AddContactBtn : Life_RscButtonMenu //
		{
			onButtonClick = "[] call life_fnc_phoneContactCreateAction";
			style = 2;

			idc = 24208; 
			text = "<t align = 'center'>Ajouter</t>";
			x = 0.488438 * safezoneW + safezoneX;
			y = 0.693 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};