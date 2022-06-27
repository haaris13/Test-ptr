/*
	File: fn_licenseActionEvent.sqf
	Author: Iron
	
	Description:
*/
private ["_action", "_value"];
_action = [_this,0,"",[""]] call BIS_fnc_param;
_value = [_this,1,"",[""]] call BIS_fnc_param;

if (!isClass(missionConfigFile >> "Licenses" >> _value)) exitWith {diag_log format["Licenses >> %1 is not Class", _value]};

waitUntil {smart_marker_ready};

switch (_action) do { 
	case "add" : {
		_markers = getArray(missionConfigFile >> "Licenses" >> _value >> "childsSmartMarkers");

		{
			[_x, "show"] call life_fnc_smartMarkerShowHideMarker;
		} forEach _markers;

		if (_value == "insurge") then {
			if (!(isNull insurge_build_1)) then {
				life_vehicles pushBack insurge_build_1;
			};
		};
	}; 
	case "remove" : {
		_markers = getArray(missionConfigFile >> "Licenses" >> _value >> "childsSmartMarkers");

		{
			[_x, "hide"] call life_fnc_smartMarkerShowHideMarker;
		} forEach _markers;

		if (_value == "insurge") then {
			if (!(isNull insurge_build_1)) then {
				life_vehicles = life_vehicles - [insurge_build_1];
			};
		};
	}; 
	case "init" : {
		_markers = getArray(missionConfigFile >> "Licenses" >> _value >> "childsSmartMarkers");

		{
			[_x, "show"] call life_fnc_smartMarkerShowHideMarker;
		} forEach _markers;

		if (_value == "insurge") then {
			if (!(isNull insurge_build_1)) then {
				life_vehicles pushBack insurge_build_1;
			};
		};
	};
};