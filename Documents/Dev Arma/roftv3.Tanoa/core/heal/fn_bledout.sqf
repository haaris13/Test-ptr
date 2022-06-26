/*
	File:fn_bledout.sqf
	
	Autor:IronBlade
*/
_chance = [_this,0,100,[100]] call BIS_fnc_param;

if (_chance >= 80) exitWith {player setDamage 0.25;};

life_bledout_time = time + (5*60) + (random 5) * 60;

_bad = false;

_damage = 0.9;

if (life_bledout) exitWith {};

life_bledout = true;

while {true} do {
  if (life_bledout_time <= time) exitWith {_bad = true;};
  if (player getVariable ["op", false]) exitWith {_bad = false;};
  if (!(alive player)) exitWith {_bad = false;};
  if (life_dead) exitWith {};
  if ((independent countSide playableUnits) <= 0) exitWith {};

  [(round (random 10))] call BIS_fnc_bloodEffect;

  if ((["morphine"] call life_fnc_hasAtouts)) then {
    _damage = 0.8;
  };

  if (damage player < _damage) then {player setDamage _damage};

  sleep ((random 20) + 2);
};

if (_bad) then {

	["<t color='#ff0000'>Vous allez succomber a vos blessures !</t>"] call life_fnc_dynamicText;
	[20] call BIS_fnc_bloodEffect;
	
	sleep 5;

	["<t color='#ff0000'>Il est trop tard...</t>"] call life_fnc_dynamicText;

	player setVariable ["bandage", nil, true];
	player setVariable ["morphine", nil, true];

	sleep 5;
	player setDamage 1;
};

player setVariable ["op",nil,true];

life_bledout = false;
