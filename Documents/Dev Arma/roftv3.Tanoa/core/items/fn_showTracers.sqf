#include "..\..\script_macros.hpp"
/*
	File: fn_showTracers.sqf

	Autor: IronBlade
*/

if (((FETCH_CONST(life_coplevel) <= 1))) exitWith {};

life_tracers_Mark = [];

[] spawn {
	uiSleep 10;
	while {true} do {
		uiSleep 10;

		{
		    _veh = _x;

		    _index = _forEachIndex;

		    if (!isNull _veh) then {

		    	_vehicleData = _veh getVariable ["vehicle_info_owners",[]];
		    	_dbInfo = _veh getVariable["dbInfo",[]];
				_plate = _dbInfo select 1;
		    	_marker = format["marker_veh_%1_%2_%3",typeOf _veh, (((_vehicleData) select 0) select 0), _plate];

		    	if (_veh getVariable ["traceurPlaced",0] == 1 && alive _veh) then {
		    		

			    	if (markerPos _marker isEqualTo [0,0,0]) then {
			    		_marker = createMarkerLocal [_marker, position _veh];
			    		_marker setMarkerColorLocal "ColorRed";
			    		_marker setMarkerShapeLocal "ICON";
			    		//_marker setMarkerTextLocal (format["Traceur %1 %2",getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "displayName"), (((_vehicleData) select 0) select 1)]);
			    		_marker setMarkerTextLocal (format["Traceur %1",getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "displayName")]);
			    		_marker setMarkerTypeLocal "mil_destroy";

			    		life_tracers_Mark pushBack _marker;

			    	} else {
			    		_marker setMarkerPosLocal (position _veh);
			    	};
		    	} else {
		    		deleteMarkerLocal _marker;
		    	};
		    } else {
		    	deleteMarkerLocal (life_tracers_Mark select _index);
		    	life_tracers_Mark deleteAt _index;
			};
		} forEach life_traceurs;
	};
};

[] spawn {
	uiSleep 10;
	while {true} do {
		uiSleep 10;

		{
		    _veh = _x;

		    if (!isNull _veh) then {

		    	_vehicleData = _veh getVariable ["vehicle_info_owners",[]];
		    	_dbInfo = _veh getVariable["dbInfo",[]];
				_plate = _dbInfo select 1;
		    	_marker = format["marker_veh_%1_%2_%3",typeOf _veh, (((_vehicleData) select 0) select 0), _plate];
		    	deleteMarkerLocal _marker;
		    };
		} forEach life_traceurs_remove;
	};
};