/*
	File: fn_fuelStatMarkers.sqf
	Author: IronBlade
*/
private["_markers","_units","_medics"];
_markers = [];

_cfgFuelStation = (missionConfigFile >> "CfgFuelStation");
_cfgAllStations = (_cfgFuelStation >> "AllStations");

sleep 0.25;
if(visibleMap) then {

	//Loop through and create markers.
	{
		_marker = createMarkerLocal [format["%1_station",_x], visiblePosition _x];
		_marker setMarkerColorLocal "ColorOrange";
		_marker setMarkerTypeLocal "loc_Fuelstation";

		_var = str(_x);
		_var = _var select [4];

		_volumeStat = getNumber(_cfgAllStations >> _var >> "citerne");
		_citerneStat = (_x getVariable ["citerne", 0]);

		_marker setMarkerTextLocal format["Station - [ %1/ %2L ]", _citerneStat, _volumeStat];
		_markers pushBack _marker;
	} foreach life_stations_list;

	while {visibleMap} do {

		if(!visibleMap) exitWith {};
		sleep 0.02;
	};

	{deleteMarkerLocal _x;} foreach _markers;
	
	waitUntil {!visibleMap};
};