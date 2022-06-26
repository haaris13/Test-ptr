/*
	File: fn_targetTrainingScoresSearchAction.sqf

	Autor: IronBlade
*/
disableSerialization;

_display = findDisplay 2820;
_ctrlInfoMsg = _display displayCtrl 2823;
_ctrlEdit = _display displayCtrl 2822;

_profileName = ctrlText _ctrlEdit;
_length = count (toArray(_profileName));
_chrByte = toArray (_profileName);
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_ ");

if(_length > 15) exitWith {
	["Error", "Maximum 15 Caractères."] spawn life_fnc_showPredefinedNotification;
};
_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {
	["Error", localize "STR_GNOTF_IncorrectChar"] spawn life_fnc_showPredefinedNotification;
};
if(_length == 0) exitWith {
	["Error", "Veuillez indiquer un pseudonyme"] spawn life_fnc_showPredefinedNotification;
};

life_training_target_scores_filter_profile = _profileName;
life_training_target_scores_filter_action = "search";

[life_targets_training_class_current, player, "search", _profileName] remoteExec ['TON_fnc_trainingTargetRetrieveScores', 2];
//["Info", localize "STR_NOTF_SendingData"] spawn life_fnc_showPredefinedNotification;
closeDialog 0;