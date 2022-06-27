/*
	File: fn_targetTrainingCreateProfileAction.sqf

	Autor: IronBlade
*/
disableSerialization;

_display = findDisplay 2720;
_ctrlInfoMsg = _display displayCtrl 2723;
_ctrlEdit = _display displayCtrl 2722;

_profileName = ctrlText _ctrlEdit;
_length = count (toArray(_profileName));
_chrByte = toArray (_profileName);
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_ ");
if ((_profileName find "Hitler") > -1) exitWith {
	["Error", "Nom Interdit !"] spawn life_fnc_showPredefinedNotification;
};

if(_length > 15) exitWith {
	["Error", "Maximum 15 Caractères."] spawn life_fnc_showPredefinedNotification;
};

_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {
	["Error", localize "STR_GNOTF_IncorrectChar"] spawn life_fnc_showPredefinedNotification;
};

[player, _profileName] remoteExec ["TON_fnc_trainingTargetCreateProfile", 2];
["Info", localize "STR_NOTF_SendingData"] spawn life_fnc_showPredefinedNotification;
closeDialog 0;