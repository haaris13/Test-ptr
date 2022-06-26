/*
	File:fn_medicDamage.sqf

	Autor:IronBlade
*/
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_part = [_this,1,"",[""]] call BIS_fnc_param;
_damage = [_this,2,0,[0]] call BIS_fnc_param;
_source = [_this,3,objNull,[objNull]] call BIS_fnc_param;
_projectile = [_this,4,"",[""]] call BIS_fnc_param;

if (isNull _unit) exitWith {};
if (_part == "") exitWith {};
if (_damage <= 0) exitWith {};
if (life_dead) exitWith {};

if ((life_parts select 0) < (time - 1)) then {
	life_parts = [time, []];
};

_array = life_parts select 1;

_array pushBack [_part, _projectile, _damage];

life_parts = [time, _array];