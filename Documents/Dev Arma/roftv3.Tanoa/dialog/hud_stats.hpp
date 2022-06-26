#define INFINITE 1e+1000
#define ST_CENTER 0x02
/*
    Author: Casimodo33 [ROFT]
*/

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
        Life_RscProgress_HUDFood,
        Life_RscProgress_HUDHealth,
        Life_RscProgress_HUDWater,
        Life_RscProgress_casimodobackground,
        Life_RscText_HUDFood,
        Life_RscText_HUDHealth,
        Life_RscText_HUDWater
    };

    /* image background */
    class Life_RscProgress_casimodobackground: life_RscPicture {
        idc = 2210;
        text = "images\hud.paa";
        x = 0.9101 * safezoneW + safezoneX;
		y = 0.7519 * safezoneH + safezoneY;
        w = 0.1125 * safezoneW;
        h = 0.1983 * safezoneH;
    };

    /* Progress Bars */
    class LIFE_RscProgress_HUDCommon: Life_RscProgress {
        x = 0.9302 * safezoneW + safezoneX;
        w = 0.0531 * safezoneW;
        h = 0.0227 * safezoneH;
    };

    class Life_RscProgress_HUDFood: LIFE_RscProgress_HUDCommon {
        idc = 2200;
        colorBar[] = {0,0.50,0,0.6};
        y = 0.7709 * safezoneH + safezoneY;
    };

    class Life_RscProgress_HUDHealth: LIFE_RscProgress_HUDCommon {
        idc = 2201;
        colorBar[] = {0.85,0.05,0,0.6};
        y = 0.8477 * safezoneH + safezoneY;
    };

    class Life_RscProgress_HUDWater: LIFE_RscProgress_HUDCommon {
        idc = 2202;
        colorBar[] = {0,0.25,0.65,0.6};
        y = 0.8095 * safezoneH + safezoneY;
    };
    

    /* Texts */
    class Life_RscText_HUDCommon: Life_RscText {
        SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
        style = ST_CENTER;
        x = 0.9302 * safezoneW + safezoneX;
        w = 0.0462964 * safezoneW;
        h = 0.0222222 * safezoneH;
    };

    class Life_RscText_HUDFood: Life_RscText_HUDCommon {
        idc = 1200;
        text = "100%";
        y = 0.7709 * safezoneH + safezoneY;
    };

    class Life_RscText_HUDHealth: Life_RscText_HUDCommon {
        idc = 1201;
        text = "100%";
        y = 0.8477 * safezoneH + safezoneY;
    };
    
    class Life_RscText_HUDWater: Life_RscText_HUDCommon {
        idc = 1202;
        text = "100%";
        y = 0.8095 * safezoneH + safezoneY;
    };


};
