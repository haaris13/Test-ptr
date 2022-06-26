class SettingsMenuLogin
{
	idd = 2900;
	name = "SettingsMenuLogin";
	movingEnabled = 1;
	enableSimulation = 1;
	
	class controlsBackground
	{

		class MainBackground: Life_RscText
		{
			idc = -1;
			
			x = 0.329895 * safezoneW + safezoneX;
			y = 0.33498 * safezoneH + safezoneY;
			w = 0.340211 * safezoneW;
			h = 0.352043 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class PlayerTagsHeader : Life_RscText
		{
			idc = -1;
			text = "$STR_SM_PlayerTags";
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class SideChatHeader : PlayerTagsHeader
		{
			idc = -1;
			text = "$STR_SM_SC";
			shadow = 0;
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class RevealNearestHeader : PlayerTagsHeader
		{
			idc = -1;
			text = "Reveal Nearest Objects";
			
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
		};
		
		class Title : life_RscTitle
		{
			idc = -1;
			colorBackground[] = {0,0,0,0};
			text = "$STR_SM_Title";
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
	};
	
	class controls
	{
		class VDonFoot : life_RscText
		{
			idc = -1;
			text = "$STR_SM_onFoot";
			
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.371 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class VDinCar : life_RscText
		{
			idc = -1;
			text = "$STR_SM_inCar";
			
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class VDinAir : life_RscText
		{
			idc = -1;
			text = "$STR_SM_inAir";
			
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class VD_onfoot_slider : life_RscXSliderH 
		{
			idc = 2901;
			text = "";
			onSliderPosChanged = "[0,_this select 1] call life_fnc_s_onSliderChange;";
			tooltip = "$STR_SM_ToolTip1";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.111375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class VD_onfoot_value : Life_RscEdit
		{
			idc = 2902;
			text = "";
			onChar = "[_this select 0, _this select 1,'ground',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'ground',true] call life_fnc_s_onChar;";
			
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.033 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class VD_car_slider : life_RscXSliderH 
		{
			idc = 2911;
			text = "";
			onSliderPosChanged = "[1,_this select 1] call life_fnc_s_onSliderChange;";
			tooltip = "$STR_SM_ToolTip2";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.111375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class VD_car_value : Life_RscEdit
		{
			idc = 2912;
			text = "";
			onChar = "[_this select 0, _this select 1,'vehicle',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'vehicle',true] call life_fnc_s_onChar;";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.033 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class VD_air_slider : life_RscXSliderH 
		{
			idc = 2921;
			text = "";
			onSliderPosChanged = "[2,_this select 1] call life_fnc_s_onSliderChange;";
			tooltip = "$STR_SM_ToolTip3";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.111375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class VD_air_value : Life_RscEdit
		{
			idc = 2922;
			text = "";
			onChar = "[_this select 0, _this select 1,'air',false] call life_fnc_s_onChar;";
			onKeyUp = "[_this select 0, _this select 1,'air',true] call life_fnc_s_onChar;";
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.033 * safezoneW;
			h = 0.022 * safezoneH;
		};
		
		class PlayerTagsONOFF : Life_Checkbox
		{
			//text = "ON";
			tooltip = "$STR_GUI_PlayTags";
			idc = 2970;
			sizeEx = 0.04;
			onCheckedChanged = "['tags',_this select 1] call life_fnc_s_onCheckedChange;";
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;

	
		};
		
		class SideChatONOFF : PlayerTagsONOFF
		{
			idc = 2971;
			tooltip = "";
			onCheckedChanged = "['sidechat',_this select 1] call life_fnc_s_onCheckedChange;";

			x = 0.489687 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
		};
		
		class RevealONOFF : PlayerTagsONOFF
		{
			tooltip = "$STR_GUI_PlayerReveal";
			onCheckedChanged = "['objects',_this select 1] call life_fnc_s_onCheckedChange;";
			idc = 2972;
			x = 0.489687 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
		};
		
		class ButtonClose : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			onButtonClick = "closeDialog 0;";
			style =2;
			text = "<t align = 'center' size = '0.75' > Fermer </t>";
			tooltip = "Fermer";
			x = 0.469072 * safezoneW + safezoneX;
			y = 0.610013 * safezoneH + safezoneY;
			w = 0.0670112 * safezoneW;
			h = 0.0220027 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.5};
		};

		class RscButton_1601: life_RscButtonMenu
		{
			idc = -1;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};

		class RscButton_1602: life_RscButtonMenu
		{
			idc = -1;
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
		};
	};
};