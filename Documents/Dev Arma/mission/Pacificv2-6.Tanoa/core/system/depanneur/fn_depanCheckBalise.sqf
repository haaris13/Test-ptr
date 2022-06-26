/*
	File: fn_depanCheckBalise.sqf

	Autor: IronBlade
*/

((vehicle player) != player) &&
{driver (vehicle player) == player} &&
{0 < ({_x>0} count (getAllHitPointsDamage (vehicle player) param [2,[]]))}