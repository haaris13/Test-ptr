/*
	File: fn_phoneContactDeleteAction.sqf

	Autor: Iron
*/

disableSerialization;

_idPhone = life_phone select 0;

_var = format["life_phone_%1_contacts", _idPhone];
_contacts = missionNamespace getVariable [_var, []];

_display = (findDisplay 24200);
_contactList = (_display displayCtrl 24202);
_contactInfo = (_display displayCtrl 24203);
_removeButton = (_display displayCtrl 24204);

_selection = lbCurSel _contactList;
_selectedContact = _contacts select _selection;
_contactList lbDelete _selection;
_contacts deleteAt _selection;

[player, _idPhone, _selectedContact select 0] remoteExec ["TON_fnc_phoneDeleteContact", 2];