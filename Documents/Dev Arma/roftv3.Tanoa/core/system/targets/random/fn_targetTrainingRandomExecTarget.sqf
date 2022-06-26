/*
	File: fn_targetTrainingRandomExecTarget.sqf

	Autor: IronBlade
*/
_target = _this select 0;
_index = _this select 1;
_indexAll = _this select 2;

if ((count life_targets_training_target_goods) == 0) exitWith {};
if (life_targets_training_exit) exitWith {};
if (currentWeapon player != life_targets_training_weapon) exitWith {};

if !(isNull _target) then {
	_timeStartLine = time;
	[_target, "up"] call life_fnc_targetTrainingAction;
	_target setVariable ["hitTarget", false];
	_target setVariable ["hitDetails", []];

	_hitDetails = [];

	_idEventHit = _target addEventHandler ["HitPart", {

		_values = (_this select 0);
		if ((_values select 1) == player) then {

			(_values select 0) setVariable ["hitDetails", [_values select 0, _values select 3] call life_fnc_targetTrainingCalcPrecision];

			[(_values select 0), "down"] call life_fnc_targetTrainingAction;
			(_values select 0) setVariable ["hitTarget", true];
		};
	}];

	waitUntil {
		if ((count life_targets_training_target_goods) == 0) exitWith {true;};
		if (life_targets_training_exit) exitWith {true;};
		if (currentWeapon player != life_targets_training_weapon) exitWith {true;};
		uiSleep 0.15;
		_target getVariable ["hitTarget", false];
	};

	diag_log "Ok Hit";

	if (!([life_targets_settings_stances] call life_fnc_playerIsOnStances)) then {
		waitUntil {
			if ((count life_targets_training_target_goods) == 0) exitWith {true;};
			if (life_targets_training_exit) exitWith {true;};
			["Warning", life_targets_settings_stances_msg] spawn life_fnc_showPredefinedNotification;
			uiSleep 5;
			[_stances] call life_fnc_playerIsOnStances;
		};
	};

	_hitDetails = _target getVariable ["hitDetails", []];

	if (count _hitDetails > 0) then {
		_area = _hitDetails select 0;
		_dist = _hitDetails select 2;

		_accTarget = 0;
		if (_area == "Head") then {
			_accTarget = (1 - ( _dist / 0.17 )) * 2000;
		} else {
			_accTarget = (1 - ( _dist / 0.379 )) * 1700;
		};

		if (_accTarget < 0) then {
			_accTarget = 0;
		};

		life_targets_training_target_accurency set [_index, _accTarget];
	};

	_totalTimeTarget = abs(time - _timeStartLine);
	life_targets_stats_targets set [_indexAll, _totalTimeTarget];

	_target setVariable ["hitTarget", nil];
	_target setVariable ["hitDetails", nil];
	_target removeEventHandler ["HitPart", _idEventHit];

} else {
	diag_log "Null target.";
};

if ((count life_targets_training_target_goods) == 0) exitWith {};
if (life_targets_training_exit) exitWith {};
if (currentWeapon player != life_targets_training_weapon) exitWith {};

life_targets_training_target_goods set [_index, true];