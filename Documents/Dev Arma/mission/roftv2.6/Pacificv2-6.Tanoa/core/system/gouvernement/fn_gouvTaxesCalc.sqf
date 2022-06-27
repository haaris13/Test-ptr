/*
	File: fn_gouvTaxesCalc.sqf

	Autor: IronBlade
*/
private ["_varTaxe", "_valueP", "_curTaxes", "_priceGlob", "_varT", "_valueT"];
_varTaxe = [_this,0,"",[""]] call BIS_fnc_param;
_valueP = [_this,1,0,[0]] call BIS_fnc_param;

if (_valueP <= 0) exitWith {0};
if (life_playerlevel <= 10) exitWith {_valueP;};

_curTaxes = ([] call life_fnc_gouvTaxesGet);

_priceGlob = 0;

{
	_varT = _x select 0;
	_valueT = _x select 1;

	if (_varT == _varTaxe) exitWith {
		_priceGlob = _valueP + (_valueP * (_valueT / 100));
	};
} forEach _curTaxes;

if (_priceGlob == 0) then {
	_priceGlob = _valueP; 
};

_priceGlob = round _priceGlob;
_priceGlob;