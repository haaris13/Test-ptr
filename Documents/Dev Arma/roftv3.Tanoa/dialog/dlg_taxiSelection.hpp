class life_taxi_selection
{
	idd = 38600;
	movingEnabled = false;
	enableSimulation = true;

	class controlsBackground
	{

		class life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			x = 0.654688 * safezoneW + safezoneX;
			y = 0.692444 * safezoneH + safezoneY;
			w = 0.0824753 * safezoneW;
			h = 0.0220081 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};

		class MainBackground: Life_RscText
		{
			idc = -1;
			x = 0.262812 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.474375 * safezoneW;
			h = 0.462 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};

		class MapView: Life_RscMapControl
		{
			idc = 38602;
			maxSatelliteAlpha = 1;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.324747 * safezoneW;
			h = 0.440163 * safezoneH;
		};
		class spawnMenuHeader: Life_RscText
		{
			idc = -1;

			x = 0.262812 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.474375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,0.7};
		};

		class Title : Life_RscTitle
		{
			colorBackground[] = {0,0,0,0};
			idc = -1;

			text = "Choix d'un Taxi";
			x = 0.262812 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;
		};

		class SpawnPointTitle : Title
		{
			idc = 38601;
			x = 0.407187 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.022 * safezoneH;

			style = 1;
			text = "";
		};

	};

	class controls
	{
		class SpawnPointList: Life_RscListNBox
		{
			idc = 38610;
			text = "";
			
			coloumns[] = {0,0,0.9};
			drawSideArrows = false;
			colorBackground[] = {1,1,1,1};
			idcLeft = -1;
			idcRight = -1;
			//sizeEx = 0.041;
			//rowHeight = 0.050;
			rowHeight = 0.09;
			sizeEx = 0.033;
			x = 0.267969 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.44 * safezoneH;
			onLBSelChanged = "_this call life_fnc_taxiSelected;";
		};



		class taxiButtonFast: Life_RscButtonMenu
		{

			onButtonClick = "[] call life_fnc_taxiConfirmFast";
			idc = 38604;
			x = 0.262812 * safezoneW + safezoneX;
			y = 0.691518 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.7};
			text = "Transport Rapide";
		};

		class taxiButtonNormal: Life_RscButtonMenu
		{

			onButtonClick = "[] call life_fnc_taxiConfirmNormal";
			idc = 38604;
			x = 0.262812 * safezoneW + safezoneX;
			y = 0.691518 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.7};
			text = "Transport Normal";
		};
	};
};
