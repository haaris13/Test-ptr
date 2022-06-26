#define ST_RIGHT 0x01

class osefStatusBar {
	idd = -1;
	onLoad = "uiNamespace setVariable ['osefStatusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['osefStatusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['osefStatusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls { 
		class statusBarText : Life_RscText {
			idc = 1000;
			x = 0.505153 * safezoneW + safezoneX;
			y = 0.950808 * safezoneH + safezoneY;
			w = 0.489503 * safezoneW;
			h = 0.0219906 * safezoneH;
			shadow = 2;
			colorBackground[] = { 1, 0.3, 0, 0.0 };  // uncomment and increase 4th number to have a background
			font = "PuristaSemibold";
			size = 0.03;
			type = 13;
			style = 1;
			text="Récupération des informations par le serveur...";
			class Attributes {
				align="right";
				color = "#FFFFF";
			};
		};
	};
};