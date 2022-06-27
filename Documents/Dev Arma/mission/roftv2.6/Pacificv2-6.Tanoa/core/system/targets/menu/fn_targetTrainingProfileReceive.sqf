/*
	File: fn_targetTrainingProfileReceive.sqf

	Autor: IronBlade
*/
_hasProfile = [_this, 0, false, [false]] call BIS_fnc_param;
_profile = [_this, 1, [], [[]]] call BIS_fnc_param;

if (!_hasProfile) exitWith {
	life_training_target_has_profile = false;
};

life_training_target_has_profile = true;
life_training_target_profile = _profile;