#include "..\..\script_macros.hpp"
/*
	File: fn_storeVehicle.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Stores the vehicle in the garage.
*/
private["_nearVehicles","_vehicle"];

_pnj = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = [_this, 3, ["Car","Air","Ship","Tank"],[[]]] call BIS_fnc_param;

if(vehicle player != player) exitWith {hint "Impossible depuis un véhicule !";};

_nearVehicles = nearestObjects[getPosATL _pnj, _type, 30]; //Fetch vehicles within 30m.

if(count _nearVehicles > 0) then {
	{
		if(!isNil "_vehicle") exitWith {}; //Kill the loop.
		_vehData = _x GVAR ["vehicle_info_owners",[]];
		if(count _vehData  > 0) then {
			_vehOwner = SEL(SEL(_vehData,0),0);
			if((getPlayerUID player) == _vehOwner) exitWith {
				_vehicle = _x;
			};
		};
	} foreach _nearVehicles;
};

if (isNil "_vehicle") exitWith {hint localize "STR_Garage_NoNPC"};
if (isNull _vehicle) exitWith {};
if (getDammage _vehicle > 0.5 && (playerSide == civilian)) exitWith {hint "Impossible le véhicule est endommagé !";};

(getAllHitPointsDamage _vehicle) params [["_hitPoints", []], ["_hitSelections", []], ["_hitDammages", []]];
([_vehicle] call ace_repair_fnc_getWheelHitPointsWithSelections) params ["_wheelHitPoints", "_wheelHitSelections"];

_dammageWhells = false;
{
	_selection = _x;
    _hitpoint = _hitPoints select _forEachIndex;
    _dammage = _hitDammages select _forEachIndex;

    if (_selection in _wheelHitSelections) then {
    	if (_dammage > 0.5) then {
    		_dammageWhells = true;
    	};
    };
} forEach _hitSelections;

if (_dammageWhells) exitWith {hint "Impossible Le véhicule est endommagé !";}; 

if (count ((_vehicle getVariable["Trunk",[[],0]]) select 0) > 0 && (playerSide == civilian)) exitWith {hint "Il y a quelque chose dans le coffre !"};

[_vehicle,false,(_this select 1)] remoteExecCall ["TON_fnc_vehicleStore",2];
life_garage_store = true;