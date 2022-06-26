class playerSkills {

	idd = 3800;
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_skillsDisplay;";
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

		class MainBackground: Life_RscText
		{
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

			text = "Player Skills & Perf"; //--- ToDo: Localize; thanks bohemia gui export guy
			x = 0.335049 * safezoneW + safezoneX;
			y = 0.33498 * safezoneH + safezoneY;
			w = 0.329901 * safezoneW;
			h = 0.0220027 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};

	};

	class controls {

	 class SkillList: Life_RscListBox
		{
			idc = 3801;
			onLBSelChanged = "_this call life_fnc_skillsLBChange";
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.264 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			sizeEx = 0.03;
		};

		class SkillDetail : Life_RscStructuredText
		{
			idc = 3802;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.264 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		class SKILL_SLIDER : Life_RscProgress
		{
			idc = 3803;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			colorBar[] = {1,1,1,1};
		};

		class ButtonClose: Life_RscButtonMenu
		{
			onButtonClick = "closeDialog 0;";

			idc = -1;
			style = 2;
			text = "<t align = 'center' size = '0.75' > Fermer </t>";
			tooltip = "$STR_Global_Close";
			x = 0.469072 * safezoneW + safezoneX;
			y = 0.640013 * safezoneH + safezoneY;
			w = 0.0670112 * safezoneW;
			h = 0.0220027 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};
	};
};
