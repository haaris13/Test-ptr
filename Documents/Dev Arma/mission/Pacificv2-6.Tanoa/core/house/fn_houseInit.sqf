/*
	File:fn_houseInit.sqf

	Author: IronBlade
*/
if(count life_houses == 0) exitWith {diag_log "No Houses";}; //Nothing to do.

{
	_position = _x;
	_house = (nearestObjects [_position, ["House", "Building"], 50] select 0);
	_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
	diag_log (typeOf _house);
	
	_marker = createMarkerLocal [format["house_%1",(_house getVariable "uid")],_position];
	_marker setMarkerTextLocal _houseName;
	_marker setMarkerColorLocal "ColorBlue";
	_marker setMarkerTypeLocal "loc_Lighthouse";
	
} foreach life_houses;