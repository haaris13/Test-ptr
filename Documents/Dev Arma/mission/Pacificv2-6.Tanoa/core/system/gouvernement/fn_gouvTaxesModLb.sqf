/*
	File: fn_gouvTaxesModLb.sqf

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

_curTaxes = ([] call life_fnc_gouvTaxesGet);

_curTaxe = (_curTaxes select _index);

_cfgTaxes = (missionConfigFile >> "CfgGouv" >> "Taxe");

_displayName = getText(_cfgTaxes >> (_curTaxe select 0) >> "displayname");
_desc = getText(_cfgTaxes >> (_curTaxe select 0) >> "description");

_info ctrlSetStructuredText parseText format [
		"<t color='#003366' size='2' align='center'>Taxe<br/><br/></t>" +
		"<t color='#4C7093' align='left' size='1'>Nom: <t color='#ffffff'>%1</t></t><br/><br/>" +
		"<t align='left' size='1'>%2</t><br/><br/>" +
		"<t color='#4C7093' align='left' size='1'>Valeur: <t color='#ffffff'>%3%4</t></t><br/><br/>",
		_displayName,
		_desc,
		(_curTaxe select 1),
		"%"
];

_textZone ctrlSetText (str(_curTaxe select 1));