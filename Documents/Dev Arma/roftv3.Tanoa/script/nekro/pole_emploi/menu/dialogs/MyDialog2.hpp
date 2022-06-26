#include "CustomControlClasses.h"
class PoleEmploie
{
	idd = 24500;

	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.14375;
			y = safeZoneY + safeZoneH * 0.1;
			w = safeZoneW * 0.7125;
			h = safeZoneH * 0.8;
			style = 0;
			text = "";
			colorBackground[] = {0.1954,0.1954,0.1954,0.85};
			colorText[] = {0.8549,0.6549,0.1529,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Title
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.125;
			w = safeZoneW * 0.3875;
			h = safeZoneH * 0.05;
			style = 2;
			text = "Pole emploi";
			colorBackground[] = {0.1882,0.0627,0.298,0};
			colorText[] = {0.8118,0.9373,0.702,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.1) / 22) * 1);

		};
		class Text_metiers
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.21458334;
			y = safeZoneY + safeZoneH * 0.16944445;
			w = safeZoneW * 0.175;
			h = safeZoneH * 0.05;
			style = 2;
			text = "Liste des métiers";
			colorBackground[] = {0.9412,0.702,0.4627,0};
			colorText[] = {0.902,0.902,0.6,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Text_metiers_copy1
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.57083334;
			y = safeZoneY + safeZoneH * 0.16944445;
			w = safeZoneW * 0.175;
			h = safeZoneH * 0.05;
			style = 2;
			text = "Information du métier selectionner";
			colorBackground[] = {1,1,1,0};
			colorText[] = {0.902,0.902,0.6,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Separation_1_Background_copy1
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.15;
			y = safeZoneY + safeZoneH * 0.76018519;
			w = safeZoneW * 0.69947917;
			h = safeZoneH * 0.00648149;
			style = 0;
			text = "";
			colorBackground[] = {0.4549,0.8235,0.5255,1};
			colorText[] = {0.5451,0.1765,0.4745,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class Valider
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.64010417;
			y = safeZoneY + safeZoneH * 0.82685186;
			w = safeZoneW * 0.16510417;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "Choisir le métier selectionner";
			borderSize = 0;
			colorBackground[] = {0.1922,0.3059,0.0196,1};
			colorBackgroundActive[] = {0.102,0.302,0.102,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0.8078,0.6941,0.9804,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			OnButtonClick = "execVM 'script\nekro\pole_emploi\metiers\ERDF\script\result.sqf'; closeDialog 0;";
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class Refuser
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.15520834;
			y = safeZoneY + safeZoneH * 0.82685186;
			w = safeZoneW * 0.16510417;
			h = safeZoneH * 0.05;
			style = 0+2;
			text = "Refuser (fermer)";
			borderSize = 0;
			colorBackground[] = {0.6,0,0,1};
			colorBackgroundActive[] = {0.702,0.102,0.102,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0.8078,0.6941,0.9804,1};
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

		};
		class ListOfJobs
		{
			type = 5;
			idc = 245001;
			x = safeZoneX + safeZoneW * 0.15520834;
			y = safeZoneY + safeZoneH * 0.225;
			w = safeZoneW * 0.3234375;
			h = safeZoneH * 0.525;
			onLBSelChanged = "call life_fnc_ModificationMenujobs";
			style = 16;
			colorBackground[] = {0.902,0.902,0.6,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 22) * 1);
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
		class structured_informationaboutsjobs : Life_RscStructuredText
		{
			idc = 245002;
			x = safeZoneX + safeZoneW * 0.49166667;
			y = safeZoneY + safeZoneH * 0.23425926;
			w = safeZoneW * 0.34322917;
			h = safeZoneH * 0.51296297;
			colorBackground[] = {0.902,0.902,0.6,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class Reputation_text
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.775;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.05;
			style = 2;
			text = "Votre réputation: ";
			colorBackground[] = {0.2,0.2,0.2,0};
			colorText[] = {0.902,0.902,0.302,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 26) * 1);

		};
		class Reputation_var
		{
			type = 245005;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.825;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.05;
			style = 2;
			text = "ERROR";
			colorBackground[] = {0.2,0.2,0.2,0};
			colorText[] = {0.902,0.902,0.302,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 26) * 1);

		};

	};

};
