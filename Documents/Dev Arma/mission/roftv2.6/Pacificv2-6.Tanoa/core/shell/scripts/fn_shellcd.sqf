/*
	File:fn_shellcd.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1", _compShell], []];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];

if (count _params == 0) exitWith {
	[format["Erreur la commande %1, nécessite un paramétres !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <cd help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

if (count _params > 1) exitWith {
	[format["Erreur la commande %1, nécessite un paramétres Maximum !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <cd help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

switch (_params select 0) do {
	case "help" : {
		[format["La commande cd permet de ce déplacé dans les répertoires du shell."], false] spawn life_fnc_shellPrint;
		[format["Les paramétres sont: "], false] spawn life_fnc_shellPrint;
		[format["    ->  <..>   Permet de remonté dans le path."], false] spawn life_fnc_shellPrint;
		[format["    ->  <repertoire>   Permet de choisir le répertoire suivant. Donc descendre dans le path."], false] spawn life_fnc_shellPrint;
	};

	case ".." : {
		if (count _actualPath == 0) exitWith {};
		_actualPath deleteAt ((count _actualPath) - 1);
		uiNamespace setVariable [format["life_shell_path_%1", _compShell], _actualPath];
	};

	default {
		_dirs = [] call life_fnc_shellGetNextDir;

		if !((_params select 0) in _dirs) exitWith {
			[format["Erreur le dossier %1 n'existe pas !", (_params select 0)], false] spawn life_fnc_shellPrint;
		};

		_actualPath pushBack (_params select 0);
		uiNamespace setVariable [format["life_shell_path_%1", _compShell], _actualPath];
	}; 
};