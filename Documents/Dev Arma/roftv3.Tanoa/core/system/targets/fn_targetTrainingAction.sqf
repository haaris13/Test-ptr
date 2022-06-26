/*
	File: fn_targetTrainingAction.sqf

	Autor: IronBlade
*/
_target = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_action = [_this, 1, "", [""]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_CfgTargets = (missionConfigFile >> "CfgTargets");
_CfgTargetsClass = (_CfgTargets >> "Targets" >> typeOf _target);

if (!isClass(_CfgTargetsClass)) exitWith {};

_anims = [];
_sound = "";

if (_action == "down") then {
	_anims = getArray(_CfgTargetsClass >> "goDownAnimate");
	_sound = getText(_CfgTargetsClass >> "soundDown");
};

if (_action == "up") then {
	_anims = getArray(_CfgTargetsClass >> "goUpAnimate");
	_sound = getText(_CfgTargetsClass >> "soundUp");
};

// Sound
if (_sound != "") then {
	[_target, _sound, 20] spawn life_fnc_playSound3DNear;
};

{
  _target animate _x;
} forEach _anims;