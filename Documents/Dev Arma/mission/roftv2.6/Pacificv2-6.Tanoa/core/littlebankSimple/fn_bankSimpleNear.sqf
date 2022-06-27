/*
	File: fn_bankSimpleNear.sqf

	Autor: IronBlade
*/

_bank = [];
_distance = 9999999;

{
	_variable = _x select 0;
	_building = _x select 1;
	_chest = _x select 2;

	if ((player distance _building) < _distance) then {
		_distance = (player distance _building);
		_bank = _x;
	};

} forEach life_littleBankSimple;

if (_distance > 100) exitWith {
	[];
};

_bank;