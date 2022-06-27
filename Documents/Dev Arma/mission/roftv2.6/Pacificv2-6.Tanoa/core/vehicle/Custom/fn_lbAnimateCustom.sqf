#include "..\..\..\script_macros.hpp"
/*
	File: fn_lbAnimateCustom.sqf

	Autor: IronBlade
*/
#define DisplayCustom 16200
#define ListUpdgrade 16202
#define ColorList 16204
#define AnimList 16224
#define TitleAnim 16201
#define CustomBackground 16208
#define VehicleInfomationList 16203
// Progress
#define MaxSpeedProgress 16210
#define FuelCapacityProgres 16211
#define TrunkCapacityProgress 16212
#define ArmorRatingProgress 16213

#define MaxSpeedText 16220
#define FuelCapText 16221
#define TrunkCapText 16222
#define ArmorRatingText 16223

disableSerialization;

_anim = lbData [AnimList,(lbCurSel AnimList)];
_enabled = lbValue [AnimList,(lbCurSel AnimList)];

_value = if (_enabled == 1) then {0} else {1};
lbSetValue [AnimList, (lbCurSel AnimList), _value];

_checkboxTextures = [
		tolower gettext (configfile >> "RscCheckBox" >> "textureUnchecked"),
		tolower gettext (configfile >> "RscCheckBox" >> "textureChecked")
	];

_picture = if (_value == 1) then {_checkboxTextures select 1} else {_checkboxTextures select 0};

lbSetPicture [AnimList, (lbCurSel AnimList), _picture];

life_view_vehicle animate [_anim, _value, true];

[] spawn life_fnc_updatePriceCustom;