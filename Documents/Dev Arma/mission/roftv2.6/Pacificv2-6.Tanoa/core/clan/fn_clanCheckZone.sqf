/*
	File: fn_clanCheckZone.sqf

	Autor: IronBlade
*/
if ((playerSide == west) || (playerSide == independent) || (playerSide == civilian)) exitWith {};
_hideoutCount = 0;
_income = 0;

{
  _owner = _x getVariable ["gangOwner",grpNull];
	if (group Player == _owner) then {
		["hideout"] call life_fnc_addXP;
		_hideoutCount = _hideoutCount + 1;
		_income = _income + 4000;
	};
} forEach life_gang_flags;

if (_hideoutCount <= 0) exitWith {};

if (["stronghold"] call life_fnc_hasPerk) then {
	_income = _income + 2000;
};

_income = [_income, 0] call life_fnc_clanCheckTaxe;

life_atmbank = life_atmbank + _income;

systemChat format["Vous avez %1 zones en votre controle. Gain: %2$", _hideoutCount, _income];