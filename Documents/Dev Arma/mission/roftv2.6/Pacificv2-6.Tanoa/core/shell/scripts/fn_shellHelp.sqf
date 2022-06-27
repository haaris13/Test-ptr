#include "..\..\script_macros.hpp"
#include "..\script_macro_shell.hpp"
/*
	File:fn_shellHelp.sqf

	Autor:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

disableSerialization;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];

if (count _params > 0) exitWith {
	if ((_params select 0) == "help") exitWith {
		[format["La commande help permet d'avoir de l'aide sur les commandes."], false] spawn life_fnc_shellPrint;
		[format["Essayez avec <help> pour plus d'infos"], false] spawn life_fnc_shellPrint;
	};
	[format["Erreur la commande %1, n'a besoin d'aucun paramétre !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

[format["Aide :"], false] spawn life_fnc_shellPrint;
[format["  --> <ls> Permet de voir la liste des répertoires et fichiers dans le répertoire actuel."], false] spawn life_fnc_shellPrint;
[format["  --> <cd> naviger entre répertoires"], false] spawn life_fnc_shellPrint;
[format["  --> <run> lancer un programme"], false] spawn life_fnc_shellPrint;
[format["  --> <shutdown> éteindre le shell."], false] spawn life_fnc_shellPrint;
[format["  --> <clear> effacer l'historique des commandes."], false] spawn life_fnc_shellPrint;
[format["  --> <help> afficher l'aide."], false] spawn life_fnc_shellPrint;