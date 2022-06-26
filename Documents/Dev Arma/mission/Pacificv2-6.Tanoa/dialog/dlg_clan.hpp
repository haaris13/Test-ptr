class Dialog_Clan {
	idd = 6400;
	name= "Dialog_Clan";
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
			idc = 6401;

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class ClanTitleInfo: Title
		{
			idc = 6402;
			style = 1;

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.237187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class ClanMemberList: Life_RscListBox
		{
			idc = 6411;
			rowHeight = 0.05;
			sizeEx = 0.038;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			onLBSelChanged = "_this call life_fnc_clanMenuLbChange;";
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

			x = 0.448438 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.273281 * safezoneW;
			h = 0.286 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};

		class InfoBarTextPlayer: Life_RscStructuredText
		{
			idc = 6412;

			x = 0.453594 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.264 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		class InfoBarTextClan: Life_RscStructuredText
		{
			idc = 6413;

			x = 0.587656 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.264 * safezoneH;
			colorBackground[] = {0.3,0.3,0.3,0.4};
		};

		// Life_RscButtonMenu
		// Life_RscCombo
		// Life_RscEdit



		class ClanLeave: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_clanLeave";
			style =2;

			idc = 6421;
			text = "<t align = 'center'>Partir</t>"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanMoneyEdit: Life_RscEdit
		{
			idc = 6422;

			text = "";
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};

		class ClanMoneyAction: Life_RscButtonMenu
		{
			onButtonClick = "[1, (ctrlText 6422)] spawn life_fnc_clanBankAction"; 
			style =2;

			idc = 6423; 
			text = "<t align = 'center'>Retirer</t>";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanKick: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_clanKick"; 
			style = 2;

			idc = 6424; 
			text = "<t align = 'center'>Virer</t>";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanPromote: Life_RscButtonMenu
		{
			idc = 6425;
			onButtonClick = "[] spawn life_fnc_clanPromote";
			style =2;

			text = "<t align = 'center'>Promouvoir</t>"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanUpgrade: Life_RscButtonMenu 
		{
			idc = 6426;
			onButtonClick = "[] spawn life_fnc_clanMenuUpgrade";
			style =2;

			text = "<t align = 'center'>Améliorer le Clan</t>"; //--- ToDo: Localize;
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanDelete: Life_RscButtonMenu
		{
			idc = 6427;
			onButtonClick = "[] spawn life_fnc_clanDelete";
			style =2;

			text = "<t align = 'center'>Dissoudre</t>"; //--- ToDo: Localize;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class ClanXPTaxe: Life_RscEdit
		{
			idc = 6428;

			text = "";
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};

		/*
		class ClanMoneyTaxe: Life_RscEdit
		{
			idc = 6429;

			text = "";
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		*/

		class ClanXPTaxeBtn : Life_RscButtonMenu //
		{
			onButtonClick = "[0] call life_fnc_clanTaxeModify";
			style =2;

			idc = 6430; 
			text = "<t align = 'center'>Valider Taxe XP</t>";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		/*
		class ClanMoneyTaxeBtn : Life_RscButtonMenu
		{
			onButtonClick = "[1] call life_fnc_clanTaxeModify";
			style =2;

			idc = 6431; 
			text = "<t align = 'center'>Valider Taxe Argent</t>";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		*/
	};
};

class Dialog_Clan_Create {
	idd = 2520;
	name= "Dialog_Clan_Create";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn {waitUntil {!isNull (findDisplay 2520)}; ((findDisplay 2520) displayCtrl 2523) ctrlSetText format[localize ""STR_Gang_PriceTxt"",[(getNumber(missionConfigFile >> 'Life_Settings' >> 'gang_price'))] call life_fnc_numberText]};";
	
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
		
			class MainBackground: Life_RscText
			{
				idc = -1;

				x = 0.340156 * safezoneW + safezoneX;
				y = 0.379 * safezoneH + safezoneY;
				w = 0.319688 * safezoneW;
				h = 0.286 * safezoneH;
				colorBackground[] = {0,0,0,0.5};
			};
	};
	
	class controls {

		class InfoMsg: Life_RscStructuredText
		{
			idc = 2523;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.0605 * safezoneH;
		};
		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Gestion du Clan"; //--- ToDo: Localize;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
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
		class GangCreateField: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_clanCreate";

			idc = 1005;
			text = "Créer"; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0644531 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class CreateGangText: Life_RscEdit
		{
			idc = 2522;

			text = "Nom du gang"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};	
	};
};
