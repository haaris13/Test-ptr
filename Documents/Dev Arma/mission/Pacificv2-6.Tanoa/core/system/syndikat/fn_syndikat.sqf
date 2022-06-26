/*
	File: fn_syndikat.sqf

	Autor: IronBlade
*/
_player = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, 0, [0]] call BIS_fnc_param;

[_type] remoteExecCall ["life_fnc_syndikatClient", _player];

["Accepted", "Action Validé !"] spawn life_fnc_showPredefinedNotification;
closeDialog 0;