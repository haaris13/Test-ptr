class Slots
{
	idd = 41000;
	name = "Slots";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground
	{
		class RscTitleBackground : Life_RscTitle
		{
			idc = -1;
			x = 0.0;
			y = 0.2;
			w = 1.0;
			h = (1 / 25);
		};
		
		class RscBackground : Life_RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.0;
			y = 0.2 + (11 / 250); // 0.244
			w = 1.0;
			h = 0.7 - (22 / 250); // 0.612
		};
		
		class fondtablet: Life_RscPicture
		{
			idc = -1;

			text = "textures\tabletbg.paa";
			x = 0.2525 * safezoneW + safezoneX;
			y = 0.06 * safezoneH + safezoneY;
			w = 0.495 * safezoneW;
			h = 0.858 * safezoneH;
		};

		class RscTitleText : Life_RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 41001;
			text = "Machine a Sous";
			x = 0.0;
			y = 0.2;
			w = 1.0;
			h = (1 / 25);
		};
		
		class RscTitleTextRight : RscTitleText
		{
			idc = 41002;
			style = 1;
			text = "Chargement...";
		};
	};
	
	class Controls
	{
		class RscPictureRowA: Life_RscPicture
		{
			idc = 41003;
			text = "icons\casino\bar.paa";
			
			x = 0.05; y = 0.364;
			w = 0.266; h = 0.372;
		};
		
		class RscPictureRowB: Life_RscPicture
		{
			idc = 41004;
			text = "icons\casino\bar.paa";
			
			x = 0.366; y = 0.364;
			w = 0.266; h = 0.372;
		};
		
		class RscPictureRowC: Life_RscPicture
		{
			idc = 41005;
			text = "icons\casino\bar.paa";
			
			x = 0.682; y = 0.364;
			w = 0.266; h = 0.372;
		};
		
		class ButtonClose : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.0;
			y = 0.9 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonPlay : Life_RscButtonMenu
		{
			idc = 41006;
			text = "Jouer";
			onButtonClick = "[] spawn life_fnc_slotPlay;";
			x = 1.0 - (6.25 / 40);
			y = 0.9 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};