/*
	File: fn_papierMenuGiveOpen.sqf

	Autor:IronBlade
*/

life_pInact_curTarget = (_this select 0);

closeDialog 0;

disableSerialization;

createDialog "interactionGivePaper";

_display = (findDisplay 8300);
_paperList = (_display displayCtrl 8302);
_button = (_display displayCtrl 8303);

{
	_index = (_paperList lbAdd (_x select 0));
	_paperList lbSetValue [_index, _forEachIndex];
} forEach life_papiers_list;