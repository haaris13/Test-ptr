/*
	File: fn_launchTargetTraining.sqf

	Autor: IronBlade
*/
_trainingClassName = [_this, 0, "", [""]] call BIS_fnc_param;
_trainingDifficulty = [_this, 1, "", [""]] call BIS_fnc_param;

_CfgTargets = (missionConfigFile >> "CfgTargets");
_currentTraining = (_CfgTargets >> "Trainings" >> _trainingClassName);

if (!(isClass(_currentTraining))) exitWith {
	diag_log "Not class";
};

_side = switch (playerSide) do { 
	case west : {"cop";}; 
	case civilian : {"civ";}; 
	case independent : {"med"};  
};

_sides = getArray(_currentTraining >> "sides");

if (!(_side in _sides)) exitWith {
	["Error", "Vous n'avez pas l'autorisation."] spawn life_fnc_showPredefinedNotification;
};

if (!(_side in _sides)) exitWith {
	["Error", "Vous n'avez pas l'autorisation."] spawn life_fnc_showPredefinedNotification;
};

_can = true;
_cond = getArray(_currentTraining >> "condition");

if (count _cond > 0) then {
	_condCode = _cond select 0;
	
	if (_condCode != "") then {
		_can = call (compile _condCode);
	};
};

if (!_can) exitWith {
	["Error", (_cond select 1)] spawn life_fnc_showPredefinedNotification;	
};

uiSleep random 1;

_alreadyInUse = false;

{
	_className = _x select 0;
	_playerUid = _x select 1;

	if (_className == _trainingClassName) exitWith {
		_alreadyInUse = true;
	};
} forEach life_targets_training_in_use;

if (_alreadyInUse) exitWith {
	["Error", "Déja en cours d'utilisation."] spawn life_fnc_showPredefinedNotification;
};

_weaponCategories = getArray(_currentTraining >> "weaponCategories");

if (currentWeapon player == "") exitWith {
	["Error", "Pas d'arme équipé."] spawn life_fnc_showPredefinedNotification;
};

_badWeapon = false; 
if ((count _weaponCategories) > 0) then {
	_weaponCategory = [currentWeapon player] call life_fnc_weaponFindCategory;

	if ((_weaponCategories find _weaponCategory) == -1) then {
		_badWeapon = true;
	};
};

if (_badWeapon) exitWith {
	["Error", "L'arme actuelle n'est pas autorisé sur ce stand."] spawn life_fnc_showPredefinedNotification;
};

_type = getText(_currentTraining >> "type");

if (_type == "line") exitWith {
	[_trainingClassName] spawn life_fnc_launchTargetTrainingLine;
};

if (_type == "random") exitWith {
	[_trainingClassName, _trainingDifficulty] spawn life_fnc_targetTrainingRandomLaunch;
};