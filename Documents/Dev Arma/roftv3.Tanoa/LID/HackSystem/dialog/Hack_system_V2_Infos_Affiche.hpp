#include "CustomControlClasses.h"
class Hack_system_V2_Infos_Affiche
{
	idd = 666999;

	class ControlsBackground
	{
		class back
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.01875;
			y = safeZoneY + safeZoneH * 0.02888889;
			w = safeZoneW * 0.9625;
			h = safeZoneH * 0.94111112;
			style = 0+48;
			text = "\LID\HackSystem\dialog\Infos_affiche.paa";
			colorBackground[] = {0.6784,0.0118,0.8275,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class prenom_nom
		{
			type = 0;
			idc = 6669991;
			x = safeZoneX + safeZoneW * 0.40125;
			y = safeZoneY + safeZoneH * 0.26333334;
			w = safeZoneW * 0.311875;
			h = safeZoneH * 0.02666667;
			style = 0;
			text = "Jean-Robert DelaRue";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class BANK
		{
			type = 0;
			idc = 6669992;
			x = safeZoneX + safeZoneW * 0.46;
			y = safeZoneY + safeZoneH * 0.20222223;
			w = safeZoneW * 0.253125;
			h = safeZoneH * 0.02666667;
			style = 0;
			text = "999 999 999 999,99";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class num_tel
		{
			type = 0;
			idc = 6669993;
			x = safeZoneX + safeZoneW * 0.439375;
			y = safeZoneY + safeZoneH * 0.32333334;
			w = safeZoneW * 0.27375;
			h = safeZoneH * 0.02666667;
			style = 0;
			text = "0606060606";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class grade_gn
		{
			type = 0;
			idc = 6669994;
			x = safeZoneX + safeZoneW * 0.425;
			y = safeZoneY + safeZoneH * 0.38555556;
			w = safeZoneW * 0.288125;
			h = safeZoneH * 0.02666667;
			style = 0;
			text = "Gendarme";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class grade_sp
		{
			type = 0;
			idc = 6669995;
			x = safeZoneX + safeZoneW * 0.39875;
			y = safeZoneY + safeZoneH * 0.44555556;
			w = safeZoneW * 0.314375;
			h = safeZoneH * 0.02666667;
			style = 0;
			text = "Pompier";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class list_vehicules
		{
			type = 5;
			idc = 6669996;
			x = safeZoneX + safeZoneW * 0.30625;
			y = safeZoneY + safeZoneH * 0.53333334;
			w = safeZoneW * 0.409375;
			h = safeZoneH * 0.16666667;
			style = 16;
			colorBackground[] = {0.9176,0.9176,0.9098,1};
            colorDisabled[] = {0.9176,0.9176,0.9098,1};
			colorSelect[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class list_contactes
		{
			type = 5;
			idc = 6669997;
			x = safeZoneX + safeZoneW * 0.30625;
			y = safeZoneY + safeZoneH * 0.73777778;
			w = safeZoneW * 0.409375;
			h = safeZoneH * 0.16666667;
			style = 16;
			colorBackground[] = {0.9176,0.9176,0.9098,1};
            colorDisabled[] = {0.9176,0.9176,0.9098,1};
			colorSelect[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class fermer
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.70125;
			y = safeZoneY + safeZoneH * 0.06444445;
			w = safeZoneW * 0.0225;
			h = safeZoneH * 0.02;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {1,0.8,0.8,0.25};
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
			OnButtonClick = "closedialog 0;";

		};

	};

};
