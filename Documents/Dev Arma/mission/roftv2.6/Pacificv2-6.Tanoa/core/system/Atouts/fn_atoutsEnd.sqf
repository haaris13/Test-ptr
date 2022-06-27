/*
	File: fn_atoutsEnd.sqf

	Autor: Iron
	Date: 10 Mar 2020 19:06:34
	Version: 0.1
*/
_cfg = [_this, 0, "", [""]] call BIS_fnc_param;
_noNext = [_this, 1, false, [false]] call BIS_fnc_param;

_toRemove = [""];

{
	_cfgRe = _x select 0;

	if (_cfgRe == _cfg) then {
		_toRemove = _x;
	};
} forEach life_atouts_actif;

life_atouts_actif = life_atouts_actif - [_toRemove];

switch ( _cfg) do { 
	case "testAtouts" : {
		life_testAtouts = false;
	};

	case "joint3" : {
		life_training_target_stats_calc = true;
	};
};

_cfgAtout = (missionConfigFile >> "Atouts" >> _cfg);
_next = getText(_cfgAtout >> "next");
_title = getText(_cfgAtout >> "title");
_globalTitle = getText(_cfgAtout >> "globalTitle");

if (_next != "" && !_noNext) then {
	["InfoWithSound", format["Nouvelle étape de l'effet %1.<br/>%2.", _globalTitle, _title]] spawn life_fnc_showPredefinedNotification;
	[_next] spawn life_fnc_atoutsStartGo;
} else {
	["InfoWithSound", format["Fin de l'effet %1.", _globalTitle]] spawn life_fnc_showPredefinedNotification;
};

if !(isNull (findDisplay 25100)) then {
	closeDialog 0;
	[] spawn life_fnc_atoutsOpen;
};