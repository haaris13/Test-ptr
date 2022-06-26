/*
	File: fn_nrbcDeleteShower.sqf

	Autor: Iron
	Date: 03 Apr 2020 23:49:32
	Version: 0.1
*/
_van = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_van setVariable ["shower", false, true];

if (count (attachedObjects _van) >= 2) then {
	{
  		detach _x; //on détache
  		deleteVehicle _x; //on supprime
	} forEach attachedObjects _van;
};