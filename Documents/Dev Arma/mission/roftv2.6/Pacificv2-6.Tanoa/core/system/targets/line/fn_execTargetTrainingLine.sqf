/*
	File: fn_execTargetTrainingLine.sqf

	Autor: IronBlade
*/
_targetConfig = _this select 0;
_index = _this select 1;
_indexAll = _this select 2;

_variableTarget = configName(_targetConfig);
_targetClass = getText(_targetConfig >> "className");
_targetPosition = getArray(_targetConfig >> "position");

_waitBeforeTarget = getNumber(_targetConfig >> "waitBefore");
_waitAfterTarget = getNumber(_targetConfig >> "waitAfter");

_triggerOnPositionTarget = getArray(_targetConfig >> "triggerOnPosition");
_triggerOnPositionDistanceTarget = getNumber(_targetConfig >> "triggerOnPositionDistance");

if (count _triggerOnPositionTarget > 0) then {
	waitUntil {
		if ((count life_targets_training_target_goods) == 0) exitWith {};
		if (life_targets_training_exit) exitWith {};
		if (currentWeapon player != life_targets_training_weapon) exitWith {};
		uiSleep 0.3; 
		(player distance _triggerOnPositionTarget) < _triggerOnPositionDistanceTarget;
	};
};

if ((count life_targets_training_target_goods) == 0) exitWith {};
if (life_targets_training_exit) exitWith {};
if (currentWeapon player != life_targets_training_weapon) exitWith {};

_target = nearestObject [_targetPosition, _targetClass];

if !(isNull _target) then {
	_timeStartLine = time;
	[_target, "up"] call life_fnc_targetTrainingAction;
	_target setVariable ["hitTarget", false];

	_hitDetails = [];

	_idEventHit = _target addEventHandler ["HitPart", {

		_values = (_this select 0);
		if ((_values select 1) == player) then {
			_hitDetails = [_values select 0, _values select 3] call life_fnc_targetTrainingCalcPrecision;
			[(_values select 0), "down"] call life_fnc_targetTrainingAction;
			(_values select 0) setVariable ["hitTarget", true];
		};
	}];

	waitUntil {
		if ((count life_targets_training_target_goods) == 0) exitWith {};
		if (life_targets_training_exit) exitWith {};
		if (currentWeapon player != life_targets_training_weapon) exitWith {};
		uiSleep 0.15; 
		_target getVariable ["hitTarget", false];
	};

	diag_log "Ok Hit";

	if (count _hitDetails > 0) then {
		// details of precision
	};

	_totalTimeTarget = abs(time - _timeStartLine);

	life_targets_stats_targets set [_indexAll, _totalTimeTarget];

	_target setVariable ["hitTarget", nil];
	_target removeEventHandler ["HitPart", _idEventHit];

} else {
	diag_log format["Null target on line %1 and target %1", _variableLine, _variableTarget];
};

if (_waitAfterTarget > 0) then {
	uiSleep _waitAfterTarget;
};

if ((count life_targets_training_target_goods) == 0) exitWith {};
if (life_targets_training_exit) exitWith {};
if (currentWeapon player != life_targets_training_weapon) exitWith {};

life_targets_training_target_goods set [_index, true];