#include "..\..\..\script_macros.hpp"
/*
	File:fn_lbcolorMenuCustom.sqf

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

_colorIndex = lbValue[ColorList,(lbCurSel ColorList)];
_className =  lbData [ListUpdgrade,(lbCurSel ListUpdgrade)];
if (_colorIndex isEqualTo -1) exitWith {};

[_className, _colorIndex, []] spawn life_fnc_updateViewCustomVeh;

[] spawn life_fnc_updatePriceCustom;