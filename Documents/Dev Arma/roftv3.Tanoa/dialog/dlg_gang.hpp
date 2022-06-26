class Life_My_Gang_Diag {
	idd = 2620;
	name= "life_my_gang_menu";
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
			idc = 2629;

			x = 0.283437 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class GangMemberList: Life_RscListBox
		{
			idc = 2621;
			rowHeight = 0.1;
			sizeEx = 0.03;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.211406 * safezoneW;
			h = 0.462 * safezoneH;
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
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};

		class GangLeave: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_gangLeave";

			idc = 1005;
			text = "Partir"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class GangLock: Life_RscButtonMenu
		{
			idc = 2622;
			onButtonClick = "[] spawn life_fnc_gangUpgrade";

			text = "Upgrade Slots"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class GangKick: Life_RscButtonMenu
		{
			idc = 2624;
			onButtonClick = "[] call life_fnc_gangKick";

			text = "Kick"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class GangLeader: Life_RscButtonMenu
		{
			idc = 2625;
			onButtonClick = "[] spawn life_fnc_gangNewLeader";

			text = "Set Leader"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class InviteMember: GangLeader
		{
			idc = 2630;
			onButtonClick = "[0] spawn life_fnc_gangInvitePlayer";

			text = "Invite Player"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class DisbandGang: InviteMember
		{
			idc = 2631;
			onButtonClick = "[] spawn life_fnc_gangDisband";

			text = "Dissoudre Gang"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class ColorList: Life_RscCombo
		{
			idc = 2632;

			x = 0.515469 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class GangBank: Title
		{
			idc = 601;
			style = 1;

			x = 0.422656 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class withdrawEdit : Life_RscEdit
		{
			idc = 2633;
			text = "";
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class withdrawButton : Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_gangWithdraw";
			idc = 2634;
			text = "Retirer";
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.315778 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};

class Life_Create_Gang_Diag {
	idd = 2520;
	name= "life_my_gang_menu_create";
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

			text = "Gestion du Gang"; //--- ToDo: Localize;
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
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
		class GangCreateField: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_createGang";

			idc = 1005;
			text = "Crée"; //--- ToDo: Localize;
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
