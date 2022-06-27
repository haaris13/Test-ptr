/*
	File: fn_phoneContactListLbChange.sqf

	Autor: Iron
*/
disableSerialization;

private ["_control","_index", "_lbData", "_phoneSelected"];
_control = _this select 0;
_index = _this select 1;
_lbData = (_control lbValue _index);

_idPhone = life_phone select 0;

_var = format["life_phone_%1_contacts", _idPhone];
_contacts = missionNamespace getVariable [_var, []];

_selectedContact = _contacts select _lbData;

_display = (findDisplay 24200);
_contactList = (_display displayCtrl 24202);
_contactInfo = (_display displayCtrl 24203);
_removeButton = (_display displayCtrl 24204);

lbClear _contactInfo;

_contactInfo ctrlSetStructuredText parsetext format ["
<br/>
<br/>
<t align = 'center' size = '1.5'>%1</t><br/>
<br/>
<t align = 'center' size = '1.4'>%2</t><br/>",
	_selectedContact select 1,
	_selectedContact select 2
];

_removeButton ctrlEnable true;