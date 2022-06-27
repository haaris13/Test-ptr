
class Life_RscControlsGroupPhone {
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;
	
	class VScrollBar : Life_RscScrollBar
	{
		width = 0;
		autoScrollEnabled = 1;
	};
	
	class HScrollBar : Life_RscScrollBar
	{
		height = 0;
	};
	
	class Controls {};
};

class dlg_phone_messages {

	idd = 24300;
	movingEnable = true;
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

		class TitleConv: Life_RscTitle
		{
			idc = -1;

			text = "Conversations"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class TitleMessages: Life_RscTitle
		{
			idc = -1;

			text = "Messages"; //--- ToDo: Localize;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class ConvBg: Life_RscText
		{
			idc = -1;

			x = 0.278078 * safezoneW + safezoneX;
			y = 0.26108 * safezoneH + safezoneY;
			w = 0.1745 * safezoneW;
			h = 0.435 * safezoneH;
			colorBackground[] = {0,0,0,0.3};
		};

		class MasterConvButtonGroup: Life_RscControlsGroupPhone
		{
			idc = 24301;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.163125 * safezoneW;
			h = 0.433 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		
			class controls {};
		};

		class MessagesBg: Life_RscText
		{
			idc = -1;

			x = 0.46 * safezoneW + safezoneX;
			y = 0.26108 * safezoneH + safezoneY;
			w = 0.262 * safezoneW;
			h = 0.297 * safezoneH;
			colorBackground[] = {0,0,0,0.3};
		};

		class MasterMessagesButtonGroup: Life_RscControlsGroup
		{
			idc = 24302;
			x = 0.464062 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.255 * safezoneW;
			h = 0.275 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		
			class controls {};
		};

		class MessagesAddBg: Life_RscText
		{
			idc = -1;

			x = 0.46 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.262 * safezoneW;
			h = 0.154 * safezoneH;
			colorBackground[] = {0,0,0,0.3};
		};

		class SendMessageTitleInfo: Life_RscTitle
		{
			idc = 24303;
			style = 1;
			text = "Envoyer un message";
			x = 0.464216 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.098 * safezoneW;
			h = 0.028 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class SendMessageEdit: Life_RscEditLarge
		{
			idc = 24304;

			text = "";
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.077 * safezoneH;
			tooltip = "";
		};

		class SendMessageButton : Life_RscButtonMenu //
		{
			onButtonClick = "[] call life_fnc_phoneMessageReplySend";
			style =2;

			idc = 24305; 
			text = "<t align = 'center'>Envoyer</t>";
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.697 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.028 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class DeleteConvBtn : Life_RscButtonMenu //
		{
			onButtonClick = "[] call life_fnc_phoneMessageDelete";
			style =2;

			idc = 24306; 
			text = "<t align = 'center'>Supprimer</t>";
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.70494 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.030 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class NewConvBtn : Life_RscButtonMenu //
		{
			onButtonClick = "[] call life_fnc_phoneMessageNewMenu";
			style =2;

			idc = 24306; 
			text = "<t align = 'center'>Nouveau</t>";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.70494 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.030 * safezoneH;
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