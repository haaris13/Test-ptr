/*
	File:fn_shellmDir.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1", _compShell], []];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];

if (count _params == 0) exitWith {
	[format["Erreur la commande %1, nécessite un paramétres !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <mDir help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

if (count _params != 2 && ((_params select 0) != "help")) exitWith {
	[format["Erreur la commande %1, nécessite deux paramétres !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <mDir help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

switch (_params select 0) do {

	case "help" : {
		[format["La commande mDir permet de renommer des répertoires"], false] spawn life_fnc_shellPrint;
		[format["Les paramétres sont: "], false] spawn life_fnc_shellPrint;
		[format["    ->  <nom répertoire> <nouveau nom> permet de renommer le repertoire."], false] spawn life_fnc_shellPrint;
	};

	default {
		_dirs = [] call life_fnc_shellGetNextDir;

		_nameDir = (_param select 0);
		_newName = (_param select 1);

		if !(_nameDir in _dirs) exitWith {
			[format["Erreur le dossier %1 existe pas !", _nameDir], false] spawn life_fnc_shellPrint;
		};

		if (_newName in _dirs) exitWith {
			[format["Erreur un dossier avec ce nom %1 existe déja !"], false] spawn life_fnc_shellPrint;
		};

		[_nameDir, _newName] call life_fnc_shellDirRename;
	}; 
};