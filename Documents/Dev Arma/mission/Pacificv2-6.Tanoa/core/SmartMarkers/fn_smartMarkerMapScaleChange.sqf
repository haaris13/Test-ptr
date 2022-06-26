/*
	File: fn_smartMarkerMapScaleChange.sqf

	Autor: Iron
	Inspired : Bohemia Interactive
*/
private ["_lod"];
_newScale = [_this,0,1,[0]] call BIS_fnc_param;
_lastScale = smart_marker_settings_lst_scale;

if (time < (smart_marker_settings_lst_scale_change + 0.1)) exitWith {};

_lod = 0;

switch (true) do
{
    case (_newScale >= 0 && _newScale < 0.0347353): { _lod = 0 };
    case (_newScale >= 0 && _newScale < 0.431711): { _lod = 1 };
	case (_newScale >= 0.431711 && _newScale <= 1): { _lod = 2 };
};

{
	_varName = _x;

	if (isNil {missionNamespace getVariable _varName}) then {
		diag_log format["Error Nil: %1", _varName];
	};

	_varValue = missionNamespace getVariable _varName;

	_markers = (_varValue select 0);
	_visible = (_varValue select 2);
	_visibleScales = (_varValue select 3);

	if (_visible) then {

		_needToHide = false;

		_minScale = _visibleScales select 0;
		_maxScale = _visibleScales select 1;

		if (_newScale < _minScale || _newScale > _maxScale) then {
			_needToHide = true;
		};

		{
			_marker = _x;
			_alpha = markerAlpha _marker;

			if (_needToHide && _alpha != 0) then {
				_marker setMarkerAlphaLocal 0;
				//diag_log format["Hide marker %1", _marker];
			};

			if (!_needToHide) then {
				if (_alpha == 0 || smart_marker_settings_lst_lod != _lod) then {
					[_x, _lod] spawn life_fnc_smartMarkerMapScaleApply;
				};
			};
		} forEach _markers;
	};

} forEach smart_marker_markers_elements;

smart_marker_settings_lst_scale = _newScale;
smart_marker_settings_lst_scale_change = time;
smart_marker_settings_lst_lod = _lod;