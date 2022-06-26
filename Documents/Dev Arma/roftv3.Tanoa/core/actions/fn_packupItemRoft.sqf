/*
	File: fn_packupItemRoft.sqf
	Author: Emmett Dalton
	
	Description:
	
*/
private["_className", "_object"];
_className = typeOf cursortarget;
hint format ["ranger: %1", _className];

_object = nearestObjects[getPos player,[_className],2] select 0;
if(isNil "_object") exitWith {};

if(([true,_className,1] call life_fnc_handleInv)) then
{
	titleText["Vous avez rangé votre objet","PLAIN",2];
	deleteVehicle _object;
};