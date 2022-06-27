/*
	File: fn_narcosZoneMsg.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:25:37
	Version: 0.1
*/
_msgID = [_this, 0, 0, [0]] call BIS_fnc_param;

if !(license_civ_narcos) exitWith {};

switch (_msgID) do {
	case 0 : {
		["Warning", "Entrée détécté sur la base Narcos."] spawn life_fnc_showPredefinedNotification;
	};
	case 1 : {
		["Warning", "Alerte terminé sur la base Narcos."] spawn life_fnc_showPredefinedNotification;
	};
};