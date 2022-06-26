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

if(_length != 9) exitWith {hint "9 Caractéres Obligatoire !"};
_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {hint localize "STR_GNOTF_IncorrectCharV";};
hint localize "STR_NOTF_SendingData";
closeDialog 0;

uiSleep (random 5);

[_immatricule, player] remoteExecCall ["TON_fnc_checkImmatriculation", RSERV];