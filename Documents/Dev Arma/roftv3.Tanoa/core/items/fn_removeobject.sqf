#include "..\..\script_macros.hpp"
/*
	File: fn_removeObject.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Deletes a nearby placed object
*/
private["_obj"];
_obj = nearestObjects[getPos player,(life_placeables_classes),7] select 0;
if(isNil "_obj") exitWith {};
if(_obj getVariable ["item",""] != "objectDeployed") exitWith {};

sleep (random 0.25);
if(_obj getVariable ["inPickup",false]) exitWith {hint "Somebody is already picking up this object"};
_obj setVariable["inPickup",true,true];
_type = typeof _obj;

_name = "";
{
	if(_x select 1 == _type) exitWith {
		_name = _x select 0;
	};
} forEach (life_placeables); 


if(_name == "") exitWith {};

_obj setVariable["inPickup",false,true];
deleteVehicle _obj;


waitUntil {isNull _obj};

//Add back to player inv
if(([true,_name,1] call life_fnc_handleInv)) then
{
	titleText["You picked up the item.","PLAIN DOWN"];
};