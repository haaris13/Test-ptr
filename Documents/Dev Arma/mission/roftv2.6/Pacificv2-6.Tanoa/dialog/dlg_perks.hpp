class PerkDialog
{
	idd = 17000;

	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{	
		class TabletBackground: Life_RscPicture
		{
			idc = -1;
			text = "textures\tabletbg.paa";
				x = 0.2525 * safezoneW + safezoneX;
				y = 0.06 * safezoneH + safezoneY;
				w = 0.495 * safezoneW;
				h = 0.858 * safezoneH;
		};

		class headerText: Life_RscText
		{
			idc = -1;
			text = "Compétences"; //--- ToDo: Localize;
			x = 0.278282 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.443438 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class activePerkSpace : Life_RscText
		{
			idc = -1;
			text = "Compétences Actives"; //--- ToDo: Localize;
			x = 0.278282 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.443438 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};

	};

	class Controls
	{

		class availablePerksText : Life_RscText
		{
			idc = 17020;
			text = "Compétences Disponibles"; //--- ToDo: Localize;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.291 * safezoneH + safezoneY;
			w = 0.208281 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class SelectPerkButton : Life_RscButtonMenu
		{	
			idc = 17030;
			onButtonClick = "[] call life_fnc_perkSelectPerk";
			text = "Selection Perf"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class RemoveActivePerkButton : Life_RscButtonMenu
		{
			idc = 17031;
			onButtonClick = "[] call life_fnc_perkRemovePerk";
			text = "Supprimer"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class ButtonT1: Life_RscButtonMenu
		{
			idc = 17001;
			text = "Tier 1"; //--- ToDo: Localize;
			onButtonClick = "[1] call life_fnc_perkFilterTier;";
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
	
		class ButtonT2 : Life_RscButtonMenu
		{
			idc = 17002;
			text = "Tier 2"; //--- ToDo: Localize;
			x = 0.319531 * safezoneW + safezoneX;
			onButtonClick = "[2] call life_fnc_perkFilterTier;";
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonT3 : Life_RscButtonMenu
		{
			idc = 17003;
			text = "Tier 3"; //--- ToDo: Localize;
			onButtonClick = "[3] call life_fnc_perkFilterTier;";
			x = 0.360781 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonT4 : Life_RscButtonMenu
		{
			idc = 17004;
			text = "Tier 4"; //--- ToDo: Localize;
			onButtonClick = "[4] call life_fnc_perkFilterTier;";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonT5 : Life_RscButtonMenu
		{
			idc = 17005;
			text = "Tier 5"; //--- ToDo: Localize;
			onButtonClick = "[5] call life_fnc_perkFilterTier;";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonT6 : Life_RscButtonMenu
		{
			idc = 17006;
			text = "Tier 6"; //--- ToDo: Localize;
			onButtonClick = "[6] call life_fnc_perkFilterTier;";
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonT7 : Life_RscButtonMenu
		{
			idc = 17007;
			text = "Tier 7"; //--- ToDo: Localize;
			onButtonClick = "[7] call life_fnc_perkFilterTier;";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonT8: Life_RscButtonMenu
		{
			idc = 17008;
			text = "Tier 8"; //Overview
			onButtonClick = "[8] call life_fnc_perkFilterTier;";
			x = 0.566985 * safezoneW + safezoneX;
			y = 0.258103 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonT9: Life_RscButtonMenu
		{
			idc = 17009;
			text = "Tier 9";
			onButtonClick = "[9] call life_fnc_perkFilterTier;";
			x = 0.608206 * safezoneW + safezoneX;
			y = 0.258103 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ButtonT10: Life_RscButtonMenu
		{
			idc = 17010;
			text = "Tier 10"; //Overview
			onButtonClick = "[10] call life_fnc_perkFilterTier;";
			x = 0.649427 * safezoneW + safezoneX;
			y = 0.258103 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class buttonEmptySpace : Life_RscText
		{
			idc = -1;
			x = 0.690854 * safezoneW + safezoneX;
			y = 0.258103 * safezoneH + safezoneY;
			w = 0.0309159 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};

		class availablePerkList : Life_RscListBox
		{
			idc = 17018;
			onLBSelChanged = "_this call life_fnc_perkAvailableLBchange;";
			colorBackground[] = {-1,-1,-1,0.8};
			rowHeight = 0.09;
			sizeEx = 0.033;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.209 * safezoneH;
		};

		class perkDetailsName : Life_RscText
		{
			idc = 17011;
			text = ""; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.324844 * safezoneW;
			h = 0.055 * safezoneH;
			sizeEx = 0.08;
		};
		class perkDetailsDescription : Life_RscStructuredText
		{
			idc = 17012;
			text = ""; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.324844 * safezoneW;
			h = 0.121 * safezoneH;
		};

		class perkSelectWarning : Life_RscStructuredText
		{
			idc = 17013;
			text = ""; //--- ToDo: Localize;
			x = 0.474219 * safezoneW + safezoneX;
			y = 0.50637 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;

		};
		class activePerk : Life_RscText
		{
			idc = 17015;
			//rowHeight = 0.09;
			//sizeEx = 0.033;
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.11 * safezoneH;
			colorBackground[] = {-1,-1,-1,0.8};
		};

		class activePerkDescription : Life_RscStructuredText
		{
			idc = 17016;
			text = ""; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.324844 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class removeActivePerkCost : Life_RscStructuredText
		{
			idc = 17017;
			text = ""; //--- ToDo: Localize;
			x = 0.46802 * safezoneW + safezoneX;
			//y = 0.680629 * safezoneH + safezoneY;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.033 * safezoneH;
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
			tooltip = "$STR_Global_Close";
			text = "a3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
		};
	};
};