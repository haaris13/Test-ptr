/*
	File: fn_targetTrainingStatsUncrease.sqf

	Autor: Iron
*/
private ["_remove", "_level"];
_remove = [_this, 0, 0, [0]] call BIS_fnc_param;
_remove = round(_remove);

if (["juice"] call life_fnc_hasAtouts) then {
	_remove = round(_remove / 2);
};

if (["weaponsTraining"] call life_fnc_hasPerk) then {
	_remove = round(_remove * 0.7);
};

if (playerSide == west) then {
	_remove = round(_remove / 2);
};

{
	_level = _x select 2;

	if (_level > 0) then {

		_level = _level - _remove;

		if (_level < 0) then {
			_level = 0;
		};

		_x set [2, _level];
		
		[_x] spawn life_fnc_targetTrainingStatsSave;
	};			
} forEach life_training_target_stats;

life_training_target_stats_calc = true;