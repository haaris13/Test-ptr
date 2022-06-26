/*
	File: fn_smartMarkerShowToolTip.sqf

	Autor: Bohemia Interactive
	Modified by : Iron
*/
diag_log "fn_smartMarkerShowToolTip";
_marker = _this select 0;
_toolTipClass = _this select 1;

if (smart_marker_settings_toolt_active) exitWith {
	[] call life_fnc_smartMarkerHideToolTip;
	smart_marker_settings_toolt_active = false;
};

smart_marker_settings_toolt_active = true;

(uiNameSpace getVariable "map") ctrlMapCursor ["Track", "3DENSelectWidgetZ"];

disableSerialization;

_display = call BIS_fnc_displayMission;
waitUntil {_display = call BIS_fnc_displayMission; !(isNull _display)};

_position = (uiNameSpace getVariable "map") posWorldToScreen (getMarkerPos _marker);

smart_marker_settings_toolt_ctrls = [];

if (!(isNull (_display displayCtrl 1231))) then {
	ctrlDelete (_display displayCtrl 1231);
	ctrlDelete (_display displayCtrl 1232);
	ctrlDelete (_display displayCtrl 1233);
	ctrlDelete (_display displayCtrl 1234);
	ctrlDelete (_display displayCtrl 1235);
};

//--- create and set all UI elements
_titleBCK = _display ctrlCreate ["RscPicture", 1231];
_textBCK = _display ctrlCreate ["RscPicture", 1232];
_mrk_img = _display ctrlCreate ["RscPicture", 1233];
_title2 =  _display ctrlCreate ["RscStructuredText", 1234];
_text =  _display ctrlCreate ["RscStructuredText", 1235];
{ smart_marker_settings_toolt_ctrls pushBack _x } forEach [_titleBCK,_textBCK,_title2, _text, _mrk_img];

//--- point of origin
_XYPOS = _position;

_titleBCK ctrlSetPosition [_XYPOS select 0, _XYPOS select 1,0.128864 * safezoneW,0.022 * safezoneH];
_title2 ctrlSetPosition [_XYPOS select 0, _XYPOS select 1,0.128864 * safezoneW,0.022 * safezoneH];
//--- adjust text position according image
_textpos = [];

_img = getText(_toolTipClass >> "img");
_title = getText(_toolTipClass >> "title");
_description = getText(_toolTipClass >> "description");
_color = getArray(_toolTipClass >> "color");

switch (count _img) do
{
	case 0:
	{
		_textpos = [_XYPOS select 0,(_XYPOS select 1) + 0.023 * safezoneH, 0.128864 * safezoneW, 0.187 * safezoneH]
	};

	default
	{
		_textpos = [_XYPOS select 0, (_XYPOS select 1) + 0.023 * safezoneH + (0.187 * safezoneH)/1.6,0.128864 * safezoneW,0.187 * safezoneH]
	};
};

_text ctrlSetPosition _textpos;
_textBCK ctrlSetPosition _textpos;

//--- prepare position of image if is it valid
if (count _img > 0) then
{
    _mrk_img ctrlSetPosition [_XYPOS select 0, (_XYPOS select 1) + 0.023 * safezoneH,0.128864 * safezoneW,(0.187 * safezoneH)/1.6];
    _mrk_img ctrlSetText _img;
};

_titleBCK ctrlSetText (_color call BIS_fnc_colorRGBAtoTexture);
//--- set text background
_textBCK ctrlSetText "a3\Ui_f\data\GUI\Rsc\RscDisplayInventory\gradient_gs.paa";
_textBCK ctrlsetTextcolor [0, 0, 0, 0.6];
//--- set title text
_title2 ctrlSetStructuredText parseText format ["<t font='RobotoCondensed' shadow='1' color='#f7fae3' size='0.8' >%1</t>",_title];
//--- set description
_text ctrlSetStructuredText parseText format ["<t font='RobotoCondensed' shadow='0' color='#d0d2c4' size='0.58' >%1</t><br/>", _description];

//--- load picture if it is valid
if (count _img > 0) then
{
    _mrk_img ctrlSetFade 0;
    _mrk_img ctrlCommit 0;
};

//--- execute all changes
{
    _x ctrlSetFade 0;
    _x ctrlCommit 0;
} foreach [_titleBCK,_textBCK,_title2,_text];