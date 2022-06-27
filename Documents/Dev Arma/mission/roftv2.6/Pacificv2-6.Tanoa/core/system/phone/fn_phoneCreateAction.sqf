/*
	File: fn_phoneCreateAction.sqf

	Autor: Iron
*/

if (count life_phones >= 4) exitWith {
	["Error", "Vous avez trop de téléphones."] spawn life_fnc_showPredefinedNotification;
};

if(!([false,"Phone", 1] call life_fnc_handleInv)) exitWith {};

[3] call SOCK_fnc_updatePartial;

[player] remoteExecCall ["TON_fnc_phoneCreate", 2];

closeDialog 0;