/*
	File: fn_gouvOpenLoisCiv.sqf

	Autor: IronBlade
*/

if (getPlayerUID player == gouv_president_uid) exitWith {
	[] spawn life_fnc_gouvOpenLoisGouv;
};

disableSerialization;

createDialog "Dialog_gouv_LoisCiv";

_display = findDisplay 9300;

_list = (_display displayCtrl 9301);
_info = (_display displayCtrl 9302);

lbClear _list;

{
	_id = _x select 0;
	_title = _x select 1;
	_text = _x select 2;

	_index = _list lbAdd _title;
	_list lbSetValue [_index, _forEachIndex];
	
} forEach gouv_lois_list;