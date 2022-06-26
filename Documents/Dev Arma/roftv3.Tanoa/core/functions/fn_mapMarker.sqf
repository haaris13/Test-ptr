/*
	File: fn_mapMarker.sqf
	
	Autor: IronBlade

	Description:
		Gestion des Markers
*/

// Config Marker :

markerIsConfig = true;
publicVariable "markerIsConfig";

// Script
{

	_markerRec = getText(_x >> "marker");
	_dispo = getArray(_x >> "markersPos");
	_settings = getArray(_x >> "settings");
	_displayName = getText(_x >> "displayName");

	if (count _dispo > 0) then {

		_selectMarker = _dispo select floor random count _dispo;

		_marker = createMarker [_markerRec, markerPos _selectMarker ];

		_marker setMarkerColor (_settings select 1);
		_marker setMarkerType (_settings select 2);
		_marker setMarkerText _displayName;
	};
} forEach ("true" configClasses ( missionConfigFile >> "CfgMarkers" ));