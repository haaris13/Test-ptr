/*
	File:fn_shellGetDir.sqf

	Autor:IronBlade
*/

_path = [] call life_fnc_shellGetPath;

_dir = [[],[]];

if (count _path == 2) then {
	_dir = _path;
} else {
	_dir = _path select 2;
};

_dir;