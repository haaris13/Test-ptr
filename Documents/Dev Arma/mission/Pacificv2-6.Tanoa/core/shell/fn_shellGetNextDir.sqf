/*
	File:fn_shellGetNextDir.sqf

	Autor:IronBlade
*/

_dir = [] call life_fnc_shellGetDir;

_dirs = _dir select 0;

_nextdir = [];

{
	_idDir = _x select 0;
	_nameDir = _x select 1;
	_nextdir pushBack _nameDir;
	
} forEach _dirs;

_nextdir;