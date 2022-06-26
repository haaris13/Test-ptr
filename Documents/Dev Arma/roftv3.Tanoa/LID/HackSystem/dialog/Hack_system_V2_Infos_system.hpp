#include "CustomControlClasses.h"
class Hack_system_V2_Infos_system
{
	idd = -1;

	class ControlsBackground
	{
		class back
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.15375;
			y = safeZoneY + safeZoneH * 0.21444445;
			w = safeZoneW * 0.6425;
			h = safeZoneH * 0.57;
			style = 0+48;
			text = "\LID\HackSystem\dialog\Infos system.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class ip
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.36125;
			y = safeZoneY + safeZoneH * 0.67666667;
			w = safeZoneW * 0.2225;
			h = safeZoneH * 0.04;
			style = 0;
			text = "127.0.0.1";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Fermer
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.743125;
			y = safeZoneY + safeZoneH * 0.21777778;
			w = safeZoneW * 0.02875;
			h = safeZoneH * 0.02111112;
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

	};

};
