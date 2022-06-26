/*-----------------------------------------------------------------------------
     _   _ ______ _  _______   ____
    | \ | |  ____| |/ /  __ \ / __ \
    |  \| | |__  | ' /| |__) | |  | |
    | . ` |  __| |  < |  _  /| |  | |
    | |\  | |____| . \| | \ \| |__| |
    |_| \_|______|_|\_\_|  \_\____/

Server:
     ___       ____        ___       __
    /   \     |___ \      /   \     |  |
   /  ^  \      __) |    /  ^  \    |  |
  /  /_\  \    |__ <    /  /_\  \   |  |
 /  _____  \   ___) |  /  _____  \  |  `----.
/__/     \__\ |____/  /__/     \__\ |_______|

    FileName =

    Description:  La flemme d'expliquer pour le moment. tu n'a qu'a me demander si tu veux des infos dessus !



    Author: Nekro - LifeIsDev.com [Steam UID: 76561198162124881]

    Remarks: Il est interdit d'utiliser se fichier sans l'autorisation de Nekro.
    Vous pouvez le contacter a cette adresse: minenekro@gmail.com
    Ne vous fiez pas aux personnes qui se prétendent auteurs de se fichier.


-----------------------------------------------------------------------------*/
#include "CustomControlClasses.h"



class CompteurGRDF
{
	idd = 1543223;

	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 0;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			style = 0;
			text = "";
			colorBackground[] = {0.2,0.2,0.2,0.6118};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class Text
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.35364584;
			y = safeZoneY + safeZoneH * 0.28425926;
			w = safeZoneW * 0.2875;
			h = safeZoneH * 0.05;
			style = 2;
			text = "Merci d'entrer la réponse que tu as eu au compteur";
			colorBackground[] = {0.2902,0.0078,0.5765,0};
			colorText[] = {0.702,0.702,0.702,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class LeNombre
		{
			type = 2;
			idc = 15432231;
			x = safeZoneX + safeZoneW * 0.42239584;
			y = safeZoneY + safeZoneH * 0.38240741;
			w = safeZoneW * 0.15520834;
			h = safeZoneH * 0.05;
			style = 2;
			text = "000000";
			autocomplete = "";
			colorBackground[] = {0,0,0,0.8549};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {0,0,0,1};
			colorText[] = {0.0588,0.9569,0.2745,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Valider_le_resultat
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39270834;
			y = safeZoneY + safeZoneH * 0.58611112;
			w = safeZoneW * 0.22447917;
			h = safeZoneH * 0.06851852;
			style = 2;
			text = "VALIDER";
			borderSize = 0;
			colorBackground[] = {0.102,0.302,0.102,1};
			colorBackgroundActive[] = {0.3033,1,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			OnButtonClick = "execVM 'script\nekro\pole_emploi\metiers\GRDF\script\result.sqf';";
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};

	};

};

class CompteurElectric
{
	idd = 1543223;

	class ControlsBackground
	{
		class Background
		{
			type = 0;
			idc = 0;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
			style = 0;
			text = "";
			colorBackground[] = {0.2,0.2,0.2,0.6118};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class Text
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.35364584;
			y = safeZoneY + safeZoneH * 0.28425926;
			w = safeZoneW * 0.2875;
			h = safeZoneH * 0.05;
			style = 2;
			text = "Merci d'entrer la réponse que tu as eu au compteur";
			colorBackground[] = {0.2902,0.0078,0.5765,0};
			colorText[] = {0.702,0.702,0.702,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class LeNombre
		{
			type = 2;
			idc = 15432231;
			x = safeZoneX + safeZoneW * 0.42239584;
			y = safeZoneY + safeZoneH * 0.38240741;
			w = safeZoneW * 0.15520834;
			h = safeZoneH * 0.05;
			style = 2;
			text = "000000";
			autocomplete = "";
			colorBackground[] = {0,0,0,0.8549};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {0,0,0,1};
			colorText[] = {0.0588,0.9569,0.2745,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class Valider_le_resultat
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.39270834;
			y = safeZoneY + safeZoneH * 0.58611112;
			w = safeZoneW * 0.22447917;
			h = safeZoneH * 0.06851852;
			style = 2;
			text = "VALIDER";
			borderSize = 0;
			colorBackground[] = {0.102,0.302,0.102,1};
			colorBackgroundActive[] = {0.3033,1,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			OnButtonClick = "execVM 'script\nekro\pole_emploi\metiers\ERDF\script\result.sqf';";
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};

	};

};
