#include "CustomControlClasses.h"
class Hack_system_V2_Console_CMD
{
	idd = 666;
	onKeyDown = "params ['_displayorcontrol', '_key', '_shift', '_ctrl', '_alt']; if (_key in [28,156]) then {[_key] spawn LIDCLIENT_fnc_CheckCommand;};";
	class ControlsBackground
	{
		class Back
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.17875;
			y = safeZoneY + safeZoneH * 0.21;
			w = safeZoneW * 0.6525;
			h = safeZoneH * 0.59444445;
			style = 0+48;
			text = "\LID\HackSystem\dialog\console_cmd.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class Fermer
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.776875;
			y = safeZoneY + safeZoneH * 0.21222223;
			w = safeZoneW * 0.02875;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {1,1,1,0.15};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,0};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "closedialog 0;";

		};
		class Command_line
		{
			type = 2;
			idc = 66618;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.76444445;
			w = safeZoneW * 0.59875;
			h = safeZoneH * 0.02;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorSelection[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_1
		{
			type = 0;
			idc = 6661;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.25555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_2
		{
			type = 0;
			idc = 6662;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.28555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_3
		{
			type = 0;
			idc = 6663;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.31555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_4
		{
			type = 0;
			idc = 6664;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.34555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_5
		{
			type = 0;
			idc = 6665;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.37555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_6
		{
			type = 0;
			idc = 6666;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.40555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_7
		{
			type = 0;
			idc = 6667;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.43555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_8
		{
			type = 0;
			idc = 6668;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.46555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_9
		{
			type = 0;
			idc = 6669;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.49555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_10
		{
			type = 0;
			idc = 66610;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.52555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_11
		{
			type = 0;
			idc = 66611;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.55555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_12
		{
			type = 0;
			idc = 66612;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.58555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_13
		{
			type = 0;
			idc = 66613;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.61555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_14
		{
			type = 0;
			idc = 66614;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.64555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_15
		{
			type = 0;
			idc = 66615;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.67555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_16
		{
			type = 0;
			idc = 66616;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.70555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Line_17
		{
			type = 0;
			idc = 66617;
			x = safeZoneX + safeZoneW * 0.20375;
			y = safeZoneY + safeZoneH * 0.73555556;
			w = safeZoneW * 0.598125;
			h = safeZoneH * 0.01888889;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};

};
