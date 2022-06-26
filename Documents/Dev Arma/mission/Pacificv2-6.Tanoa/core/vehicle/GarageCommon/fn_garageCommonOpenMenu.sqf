/*
	File: fn_garageCommonOpenMenu.sqf

	Autor: Iron
	Date: 02 Mar 2020 16:55:39
	Version: 0.1
*/

if (vehicle player != player) exitWith {["Error", "Impossible depuis un véhicule !"] spawn life_fnc_showPredefinedNotification;};

_side = (_this select 3) select 0;
_key = (_this select 3) select 1;
_type = (_this select 3) select 2;
_mrk = (_this select 3) select 3;

life_garage_common_mrk = _mrk;

[player, _side, _key, _type] remoteExec ["TON_fnc_garageCommonListVehicles", 2];