/*
	File: fn_targetTrainingCalcPrecision.sqf

	Autor: IronBlade
*/
_target = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_hitPosition = [_this, 1, [], [[]]] call BIS_fnc_param;

_position = ASLToATL _hitPosition;
_modelPosition = _target worldToModel _position;

_CfgTargets = (missionConfigFile >> "CfgTargets");
_CfgTargetsClass = (_CfgTargets >> "Targets" >> typeOf _target);

_posHead = getArray(_CfgTargetsClass >> "Bones" >> "Head" >> "position");
_posTorso = getArray(_CfgTargetsClass >> "Bones" >> "Torso" >> "position");
_radiusHead = getNumber(_CfgTargetsClass >> "Bones" >> "Head" >> "radius");
_radiusTorso = getNumber(_CfgTargetsClass >> "Bones" >> "Torso" >> "radius");

_distanceHead = (_modelPosition distance _posHead);
_distanceTorso = (_modelPosition distance _posTorso);

if (_distanceHead < _radiusHead) exitWith {
	["Head", true, _distanceHead];
};

if (_distanceTorso < _radiusTorso) exitWith {
	["Torso", true, _distanceTorso];
};

if (_distanceHead < _distanceTorso) then {
	["Head", false, _distanceHead];
} else {
	["Torso", false, _distanceTorso];
};
