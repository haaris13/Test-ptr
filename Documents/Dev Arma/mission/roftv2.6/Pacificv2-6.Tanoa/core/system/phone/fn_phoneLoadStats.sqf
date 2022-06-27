/*
	File: fn_phoneLoadStats.sqf

	Autor: Iron
*/
private ["_phone", "_stats", "_nbNoRead"];
diag_log "fn_phoneLoadStats";
_phone = [_this, 0, 0, [0]] call BIS_fnc_param;
_stats = [_this, 1, [0], [[]]] call BIS_fnc_param;

_nbNoRead = _stats select 0;

if (_nbNoRead > 0) then {
	["Phone", format["Vous avez %1 messages non lu.", _nbNoRead]] spawn life_fnc_showPredefinedNotification;
};