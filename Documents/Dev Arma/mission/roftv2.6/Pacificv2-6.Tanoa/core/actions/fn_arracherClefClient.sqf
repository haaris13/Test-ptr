#include "..\..\script_macros.hpp"
/*
	File: fn_searchClient.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Searches the player and he returns information back to the player.
*/
private["_inv","_val","_var","_robber"];
params [
	["_unit",objNull,[objNull]]
];
if(isNull _unit) exitWith {};

["Warning", "On vous arraché les clefs !"] spawn life_fnc_showPredefinedNotification;

_vehicles = [];

{

	_vehicle = _x;

	if ((_vehicle isKindOf "Car" OR _vehicle isKindOf "Air" OR _vehicle isKindOf "Ship") AND (player distance _vehicle) <= 100) then {
		_vehicles pushBack _vehicle;
	};

} forEach life_vehicles;

{
	_veh = _x;

	_uid = getPlayerUID _unit;
	_owners = _veh GVAR "vehicle_info_owners";
	_index = [_uid,_owners] call TON_fnc_index;
	if(EQUAL(_index,-1)) then {
		_owners pushBack [_uid,_unit GVAR ["realname",name _unit]];
		_veh SVAR ["vehicle_info_owners",_owners,true];
	};

	sleep 0.5;

  	[_veh,_unit] remoteExecCAll ["TON_fnc_clientArracherKey",_unit];

} forEach _vehicles;