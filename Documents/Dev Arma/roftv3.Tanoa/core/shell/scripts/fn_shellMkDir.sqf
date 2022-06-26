/*
	File:fn_shellMkDir.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1", _compShell], []];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];

if (count _params == 0) exitWith {
	[format["Erreur la commande %1, nécessite un paramétres !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <mkDir help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

if (count _params > 1) exitWith {
	[format["Erreur la commande %1, nécessite un paramétres Maximum !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <mkDir help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

switch (_params select 0) do {
	case "help" : {
		[format["La commande mkdir permet de crée des répertoires"], false] spawn life_fnc_shellPrint;
		[format["Les paramétres sont: "], false] spawn life_fnc_shellPrint;
		[format["    ->  <repertoire>   Permet de crée le repertoire du nom placé en paramétre"], false] spawn life_fnc_shellPrint;
	};

	default {
		_dirs = [] call life_fnc_shellGetNextDir;

		if ((_params select 0) in _dirs) exitWith {
			[format["Erreur le dossier existe déja !", (_params select 0)], false] spawn life_fnc_shellPrint;
		};

		if (count _dirs > 4) exitWith {
			[format["Vous avez atteind le nombre maximum !"], false] spawn life_fnc_shellPrint;
		};

		if (count _actualPath > 3) exitWith {
			[format["Vous avez atteind l'arborescence maximum !"], false] spawn life_fnc_shellPrint;
		};

		[(_params select 0)] call life_fnc_shellDirCreate;
	}; 
};