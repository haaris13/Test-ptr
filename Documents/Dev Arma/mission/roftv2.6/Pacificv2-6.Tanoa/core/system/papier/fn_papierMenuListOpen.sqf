/*
	File: fn_papierMenuListOpen.sqf

	Autor:IronBlade
*/

disableSerialization;

createDialog "Dialog_Paper_Inv";

_display = (findDisplay 8200);
_paperList = (_display displayCtrl 8201);
_paperInfo = (_display displayCtrl 8202);

lbClear _paperList;

_paperInfo ctrlSetStructuredText parseText "";

{
	_index = (_paperList lbAdd (_x select 0));
	_paperList lbSetValue [_index, _forEachIndex];
} forEach life_papiers_list;