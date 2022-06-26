/*
	File: fn_playSound3DNear.sqf

	Autor:IronBlade
*/

_source = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_sound = [_this,1,"",[""]] call BIS_fnc_param;
_distance = [_this,2,0,[0]] call BIS_fnc_param;

_units = [];

{
 	_unit = _x;

	if ((isPlayer _unit) && (_source distance _unit) <= _distance) then {
		_units pushBack _unit;
	};
} forEach playableUnits;

[_source, _sound] remoteExecCall ["life_fnc_playSound3D",_units];