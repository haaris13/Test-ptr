#include "..\..\script_macros.hpp"
/*
	File: fn_keyAdminMarker.sqf
	Author: IronBlade

*/
private["_dialog","_list","_sel","_vehicle","_impounded","_owners","_index","_index2","_i"];
disableSerialization;

_dialog = findDisplay 2700;
_list = _dialog displayCtrl 2701;
_sel = lbCurSel _list;
if(_sel == -1) exitWith {["Error", "Aucunes données sélectionnés."] spawn life_fnc_showPredefinedNotification;};
_index = (parseNumber(_list lbData _sel));
_vehicle = life_vehicles select _index;

if (isNull _vehicle) exitWith {};

[_vehicle] spawn {
  while {dialog} do {
   closeDialog 0;
   sleep 0.01;
  };
  
  openMap true;
  mapAnimAdd [1, 0.12, (_this select 0)];
  mapAnimCommit;
};

// Create Marker

_vehicleData = _vehicle getVariable ["vehicle_info_owners",[]];
_dbInfo = _vehicle getVariable["dbInfo",[]];
_plate = _dbInfo select 1;

_marker = format["markerA_veh_%1_%2_%3",typeOf _vehicle, (((_vehicleData) select 0) select 0), _plate];

_marker = createMarkerLocal [_marker, position _vehicle];
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerShapeLocal "ICON";
_marker setMarkerTextLocal (format["Veh: %1 %2",getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName"), (((_vehicleData) select 0) select 1)]);
_marker setMarkerTypeLocal "mil_destroy";
_marker setMarkerPosLocal (position _vehicle);

for "_i" from 0 to 1200 do {
	uiSleep 0.1;
	if (!isNull _vehicle) then {
		_marker setMarkerPosLocal (position _vehicle);
	};
};

deleteMarkerLocal _marker;