/*
	File: fn_targetTrainingRandomLaunch.sqf

	Autor: IronBlade
*/
diag_log "fn_targetTrainingRandomLaunch";
_trainingClassName = [_this, 0, "", [""]] call BIS_fnc_param;
_difficultyClassName = [_this, 1, "", [""]] call BIS_fnc_param;

_CfgTargets = (missionConfigFile >> "CfgTargets");
_currentTraining = (_CfgTargets >> "Trainings" >> _trainingClassName);

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

life_targets_training_exit = false;
life_targets_training_launched = true;
life_targets_stats = [_trainingClassName, _difficultyClassName, 0, 0, 0, _weaponName, life_targets_training_weapon, 0, 0];
life_targets_stats_details = [];
life_targets_stats_targets = [];
life_targets_stats_nd_munition = 0;
life_targets_stats_score = 0;

_difficultyCfg = (_CfgTargets >> "Difficulties" >> _difficultyClassName);

_firstStep = (_difficultyCfg >> "FirstStep");
_steps = "true" configClasses (_difficultyCfg >> "Steps");
_timeBetweenTargets = getNumber(_difficultyCfg >> "timeBetweenStep");

[_trainingClassName, player] remoteExec ['TON_fnc_trainingTargetLaunch', 2];

_areaPosition = getArray(_currentTraining >> "position");
_refuseIfWeaponDeployed = getNumber(_currentTraining >> "refuseIfWeaponDeployed");
_stances = getArray(_currentTraining >> "stances");

life_targets_settings_stances = _stances;
life_targets_settings_refuse_weapon_deployed = _refuseIfWeaponDeployed;

_checkDistance = {
	if (player distance _areaPosition > 5) exitWith {
		false;
	};

	if (!(alive player)) exitWith {
		false;
	};

	true;
};

["Info", "Préparez vous et restez dans le stand, départ dans <t color='#0099FF'>10 secondes</t> !", "<t size='0.9' font='PuristaBold'>Stand de tir</t>"] spawn life_fnc_showPredefinedNotification;
//["Préparez vous et restez dans le stand, départ dans <t color='#0099FF'>10 secondes</t> !"] call life_fnc_dynamicText;
diag_log "begin";

_targets = "true" configClasses (_currentTraining >> "Targets");

_allTargetsConfigRoute = [];
_allTargetsObjects = [];

{
	_variableTarget = configName(_x);
	_targetClass = getText(_x >> "className");
	_targetPosition = getArray(_x >> "position");
	_target = nearestObject [_targetPosition, _targetClass];

	if !(isNull _target) then {
		_target setVariable ["nopop", true];
		[_target, "down"] call life_fnc_targetTrainingAction;
		_allTargetsObjects pushBack _target;
	} else {
		diag_log format["Null target on class %1 and target %2", _trainingClassName, _variableTarget];
	};
} forEach _targets;

if (count _allTargetsObjects == 0) exitWith {
	diag_log format["_allTargetsObjects isEmpty on class %1", _trainingClassName];
};

// --------------------------------------------------

_lasts = [];
_countTargets = 0;

_steps = (_steps call BIS_fnc_arrayShuffle);
_steps pushBack _firstStep;
reverse _steps;

{
	_class = _x;
	_closeTargets = getNumber(_class >> "closeTargets");
	_nbTargets = getNumber(_class >> "nbTargets");
	_closeTargetsMultiple = getNumber(_class >> "closeTargetsMultiple");

	_current = [];
	_lefts = [];

	{
		if ((_lasts find _x) == -1) then {
			_lefts pushBack _x;
		};
	} forEach _allTargetsObjects;

	if (_nbTargets <= 0) then {
		_nbTargets = 1;
	};


	if (count _lasts == 0) then {
		_lasts = [selectRandom _allTargetsObjects];
		_current =+ _lasts;
	} else {
		if (_closeTargets == 1) then {
			_last = (_lasts select 0);
			_closes =+ _lefts;

			while {(count _closes) > 3} do {
				_maxDistance = 0;
				_target = objNull;

				{
					if ((_last distance _x) > _maxDistance) then {
						_target = _x;
						_maxDistance = (_last distance _x);
					};
				} forEach _closes;

				_closes deleteAt (_closes find _target);
			};

			if (count _closes > 0) then {
				_current pushBack (selectRandom _closes);	
			} else {
				_current pushBack (selectRandom _allTargetsObjects);	
			};
		} else {
			_select = objNull;

			if ((count _lasts) < (count _allTargetsObjects)) then {
				while {true} do {
					_select = selectRandom _allTargetsObjects;
					if ((_lasts find _select) == -1) exitWith {};
				};
			};			

			if (isNull _select) then {
				_current pushBack (selectRandom _allTargetsObjects);
			} else {
				_current pushBack _select;	
			};	
		};
	};

	if (_nbTargets > 1) then {
		_selectRandom = (_nbTargets - 1);
		_curr = (_current select 0);

		if (_closeTargetsMultiple == 1 && _selectRandom > 0) then {
			_closes =+ _lefts;

			_closes deleteAt (_closes find _curr);

			if ((count _closes) < _selectRandom) then {
				{
					if ((count _closes) >= _selectRandom) exitWith {};

					if (!(_x in _closes)) then {
						_closes pushBack _x;
					};
				} forEach _allTargetsObjects;
			};

			while {(count _closes) > _selectRandom} do {
				_maxDistance = 0;
				_target = objNull;

				{
					if ((_curr distance _x) > _maxDistance) then {
						_target = _x;
						_maxDistance = (_curr distance _x);
					};
				} forEach _closes;

				_closes deleteAt (_closes find _target);
			};

			if (count _closes > 0) then {
				_current = _current + _closes;	
			};
		};

		if ((count _current) == 1) then {
			_toAdds =+ _lefts;

			if (count _toAdds == 0) then {
				_toAdds =+ _allTargetsObjects;
			};

			_toAdds deleteAt (_toAdds find _curr);

			for "_i" from 1 to _selectRandom do {
				if (count _toAdds == 0) exitWith {};

				_toAdd = selectRandom _toAdds;
				_toAdds deleteAt (_toAdds find _toAdd);

				_current pushBack _toAdd;
			};
		};

		//Secu
		if ((count _current) < _selectRandom) then {
			diag_log "Secu";
			
			_toAdds =+ _allTargetsObjects;

			{
				_toAdds deleteAt (_toAdds find _x);
			} forEach _current;

			while {((count _current) < _selectRandom)} do {
				if (count _toAdds == 0) exitWith {diag_log "count _toAdds == 0";};

				_toAdd = selectRandom _toAdds;
				_toAdds deleteAt (_toAdds find _toAdd);

				_current pushBack _toAdd;
			};
		};
	};

	if (count _current == 0) then {
		diag_log "_current is empty";
		_current = [selectRandom _allTargetsObjects];
	};

	_countTargets = _countTargets + (count _current);
	_allTargetsConfigRoute pushBack _current;

	_lasts =+ _current;
} forEach _steps;

// ------------------------------------------

[] call life_fnc_targetTrainingLaunchTimer;

diag_log "start";

_idEventFired = player addEventHandler ["Fired", {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

	if (_unit == player) then {
		life_targets_stats_nd_munition = life_targets_stats_nd_munition + 1;
	};
}];

life_targets_settings_stances_msg = "";

{
	_stanceDisplay = "";
	_stanceDisplay =  switch (_x) do { 
		case "STAND" : {"Debout";}; 
		case "CROUCH" : {"Accroupi";}; 
		case "PRONE" : {"Couché";}; 
		default {"";};
	};

	if (life_targets_settings_stances_msg == "") then {
		life_targets_settings_stances_msg = format["%1", _stanceDisplay];
	} else {
		life_targets_settings_stances_msg = format["%1, %2", life_targets_settings_stances_msg, _stanceDisplay];
	};	
} forEach _stances;

life_targets_settings_stances_msg = format["Vous devez vous mettre en position %1 pour continuer.", life_targets_settings_stances_msg];

if (!([life_targets_settings_stances] call life_fnc_playerIsOnStances)) then {
	waitUntil {
		if (life_targets_training_exit) exitWith {true;};
		if (!([] call _checkDistance)) exitWith {true;};
		//hint _goodStancesMsg;
		["Warning", life_targets_settings_stances_msg] spawn life_fnc_showPredefinedNotification;
		uiSleep 5;
		[_stances] call life_fnc_playerIsOnStances;
	};
};

_startTime = time;
_indexAll = 0;

{
	_indexLine = _forEachIndex;
	_objects = _x;

	diag_log format["Step %1", _indexLine];

	life_targets_stats_details pushBack [_indexLine, 0];

	_timeStartStep = time;
	_nbLastFire = life_targets_stats_nd_munition;

	if (!([] call _checkDistance)) exitWith {};
	if (life_targets_training_exit) exitWith {};
	if (currentWeapon player != life_targets_training_weapon) exitWith {};
	if (life_targets_settings_refuse_weapon_deployed == 1 && isWeaponDeployed player) exitWith {};

	life_targets_training_target_goods = [];
	life_targets_training_target_accurency = [];

	if (_timeBetweenTargets > 0) then {
		uiSleep _timeBetweenTargets;
	};

	_timeFireStep = time;

	{
		_object = _x;

		life_targets_training_target_goods pushBack false;
		life_targets_training_target_accurency pushBack 0;
		life_targets_stats_targets pushBack 1;
		[_x, _forEachIndex, _indexAll] spawn life_fnc_targetTrainingRandomExecTarget;

		if (!([] call _checkDistance)) exitWith {};
		if (life_targets_training_exit) exitWith {};
		if (currentWeapon player != life_targets_training_weapon) exitWith {};
		if (life_targets_settings_refuse_weapon_deployed == 1 && isWeaponDeployed player) exitWith {};

		_indexAll = _indexAll + 1;
	} forEach _objects;

	waitUntil {
		if (life_targets_training_exit) exitWith {true;};
		if (!([] call _checkDistance)) exitWith {life_targets_training_target_goods = [];true;};
		if (currentWeapon player != life_targets_training_weapon) exitWith {life_targets_training_target_goods = [];true;};
		if (life_targets_settings_refuse_weapon_deployed == 1 && isWeaponDeployed player) exitWith {true;};

		uiSleep 0.5;
		(life_targets_training_target_goods find false) == -1;
	};

	if (!([_stances] call life_fnc_playerIsOnStances)) then {
		waitUntil {
			if (life_targets_training_exit) exitWith {true;};
			if (!([] call _checkDistance)) exitWith {life_targets_training_target_goods = [];true;};
			//hint _goodStancesMsg;
			["Warning", life_targets_settings_stances_msg] spawn life_fnc_showPredefinedNotification;
			uiSleep 5;
			[_stances] call life_fnc_playerIsOnStances;
		};
	};

	// CalcStats
	_totalTimeFireStep = abs(time - _timeFireStep);
	_totalFireStep = life_targets_stats_nd_munition - _nbLastFire;
	_totalTargetsStep = count _objects;

	_speedStep = (2500 * _totalTargetsStep) - (_totalTimeFireStep * 1000);

	if (_speedStep < 0) then {
		_speedStep = 0;
	};

	_accurencies = life_targets_training_target_accurency;
	_accurencyTotal = 0;

	{
		_accurencyTotal = _accurencyTotal + _x;
	} forEach _accurencies;

	_accStep = _accurencyTotal / _totalTargetsStep;

	_score = round(_accStep + _speedStep);
	["TRAINING_SCORE","Score de l'étape: ", _score] spawn life_fnc_eventFeed;

	life_targets_stats_score = life_targets_stats_score + _score;

	_totalTimeStep = abs(time - _timeStartStep);
	
	_stats = life_targets_stats_details select _indexLine;
	_stats set [1, _totalTimeStep];
	life_targets_stats_details set [_indexLine, _stats];

} forEach _allTargetsConfigRoute;

// Clear target in use
[player] remoteExec ['TON_fnc_trainingTargetStop', 2];

player removeEventHandler ["Fired", _idEventFired];

life_targets_training_launched = false;

if (life_targets_settings_refuse_weapon_deployed == 1 && isWeaponDeployed player) exitWith {
	["Error", "Il est interdit de poser son arme. Arret de l'entraînement."] spawn life_fnc_showPredefinedNotification;
};

if (!([] call _checkDistance)) exitWith {
	if (!(alive player)) exitWith {};
	["Error", "Vous êtes sorti de la zone de tir. Arret de l'entraînement."] spawn life_fnc_showPredefinedNotification;
};

if (currentWeapon player != life_targets_training_weapon) exitWith {
	["Error", "Ce n'est pas l'arme que vous avez choisi au début.. Arret de l'entraînement."] spawn life_fnc_showPredefinedNotification;
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
life_targets_stats set [4, _countTargets];
life_targets_stats set [7, _roundTimeTarget];
life_targets_stats set [8, life_targets_stats_score];

_timeNowFormat = [_totalTime, "MM:SS.MS"] call BIS_fnc_secondsToString;

uiSleep 0.1;

["<t shadow='1' size='1.9' font='PuristaBold'>Terminé</t>", -1, -1, 1, 0.2, 0, 788] spawn BIS_fnc_dynamicText;
playSound "Orange_Choice_Select";

uiSleep 3;

[format["<t shadow='1'>Score total: <t font='PuristaBold'>%1</t></t>", life_targets_stats_score], -1, -1, 1, 0.5, 0, 788] spawn BIS_fnc_dynamicText;

//[format["Terminé, temps total: %1", _timeNowFormat]] call life_fnc_dynamicText;

//["Accepted", format["Terminé, temps total: %1", _timeNowFormat], "Stand de tir"] spawn life_fnc_showPredefinedNotification;

[player, life_targets_stats] remoteExec ['TON_fnc_trainingTargetSaveScore', 2];

_scoreVal = (log(life_targets_stats_score) ^ 2);
if (_scoreVal > 0) then {
	[life_targets_training_weapon, _scoreVal] spawn life_fnc_targetTrainingStatsIncrease;
};

uiSleep 5;
["trainingtrgfirst"] spawn life_fnc_achievementLearn;
["x", 50] call life_fnc_addXP;