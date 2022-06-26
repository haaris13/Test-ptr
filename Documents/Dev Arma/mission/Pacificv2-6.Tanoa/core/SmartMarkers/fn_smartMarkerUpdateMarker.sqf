/*
	File: fn_smartMarkerUpdateMarker.sqf

	Autor: Iron
*/
private ["_markerVar", "_dataMarker", "_markers", "_visible"];
_markerVar = [_this,0,"",[""]] call BIS_fnc_param;

if (isNil {missionNamespace getVariable _markerVar}) exitWith {diag_log format["Nil %1", _markerVar]};

_dataMarker = missionNamespace getVariable _markerVar;

_markers = _dataMarker select 0;
_visible = _dataMarker select 2;

if (_visible) then {
	_needToHide = false;
	
	_visibleScales = _dataMarker select 3;

	_minScale = _visibleScales select 0;
	_maxScale = _visibleScales select 1;

	if (smart_marker_settings_lst_scale < _minScale || smart_marker_settings_lst_scale > _maxScale) then {
		_needToHide = true;
	};

	{
		private ["_marker"];

		_marker = _x;
		_alpha = markerAlpha _marker;

		if (_needToHide && _alpha != 0) then {
			_marker setMarkerAlphaLocal 0;
		};

		if (!_needToHide) then {
			[_x, smart_marker_settings_lst_lod] spawn life_fnc_smartMarkerMapScaleApply;
		};
	} forEach _markers;
};

if (!_visible) then {
	{
		_x setMarkerAlphaLocal 0;
	} forEach _markers;
};