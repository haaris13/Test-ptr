class Training_Target_Score_Board {

	idd = 29000;
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
			idc = 29010;

			text = "Scores"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

		class ItemListHeaderBackground: Life_RscText
		{
			idc = -1;
			x = 0.278 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.439125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
	};

		
	class controls {

		class filterCombo : Life_RscCombo
		{
			idc = 29004;
			rowHeight = 0.1;
			onLBSelChanged = "['filterCombo'] call life_fnc_targetTrainingScoresInfoFilter";
			
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.26263 * safezoneH + safezoneY;
			w = 0.100469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
			tooltip = "Filtrer par difficulté";
		};

		class filterComboWeapon : Life_RscCombo
		{
			idc = 29005;
			rowHeight = 0.1;
			onLBSelChanged = "['filterComboWeapon'] call life_fnc_targetTrainingScoresInfoFilter";
			
			x = 0.48105 * safezoneW + safezoneX;
			y = 0.26263 * safezoneH + safezoneY;
			w = 0.100469 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
			tooltip = "Filtrer par arme";
		};

		class ItemList: Life_RscListNBox
		{

			idc = 29002;
			text = "";	
			rowHeight = 0.04;
			sizeEx = 0.038;
			columns[] = {0,0.20,0.36,0.56, 0.67,0.87}; //modif
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			x = 0.278 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.439125 * safezoneW;
			h = 0.418 * safezoneH;
			onLBSelChanged = "";
		};

		class ItemListHeader: Life_RscListNBox
		{

			idc = 29001;
			text = "";	
			rowHeight = 0.04;
			sizeEx = 0.038;
			columns[] = {0,0.20,0.36,0.56, 0.67,0.87}; //modif
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			x = 0.278 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.439125 * safezoneW;
			h = 0.022 * safezoneH;
			onLBSelChanged = "";

			class Items 
			{
				class Pseudo {
					text = "Pseudo";
					value = 0;
				};

				class TrainingType {
					text = "Type";
					value = 0;
				};

				class WeaponsName {
					text = "Arme";
					value = 0;
				};

				class Score {   //modif
					text = "Score";
					value = 0;
				};

				class Time {   //modif
					text = "Temps";
					value = 0;
				};

				class Precision {   //modif
					text = "Précision";
					value = 0;
				};
			};
		};

		class SearchEdit: Life_RscEdit
		{
			idc = 29003;
			x = 0.283437 * safezoneW + safezoneX;
			y = 0.26263 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			text = "";
			colorBackground[] = {0,0,0,0.8};
		};

		class SearchButton : Life_RscButtonMenuIcon
		{
			onButtonClick = "['search'] call life_fnc_targetTrainingScoresInfoFilter";

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
			tooltip = "$STR_Global_Close";
		};
	};
};	

	
