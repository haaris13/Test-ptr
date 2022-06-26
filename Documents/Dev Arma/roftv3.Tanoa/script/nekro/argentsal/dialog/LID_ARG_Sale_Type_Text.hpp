#include "CustomControlClasses.h"
class LID_ARG_Sale_Type_Text_petit
{
	idd = -1;

	class ControlsBackground
	{
		class Background_Up
		{
			type = 0;
			idc = 1550;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.73777778;
			w = safeZoneW * 0.2625;
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
			x = safeZoneX + safeZoneW * 0.366875;
			y = safeZoneY + safeZoneH * 0.73333334;
			w = safeZoneW * 0.26625;
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
		class TypeHere
		{
			type = 2;
			idc = 1555;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.76222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "00";
			autocomplete = "";
			colorBackground[] = {0,0,0,0.4};
			colorDisabled[] = {0,0,0,0};
			colorSelection[] = {0,0,0,0};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 18) * 1);

		};
		class BTN
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.76222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Valider";
			borderSize = 0;
			OnButtonClick = "['petit'] call life_fnc_creategroundMoney";
			colorBackground[] = {0.6,0.8,0.6,0.75};
			colorBackgroundActive[] = {0.6,0.8,0.6,1};
			colorBackgroundDisabled[] = {0.6,0.8,0.6,0.75};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.6,0.8,0.6,1};
			colorFocused[] = {0.6,0.8,0.6,0.75};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "";

		};

	};

};



class LID_ARG_Sale_Type_Text_moyen
{
	idd = -1;

	class ControlsBackground
	{
		class Background_Up
		{
			type = 0;
			idc = 1550;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.73777778;
			w = safeZoneW * 0.2625;
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
			x = safeZoneX + safeZoneW * 0.366875;
			y = safeZoneY + safeZoneH * 0.73333334;
			w = safeZoneW * 0.26625;
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
		class TypeHere
		{
			type = 2;
			idc = 1555;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.76222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "00";
			autocomplete = "";
			colorBackground[] = {0,0,0,0.4};
			colorDisabled[] = {0,0,0,0};
			colorSelection[] = {0,0,0,0};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 18) * 1);

		};
		class BTN
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.76222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Valider";
			borderSize = 0;
			colorBackground[] = {0.6,0.8,0.6,0.75};
			colorBackgroundActive[] = {0.6,0.8,0.6,1};
			colorBackgroundDisabled[] = {0.6,0.8,0.6,0.75};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.6,0.8,0.6,1};
			colorFocused[] = {0.6,0.8,0.6,0.75};
			colorShadow[] = {0,0,0,0};
			OnButtonClick = "['moyen'] call life_fnc_creategroundMoney";
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "";

		};

	};

};



class LID_ARG_Sale_Type_Text_gros
{
	idd = -1;

	class ControlsBackground
	{
		class Background_Up
		{
			type = 0;
			idc = 1550;
			x = safeZoneX + safeZoneW * 0.36875;
			y = safeZoneY + safeZoneH * 0.73777778;
			w = safeZoneW * 0.2625;
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
			x = safeZoneX + safeZoneW * 0.366875;
			y = safeZoneY + safeZoneH * 0.73333334;
			w = safeZoneW * 0.26625;
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
		class TypeHere
		{
			type = 2;
			idc = 1555;
			x = safeZoneX + safeZoneW * 0.39375;
			y = safeZoneY + safeZoneH * 0.76222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "00";
			autocomplete = "";
			colorBackground[] = {0,0,0,0.4};
			colorDisabled[] = {0,0,0,0};
			colorSelection[] = {0,0,0,0};
			colorText[] = {0.8,0.8,0.8,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 18) * 1);

		};
		class BTN
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.51875;
			y = safeZoneY + safeZoneH * 0.76222223;
			w = safeZoneW * 0.0875;
			h = safeZoneH * 0.03666667;
			style = 2;
			text = "Valider";
			OnButtonClick = "['gros'] call life_fnc_creategroundMoney";
			borderSize = 0;
			colorBackground[] = {0.6,0.8,0.6,0.75};
			colorBackgroundActive[] = {0.6,0.8,0.6,1};
			colorBackgroundDisabled[] = {0.6,0.8,0.6,0.75};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.6,0.8,0.6,1};
			colorFocused[] = {0.6,0.8,0.6,0.75};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			action = "";

		};

	};

};