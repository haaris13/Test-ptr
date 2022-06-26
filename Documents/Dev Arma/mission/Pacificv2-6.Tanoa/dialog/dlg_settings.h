class SettingsMenu
{
	idd = 2900;
	name = "SettingsMenu";
	movingEnabled = 1;
	enableSimulation = 1;
	
	class controlsBackground
	{
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
	
	class controls
	{
		class PlayerTagsHeader: Life_RscText
		{
			idc = -1;

			text = "$STR_SM_PlayerTags"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class SideChatHeader: PlayerTagsHeader
		{
			idc = -1;
			shadow = 0;

			text = "$STR_SM_SC";
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class RevealNearestHeader: PlayerTagsHeader
		{
			idc = -1;

			text = "Révéler les Objets proche"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class Title: Life_RscTitle
		{
			idc = -1;

			text = "$STR_SM_Title";
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class VDonFoot: Life_RscText
		{
			idc = -1;

			text = "$STR_SM_onFoot";
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VDinCar: Life_RscText
		{
			idc = -1;

			text = "$STR_SM_inCar";
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VDinAir: Life_RscText
		{
			idc = -1;

			text = "$STR_SM_inAir";
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VD_onfoot_slider: life_RscXSliderH
		{
			idc = 2901;
			onSliderPosChanged = "[0,_this select 1] call life_fnc_s_onSliderChange;";

			x = 0.339531 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.111375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "$STR_SM_ToolTip1";
		};
		class VD_onfoot_value: Life_RscEdit
		{
			idc = 2902;
			onChar = "[_this select 0, _this select 1,'ground',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'ground',true] call life_fnc_s_onChar;";
			text = "";
			x = 0.468125 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.033 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VD_car_slider: life_RscXSliderH
		{
			idc = 2911;
			onSliderPosChanged = "[1,_this select 1] call life_fnc_s_onSliderChange;";

			x = 0.339531 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.111375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "$STR_SM_ToolTip2";
		};
		class VD_car_value: Life_RscEdit
		{
			idc = 2912;
			onChar = "[_this select 0, _this select 1,'vehicle',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'vehicle',true] call life_fnc_s_onChar;";
			text = "";
			x = 0.468125 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.033 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class VD_air_slider: life_RscXSliderH
		{
			idc = 2921;
			onSliderPosChanged = "[2,_this select 1] call life_fnc_s_onSliderChange;";

			x = 0.339531 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.111375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "$STR_SM_ToolTip3";
		};
		class VD_air_value: Life_RscEdit
		{
			idc = 2922;
			onChar = "[_this select 0, _this select 1,'air',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'air',true] call life_fnc_s_onChar;";
			text = "";
			x = 0.468125 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.033 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class PlayerTagsONOFF: Life_Checkbox
		{
			idc = 2970;
			onCheckedChanged = "['tags',_this select 1] call life_fnc_s_onCheckedChange;";

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.012375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Contrôle si les joueurs auront leurs nom au-dessus de leur tête."; //--- ToDo: Localize;
		};
		class SideChatONOFF: Life_Checkbox
		{
			idc = 2971;
			onCheckedChanged = "['sidechat',_this select 1] call life_fnc_s_onCheckedChange;";

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.012375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RevealONOFF: Life_Checkbox
		{
			onCheckedChanged = "['objects',_this select 1] call life_fnc_s_onCheckedChange;";
			idc = 2972;

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.012375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Révèle le plus proche des objets au sein de 15m, arrête automatiquement ce paramètre si vous rencontrez des problèmes de performances."; //--- ToDo: Localize;
		};

		class disableTradesText: Life_RscText
		{
			idc = -1;

			text = "Notification d'aide"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class disableTrades: Life_Checkbox
		{
			onCheckedChanged = "['help',_this select 1] call life_fnc_s_onCheckedChange;";
			idc = 2973;

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.012375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Activer/désactiver l'aide !"; //--- ToDo: Localize;
		};

		class disableVehText: Life_RscText
		{
			idc = -1;

			text = "Plaque d'immatriculation"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};

		class disableVeh: Life_Checkbox
		{
			onCheckedChanged = "['vehicles',_this select 1] call life_fnc_s_onCheckedChange;";
			idc = 2974;

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.012375 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Activer/désactiver les plaques"; //--- ToDo: Localize;
		};

		class ButtonHideBackpack: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn admin_fnc_logAdmin";

			text = "Admin Logs"; //--- ToDo: Localize;
			idc = -1;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class RscButton_1601: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn debug_fnc_fixUniform";
			text = "Fix Tenue";
			idc = -1;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class RscButton_1602: Life_RscButtonMenu
		{
			onButtonClick = "life_alertAdmin = !life_alertAdmin;";
			text = "Admin Alert";
			idc = -1;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
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