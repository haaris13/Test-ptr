/**
	File: fn_onuFrontMenuChange.sqf
	
	Autor: Iron
*/

disableSerialization;


_dialog = (findDisplay 35400);
_combo = (_dialog displayCtrl 35403);
_list = (_dialog displayCtrl 35404);
_textDoor = (_dialog displayCtrl 35405);

_actionDoor = (_dialog displayCtrl 35406);


if (lbCurSel _list  == -1) exitWith {};
_index = (lbCurSel _list);
_data = (_list lbData _index);

_var = (missionNamespace getVariable format["%1", _data]);
_etat = [_var] call life_fnc_onuDoorGetState;

_textEtat = "";

switch (_etat) do {
	case "open": {_textEtat = "Ouverte";};
	case "close": {_textEtat = "Fermé";};
};

_text = format["Etat: %1 <br/>", _textEtat];
_textDoor ctrlSetStructuredText (parseText _text);

_textBtn = "";
switch (_etat) do {
	case "open": {_textBtn = "<t align = 'center'>Fermer</t>";};
	case "close": {_textBtn = "<t align = 'center'>Ouvrir</t>";};
};

_actionDoor ctrlEnable true;
_actionDoor ctrlSetStructuredText (parseText _textBtn);