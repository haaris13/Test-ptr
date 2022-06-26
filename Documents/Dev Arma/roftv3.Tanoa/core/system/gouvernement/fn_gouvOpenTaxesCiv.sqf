/*
	File: fn_gouvOpenTaxesCiv.sqf

	Autor: IronBlade
*/

if (getPlayerUID player == gouv_president_uid) exitWith {
	[] spawn life_fnc_gouvOpenTaxesGouv;
};

disableSerialization;

createDialog "Dialog_gouv_TaxesCiv";

_display = findDisplay 9300;
_list = _display displayCtrl 9301;
_info = _display displayCtrl 9302;

lbClear _list;

_cfgTaxes = (missionConfigFile >> "CfgGouv" >> "Taxe");


_curTaxes = ([] call life_fnc_gouvTaxesGet);

{
	_var = _x select 0;
	_value = _x select 1;

	_displayName = getText(_cfgTaxes >> _var >> "displayname");

	_index = (_list lbAdd _displayName);
	_list lbSetData [_index, _var];
	_list lbSetValue [_index, _forEachIndex];
	
} forEach _curTaxes;