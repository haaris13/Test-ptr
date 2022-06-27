/*
	File: fn_smartMarkerHideParent.sqf

	Autor: Iron
*/
_markerVar = [_this,0,"",[""]] call BIS_fnc_param;

if (isNil {missionNamespace getVariable _markerVar}) exitWith {};

_parentData = missionNamespace getVariable _markerVar;

_visible = _parentData select 2;
_childs = _parentData select 4;

_needToHide = true;

{
	_childData = (missionNamespace getVariable _x);

	_visibleChild = (_childData select 2);

	if (_visibleChild) then {
		_needToHide = false;
	};

} forEach _childs;

if (!_needToHide && _visible) exitWith {};

if (_needToHide && _visible) then {
	_parentData set [2, false];
	missionNamespace setVariable [_markerVar, _parentData];
};

if (!_needToHide && !_visible) then {
	_parentData set [2, true];
	missionNamespace setVariable [_markerVar, _parentData];
};

[_markerVar] spawn life_fnc_smartMarkerUpdateMarker;