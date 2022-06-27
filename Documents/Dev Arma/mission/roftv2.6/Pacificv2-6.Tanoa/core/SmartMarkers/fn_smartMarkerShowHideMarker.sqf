/*
	File: fn_smartMarkerShowHideMarker.sqf

	Autor: Iron
*/
private ["_marker", "_action", "_varName", "_dataMarker", "_parentData", "_parentVar", "_visible"];
_marker = [_this,0,"",[""]] call BIS_fnc_param;
_action = [_this,1,"",[""]] call BIS_fnc_param;

_varName = format["smt_mrks_%1", _marker];
if (isNil {missionNamespace getVariable _varName}) exitWith {diag_log format["smt_mrks_%1 is nill cant %2", _marker, _action]};

_dataMarker = missionNamespace getVariable _varName;
_parentData = _dataMarker;

_parentVar = _varName;
if (count _dataMarker == 2) then {
	_parentVar = _dataMarker select 0;
	_parentData = missionNamespace getVariable _parentVar;
};

_visible = _parentData select 2;

if (_visible && _action == "show") exitWith {};
if (!_visible && _action == "hide") exitWith {};

_changeVisible = true;

if (_action == "show") then {
	_changeVisible = true;
};

if (_action == "hide") then {
	_changeVisible = false;
};

_parentData set [2, _changeVisible];
missionNamespace setVariable [_parentVar, _parentData];

[_parentVar] spawn life_fnc_smartMarkerUpdateMarker;

_isParent = false;
_hasChilds = false;

_parentInfo = _parentData select 4;

if (typeName _parentInfo == "ARRAY") then {
	_isParent = true;
};

if (_isParent && _hasChilds) exitWith {/* Impossible */};
if (_isParent && !_hasChilds) exitWith {};

if (!_isParent) then {
	if (_action == "show") then {
		[_parentInfo] call life_fnc_smartMarkerShowParent;
	};

	if (_action == "hide") then {
		[_parentInfo] call life_fnc_smartMarkerHideParent;
	};
};
