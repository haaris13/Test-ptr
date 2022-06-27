/*
	File:fn_shellrmDir.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1", _compShell], []];
_actualPath = uiNamespace getVariable [format["life_shell_path_%1",_compShell], []];

if (count _params == 0) exitWith {
	[format["Erreur la commande %1, nécessite un paramétres !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <rmDir help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

if (count _params != 2 && ((_params select 0) != "help")) exitWith {
	[format["Erreur la commande %1, nécessite deux paramétres !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <rmDir help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

switch (_params select 0) do {

	case "help" : {
		[format["La commande rmDir permet de suppprimer des répertoires"], false] spawn life_fnc_shellPrint;
		[format["Les paramétres sont: "], false] spawn life_fnc_shellPrint;
		[format["    ->  <répertoire> permet de suppprimer le repertoire."], false] spawn life_fnc_shellPrint;
	};

	default {
		_dirs = [] call life_fnc_shellGetNextDir;

		_nameDir = (_param select 0);

		if !(_nameDir in _dirs) exitWith {
			[format["Erreur le dossier %1 existe pas !", _nameDir], false] spawn life_fnc_shellPrint;
		};

		_dir = [] call life_fnc_shellGetDir;

		_dirs = (_dir select 0);

		_nbNext = 0;
		{
			if (_nameDir == (_x select 1)) exitWith {
				_nbNext = (count((_x select 2) select 0)) + (count((_x select 2) select 1));
			};
		} forEach _dirs;

		if (_nbNext > 0) exitWith {
			[format["Le dossier n'est pas vide."], false] spawn life_fnc_shellPrint;
		};

		[_nameDir] call life_fnc_shellDirDelete;
	}; 
};