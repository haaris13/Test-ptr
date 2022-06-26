class craftingDialog {

	idd = 12500;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "";

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

			text = "Menu d'artisanat"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

	};

		
	class controls {
		
		class recipeList: Life_RscListBox
		{
			idc = 12501;
			
			onLBSelChanged = "_this call life_fnc_craftingMenuLBChange;";
			rowHeight = 0.09;
			sizeEx = 0.033; //was 0.3
			x = 0.282922 * safezoneW + safezoneX;
			y = 0.31674 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.385 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class itemEdit: Life_RscCombo
		{
			idc = 12502;
			rowHeight = 0.1;
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};
		class CraftButton: Life_RscButtonMenu
		{
			onButtonClick = "[] spawn life_fnc_craftingMenuCraft;";
			idc = 12505;

			text = "Créer"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
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
			colorBackground[] = {0.1,0.1,0.1,1};
			tooltip = "Fermer"; //--- ToDo: Localize;
		};
		class ItemInfo: Life_RscStructuredText
		{
			idc = 12503;

			x = 0.474219 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.242344 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.6};
		};
		class filterCombo : Life_RscCombo
		{
			idc = 12504;
			rowHeight = 0.1;
			onLBSelChanged = "_this call life_fnc_craftingMenuFilter";

			
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};


		class itemFilterButton: Life_RscButtonMenu
		{
			onButtonClick = "[0,1] call life_fnc_craftingSubMenuFilter;";

			idc = -1;
			text = "Objets"; //--- ToDo: Localize;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.295518 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 27) * 1)";
		};
		class equipmentFilterButton: Life_RscButtonMenu
		{
			onButtonClick = "[0,2] call life_fnc_craftingSubMenuFilter;";

			idc = -1;
			text = "Equipements"; //--- ToDo: Localize;
			x = 0.341771 * safezoneW + safezoneX;
			y = 0.295518 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 27) * 1)";
		};




	};
};	

	
