/*
	File: fn_targetTrainingProfileCreated.sqf

	Autor: IronBlade
*/
_profile = [_this, 0, [], [[]]] call BIS_fnc_param;

life_training_target_has_profile = true;
life_training_target_profile = _profile;
["Info", "Profile créé !"] spawn life_fnc_showPredefinedNotification;
closeDialog 0;