#include "..\..\script_macros.hpp"
/*
	File: fn_vehicleShopLBColorChange.sqf
		
	Author: IronBlade

*/

disableSerialization;

_colorIndex = lbValue[2304,(lbCurSel 2304)];

if (_colorIndex isEqualTo -1) exitWith {};

_classNameLife = typeOf life_view_Vehicle;

_textures = getArray(missionConfigFile >> "LifeCfgVehicles" >> _classNameLife >> "textures");

if (count _textures == 0) exitWith {};

_textures = (_textures select _colorIndex) select 2;

if (isNil "_textures" OR {EQUAL(count _textures,0)}) exitWith {};

_textureObj = [];

if (typeName _textures isEqualTo typeName []) then {
	{
		_textureObj pushBack [_forEachIndex, _x];
	} forEach _textures;
} else {
	_textureObj = [0, _textures];
};



[_classNameLife, _textureObj, []] spawn life_fnc_vehicleViewUpdate;