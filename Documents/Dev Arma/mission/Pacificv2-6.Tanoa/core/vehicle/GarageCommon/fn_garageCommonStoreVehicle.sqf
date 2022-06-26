/*
	File: fn_garageCommonStoreVehicle.sqf

	Autor: Iron
	Date: 02 Mar 2020 16:47:12
	Version: 0.1
*/
private ["_vehicle"];

_pnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if (vehicle player != player) exitWith {["Error", "Impossible depuis un véhicule !"] spawn life_fnc_showPredefinedNotification;};

_side = (_this select 3) select 0;
_key = (_this select 3) select 1;
_type = (_this select 3) select 2;

_dist = 15;

if (_type == "Air") then {
	_dist = 30;
};

_nearVehicles = nearestObjects[getPosATL _pnj, [_type], _dist]; //Fetch vehicles within 30m.

_sideType = civilian;

switch (_side) do { 
	case "civ" : {_sideType = civilian;};
	case "cop" : {_sideType = west;};
	case "med" : {_sideType = independent;};
};

if (count _nearVehicles > 0) then {
	{
		if (!isNil "_vehicle") exitWith {}; //Kill the loop.
		_vehData = _x getVariable ["vehicle_info_owners",[]];
		if ((count _vehData) > 0) then {
			_sideVeh = _x getVariable ["side", civilian];
			if (_sideVeh == _sideType) exitWith {
				_vehicle = _x;
			};
		};
	} foreach _nearVehicles;
};

if (isNil "_vehicle") exitWith {
	["Error", localize "STR_Garage_NoNPC"] spawn life_fnc_showPredefinedNotification;
};
if (isNull _vehicle) exitWith {};

if ((getDammage _vehicle > 0.05) && (playerSide == civilian)) exitWith {
	["Error", "Impossible Le véhicule est endommagé !"] spawn life_fnc_showPredefinedNotification;
};

[player, _side, _key, _type, _vehicle] remoteExecCall ["TON_fnc_garageCommonStoreVehicle", 2];