/*
	File: fn_playSound3DNear2.sqf

	Autor: Iron
	Date: 03 Apr 2020 21:05:12
	Version: 0.1
*/
_source = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_sound = [_this,1,"",[""]] call BIS_fnc_param;
_distance = [_this,2,0,[0]] call BIS_fnc_param;
_withPlayer = [_this, 3, true, [true]] call BIS_fnc_param;

_units = [];

{
 	_unit = _x;

	if (player != _unit && (isPlayer _unit) && (_source distance _unit) <= _distance) then {
		_units pushBack _unit;
	};
} forEach playableUnits;

if ((count _units) > 0) then {
	[_source, _sound] remoteExec ["life_fnc_playSound3D2", _units];
};

if (_withPlayer && (_source distance player) <= _distance) then {
	[_source, _sound] spawn life_fnc_playSound3D2;
};