/*
	File: fn_playerIsOnStances.sqf

	Autor: IronBlade
*/
_stances = [_this, 0, [], [[]]] call BIS_fnc_param;
_stance = stance player;

(_stances find _stance) != -1;