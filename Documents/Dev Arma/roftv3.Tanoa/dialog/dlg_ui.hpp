#define INFINITE 1e+1000
#define IDC_LIFE_BAR_FOOD 2200
#define IDC_LIFE_BAR_WATER 2201
#define IDC_LIFE_BAR_HEALTH 2202
#define IDC_LIFE_PICTURE_FOOD 1200
#define IDC_LIFE_PICTURE_WATER 1201
#define IDC_LIFE_PICTURE_HEALTH 1202
#define IDC_LIFE_FOOD_TEXT 1000
#define IDC_LIFE_WATER_TEXT 1001
#define IDC_LIFE_HEALTH_TEXT 1002


class playerHUD {
	idd = -1;
	duration = INFINITE;
	movingEnable = 0;
	fadein = 0;
	fadeout = 0;
	name = "playerHUD";
	onLoad = "uiNamespace setVariable ['playerHUD',_this select 0]";
	objects[] = {};
	controls[] = {


		//LIFE_HUNGER_BACK,
		//LIFE_BAR_FOOD,
		LIFE_PICTURE_FOOD,
		LIFE_FOOD_TEXT,
	
		//LIFE_HYDRATION_BACK,
		//LIFE_BAR_WATER,
		LIFE_PICTURE_WATER,
		LIFE_WATER_TEXT,

		//LIFE_HEALTH_BACK,
		//LIFE_BAR_HEALTH,
		LIFE_PICTURE_HEALTH,
		LIFE_HEALTH_TEXT	
		
	};

	/* Backgrounds */
	/*
	class LIFE_HUNGER_BACK: Life_RscBackground
		{
			idc = -1;

			x = 0.920956 * safezoneW + safezoneX;
			y = 0.819 * safezoneH + safezoneY;
			w = 0.0586978 * safezoneW;
			h = 0.0246668 * safezoneH;
			colorText[] = {0.1,0.1,0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.9};
		};
		class LIFE_HYDRATION_BACK: Life_RscBackground
		{
			idc = -1;

			x = 0.920956 * safezoneW + safezoneX;
			y = 0.849 * safezoneH + safezoneY;
			w = 0.0586978 * safezoneW;
			h = 0.0246668 * safezoneH;
			colorText[] = {0.1,0.1,0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.9};
		};
		class LIFE_HEALTH_BACK: Life_RscBackground
		{
			idc = -1;

			x = 0.920956 * safezoneW + safezoneX;
			y = 0.879 * safezoneH + safezoneY;
			w = 0.0586978 * safezoneW;
			h = 0.0246668 * safezoneH;
			colorText[] = {0.1,0.1,0.1,1};
			colorBackground[] = {0.1,0.1,0.1,0.9};
		};
	*/
	/* Progress Bars */

	
		class LIFE_BAR_FOOD: Life_RscProgress

		{
			idc = 2200;
			colorBar[] = {1,0.4,0,0.25};

			x = 0.940344 * safezoneW + safezoneX;
			y = 0.8245 * safezoneH + safezoneY;
			w = 0.0370832 * safezoneW;
			h = 0.0164446 * safezoneH;
			colorBackground[] = {1,0.4,0,0.25};
			
		};
		class LIFE_BAR_WATER: Life_RscProgress
		{
			idc = 2201;
			colorBar[] = {0.5,0.5,1,0.25};

			x = 0.940344 * safezoneW + safezoneX;
			y = 0.8545 * safezoneH + safezoneY;
			w = 0.0370832 * safezoneW;
			h = 0.0164446 * safezoneH;
			colorBackground[] = {0.5,0.5,1,0.25};
		};
		class LIFE_BAR_HEALTH: Life_RscProgress
		{
			idc = 2202;
			colorBar[] = {0.1,1,0.1,0.25};

				x = 0.940344 * safezoneW + safezoneX;
			y = 0.8845 * safezoneH + safezoneY;
			w = 0.0370832 * safezoneW;
			h = 0.0164446 * safezoneH;

			colorBackground[] = {0.1,1,0.1,0.25};
		};
	
	/* Text */

	class LIFE_FOOD_TEXT: Life_RscText
	{
		idc = IDC_LIFE_FOOD_TEXT;
		text = "100%";
	x = 0.948078 * safezoneW + safezoneX;
	y = 0.753 * safezoneH + safezoneY;
	w = 0.0360937 * safezoneW;
	h = 0.022 * safezoneH;
		sizeEX = "0.9 * 			( (	( ( safezoneW / safezoneH ) min 1.2 ) / 1.2 ) / 25 )";
		//colorText[] = {0.6,0.6,0.6,1};
		colorText[] = {1,1,1,1};
	};
	class LIFE_WATER_TEXT: Life_RscText
	{
		idc = IDC_LIFE_WATER_TEXT;
		text = "100%";
	x = 0.948078 * safezoneW + safezoneX;
	y = 0.78776 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.022 * safezoneH;
		sizeEX = "0.9 * 			( (	( ( safezoneW / safezoneH ) min 1.2 ) / 1.2 ) / 25 )";
		//colorText[] = {0.6,0.6,0.6,1};
		colorText[] = {1,1,1,1};
	};
	class LIFE_HEALTH_TEXT: Life_RscText
	{
		idc = IDC_LIFE_HEALTH_TEXT;
		text = "100%";
	x = 0.948594 * safezoneW + safezoneX;
	y = 0.82186 * safezoneH + safezoneY;
	w = 0.0309375 * safezoneW;
	h = 0.022 * safezoneH;
		sizeEX = "0.9 * 			( (	( ( safezoneW / safezoneH ) min 1.2 ) / 1.2 ) / 25 )";
		//colorText[] = {0.6,0.6,0.6,1};
		colorText[] = {1,1,1,1};
	};

	/* Icons */
	class LIFE_PICTURE_FOOD: life_RscPicture
	{
		idc = -1;

		text = "icons\ui\food3.paa"; //--- ToDo: Localize;
	x = 0.927969 * safezoneW + safezoneX;
	y = 0.75124 * safezoneH + safezoneY;
	w = 0.0144273 * safezoneW;
	h = 0.0257037 * safezoneH;
		colorBackground[] = {-1,-1,-1,1};
	};
	
	class LIFE_PICTURE_WATER: life_RscPicture
	{
		idc = -1;

		text = "icons\ui\water3.paa"; //--- ToDo: Localize;
	x = 0.927969 * safezoneW + safezoneX;
	y = 0.786 * safezoneH + safezoneY;
	w = 0.0144272 * safezoneW;
	h = 0.0257037 * safezoneH;
		colorBackground[] = {-1,-1,-1,1};
	};
	
class LIFE_PICTURE_HEALTH: life_RscPicture
	{
		idc = -1;

		text = "icons\ui\health3.paa"; //--- ToDo: Localize;
		x = 0.927969 * safezoneW + safezoneX;
		y = 0.82076 * safezoneH + safezoneY;
		w = 0.0144273 * safezoneW;
		h = 0.0257037 * safezoneH;
		colorBackground[] = {-1,-1,-1,1};
	};
};