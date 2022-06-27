/*
	File: fn_fourriereStoreVehicle.sqf

	Autor: Iron
*/
private ["_vehicle"];
_pnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if (vehicle player != player) exitWith {["Error", "Impossible depuis un véhicule !"] spawn life_fnc_showPredefinedNotification;};

_nearVehicles = nearestObjects[getPosATL _pnj, ["Car","Air","Ship","Tank"], 15]; //Fetch vehicles within 30m.

if (count _nearVehicles > 0) then {
	{
		if (!isNil "_vehicle") exitWith {}; //Kill the loop.
		_vehData = _x getVariable ["vehicle_info_owners",[]];
		if ((count _vehData) > 0) then {
			_vehOwner = (_vehData select 0) select 0;
			_side = _x getVariable ["side", civilian];
			if ((getPlayerUID player) != _vehOwner && _side == civilian) exitWith {
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

[player, _vehicle] remoteExecCall ["TON_fnc_fourriereStoreVehicle", 2];