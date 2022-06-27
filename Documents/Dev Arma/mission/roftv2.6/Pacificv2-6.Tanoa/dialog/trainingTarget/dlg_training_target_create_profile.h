
class Training_Target_Profile_Create {
	idd = 2720;
	name= "Training_Target_Profile_Create";
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
			idc = 2723;

			text = "Il faut créer un profile pour pouvoir s'entraîner"; //--- ToDo: Localize;

			x = 0.402031 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.0605 * safezoneH;
		};
		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Creation du profile"; //--- ToDo: Localize;
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
			onButtonClick = "[] spawn life_fnc_targetTrainingCreateProfileAction";

			idc = 2725;
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
			idc = 2722;

			text = "Pseudo"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
		};	
	};
};
