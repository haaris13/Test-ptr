/*
	File: fn_clanAddxp.sqf

	Autor:IronBlade
*/
_amount = [_this, 0, 0, [0]] call BIS_fnc_param;

if (_amount == 0) exitWith {};

_group = group player;

if (isnil {_group getVariable "clan_id"}) exitWith {};

_xp = _group getVariable ["clan_xp",0];
_xp = _xp + _amount;
_group setVariable["clan_xp", _xp, true];