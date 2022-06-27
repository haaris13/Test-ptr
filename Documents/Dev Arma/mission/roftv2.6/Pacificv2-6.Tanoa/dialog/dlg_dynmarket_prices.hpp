class life_dynmarket_prices {
	idd = 7100;
	name= "life_dynmarket_prices";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn {sleep 1;[] call life_fnc_LoadIntoListbox;};";
	
	class controlsBackground {
		class TabletBackground: life_RscPicture
		{
			idc = -1;

			text = "textures\tabletbg.paa"; //--- ToDo: Localize;
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};
		
		
		class MainBackground:life_RscText {
			idc = -1;
			x = 0.329895 * safezoneW + safezoneX;
			y = 0.33498 * safezoneH + safezoneY;
			w = 0.340211 * safezoneW;
			h = 0.352043 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Bourse"; //--- ToDo: Localize; thanks bohemia gui export guy
			x = 0.335049 * safezoneW + safezoneX;
			y = 0.33498 * safezoneH + safezoneY;
			w = 0.329901 * safezoneW;
			h = 0.0220027 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
	};
	
	class controls {
		class background: Life_RscText
{
	idc = -1;
	x = 0.5 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.077 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};
class background2: Life_RscText
{
	idc = -1;
	x = 0.5 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.066 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};
		class background3: Life_RscText
{
	idc = -1;
	x = 0.5 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.077 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};
		class RscListbox_1500: Life_RscListBox
{
	idc = 7055;
	onLBSelChanged = "[] spawn {[] call life_fnc_DisplayPrices;};";

	text = "Chargement..."; //--- ToDo: Localize;
	x = 0.335 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.264 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
	sizeEx = 0.032;
};
class RscText_1000: Life_RscText
{
	idc = -1;

	text = "Prix de Vente"; //--- ToDo: Localize;
	x = 0.5 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};
class RscText_1001: Life_RscText
{
	idc = 7056;

	text = "S'il vous plaît sélectionner un article"; //--- ToDo: Localize;
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.39 * safezoneH + safezoneY;
	w = 0.20625 * safezoneW;
	h = 0.0549787 * safezoneH;
};
class RscText_1003: Life_RscText
{
	idc = 7057;

	text = "0"; //--- ToDo: Localize;
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.055 * safezoneH;
};
class RscText_1007: Life_RscStructuredText
{
	idc = 7058;

	text = ""; //--- ToDo: Localize;
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.20625 * safezoneW;
	h = 0.0549787 * safezoneH;
	colorText[] = {0.33,0.33,0.33,1};
};
class ButtonClose: Life_RscButtonMenu
{
	onButtonClick = "closeDialog 0;";
	style = 2;

	idc = 1009;
	text = "<t align = 'center' size = '0.75' > Fermer </t>"; //--- ToDo: Localize;
	x = 0.469062 * safezoneW + safezoneX;
	y = 0.643 * safezoneH + safezoneY;
	w = 0.0670112 * safezoneW;
	h = 0.0220026 * safezoneH;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.5};
};

class RscText_1011: Life_RscText
{
	idc = -1;

	text = "Changements des Prix Récents"; //--- ToDo: Localize;
	x = 0.5 * safezoneW + safezoneX;
	y = 0.467 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};

class RscText_1013: Life_RscText
{
	idc = -1;

	text = "Nombre Vendu par Vous"; //--- ToDo: Localize;
	x = 0.5 * safezoneW + safezoneX;
	y = 0.555 * safezoneH + safezoneY;
	w = 0.159844 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.5};
};

	};
};