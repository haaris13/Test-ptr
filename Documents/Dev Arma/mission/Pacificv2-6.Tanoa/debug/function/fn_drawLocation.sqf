/*
	File: fn_drawLocation.sqf

	Autor: IronBlade

	Test function
*/

if (isNil "markers_shape_locations") then {markers_shape_locations = [];};

if ((count markers_shape_locations) > 0) exitWith {};

{
	_config = (configName _x);
		
	{
		_markerVarName = getText (_x >> "markerVarName");
		_zoneSize = getNumber (_x >> "zoneSize");

		_markerstr = createMarker [format ["%1_shape", _markerVarName], getMarkerPos _markerVarName];
		_markerstr setMarkerShape "ELLIPSE";
		_markerstr setMarkerSize [_zoneSize,_zoneSize];

		markers_shape_locations pushBack _markerstr;

	} forEach ("true" configClasses (missionConfigFile >> "CfgLocations" >> _config));

} forEach ("true" configClasses (missionConfigFile >> "CfgLocations"));