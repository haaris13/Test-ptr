#include "..\script_macro_shell.hpp"
/*
	File:fn_shellClear.sqf

	Autor:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

disableSerialization;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];

if (count _params > 0) exitWith {
	if ((_params select 0) == "help") exitWith {
		[format["La commande clear permet d'effacer l'historique des commandes."], false] spawn life_fnc_shellPrint;
	};
	[format["Erreur la commande %1, n'a besoin d'aucun paramétre !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <clear help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

uiNamespace setVariable [format["life_shell_list_%1",_compShell], []];
lbClear ListShell;
