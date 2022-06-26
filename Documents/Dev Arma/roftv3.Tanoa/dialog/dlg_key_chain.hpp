class Life_key_management {
	idd = 2700;
	name= "life_key_chain";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_keyMenu;";
	
	class controlsBackground {
		class TabletBackground: life_RscPicture
		{
			idc = -1;

			text = "textures\tabletbg.paa"; //--- ToDo: Localize;
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

			text = "Porte clés"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.226875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class KeyChainList: Life_RscListBox
		{
			idc = 2701;
			rowHeight = 0.1;
					sizeEx = 0.03;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
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
		class NearPlayers: Life_RscCombo
		{
			idc = 2702;

			x = 0.567031 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class DropKey: Life_RscButtonMenu
		{
			onButtonClick = "[] call life_fnc_keyDrop";
			idc = 1007;

			text = "    Jeter"; //--- ToDo: Localize;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class GiveKey: Life_RscButtonMenu
		{
			idc = 2703;
			onButtonClick = "[] call life_fnc_keyGive";

			text = "    Donner"; //--- ToDo: Localize;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class AdminKey: Life_RscButtonMenu
		{
			idc = 2704;
			onButtonClick = "[] spawn life_fnc_keyAdminMarker";

			text = "Admin Map";
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.46 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.033 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};