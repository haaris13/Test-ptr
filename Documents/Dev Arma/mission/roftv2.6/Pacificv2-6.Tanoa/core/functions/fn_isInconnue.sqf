/*
	File: fn_isInconnue.sqf

	Autor: Iron
*/
_unitInc = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (_unitInc isEqualTo objNull) exitWith {};

if (!isPlayer _unitInc) exitWith {false;};
if (life_showNameTag) exitWith {false;};
if (_unitInc in (units (group player))) exitWith {false;};
if (headgear _unitInc in life_hidden_clothing) exitWith {true;};
if (goggles _unitInc in life_hidden_clothing) exitWith {true;};
if (_unitInc in life_knowPlayers) exitWith {false;};

!(_unitInc in (units group player));