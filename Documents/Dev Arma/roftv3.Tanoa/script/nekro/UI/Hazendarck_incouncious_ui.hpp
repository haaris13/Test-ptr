#include "CustomControlClasses.h"
class Hazendarckincounciousui
{

	idd = 98500;

	class ControlsBackground
	{
		class Back
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * -0.00125;
			y = safeZoneY + safeZoneH * -0.00555555;
			w = safeZoneW * 1.0025;
			h = safeZoneH * 1.02;
			style = 48;
			text = "script\nekro\UI\incouncious_ui.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class Medic_Dispo
		{
			type = 0;
			idc = 985001;
			x = safeZoneX + safeZoneW * 0.511875;
			y = safeZoneY + safeZoneH * 0.84333334;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "OUI";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 18) * 1);

		};
		class Medic_Distance
		{
			type = 0;
			idc = 985002;
			x = safeZoneX + safeZoneW * 0.511875;
			y = safeZoneY + safeZoneH * 0.9;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "0 m";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 18) * 1);

		};
		class Respawn_Time
		{
			type = 0;
			idc = 985003;
			x = safeZoneX + safeZoneW * 0.723125;
			y = safeZoneY + safeZoneH * 0.09888889;
			w = safeZoneW * 0.0625;
			h = safeZoneH * 0.03666667;
			style = 0;
			text = "00:00";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 18) * 1);

		};
		class Respawn_btn
		{
			type = 1;
			idc = 985005;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.14777778;
			w = safeZoneW * 0.2875;
			h = safeZoneH * 0.07111112;
			style = 2;
			text = "Aller en soin intensif";
			//OnButtonClick = "closedialog 0; player SetDammage 1; [(getPlayerUID player), (name player), 'BouttonRespawn', 'A APPUYER SUR RESPAWN'] remoteExec ['TON_fnc_logSystem',2];";
			OnButtonClick = "closedialog 0; player SetDammage 1; life_respawned = true;"; // [] call life_fnc_spawnMenu;
			borderSize = 0;
			colorBackground[] = {1,1,1,0.5};
			colorBackgroundActive[] = {0.502,0.6,1,1};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {1,1,1,0.5};
			colorFocused[] = {0.902,0.902,0.902,0.5};
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.302,0.2,0.6,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 15) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};

		class Call_Medic_btn
		{
			type = 1;
			idc = 985004;
			x = safeZoneX + safeZoneW * 0.34375;
			y = safeZoneY + safeZoneH * 0.73444445;
			w = safeZoneW * 0.2875;
			h = safeZoneH * 0.07111112;
			style = 2;
			text = "Appeler les secours !";
			borderSize = 0;
			colorBackground[] = {1,1,1,0.5};
			colorBackgroundActive[] = {0.502,0.6,1,1};
			colorBackgroundDisabled[] = {0,0,0,0};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {1,1,1,0.5};
			colorFocused[] = {0.902,0.902,0.902,0.5};
			onButtonClick = "[] call life_fnc_requestMedic;";
			colorShadow[] = {0,0,0,0};
			colorText[] = {0.4,0.302,0.702,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 15) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};

	};

};
