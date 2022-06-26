/* 
	File: fn_earthquake.sqf
	Author: Ciaran Langton
	Description: Initiates an earthquake.
*/
_epicentre = [_this,0,[0,0,0],[[]]] call BIS_fnc_param;
if(isNull player) exitWith {};

_inAir = {
	_return = false;
	_atl = (getPosATL player) select 2;
	if(_atl > 30 && (vehicle player) isKindOf "Air") then {_return = true;};

	_return;
};

_playerProne = {
	_forceValue = _this select 0;

	if (_forceValue <= 2) exitWith {};
	if (vehicle player != player) exitWith {};

	_rand = random 100;
	_chance = switch (true) do {
		case (_forceValue == 4): {60};
		case (_forceValue == 3): {40};
		default {30};
	};

	sleep (1 + random 2);

	if (_rand < _chance && (speed player > 6)) then {
		player playAction "PlayerProne";
	};
};

_distance = player distance _epicentre;

_force = switch (true) do {
	case (_distance < 5000): {4};
	case (_distance < 7500): {3};
	case (_distance < 10000): {2};
	default {1};
};

life_earthquake = true;

sleep (5 + random 4);

_playerinAir = [] call _inAir;

if (!_playerinAir) then {
	[_force] spawn BIS_fnc_earthquake;
	[_force] spawn _playerProne;
};

sleep (5 + random 7);

_playerinAir = [] call _inAir;

if (!_playerinAir) then {
	[_force] spawn BIS_fnc_earthquake;
	[_force] spawn _playerProne;
};

sleep (7 + random 9);

_playerinAir = [] call _inAir;

if (!_playerinAir) then {
	[_force] spawn BIS_fnc_earthquake;
	[_force] spawn _playerProne;
};

life_earthquake = false;