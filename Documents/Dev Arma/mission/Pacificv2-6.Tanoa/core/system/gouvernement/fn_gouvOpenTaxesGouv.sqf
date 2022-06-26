/*
	File: fn_gouvOpenTaxesGouv.sqf

	Autor: IronBlade
*/

disableSerialization;

createDialog "Dialog_gouv_taxes_mod";

_display = findDisplay 9400;
_list = _display displayCtrl 9401;
_info = _display displayCtrl 9402;

lbClear _list;

_cfgTaxes = (missionConfigFile >> "CfgGouv" >> "Taxe");


_curTaxes = ([] call life_fnc_gouvTaxesGet);

{
	_var = _x select 0;
	_value = _x select 1;

	_displayName = getText(_cfgTaxes >> _var >> "displayname");

	_index = _list lbAdd _displayName;
	_list lbSetData [_index, _var];
	_list lbSetValue [_index, _forEachIndex];
} forEach _curTaxes;