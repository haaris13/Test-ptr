/*
	File: fn_smartMarkerShowParent.sqf

	Autor: Iron
*/
private ["_markerVar", "_parentData", "_visible"];
_markerVar = [_this,0,"",[""]] call BIS_fnc_param;

if (isNil {missionNamespace getVariable _markerVar}) exitWith {};

_parentData = missionNamespace getVariable _markerVar;

_visible = _parentData select 2;

if (_visible) exitWith {};

_parentData set [2, true];
missionNamespace setVariable [_markerVar, _parentData];

[_markerVar] spawn life_fnc_smartMarkerUpdateMarker;