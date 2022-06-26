/*
	File: fn_targetTrainingStatsReceive.sqf

	Autor: IronBlade
*/
diag_log "fn_targetTrainingStatsReceive";

_stats = [_this, 0, [], [[]]] call BIS_fnc_param;
life_training_target_stats = _stats;
life_training_target_stats_ready = true;