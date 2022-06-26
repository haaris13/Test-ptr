#include "CustomControlClasses.h"
class Hack_system_V2_Infos_base
{
	idd = 999;

	class ControlsBackground
	{
		class Back
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.19375;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.6125;
			h = safeZoneH * 0.55;
			style = 0+48;
			text = "\LID\HackSystem\dialog\Infos_base.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class Imatriculation
		{
			type = 2;
			idc = 9991;
			x = safeZoneX + safeZoneW * 0.5125;
			y = safeZoneY + safeZoneH * 0.43;
			w = safeZoneW * 0.13625;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorSelection[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 1);

		};
		class prenom_nom
		{
			type = 2;
			idc = 9992;
			x = safeZoneX + safeZoneW * 0.404375;
			y = safeZoneY + safeZoneH * 0.51333334;
			w = safeZoneW * 0.244375;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorSelection[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 1);

		};
		class Numero_tel
		{
			type = 2;
			idc = 9993;
			x = safeZoneX + safeZoneW * 0.5125;
			y = safeZoneY + safeZoneH * 0.59777778;
			w = safeZoneW * 0.135625;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorSelection[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 20) * 1);

		};
		class VALIDER_Imatriculation
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.663125;
			y = safeZoneY + safeZoneH * 0.42333334;
			w = safeZoneW * 0.108125;
			h = safeZoneH * 0.04444445;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0.15};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			OnButtonClick = "[(ctrlText 9991),player] remoteexec ['LIDSERVEUR_fnc_CheckByPlateNumber',2];";
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

		};
		class VALIDER_prenom_nom
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.663125;
			y = safeZoneY + safeZoneH * 0.50555556;
			w = safeZoneW * 0.108125;
			h = safeZoneH * 0.04444445;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			OnButtonClick = "[(ctrlText 9992),player] remoteexec ['LIDSERVEUR_fnc_CheckByName',2];";
			colorBackgroundActive[] = {0,0,0,0.15};
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

		};
		class VALIDER_Numero_tel
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.663125;
			y = safeZoneY + safeZoneH * 0.58888889;
			w = safeZoneW * 0.108125;
			h = safeZoneH * 0.04444445;
			style = 0;
			text = "";
			borderSize = 0;
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0.15};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			OnButtonClick = "[(ctrlText 9993),player] remoteexec ['LIDSERVEUR_fnc_checkByPhoneNumber',2];";
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

		};
		class Fermer
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.755625;
			y = safeZoneY + safeZoneH * 0.22444445;
			w = safeZoneW * 0.026875;
			h = safeZoneH * 0.02333334;
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
