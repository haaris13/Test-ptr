/*
	File: fn_launchTargetTrainingLine.sqf

	Autor: IronBlade
*/
diag_log "fn_launchTargetTrainingLine";
_trainingClassName = [_this, 0, "", [""]] call BIS_fnc_param;

_CfgTargets = (missionConfigFile >> "CfgTargets");
_currentTraining = (_CfgTargets >> "Trainings" >> _trainingClassName);

_weaponTypes = getArray(_currentTraining >> "weaponTypes");

if (!(isClass(_currentTraining))) exitWith {
	diag_log "Not class";
};

life_targets_training_weapon = currentWeapon player;
_weaponName = getText(configFile >> "CfgWeapons" >> life_targets_training_weapon >> "displayName");

_weaponName = _weaponName splitString "("; 
if (count _weaponName > 0) then {
	_weaponName = _weaponName select 0;
} else {
	_weaponName = "";
};

if ((count _weaponTypes) > 0) then {

};

life_targets_training_exit = false;
life_targets_training_launched = true;
life_targets_stats = [_trainingClassName, "Custom", 0, 0, 0, _weaponName, life_targets_training_weapon, 0, []];
life_targets_stats_details = [];
life_targets_stats_targets = [];
life_targets_stats_nd_munition = 0;

_nbTargets = 0;

[_trainingClassName, player] remoteExec ['TON_fnc_trainingTargetLaunch', 2];

_areaPosition = getArray(_currentTraining >> "position");

_checkDistance = {
	if (player distance _areaPosition > 300) exitWith {
		false;
	};

	if (!(alive player)) exitWith {
		false;
	};

	true;
};

_lines = "true" configClasses (_currentTraining >> "Line");

//["Préparez vous, départ dans <t color='#0099FF'>10 secondes</t> !"] call life_fnc_dynamicText;
["Info", "Préparez vous, départ dans <t color='#0099FF'>10 secondes</t> !", "<t size='0.9' font='PuristaBold'>Stand de tir</t>"] spawn life_fnc_showPredefinedNotification;

diag_log "begin";

{
	_variableLine = configName(_x);
	_CfgTargetsLine = _x >> "Targets";

	_targets = "true" configClasses (_CfgTargetsLine);

	{
		_variableTarget = configName(_x);
		_targetClass = getText(_x >> "className");
		_targetPosition = getArray(_x >> "position");

		_target = nearestObject [_targetPosition, _targetClass];

		if !(isNull _target) then {
			_target setVariable ["nopop", true];
			[_target, "down"] call life_fnc_targetTrainingAction;
		} else {
			diag_log format["Null target on line %1 and target %1", _variableLine, _variableTarget];
		};

	} forEach _targets;

} forEach _lines;

_idEventFired = player addEventHandler ["Fired", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

	if (_unit == player) then {
		life_targets_stats_nd_munition = life_targets_stats_nd_munition + 1;
	};
}];

[] call life_fnc_targetTrainingLaunchTimer;

diag_log "start";

_startTime = time;

_indexAll = 0;

{
	_indexLine = _forEachIndex;

	_variableLine = configName(_x);
	_CfgTargetsLine = _x >> "Targets";

	_waitBefore = getNumber(_x >> "waitBefore");
	_waitAfter = getNumber(_x >> "waitAfter");

	_triggerOnPosition = getArray(_x >> "triggerOnPosition");
	_triggerOnPositionDistance = getNumber(_x >> "triggerOnPositionDistance");

	life_targets_stats_details pushBack [_variableLine, 0];

	diag_log format["Line %1", _variableLine];

	_timeStartLine = time;

	if (_waitBefore > 0) then {
		uiSleep _waitBefore;
	};
	
	if (life_targets_training_exit) exitWith {};

	if (count _triggerOnPosition > 0) then {
		waitUntil {
			if (!([] call _checkDistance)) exitWith {true;};
			if (life_targets_training_exit) exitWith {true;};
			sleep 0.3;
			(player distance _triggerOnPosition) < _triggerOnPositionDistance;
		};
	};

	if (!([] call _checkDistance)) exitWith {};
	if (life_targets_training_exit) exitWith {};
	if (currentWeapon player != life_targets_training_weapon) exitWith {life_targets_training_target_goods = [];};
	
	_targets = "true" configClasses (_CfgTargetsLine);

	life_targets_training_target_goods = [];

	{
		_variableTarget = configName(_x);
		_targetClass = getText(_x >> "className");
		_targetPosition = getArray(_x >> "position");

		_waitBeforeTarget = getNumber(_x >> "waitBefore");
		_waitAfterTarget = getNumber(_x >> "waitAfter");

		_triggerOnPositionTarget = getArray(_x >> "triggerOnPosition");
		_triggerOnPositionDistanceTarget = getNumber(_x >> "triggerOnPositionDistance");

		diag_log format["Target %1", _variableTarget];

		if (_waitBeforeTarget > 0) then {
			uiSleep _waitBeforeTarget;
		};

		life_targets_training_target_goods pushBack false;
		life_targets_stats_targets pushBack 1;
		[_x, _forEachIndex, _indexAll] spawn life_fnc_execTargetTrainingLine;

		if (!([] call _checkDistance)) exitWith {};
		if (life_targets_training_exit) exitWith {};

		if (currentWeapon player != life_targets_training_weapon) exitWith {};

		_nbTargets = _nbTargets + 1;
		_indexAll = _indexAll + 1;
	} forEach _targets;

	waitUntil {
		if (life_targets_training_exit) exitWith {life_targets_training_target_goods = [];true;};
		if (!([] call _checkDistance)) exitWith {life_targets_training_target_goods = [];true;};
		if (currentWeapon player != life_targets_training_weapon) exitWith {life_targets_training_target_goods = [];true;};
		uiSleep 0.5;
		(life_targets_training_target_goods find false) == -1;
	};

	if (_waitAfter > 0) then {
		uiSleep _waitAfter;
	};

	_totalTimeLine = abs(time - _timeStartLine);

	_stats = life_targets_stats_details select _indexLine;

	_stats set [1, _totalTimeLine];
	life_targets_stats_details set [_indexLine, _stats];

	if (!([] call _checkDistance)) exitWith {life_targets_training_target_goods = [];true;};

} forEach _lines;

// Clear target in use
[player] remoteExec ['TON_fnc_trainingTargetStop', 2];

player removeEventHandler ["Fired", _idEventFired];

life_targets_training_launched = false;

if (!([] call _checkDistance)) exitWith {
	diag_log "distance bad";
	["Error", "Vous êtes sorti de la zone de tir. Arrêt de l'entraînement."] spawn life_fnc_showPredefinedNotification;
};

if (currentWeapon player != life_targets_training_weapon) exitWith {
	["Error", "Ce n'est pas l'arme que vous avez choisi au début.. Arrêt de l'entraînement."] spawn life_fnc_showPredefinedNotification;
	//["<t color='#ff0000'>Ce n'est pas l'arme que vous avez choisi au début.. Arret de l'entraînement.</t>"] call life_fnc_dynamicText;
};

if (life_targets_training_exit) exitWith {
	["Warning", "Annulé", "<t size='0.9' font='PuristaBold'>Stand de tir</t>"] spawn life_fnc_showPredefinedNotification;
};

_totalTime = abs(time - _startTime);

_roundTimeTarget = 0;

{
	_roundTimeTarget = _roundTimeTarget + _x;
} forEach life_targets_stats_targets;

_roundTimeTarget = abs(_roundTimeTarget / (count life_targets_stats_targets));

life_targets_stats set [2, _totalTime];
life_targets_stats set [3, life_targets_stats_nd_munition];
life_targets_stats set [4, _nbTargets];
life_targets_stats set [7, _roundTimeTarget];
life_targets_stats set [8, (_totalTime * -1) + 100];

//life_targets_stats set [8, life_targets_stats_details];

_timeNowFormat = [_totalTime, "MM:SS.MS"] call BIS_fnc_secondsToString;

uiSleep 0.5;

["<t shadow='1' size='1.9' font='PuristaBold'>Terminé</t>", -1, -1, 1, 0.2, 0, 788] spawn BIS_fnc_dynamicText;

playSound "Orange_Choice_Select";

uiSleep 3;

[format["<t shadow='1'>Temps total: <t font='PuristaBold'>%1</t></t>", _timeNowFormat], -1, -1, 1, 0.5, 0, 788] spawn BIS_fnc_dynamicText;

//[format["Terminé, temps total: %1", _timeNowFormat]] call life_fnc_dynamicText;

//["Accepted", format["Terminé, temps total: %1", _timeNowFormat], "Stand de tir"] spawn life_fnc_showPredefinedNotification;

[player, life_targets_stats] remoteExec ['TON_fnc_trainingTargetSaveScore', 2];

[life_targets_training_weapon, 16] spawn life_fnc_targetTrainingStatsIncrease;

uiSleep 5;
["trainingtrgfirst"] spawn life_fnc_achievementLearn;
["x", 50] call life_fnc_addXP;