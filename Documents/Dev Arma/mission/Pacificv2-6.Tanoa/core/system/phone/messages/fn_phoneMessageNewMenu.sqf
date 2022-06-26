/*
	File: fn_phoneMessageNewMenu.sqf

	Autor: Iron
*/


_idPhone = life_phone select 0;

_var = format["life_phone_%1_contacts", _idPhone];
_contacts = missionNamespace getVariable [_var, []];

disableSerialization;

createDialog "dlg_phone_new_messages";

_display = findDisplay 24400;
_selectionContact = _display displayCtrl 24401;

_numberTitle = _display displayCtrl 24404;
_numberEdit = _display displayCtrl 24402;


lbClear _selectionContact;


_selectionContact lbAdd "Numéro";
_selectionContact lbSetData [(lbSize _selectionContact)-1, "Number"];

/*
_selectionContact lbAdd "Gendarmerie";
_selectionContact lbSetData [(lbSize _selectionContact)-1, "Cop"];

_selectionContact lbAdd "Pompiers";
_selectionContact lbSetData [(lbSize _selectionContact)-1, "Med"];
*/

{
	_index = (_selectionContact lbAdd (_x select 1));
	_selectionContact lbSetData [_index, _x select 2];
} forEach _contacts;

_selectionContact lbSetCurSel 0;