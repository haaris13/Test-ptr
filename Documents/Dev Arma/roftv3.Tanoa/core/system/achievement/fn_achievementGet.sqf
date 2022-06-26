/*
	File:fn_achievementGet.sqf

	Autor:IronBlade
*/
life_achievement = [];

if(isNil "_this") exitWith {};
diag_log str(_this);
{
	life_achievement pushBack _x;
} forEach _this;

diag_log str(life_achievement);