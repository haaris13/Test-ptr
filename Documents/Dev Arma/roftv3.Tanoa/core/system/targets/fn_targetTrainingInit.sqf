/*
	File: fn_targetTrainingInit.sqf

	Autor: IronBlade
*/

life_targets_training_launched = false;
life_training_target_stats_ready = false;

life_training_target_scores_wait_data = false;
life_targets_training_class_current = "";
life_training_target_scores_filter_difficulty = "";
life_training_target_scores_filter_profile = "";
life_training_target_scores_filter_action = "";

[] spawn {
	uiSleep 10;
	[player] remoteExec ['TON_fnc_trainingTargetRetreiveProfile', 2];
	[player] remoteExec ['TON_fnc_trainingTargetRetreiveStats', 2];
};

[] spawn life_fnc_targetTrainingStatsSystem;