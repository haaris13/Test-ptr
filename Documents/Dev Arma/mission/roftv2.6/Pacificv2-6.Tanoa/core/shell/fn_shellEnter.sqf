#include "..\..\script_macros.hpp"
#include "script_macro_shell.hpp"
/*
	File:fn_shellEnter.sqf

	Autor:IronBlade
*/
_type = uiNamespace getVariable ["life_shell_CompShell","Personal"];

disableSerialization;

_val = (ctrlText ShellText);
ctrlSetText[ShellText, ""];

_etat = uiNamespace getVariable [format["life_shell_etat_%1",_type], 0];
if (_etat != 1) exitWith {};

[_val, true] call life_fnc_shellPrint;

_chrByte = toArray(_val);
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_. ");

_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {["Erreur : caracteres Non Autorisee", false] spawn life_fnc_shellPrint;};

_enter = uiNamespace getVariable ["life_shell_Comp_Enter","Send"];

switch (_enter) do { 
	case "Create" : {[_val] call life_fnc_shellCreateSend;}; 
	case "Send" : {[_val] call life_fnc_shellSend;}; 
	case "Login" : {
		uiNamespace setVariable ["life_shell_wait_login", _val];
	};
	default {[_val] call life_fnc_shellSend;};
};