/*
	File: fn_targetTrainingStatsFindByCategory.sqf

	Autor: IronBlade
*/
diag_log "fn_targetTrainingStatsFindByCategory";
private ["_category", "_categ", "_c"];
_category = [_this, 0, "", [""]] call BIS_fnc_param;

_categ = [];

{
	_c = _x select 1;

	if (_c == _category) then {
		_categ = _x;
	};
} forEach life_training_target_stats;


_categ;