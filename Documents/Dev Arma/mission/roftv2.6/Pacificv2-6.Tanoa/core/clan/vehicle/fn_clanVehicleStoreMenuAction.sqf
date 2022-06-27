#include "..\..\..\script_macros.hpp"
/*
	File: fn_clanVehicleStoreMenuAction.sqf

	Autor: IronBlade
*/

if (lbCurSel 6802 == -1) exitWith {};

_value =  lbValue[6802, (lbCurSel 6802)];

_nearVehicles = nearestObjects [position life_clan_house, ["Car","Truck"],25];

_veh = _nearVehicles select _value;

_db = _veh getVariable ["dbInfo",["",""]];

if !((_db select 0) isEqualTo (getPlayerUID player)) exitWith {};

_clan_garage = (group player) getVariable ["clan_garage", 0];
_maxVeh = getNumber(_currentUpgrade >> "garageNb");

if (_clan_garage >= _maxVeh) exitWith {
	["Error", "Il n'y a plus de place dans le Garage."] spawn life_fnc_showPredefinedNotification;
};

[life_clan_house, _veh, player] remoteExec ["TON_fnc_clanStoreVehicle", 2];

closeDialog 0;