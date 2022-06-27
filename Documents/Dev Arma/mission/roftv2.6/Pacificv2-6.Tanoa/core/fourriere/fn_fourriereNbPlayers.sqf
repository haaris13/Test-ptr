/*
	File: fn_fourriereNbPlayers.sqf

	Autor: IronBlade

	V_Safety_orange_F
*/
_nb = 0;

{
	_var = _x getVariable ["rankDepan", 0];

	if (_var > 0 && (backpack _x) in ["sac_depan"]) then {
		_nb = _nb + 1;
	};
} forEach playableUnits;

_nb;