/*
	File: fn_phoneDeleteAction.sqf

	Autor: Iron
*/
disableSerialization;

_display = (findDisplay 24100);
_phoneList = (_display displayCtrl 24101);

_selection = lbCurSel _phoneList;

if (_selection < 0) exitWith {};

_action = [
	"Voulez vous vraiment supprimer le téléphone ?",
	"Supprimer le téléphone",
	"Supprimer",
	localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if (!_action) exitWith {};

_selectedPhone = life_phones select _selection;
[player, _selectedPhone select 0] remoteExec ["TON_fnc_phoneDelete", 2];
life_phones deleteAt _selection;
closeDialog 0;

_used = profileNamespace getVariable ["phone_p_used", -1];

if (_used == (_selectedPhone select 0)) then {
	profileNamespace getVariable ["phone_p_used", -1];
	saveProfileNamespace;
};

if (count life_phone > 0) then {
	if ((life_phone select 0) == (_selectedPhone select 0)) then {
		life_phone = [];
	};
};