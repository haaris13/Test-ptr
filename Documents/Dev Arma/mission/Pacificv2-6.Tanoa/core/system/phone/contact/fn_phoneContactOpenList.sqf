/*
	File: fn_phoneContactOpenMenu.sqf

	Autor: Iron
*/

createDialog "Dialog_Phone_Contacts";
disableSerialization;

_display = (findDisplay 24200);
_contactList = (_display displayCtrl 24202);
_contactInfo = (_display displayCtrl 24203);
_removeButton = (_display displayCtrl 24204);

lbClear _contactList;

_contactInfo ctrlSetStructuredText parseText "";

_idPhone = life_phone select 0;

_var = format["life_phone_%1_contacts", _idPhone];
_contacts = missionNamespace getVariable [_var, []];

{
	_index = (_contactList lbAdd (_x select 1));
	_contactList lbSetValue [_index, _forEachIndex];
} forEach _contacts;

_removeButton ctrlEnable false;