/*
	File:fn_ATMLogs.sqf

	Autor:IronBlade

	Type:
		0 -> Take
		1 -> Drop
*/
_type = [_this,0,0,[0]] call BIS_fnc_param;
_val = [_this,1,0,[0]] call BIS_fnc_param;

if (_val isEqualTo 0) exitWith {};

[getPlayerUID player, _type, _val, str(playerSide)] remoteExecCall ["TON_fnc_insertATMLog",2];