class Life_cell_inbox {
	idd = 4900;
	name= "life_cell_inbox";
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
			idc = -1;

			text = "Boîte de réception"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class LocationText: Life_RscStructuredText
		{
			idc = 4901;

			text = "Lieu donné :"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.5};
		};
		class TextToSend: Life_RscTitle
		{
			idc = 4902;

			text = "Message:"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.7};
		};
		class textEdit: Life_RscStructuredText
		{
			idc = 4903;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.396 * safezoneH;
		};

		class RscText_1013: Life_RscText
		{
			idc = -1;

			x = 0.438125 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.396 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class MessageList: Life_RscListbox
		{
			idc = 4904;
			onLBSelChanged = "[] call life_fnc_cellphone_inboxLBChange";
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.44 * safezoneH;
			sizeEx = 0.038;
			colorBackground[] = {0,0,0,0.5};
		};
		class SendingTo: Life_RscTitle
		{
			idc = 4905;

			text = "Messages reçus:"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.7};
		};


		class RscText_1009: Life_RscStructuredText
		{
			idc = 4906;

			text = "De:"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.278437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};