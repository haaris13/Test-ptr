/*
	File: fn_targetTrainingStatsSave.sqf

	Autor: IronBlade
*/
private ["_stat", "_id", "_categ", "_level"];
diag_log "fn_targetTrainingStatsSave";
_stat = [_this, 0, [], [[]]] call BIS_fnc_param;

_id = _stat select 0;
_categ = _stat select 1;
_level = _stat select 2;

[player, _id, _level] remoteExec ["TON_fnc_trainingTargetSaveStats", 2];