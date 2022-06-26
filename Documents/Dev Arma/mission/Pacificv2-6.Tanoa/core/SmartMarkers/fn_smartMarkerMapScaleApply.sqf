/*
	File: fn_smartMarkerMapScaleApply.sqf

	Autor: Iron
	Inspired : Bohemia Interactive
*/
private ["_marker", "_lod", "_varName", "_data"];
_marker = _this select 0;
_lod = _this select 1;

_varName = format["smt_mrks_%1", _marker];

_data = missionNamespace getVariable _varName;
_sectionClass = (_data select 1);

_currAlpha = markerAlpha _marker;
_currColor = markerColor _marker;

_suffix = getText(_sectionClass >> "sufix");

_type = [getArray(_sectionClass >> "type"), _lod] call life_fnc_smartMarkerFindLodConfig;
_color = [getArray(_sectionClass >> "color"), _lod] call life_fnc_smartMarkerFindLodConfig;
_alpha = [getArray(_sectionClass >> "alpha"), _lod] call life_fnc_smartMarkerFindLodConfig;

switch (true) do {
	case (_suffix == "text") : {
		if (!(_currAlpha isEqualTo _alpha)) then {
			_marker setMarkerAlphaLocal _alpha;
			//diag_log format["Update alpha %1 -> %2", _marker, _alpha];
		};

		if (!(_currColor isEqualTo _color)) then {
			_marker setMarkerColorLocal _color;
		};
	};
	case (_suffix == "back" || (_suffix == "icon")): {
		_size = [getArray(_sectionClass >> "size"), _lod] call life_fnc_smartMarkerFindLodConfig;

		_currType = markerType _marker;
		_currSize = markerSize _marker;

		if (!(_currAlpha isEqualTo _alpha)) then {
			_marker setMarkerAlphaLocal _alpha;
			//diag_log format["Update alpha %1 -> %2", _marker, _alpha];
		};

		if (!(_currColor isEqualTo _color)) then {
			_marker setMarkerColorLocal _color;
		};

		if (!(_currSize isEqualTo _size)) then {
			_marker setMarkerSizeLocal _size;
		};

		if (!(_currType isEqualTo _type)) then {
			_marker setMarkerTypeLocal _type;
		};

		if (!(_currSize isEqualTo _size)) then {
			_marker setMarkerSizeLocal _size;
		};
	};
};