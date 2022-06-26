/*
	File: fn_papierMenuCreateAction.sqf

	Autor:IronBlade
*/

disableSerialization;

_display = (findDisplay 8400);
_textEdit = (_display displayCtrl 8401);
_title = (_display displayCtrl 8402);
_sign = (_display displayCtrl 8406);

if ((ctrlText _textEdit) == "") exitWith {hint "C'est vide !"};
if ((ctrlText _title) == "") exitWith {hint "Il n'y a pas de Titre !"};

_papierCont = ctrlText _textEdit;
_papierTitle = ctrlText _title;
_includeSign = cbChecked _sign;
_papierSign = "Aucune";

if (_includeSign) then {
	_papierSign = (name player);
};

life_papiers_list pushBack [_papierTitle, _papierCont, _papierSign, (getPlayerUID player)];

closeDialog 0;

[false,"paper",1] call life_fnc_handleInv;

[] spawn life_fnc_papierSave;