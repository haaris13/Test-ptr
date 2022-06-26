#include "CustomControlClasses.h"
class LID_ARG_Sale_Show
{
	idd = 1556;
	OnLoad = "[] spawn life_fnc_checkmoney;";
	class ControlsBackground
	{
		class Background_Up
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.40875;
			y = safeZoneY + safeZoneH * 0.73777778;
			w = safeZoneW * 0.1825;
			h = safeZoneH * 0.08555556;
			style = 0;
			text = "";
			colorBackground[] = {1,1,1,0.75};
			colorText[] = {0.349,0.7373,0.8235,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Background_Down
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.406875;
			y = safeZoneY + safeZoneH * 0.73333334;
			w = safeZoneW * 0.18625;
			h = safeZoneH * 0.09444445;
			style = 0;
			text = "";
			colorBackground[] = {0,0,0,0.5};
			colorText[] = {0.349,0.7373,0.8235,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class Show_ARG
		{
			type = 0;
			idc = 1556;
			x = safeZoneX + safeZoneW * 0.42375;
			y = safeZoneY + safeZoneH * 0.75222223;
			w = safeZoneW * 0.1525;
			h = safeZoneH * 0.05666667;
			style = 2;
			text = "0000";
			colorBackground[] = {0,0,0,0.4};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 15) * 1);

		};

	};

};
