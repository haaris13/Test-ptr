

class professionDialog {

	idd = 12000;
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
		
		class Header: Life_RscText
		{
			idc = -1;

		
			text = "Vue d’ensemble des professions"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

	};
	
	class controls {

				
		class MasterButtonGroup: Life_RscControlsGroup
		{
			idc = -1;
			x = 0.280437 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.523125 * safezoneW;
			h = 0.484 * safezoneH;
			colorBackground[] = {0,0,0,0};
		
		class controls {
				
				//tile 1
				class Tile1ImageBG: Life_RscText
				{
					idc = -1;

					x = 0.29375 * safezoneW + safezoneX;
					y = 0.269 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class HeaderTile1Image: life_RscPicture
				{
					idc = -1;

					text = "dialog\data\profs\icon_treasure.paa"; //--- ToDo: Localize;
					x = 0.29375 * safezoneW + safezoneX;
					y = 0.269 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile1Title: Life_RscText
				{
					idc = 12001;

					text = "MacGyver"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.258 * safezoneH + safezoneY;
					w = 0.139219 * safezoneW;
					h = 0.044 * safezoneH;
					sizeEx = 0.08;
				};
				class Tile1ProfTier: Life_RscStructuredText
				{
					idc = 12003;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.302 * safezoneH + safezoneY;
					//w = 0.0979687 * safezoneW;
					w = 0.061875 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class Tile1ProgressBarBG: Life_RscText
				{
					idc = -1;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.324 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile1ProgressBar: Life_RscProgress
				{
					idc = 12004;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.324 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile1ProgressBarText: Life_RscStructuredText
				{
					idc = 12002;

					text = "0"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.324 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0};
				};
				class Tile1Crafting: Life_RscButtonMenu
				{
					idc = 12005;
					style = 2;
					onButtonClick = "[0] call life_fnc_craftingMenuOpen";

					text = "Craft"; //--- ToDo: Localize;
					x = 0.463906 * safezoneW + safezoneX;
					w = 0.04125 * safezoneW;
					y = 0.300148 * safezoneH + safezoneY;
					h = 0.022 * safezoneH;

				
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};
	

				class Tile2ImageBG: Life_RscText
				{
					idc = -1;

					x = 0.520625 * safezoneW + safezoneX;
					y = 0.269 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class HeaderTile2mage: life_RscPicture
				{
					idc = -1;

					text = "dialog\data\profs\icon_gather.paa"; //--- ToDo: Localize;
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.269 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile2Title: Life_RscText
				{
					idc = 12011;

					text = "Narcos"; //--- ToDo: Localize;
					x = 0.5825 * safezoneW + safezoneX;
					y = 0.258 * safezoneH + safezoneY;
					w = 0.139219 * safezoneW;
					h = 0.044 * safezoneH;
					sizeEx = 0.08;
				};
				class Tile2ProfTier: Life_RscStructuredText
				{
					idc = 12013;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.302 * safezoneH + safezoneY;
					w = 0.0979687 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class Tile2Crafting: Life_RscButtonMenu
				{
					idc = 12015;
					style = 2;
					onButtonClick = "[1] call life_fnc_craftingMenuOpen";

					text = "Craft"; //--- ToDo: Localize;
					x = 0.690781 * safezoneW + safezoneX;
					y = 0.29914 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};
			
				class Tile2ProgressBarBG: Life_RscText
				{
					idc = -1;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.324 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile2ProgressBar: Life_RscProgress
				{
					idc = 12014;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.324 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile2ProgressBarText: Life_RscStructuredText
				{
					idc = 12012;

					text = "0"; //--- ToDo: Localize;
					x = 0.5825 * safezoneW + safezoneX;
					y = 0.324 * safezoneH + safezoneY;
					w = 0.134062 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0};
				};

				class Tile3ImageBG: Life_RscText
				{
					idc = -1;

					x = 0.29375 * safezoneW + safezoneX;
					y = 0.401 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class HeaderTile3Image: life_RscPicture
				{
					idc = -1;

					text = "dialog\data\profs\icon_mining.paa"; //--- ToDo: Localize;
					x = 0.29375 * safezoneW + safezoneX;
					y = 0.401 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile3Title: Life_RscText
				{
					idc = 12006;

					text = "Minage"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.39 * safezoneH + safezoneY;
					w = 0.139219 * safezoneW;
					h = 0.044 * safezoneH;
					sizeEx = 0.08;
				};
				class Tile3ProfTier: Life_RscStructuredText
				{
					idc = 12008;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.434 * safezoneH + safezoneY;
					w = 0.0979687 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class Tile3ProgressBarBG: Life_RscText
				{
					idc = -1;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.456 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile3ProgressBar: Life_RscProgress
				{
					idc = 12009;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.456 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile3ProgressBarText: Life_RscStructuredText
				{
					idc = 12007;

					text = "0"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.456 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0};
				};
				class Tile3Crafting: Life_RscButtonMenu
				{
					idc = 12010;
					style = 2;
					onButtonClick = "[2] call life_fnc_craftingMenuOpen";

					text = "Craft"; //--- ToDo: Localize;
					x = 0.463906 * safezoneW + safezoneX;
					y = 0.43114 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile4ImageBG: Life_RscText
				{
					idc = -1;

					x = 0.520625 * safezoneW + safezoneX;
					y = 0.401 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class HeaderTile4Image: life_RscPicture
				{
					idc = -1;

					text = "dialog\data\profs\icon_treasure.paa"; //--- ToDo: Localize;
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.401 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile4Title: Life_RscText
				{
					idc = 12016;

					text = "Chasse au Trésor"; //--- ToDo: Localize;
					x = 0.5825 * safezoneW + safezoneX;
					y = 0.39 * safezoneH + safezoneY;
					w = 0.139219 * safezoneW;
					h = 0.044 * safezoneH;
					sizeEx = 0.07;
				};
				class Tile4ProfTier: Life_RscStructuredText
				{
					idc = 12018;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.434 * safezoneH + safezoneY;
					w = 0.0979687 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class Tile4ProgressBarBG: Life_RscText
				{
					idc = -1;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.456 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile4ProgressBar: Life_RscProgress
				{
					idc = 12019;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.456 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile4ProgressBarText: Life_RscStructuredText
				{
					idc = 12017;

					text = "0"; //--- ToDo: Localize;
					x = 0.5825 * safezoneW + safezoneX;
					y = 0.456 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0};
				};
				class Tile4Crafting: Life_RscButtonMenu
				{
					idc = 12020;
					style = 2;
					onButtonClick = "[3] call life_fnc_craftingMenuOpen";

					text = "Craft"; //--- ToDo: Localize;
					x = 0.690781 * safezoneW + safezoneX;
					y = 0.43114 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile5ImageBG: Life_RscText
				{
					idc = -1;

					x = 0.29375 * safezoneW + safezoneX;
					y = 0.533 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class HeaderTile5Image: life_RscPicture
				{
					idc = -1;

					text = "dialog\data\profs\ico_chimie.paa"; //--- ToDo: Localize;
					x = 0.29375 * safezoneW + safezoneX;
					y = 0.533 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile5Title: Life_RscText
				{
					idc = 12021;

					text = "Chimie"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.522 * safezoneH + safezoneY;
					w = 0.139219 * safezoneW;
					h = 0.044 * safezoneH;
					sizeEx = 0.08;
				};
				class Tile5ProfTier: Life_RscStructuredText
				{
					idc = 12023;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.566 * safezoneH + safezoneY;
					w = 0.0979687 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class Tile5ProgressBarBG: Life_RscText
				{
					idc = -1;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.588 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile5ProgressBar: Life_RscProgress
				{
					idc = 12024;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.588 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile5ProgressBarText: Life_RscStructuredText
				{
					idc = 12022;

					text = "0"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.588 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0};
				};
				class Tile5Crafting: Life_RscButtonMenu
				{
					idc = 120025;
					style = 2;
					onButtonClick = "[4] call life_fnc_craftingMenuOpen";

					text = "Craft"; //--- ToDo: Localize;
					x = 0.463906 * safezoneW + safezoneX;
					y = 0.56424 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				// Hacking

				class Tile6ImageBG: Life_RscText
				{
					idc = -1;

					x = 0.520625 * safezoneW + safezoneX;
					y = 0.533 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class HeaderTile6Image: life_RscPicture
				{
					idc = -1;

					text = "dialog\data\profs\icon_treasure.paa"; //--- ToDo: Localize;
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.533 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile6Title: Life_RscText
				{
					idc = 12026;

					text = "Livreur"; //--- ToDo: Localize;
					x = 0.5825 * safezoneW + safezoneX;
					y = 0.522 * safezoneH + safezoneY;
					w = 0.139219 * safezoneW;
					h = 0.044 * safezoneH;
					sizeEx = 0.08;
				};
				class Tile6ProfTier: Life_RscStructuredText
				{
					idc = 12028;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.566 * safezoneH + safezoneY;
					w = 0.0979687 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class Tile6ProgressBarBG: Life_RscText
				{
					idc = -1;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.588 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile6ProgressBar: Life_RscProgress
				{
					idc = 12029;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.588 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile6ProgressBarText: Life_RscStructuredText
				{
					idc = 12027;

					text = "0"; //--- ToDo: Localize;
					x = 0.5825 * safezoneW + safezoneX;
					y = 0.588 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0};
				};
				class Tile6Crafting: Life_RscButtonMenu
				{
					idc = 120030;
					style = 2;
					//onButtonClick = "[5] call life_fnc_craftingMenuOpen";

					text = "Objets"; //--- ToDo: Localize;
					x = 0.690781 * safezoneW + safezoneX;
					y = 0.56424 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile1Info: Life_RscButtonMenu
				{
					idc = -1;
					style = 2;
					onButtonClick = "[0] call life_fnc_professionMenuInfo";

					text = "Info"; //--- ToDo: Localize;
					x = 0.422656 * safezoneW + safezoneX;
					y = 0.300148 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile2Info: Life_RscButtonMenu
				{
					style = 2;
					onButtonClick = "[1] call life_fnc_professionMenuInfo";

					idc = 1017;
					text = "Info"; //--- ToDo: Localize;
					x = 0.6485 * safezoneW + safezoneX;
					y = 0.29936 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile3Info: Life_RscButtonMenu
				{
					style = 2;
					onButtonClick = "[2] call life_fnc_professionMenuInfo";

					idc = -1;
					text = "Info"; //--- ToDo: Localize;
					x = 0.421625 * safezoneW + safezoneX;
					y = 0.43114 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile4Info: Life_RscButtonMenu
				{
					style = 2;
					onButtonClick = "[3] call life_fnc_professionMenuInfo";

					idc = -1;
					text = "Info"; //--- ToDo: Localize;
					x = 0.6485 * safezoneW + safezoneX;
					y = 0.43114 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile5Info: Life_RscButtonMenu
				{
					style = 2;
					onButtonClick = "[4] call life_fnc_professionMenuInfo";

					idc = -1;
					text = "Info"; //--- ToDo: Localize;
					x = 0.421625 * safezoneW + safezoneX;
					y = 0.56424 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile6Info: Life_RscButtonMenu
				{
					style = 2;
					onButtonClick = "[5] call life_fnc_professionMenuInfo";

					idc = -1;
					text = "Info"; //--- ToDo: Localize;
					x = 0.6485 * safezoneW + safezoneX;
					y = 0.56424 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile7Info: Life_RscButtonMenu
				{
					style = 2;
					onButtonClick = "[6] call life_fnc_professionMenuInfo";

					idc = -1;
					text = "Info"; //--- ToDo: Localize;
					x = 0.421625 * safezoneW + safezoneX;
					y = 0.69124 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile8Info: Life_RscButtonMenu
				{
					style = 2;
					onButtonClick = "[7] call life_fnc_professionMenuInfo";

					idc = -1;
					text = "Info"; //--- ToDo: Localize;
					x = 0.6485 * safezoneW + safezoneX;
					y = 0.69124 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};
					//// test
				class Tile7ImageBG: Life_RscText
				{
					idc = -1;

					x = 0.29375 * safezoneW + safezoneX;
					y = 0.660 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class HeaderTile7Image: life_RscPicture
				{
					idc = -1;

					text = "dialog\data\profs\ico_chimie.paa"; //--- ToDo: Localize;
					x = 0.29375 * safezoneW + safezoneX;
					y = 0.660 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile7Title: Life_RscText
				{
					idc = 120031;

					text = "Exploitant"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.649 * safezoneH + safezoneY;
					w = 0.139219 * safezoneW;
					h = 0.044 * safezoneH;
					sizeEx = 0.08;
				};
				class Tile7ProfTier: Life_RscStructuredText
				{
					idc = 12033;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.693 * safezoneH + safezoneY;
					w = 0.0979687 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class Tile7ProgressBarBG: Life_RscText
				{
					idc = -1;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.715 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile7ProgressBar: Life_RscProgress
				{
					idc = 12034;

					x = 0.355625 * safezoneW + safezoneX;
					y = 0.715 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile7ProgressBarText: Life_RscStructuredText
				{
					idc = 12032;

					text = "0"; //--- ToDo: Localize;
					x = 0.355625 * safezoneW + safezoneX;
					y = 0.715 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0};
				};
				class Tile7Crafting: Life_RscButtonMenu
				{
					idc = 120035;
					style = 2;
					onButtonClick = "[5] call life_fnc_craftingMenuOpen";

					text = "Recettes"; //--- ToDo: Localize;
					x = 0.463906 * safezoneW + safezoneX;
					y = 0.69124 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};

				class Tile8ImageBG: Life_RscText
				{
					idc = -1;

					x = 0.520625 * safezoneW + safezoneX;
					y = 0.660 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class HeaderTile8Image: life_RscPicture
				{
					idc = -1;

					text = "dialog\data\profs\icon_treasure.paa"; //--- ToDo: Localize;
					x = 0.520625 * safezoneW + safezoneX;
					y = 0.660 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.077 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile8Title: Life_RscText
				{
					idc = 120036;

					text = "Intérimaire"; //--- ToDo: Localize;
					x = 0.5825 * safezoneW + safezoneX;
					y = 0.649 * safezoneH + safezoneY;
					w = 0.139219 * safezoneW;
					h = 0.044 * safezoneH;
					sizeEx = 0.08;
				};
				class Tile8ProfTier: Life_RscStructuredText
				{
					idc = 12038;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.693 * safezoneH + safezoneY;
					w = 0.0979687 * safezoneW;
					h = 0.022 * safezoneH;
				};
				class Tile8ProgressBarBG: Life_RscText
				{
					idc = -1;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.715 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile8ProgressBar: Life_RscProgress
				{
					idc = 12039;

					x = 0.5825 * safezoneW + safezoneX;
					y = 0.715 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0.4};
				};
				class Tile8ProgressBarText: Life_RscStructuredText
				{
					idc = 12037;

					text = "0"; //--- ToDo: Localize;
					x = 0.5825 * safezoneW + safezoneX;
					y = 0.715 * safezoneH + safezoneY;
					w = 0.149531 * safezoneW;
					h = 0.022 * safezoneH;
					colorBackground[] = {0,0,0,0};
				};
				class Tile8Crafting: Life_RscButtonMenu
				{
					idc = 120040;
					style = 2;
					onButtonClick = "";

					text = ""; //--- ToDo: Localize;
					x = 0.690781 * safezoneW + safezoneX;
					y = 0.69124 * safezoneH + safezoneY;
					w = 0.04125 * safezoneW;
					h = 0.022 * safezoneH;
					colorText[] = {1,1,1,1};
					colorBackground[] = {0,0,0,0.4};
				};
			};		
		};	

		class CloseButtonKey: Life_RscButtonMenuIcon
		{
			onButtonClick = "closeDialog 0;";
			idc = -1;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			tooltip = "Fermer"; //--- ToDo: Localize;
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};