#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File:fn_furnaceTransform.sqf

	Autor:IronBlade
*/
_itemRequiredTemp = [_this,0,0,[0]] call BIS_fnc_param;

_niv = 0;
_can = 100;
_good = true;

for "_i" from _itemRequiredTemp to life_furnace_temp do {
	_niv = _niv + (_i - _itemRequiredTemp);
};

_can = _can - _niv;

if (_can < 0) then {
	_can = 0;
};

diag_log format["Can: %1", _can];

_rand = round(random 100);

if (_rand <= _can) then {
	_good = true;
} else {
	_good = false;
};

_good;