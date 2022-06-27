/*
	File:fn_shellExit.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];

if (count _params > 0) exitWith {
	if ((_params select 0) == "help") exitWith {
		[format["La commande exit permet de fermer la fenétre shell."], false] spawn life_fnc_shellPrint;
	};
	[format["Erreur la commande %1, n'a besoin d'aucun paramétre !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <exit help> pour plus d'infos"], false] spawn life_fnc_shellPrint;
};

closeDialog 0;