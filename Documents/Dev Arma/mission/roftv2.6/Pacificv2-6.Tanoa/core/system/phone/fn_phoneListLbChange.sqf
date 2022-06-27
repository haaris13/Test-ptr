/*
	File: fn_phoneListLbChange.sqf

	Autor: Iron
*/
disableSerialization;

private ["_control","_index", "_lbData", "_selectedPhone", "_display", "_phoneInfo"];
_control = _this select 0;
_index = _this select 1;
_lbData = (_control lbValue _index);

_selectedPhone = life_phones select _lbData;

_display = (findDisplay 24100);
_phoneInfo = (_display displayCtrl 24102);
_applyButton = (_display displayCtrl 24103);
_removeButton = (_display displayCtrl 24104);

_phoneInfo ctrlSetStructuredText parsetext format ["
<br/>
<br/>
<t align = 'center' size = '1.5'>%1</t><br/>
<br/>
<t align = 'left' size = '1'><br/>%2 </t>",
	_selectedPhone select 1,
	""
];

_applyButton ctrlEnable true;
_removeButton ctrlEnable true;