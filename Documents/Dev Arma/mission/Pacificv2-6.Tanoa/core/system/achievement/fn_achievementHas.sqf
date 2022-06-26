/*
	File:fn_achievementHas.sqf

	Autor:IronBlade
*/
_achievement = [_this,0,"",[""]] call BIS_fnc_param;

_has = false;

if (_achievement in life_achievement) then {
	_has = true;
};

_has;