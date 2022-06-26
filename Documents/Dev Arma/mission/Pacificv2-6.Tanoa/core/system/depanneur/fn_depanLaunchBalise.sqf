/*
	File: fn_depanLaunchBalise.sqf

	Autor: IronBlade
*/
_vehicle = [_this,0,objNull,[objNull]] call BIS_fnc_param;
closeDialog 0;

if (_vehicle getVariable ["balise", false]) exitWith {};

["Accepted", "Balise Lancé !"] spawn life_fnc_showPredefinedNotification;
[player, _vehicle] remoteExec ["TON_fnc_depanLaunchBalise", 2];