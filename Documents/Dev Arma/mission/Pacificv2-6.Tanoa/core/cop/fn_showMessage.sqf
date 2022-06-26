#include "..\..\script_macros.hpp"
/*
	File: fn_showMessage.sqf


	Autor: IronBlade
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;
_niv = [_this,1,0,[0]] call BIS_fnc_param;
_message = [_this,2,"",[""]] call BIS_fnc_param;

if (_niv == 0) exitWith {};

_good = false;

switch (true) do { 
	case (_type isEqualTo "<=") : {
		if ((FETCH_CONST(life_coplevel) <= _niv)) then {_good = true;};
	};

	case (_type isEqualTo ">=") : {
		if ((FETCH_CONST(life_coplevel) >= _niv)) then {_good = true;};
	};

	case (_type isEqualTo "==") : {
		if ((FETCH_CONST(life_coplevel) == _niv)) then {_good = true;};
	};
};

if (_good) exitWith {
	[_message] call life_fnc_dynamicText;
};