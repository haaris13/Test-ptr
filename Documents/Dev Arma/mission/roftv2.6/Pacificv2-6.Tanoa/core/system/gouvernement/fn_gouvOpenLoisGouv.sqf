/*
	File: fn_gouvOpenLoisGouv.sqf

	Autor: IronBlade
*/

disableSerialization;

createDialog "Dialog_gouv_lois_mod";

_display = findDisplay 9600;

_list = (_display displayCtrl 9601);
_info = (_display displayCtrl 9602);

lbClear _list;

{
	_id = _x select 0;
	_title = _x select 1;
	_text = _x select 2;

	_index = _list lbAdd _title;
	_list lbSetValue [_index, _forEachIndex];
	
} forEach gouv_lois_list;