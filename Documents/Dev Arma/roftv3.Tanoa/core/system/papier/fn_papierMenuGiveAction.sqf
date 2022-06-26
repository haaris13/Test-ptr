/*
	File: fn_papierMenuGiveAction.sqf

	Autor:IronBlade
*/

disableSerialization;

_display = (findDisplay 8300);
_paperList = (_display displayCtrl 8302);
_button = (_display displayCtrl 8303);

_index = lbCurSel _paperList;

if (_index == -1) exitWith {};

_value = (_paperList lbValue _index);
_papier = (life_papiers_list select _value);

[player, _papier] remoteExec ["life_fnc_papierReceive", life_pInact_curTarget];
life_papiers_list deleteAt _value;

[] spawn life_fnc_papierSave;

closeDialog 0;