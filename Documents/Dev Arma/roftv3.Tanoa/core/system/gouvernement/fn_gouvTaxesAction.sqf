/*
	File: fn_gouvTaxesAction.sqf

	Autor: IronBlade
*/
disableSerialization;
_display = findDisplay 9400;

_list = (_display displayCtrl 9401);
_info = (_display displayCtrl 9402);
_textZone = (_display displayCtrl 9403);

_curSel = lbCurSel _list;
if (_curSel == -1) exitWith {};

_index = _list lbValue _curSel;

_curTaxe = (gouv_taxe_list_values select _index);

_max_value = getNumber(missionConfigFile >> "CfgGouv" >> "Taxe" >> "max_value");

_val = parseNumber(ctrlText 9403);
if(_val > _max_value) exitWith {hint format["La Taxe Maximum est de %1%2", _max_value, "%"]};
if(_val < 0) exitwith {};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};

gouv_taxe_list_values set [_index, [(_curTaxe select 0), _val]];

publicVariable "gouv_taxe_list_values";

[] spawn life_fnc_gouvTaxesModLb;