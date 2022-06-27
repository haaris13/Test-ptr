/*
	File: fn_setLifeStats.sqf;

	Autor: Iron
*/
diag_log "fn_setLifeStats";
private ["_hunger", "_thirst", "_life"];
_stats = [_this,0,[],[[]]] call BIS_fnc_param;

if (count _stats != 3) exitWith {diag_log format["_stats != 3: %1", _stats];};

_hunger = _stats select 0;
_water = _stats select 1;
_life = _stats select 2;

diag_log format["_hunger: %1 _water: %2 _life: %3", _hunger, _water, _life];

if (_hunger <= 0) then {_hunger = 1;};
if (_hunger > 100) then {_hunger = 100;};

if (_water <= 0) then {_water = 1;};
if (_water > 100) then {_water = 100;};

if (_life <= 0) then {_life = 10;};
if (_life > 100) then {_life = 100;};

life_hunger = _hunger;
life_thirst = _water;

_damage = 1 - (_life / 100);

if (_damage < 0) then {
	_damage = 0;
};

if (_damage > 0.9) then {
	_damage = 0.9;
};

if (_damage > 0) then {
	player setDammage _damage;
};