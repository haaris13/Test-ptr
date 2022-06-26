class resourceInformation {

	idd = 19000;
	movingEnable = false;
	enableSimulation = true;

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
		class Title: Life_RscTitle
		{
			idc = -1;

			text = "Prix des ressources"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class ItemListHeaderBackground: Life_RscText
		{
			idc = -1;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.433125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
	};

		
	class controls {

		class filterCombo : Life_RscCombo
		{
			idc = 19004;
			rowHeight = 0.1;
			onLBSelChanged = "['refresh'] call life_fnc_resourceInfoFilter";

			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.26263 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};

		class ItemList: Life_RscListNBox
		{

			idc = 19002;
			text = "";	
			rowHeight = 0.04;
			sizeEx = 0.038;
			columns[] = {0,0.3,0.45,0.59,0.72,0.87}; //modif
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.433125 * safezoneW;
			h = 0.418 * safezoneH;
			onLBSelChanged = "";
		};

		class ItemListHeader: Life_RscListNBox
		{

			idc = 19001;
			text = "";	
			rowHeight = 0.04;
			sizeEx = 0.038;
			columns[] = {0,0.3,0.45,0.59,0.72,0.87}; //modif
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.433125 * safezoneW;
			h = 0.022 * safezoneH;
			onLBSelChanged = "";

			class Items 
			{
				class DisplayName {
					text = "Item";
					value = 0;
				};
				class Price {
					text = "$Vente";
					value = 0;
				};
				class PrixPondere {   //modif
					text = "Prix/kg";
					value = 0;
				};
				class Pourcent {   //modif
					text = "%";
					value = 0;
				};
				class PriceBase {
					text = "$Base";
					value = 0;
				}
				class Weight {
					text = "Poids";
					value = 0;
				};
			};
		};

		class SearchEdit: Life_RscEdit
		{
			idc = 19003;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.26263 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			text = "";
			colorBackground[] = {0,0,0,0.8};
		};

		class SearchButton : Life_RscButtonMenuIcon
		{
			onButtonClick = "['search'] call life_fnc_resourceInfoFilter";

			idc = -1;
			text = "\a3\3DEN\Data\Displays\Display3DEN\search_start_ca.paa"; //--- ToDo: Localize;
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.26262 * safezoneH + safezoneY;
			w = 0.0154689 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			tooltip = "Recherche"; //--- ToDo: Localize;
		};

		class ButtonClose: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa"; //--- ToDo: Localize;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			tooltip = "Fermer"; //--- ToDo: Localize;
		};
	};
};	

	
