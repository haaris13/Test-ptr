#include "..\..\script_macros.hpp"
/*
	File: fn_clanCreate.sqf

	Author: IronBlade
*/
private["_gangName","_length","_badChar","_chrByte","_allowed"];
disableSerialization;

_gangName = ctrlText (CONTROL(2520,2522));
_length = count (toArray(_gangName));
_chrByte = toArray (_gangName);
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_ ");
if (_gangName == "Gendarmerie") exitWith {["Error", "Nom Interdit !"] spawn life_fnc_showPredefinedNotification;};

if(_length > 32) exitWith {["Error", localize "STR_GNOTF_Over32"] spawn life_fnc_showPredefinedNotification;};
_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {["Error", localize "STR_GNOTF_IncorrectChar"] spawn life_fnc_showPredefinedNotification;};

if(BANK < (LIFE_SETTINGS(getNumber,"gang_price"))) exitWith {hint format[localize "STR_GNOTF_NotEnoughMoney",[((LIFE_SETTINGS(getNumber,"gang_price")) - BANK)] call life_fnc_numberText];};

[player, _gangName] remoteExec ["TON_fnc_clanCreate",RSERV];
["Info", localize "STR_NOTF_SendingData"] spawn life_fnc_showPredefinedNotification;
closeDialog 0;
life_action_clanInUse = true;