#include "..\..\script_macros.hpp"
#include "script_macro_shell.hpp"
/*
	File: fn_shellWaitVar.sqf

	Autor: IronBlade
*/
_cond = [_this,0,"",[""]] call BIS_fnc_param;
_length = [_this,1,[1,30],[[]]] call BIS_fnc_param;
_varCheck = [_this,2,"",[""]] call BIS_fnc_param;
_message = [_this,3,"",[""]] call BIS_fnc_param;

if (_cond == "") exitWith {};

_cond = (compile _cond);
_good = false;

_var = "";
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
_min = _length select 0;
_max = _length select 1;

uiNamespace setVariable[_varCheck, "bad"];

while {true} do {
	_var = uiNamespace getVariable [_varCheck, "bad"];

	if (_var != "bad") then {
		_good = (_var call _cond);

		if (!_good) then {
			uiNamespace setVariable[_varCheck, "bad"];
			[_message, false] spawn life_fnc_shellPrint;
		};

		_chrByte = toArray(_var);
		{if(!(_x in _allowed)) exitWith {_good = false;};} foreach _chrByte;

		if (!_good) then {
			uiNamespace setVariable[_varCheck, "bad"];
			["Erreur : caracteres Non Autorisee", false] spawn life_fnc_shellPrint;
		};

		if ((count _chrByte < _min) || (count _chrByte > _max)) then {
			uiNamespace setVariable[_varCheck, "bad"];
			[format["Erreur %1 Caractéres minimum et %2 Caractéres Maximum", _min, _max], false] spawn life_fnc_shellPrint;
			_good = false;
		};
	};

	if (_good) exitWith {};
};

_var;