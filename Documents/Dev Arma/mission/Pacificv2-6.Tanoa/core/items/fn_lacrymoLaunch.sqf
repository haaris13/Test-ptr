/*
	File: fn_lacrymoLaunch.sqf

	Autor: Iron
*/
_source = [_this,0,[0,0,0],[[]]] call BIS_fnc_param;

_units = [];
_distance = 500;

{
 	_unit = _x;

	if (player != _unit && (isPlayer _unit) && (_source distance _unit) <= _distance) then {
		_units pushBack _unit;
	};
} forEach playableUnits;

if ((count _units) > 0) then {
	[_source] remoteExec ["life_fnc_lacrymoLaunchReceive", _units];
};

if ((_source distance player) <= _distance) then {
	[_source] spawn life_fnc_lacrymoLaunchReceive;
};