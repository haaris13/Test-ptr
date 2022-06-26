#include "..\..\..\script_macros.hpp"
/*
	File:fn_checkImmatricule.sqf

	Autor: IronBlade
*/
disableSerialization;

_immatricule = ctrlText (CONTROL(2980,2982));
_length = count (toArray(_immatricule));
_chrByte = toArray (_immatricule);
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-");

if(_length < 7 || _length > 9) exitWith {["Error", "7 à 9 caractères !"] spawn life_fnc_showPredefinedNotification;};

_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {["Error", localize "STR_GNOTF_IncorrectCharV"] spawn life_fnc_showPredefinedNotification;};
["Info", localize "STR_NOTF_SendingData"] spawn life_fnc_showPredefinedNotification;
closeDialog 0;

playSound "Orange_Access_FM";

uiSleep (random 5);

[_immatricule, player] remoteExecCall ["TON_fnc_checkImmatriculation", RSERV];