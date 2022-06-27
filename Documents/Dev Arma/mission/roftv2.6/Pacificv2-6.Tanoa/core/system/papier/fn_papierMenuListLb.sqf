/*
	File: fn_papierMenuListLb.sqf

	Autor:IronBlade
*/

disableSerialization;

_display = (findDisplay 8200);
_paperList = (_display displayCtrl 8201);
_paperInfo = (_display displayCtrl 8202);

_index = lbCurSel _paperList;

if (_index == -1) exitWith {};

_value = (_paperList lbValue _index);

_papier = (life_papiers_list select _value);

_paperInfo ctrlSetStructuredText parseText format [
		"<t color='#003366' size='1.2' align='center'>Papier<br/><br/></t>" +
		"<t color='#4C7093' align='left' size='1'>Titre: <t color='#ffffff'>%1</t></t><br/>" +
		"<t align='left' size='0.8'>%2</t><br/><br/>" +
		"<t color='#ffffff' align='left' size='1'>Signature: <t color='#ffffff'>%3</t><br/><br/>",
		(_papier select 0),
		(_papier select 1),
		(_papier select 2)
];