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

class TP_CarPainter_frame
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	colorText[] = {0.2,0.2,0.2,1};
	access = 0;
	moving = false;

};
class TP_CarPainter_background
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	colorBackground[] = {0.054,0.07,0.078,0.9};
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
	access = 0;
	moving = false;

};
class TP_CarPainter_text_title
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	style = 192;
	text = "";
	colorBackground[] = {0.713,0.713,0.713,1};
	colorText[] = {0.164,0.164,0.164,1};
	font = "EtelkaMonospaceProBold";
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);
	access = 0;
	moving = false;
	shadow = 2;

};
class TP_CarPainter_div
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	colorBackground[] = {0.164,0.164,0.164,1};
	font = "EtelkaMonospacePro";
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
	text = "";
	colorText[] = {0,0,0,0};
	access = 0;
	moving = false;

};
class TP_CarPainter_subtitle
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	text = "";
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.713,0.713,0.713,1};
	font = "PuristaBold";
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.9);
	access = 0;
	moving = false;

};
class TP_CarPainter_combobox
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	style = 16;
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
	colorBackground[] = {0.09,0.09,0.09,1};
	colorDisabled[] = {0.2,0.2,0.2,1};
	colorSelect[] = {0.372,0.462,0.4,1};
	colorSelectBackground[] = {0,0,0,1};
	colorText[] = {0.752,0.752,0.752,1};
	font = "EtelkaMonospacePro";
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
	wholeHeight = 0.3;
	access = 0;
	class ComboScrollBar
	{

	};

};
class TP_CarPainter_slider
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	style = 1024;
	arrowEmpty = "\A3\ui_f\data\GUI\Cfg\Slider\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\Cfg\Slider\arrowFull_ca.paa";
	border = "\A3\ui_f\data\GUI\Cfg\Slider\border_ca.paa";
	color[] = {0,0,0,0};
	colorActive[] = {1,1,1,1};
	thumb = "\A3\ui_f\data\GUI\Cfg\Slider\thumb_ca.paa";
	access = 0;

};
class TP_CarPainter_text_big
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	text = "";
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.956,0.956,0.956,1};
	font = "EtelkaMonospacePro";
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
	access = 0;
	moving = false;
	shadow = 0;

};
class TP_CarPainter_button
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	style = 2+192;
	text = "Mon boutton";
	borderSize = 0;
	colorBackground[] = {0.525,0.564,0.572,1};
	colorBackgroundActive[] = {0.666,0.713,0.639,0.5};
	colorBackgroundDisabled[] = {0.223,0.262,0.235,1};
	colorBorder[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorText[] = {0.164,0.164,0.164,1};
	font = "EtelkaMonospaceProBold";
	offsetPressedX = 0.005;
	offsetPressedY = 0.005;
	offsetX = 0.005;
	offsetY = 0.005;
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.55);
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
	access = 0;
	shadow = 2;

};
class TP_CarPainter_edit
{
	idc = -1;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	style = 0;
	text = "0.000";
	autocomplete = "";
	colorBackground[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,1};
	colorSelection[] = {0.702,0.102,0.102,1};
	colorText[] = {0.752,0.752,0.752,1};
	font = "EtelkaMonospacePro";
	sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7);
	access = 0;
	maxChars = 5;

};
