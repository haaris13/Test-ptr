#include "..\..\script_macros.hpp"
#include "script_macro_shell.hpp"
/*
	File:fn_shellSend.sqf

	Autor:IronBlade
*/
_text = [_this,0,"",[""]] call BIS_fnc_param;

_type = uiNamespace getVariable ["life_shell_CompShell","Personal"];

disableSerialization;

[_text, true] call life_fnc_shellPrint;

_shell = _text splitString " ";

if (count _shell == 0) exitWith {};

_cmd = _shell select 0;

_shell deleteAt 0;

switch (_cmd) do {

	case "ls" : {
		[_cmd, _shell] spawn life_fnc_shellls; // LS
	};

	case "cd" : {
		[_cmd, _shell] spawn life_fnc_shellcd; // CD
	};

	case "run" : {
		[_cmd, _shell] spawn life_fnc_shellRun;
	};

	case "shutdown" : {
		[_cmd, _shell] spawn life_fnc_shellShutDown;
	};

	case "clear" : {
		[_cmd, _shell] spawn life_fnc_shellClear;
	};

	case "help" : {
		[_cmd, _shell] spawn life_fnc_shellHelp;
	};

	case "echo" : {
		[_cmd, _shell] spawn life_fnc_shellEcho;
	};

	case "date" : {
		[_cmd, _shell] spawn life_fnc_shellDate;
	};

	case "exit" : {
		[_cmd, _shell] spawn life_fnc_shellExit;
	};

	case "mkdir" : {
		[_cmd, _shell] spawn life_fnc_shellMkdir;
	};

	case "mDir" : {
		[_cmd, _shell] spawn life_fnc_shellmDir;
	};

	case "rmDir" : {
		[_cmd, _shell] spawn life_fnc_shellrmDir;
	};

	default {
		[format["Erreur la commande %1, n'existe pas !", _cmd], false] spawn life_fnc_shellPrint;
	}; 
};