/*
	File: fn_papierMenuListDelete.sqf

	Autor:IronBlade
*/

disableSerialization;

_display = (findDisplay 8200);
_paperList = (_display displayCtrl 8201);
_paperInfo = (_display displayCtrl 8202);

_paperInfo ctrlSetStructuredText parseText "";

_index = lbCurSel _paperList;

if (_index == -1) exitWith {};

_value = (_paperList lbValue _index);

life_papiers_list deleteAt _value;

closeDialog 0;

[] spawn life_fnc_papierSave;