/*
	File: fn_transfertVehValidReceiveTo.sqf

	Autor: Iron
	Date: 29 Feb 2020 13:55:12
	Version: 0.1
*/

_veh = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _veh) exitWith {};

life_vehicles pushBack _veh;

_className = typeOf _veh;
_displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");

_msg = format ["Bravo, vous voila maintenant propriètaire d'un véhicule %1.", _displayName];

["Accepted", _msg] spawn life_fnc_showPredefinedNotification;