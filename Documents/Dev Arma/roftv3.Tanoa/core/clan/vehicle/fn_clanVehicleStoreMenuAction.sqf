#include "..\..\..\script_macros.hpp"
/*
	File: fn_clanVehicleStoreMenuAction.sqf

	Autor: IronBlade
*/

if (lbCurSel 6802 == -1) exitWith {};

_value =  lbValue[6802, (lbCurSel 6802)];
_group =  group player;
_clan = _group getVariable "clan_id";

_nearVehicles = nearestObjects [position life_clan_house, ["Car","Truck"],25];

_veh = _nearVehicles select _value;

_db = _veh getVariable ["dbInfo",["",""]];
_clanI = _veh getVariable ["clan",0];

if !((_db select 0) isEqualTo (getPlayerUID player)||(_clan == _clanI)) exitWith {};

_clan_garage = (group player) getVariable ["clan_garage", 0];
_maxVeh = getNumber(_currentUpgrade >> "garageNb");

if (_clan_garage >= _maxVeh) exitWith {
	hint "Il n'y a plus de place dans le Garage";
};

[life_clan_house, _veh, player] remoteExec ["TON_fnc_clanStoreVehicle", 2];

closeDialog 0;