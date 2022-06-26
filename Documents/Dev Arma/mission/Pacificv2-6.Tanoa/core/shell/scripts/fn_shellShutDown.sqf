#include "..\script_macro_shell.hpp"
/*
	File:fn_shellShutDown.sqf

	Autor: IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

disableSerialization;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1", _compShell], []];

if (count _params > 0) exitWith {
	if ((_params select 0) == "help") exitWith {
		[format["La commande shutdown permet d'éteindre le shell."], false] spawn life_fnc_shellPrint;
	};
	[format["Erreur la commande %1, n'a besoin d'aucun paramétre !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <shutdown help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

[] call life_fnc_shellresetVar;

uiSleep 2;

lbClear ListShell;

closeDialog 0;