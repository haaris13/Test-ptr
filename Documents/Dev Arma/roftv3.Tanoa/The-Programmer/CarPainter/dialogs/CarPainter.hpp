/*
    Author: 3rk
	Contact : https://steamcommunity.com/id/KR3KZ/
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

*/
class TP_carPainter
{
	name = "TP_carPainter";
	idd = 786000;
	movingEnable = false;
	onUnload = "[] spawn the_programmer_carpainter_fnc_carPainter_onDialogExit;";

	class ControlsBackground
	{
		class background : TP_CarPainter_background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.01875;
			y = safeZoneY + safeZoneH * 0.02888889;
			w = safeZoneW * 0.3275;
			h = safeZoneH * 0.61444445;
			style = 0;
			text = "";
			colorText[] = {0.6627,0.1137,0.1294,1};
			font = "PuristaMedium";
			
		};
		class title : TP_CarPainter_text_title
		{
			type = 0;
			idc = 786020;
			x = safeZoneX + safeZoneW * 0.01625;
			y = safeZoneY + safeZoneH * 0.03444445;
			w = safeZoneW * 0.331875;
			h = safeZoneH * 0.03666667;
			text = "Peindre un véhicule";
			
		};
		class vehicle_choice : TP_CarPainter_div
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.03;
			y = safeZoneY + safeZoneH * 0.08666667;
			w = safeZoneW * 0.305;
			h = safeZoneH * 0.07666667;
			style = 0;
			
		};
		class vehicle_choice_title : TP_CarPainter_subtitle
		{
			type = 0;
			idc = 786060;
			x = safeZoneX + safeZoneW * 0.03375;
			y = safeZoneY + safeZoneH * 0.09222223;
			w = safeZoneW * 0.119375;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "Choix du véhicule";
			
		};
		class vehicle_choice_owner : TP_CarPainter_subtitle
		{
			type = 0;
			idc = 787000;
			x = safeZoneX + safeZoneW * 0.15875;
			y = safeZoneY + safeZoneH * 0.09222223;
			w = safeZoneW * 0.169375;
			h = safeZoneH * 0.02222223;
			style = 1;
			text = "Propriétaire :";
			
		};
		class color_choice : TP_CarPainter_div
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.03;
			y = safeZoneY + safeZoneH * 0.17333334;
			w = safeZoneW * 0.305;
			h = safeZoneH * 0.07666667;
			style = 0;
			
		};
		class color_choice_title : TP_CarPainter_subtitle
		{
			type = 0;
			idc = 786021;
			x = safeZoneX + safeZoneW * 0.03375;
			y = safeZoneY + safeZoneH * 0.17888889;
			w = safeZoneW * 0.119375;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "Couleurs";
			
		};
		class custom_color_choice : TP_CarPainter_div
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.03;
			y = safeZoneY + safeZoneH * 0.26111112;
			w = safeZoneW * 0.305;
			h = safeZoneH * 0.16;
			style = 0;
			
		};
		class custom_color_choice_title : TP_CarPainter_subtitle
		{
			type = 0;
			idc = 786022;
			x = safeZoneX + safeZoneW * 0.03375;
			y = safeZoneY + safeZoneH * 0.26666667;
			w = safeZoneW * 0.119375;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "Couleurs personnalisées";
			
		};
		class custom_color_choice_preview_rgba : TP_CarPainter_div
		{
			type = 0;
			idc = 786007;
			x = safeZoneX + safeZoneW * 0.285;
			y = safeZoneY + safeZoneH * 0.3;
			w = safeZoneW * 0.04125;
			h = safeZoneH * 0.11;
			style = 0;
			colorBackground[] = {0.329,0.349,0.364,1};
			
		};
		class rvmat_choice : TP_CarPainter_div
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.03;
			y = safeZoneY + safeZoneH * 0.43111112;
			w = safeZoneW * 0.305;
			h = safeZoneH * 0.07666667;
			style = 0;
			
		};
		class rvmat_choice_title : TP_CarPainter_subtitle
		{
			type = 0;
			idc = 787001;
			x = safeZoneX + safeZoneW * 0.03375;
			y = safeZoneY + safeZoneH * 0.43666667;
			w = safeZoneW * 0.119375;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "Rvmats";
			
		};
		class price : TP_CarPainter_div
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.03;
			y = safeZoneY + safeZoneH * 0.52111112;
			w = safeZoneW * 0.21875;
			h = safeZoneH * 0.10444445;
			style = 0;
			
		};
		class price_title : TP_CarPainter_subtitle
		{
			type = 0;
			idc = 786023;
			x = safeZoneX + safeZoneW * 0.03375;
			y = safeZoneY + safeZoneH * 0.52666667;
			w = safeZoneW * 0.119375;
			h = safeZoneH * 0.02222223;
			style = 0;
			text = "Prix TTC";
			
		};
		class vehicle_price : TP_CarPainter_text_big
		{
			type = 0;
			idc = 786013;
			x = safeZoneX + safeZoneW * 0.03375;
			y = safeZoneY + safeZoneH * 0.54333334;
			w = safeZoneW * 0.210625;
			h = safeZoneH * 0.07666667;
			style = 2;
			
		};

	};
	class Controls
	{
		class combobox_vehicles : TP_CarPainter_combobox
		{
			type = 4;
			idc = 786061;
			x = safeZoneX + safeZoneW * 0.04625;
			y = safeZoneY + safeZoneH * 0.12555556;
			w = safeZoneW * 0.284375;
			h = safeZoneH * 0.02777778;
			maxHistoryDelay = 0;
			onLBSelChanged = "[] call the_programmer_carpainter_fnc_carPainter_vehicles_onLbSelChanged;";
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class combobox_colors : TP_CarPainter_combobox
		{
			type = 4;
			idc = 786001;
			x = safeZoneX + safeZoneW * 0.04625;
			y = safeZoneY + safeZoneH * 0.21222223;
			w = safeZoneW * 0.284375;
			h = safeZoneH * 0.02777778;
			maxHistoryDelay = 0;
			onLBSelChanged = "[] call the_programmer_carpainter_fnc_carPainter_colors_onLbSelChanged;";
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class combobox_rvmats : TP_CarPainter_combobox
		{
			type = 4;
			idc = 787002;
			x = safeZoneX + safeZoneW * 0.04625;
			y = safeZoneY + safeZoneH * 0.47;
			w = safeZoneW * 0.284375;
			h = safeZoneH * 0.02777778;
			maxHistoryDelay = 0;
			onLBSelChanged = "[] call the_programmer_carpainter_fnc_carPainter_rvmats_onLbSelChanged;";
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
				
			};
			
		};
		class slider_r : TP_CarPainter_slider
		{
			type = 43;
			idc = 786002;
			x = safeZoneX + safeZoneW * 0.03625;
			y = safeZoneY + safeZoneH * 0.30111112;
			w = safeZoneW * 0.201875;
			h = safeZoneH * 0.01666667;
			color[] = {0.992,0.407,0.454,1};
			colorActive[] = {0.992,0.407,0.454,1};
			onSliderPosChanged = "[0] call the_programmer_carpainter_fnc_carPainter_onSliderPosChanged;";
			
		};
		class slider_g : TP_CarPainter_slider
		{
			type = 43;
			idc = 786003;
			x = safeZoneX + safeZoneW * 0.03625;
			y = safeZoneY + safeZoneH * 0.33111112;
			w = safeZoneW * 0.201875;
			h = safeZoneH * 0.01666667;
			color[] = {0.407,0.992,0.509,1};
			colorActive[] = {0.407,0.992,0.509,1};
			onSliderPosChanged = "[1] call the_programmer_carpainter_fnc_carPainter_onSliderPosChanged;";
			
		};
		class slider_b : TP_CarPainter_slider
		{
			type = 43;
			idc = 786004;
			x = safeZoneX + safeZoneW * 0.03625;
			y = safeZoneY + safeZoneH * 0.36111112;
			w = safeZoneW * 0.201875;
			h = safeZoneH * 0.01666667;
			color[] = {0.407,0.811,0.992,1};
			colorActive[] = {0.407,0.811,0.992,1};
			onSliderPosChanged = "[2] call the_programmer_carpainter_fnc_carPainter_onSliderPosChanged;";
			
		};
		class slider_a : TP_CarPainter_slider
		{
			type = 43;
			idc = 786012;
			x = safeZoneX + safeZoneW * 0.03625;
			y = safeZoneY + safeZoneH * 0.39111112;
			w = safeZoneW * 0.201875;
			h = safeZoneH * 0.01666667;
			color[] = {0.949,0.949,0.949,1};
			colorActive[] = {0.949,0.949,0.949,1};
			onSliderPosChanged = "[3] call the_programmer_carpainter_fnc_carPainter_onSliderPosChanged;";
			
		};
		class button_pay : TP_CarPainter_button
		{
			type = 1;
			idc = 786024;
			x = safeZoneX + safeZoneW * 0.260625;
			y = safeZoneY + safeZoneH * 0.52111112;
			w = safeZoneW * 0.074375;
			h = safeZoneH * 0.10444445;
			text = "Peindre";
			onButtonClick = "[] spawn the_programmer_carpainter_fnc_carPainter_payAndPaint;";
			
		};
		class edit_r : TP_CarPainter_edit
		{
			type = 2;
			idc = 786008;
			x = safeZoneX + safeZoneW * 0.24375;
			y = safeZoneY + safeZoneH * 0.30111112;
			w = safeZoneW * 0.033125;
			h = safeZoneH * 0.02;
			onKeyUp = "[0] call the_programmer_carpainter_fnc_carPainter_onKeyUp;";
			
		};
		class edit_g : TP_CarPainter_edit
		{
			type = 2;
			idc = 786009;
			x = safeZoneX + safeZoneW * 0.24375;
			y = safeZoneY + safeZoneH * 0.33111112;
			w = safeZoneW * 0.033125;
			h = safeZoneH * 0.02;
			onKeyUp = "[1] call the_programmer_carpainter_fnc_carPainter_onKeyUp;";
			
		};
		class edit_b : TP_CarPainter_edit
		{
			type = 2;
			idc = 786010;
			x = safeZoneX + safeZoneW * 0.24375;
			y = safeZoneY + safeZoneH * 0.36111112;
			w = safeZoneW * 0.033125;
			h = safeZoneH * 0.02;
			onKeyUp = "[2] call the_programmer_carpainter_fnc_carPainter_onKeyUp;";
			
		};
		class edit_a : TP_CarPainter_edit
		{
			type = 2;
			idc = 786011;
			x = safeZoneX + safeZoneW * 0.24375;
			y = safeZoneY + safeZoneH * 0.39111112;
			w = safeZoneW * 0.033125;
			h = safeZoneH * 0.02;
			onKeyUp = "[3] call the_programmer_carpainter_fnc_carPainter_onKeyUp;";
			
		};
		class button_close : TP_CarPainter_button
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.314375;
			y = safeZoneY + safeZoneH * 0.03444445;
			w = safeZoneW * 0.020625;
			h = safeZoneH * 0.03666667;
			text = "x";
			onButtonClick = "closeDialog 0;";
			
		};
		class button_reset_rgb : TP_CarPainter_button 
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.285;
			y = safeZoneY + safeZoneH * 0.27222223;
			w = safeZoneW * 0.04125;
			h = safeZoneH * 0.01888889;
			text = "Reset";
			font = "PuristaBold";
			offsetPressedX = 0;
			offsetPressedY = 0;
			offsetX = 0;
			offsetY = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.0);
			onButtonClick = "[] spawn TP_carPainter_reset_sliders;";
			
		};

	};

};
