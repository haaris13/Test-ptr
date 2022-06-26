/*
	File:fn_shellcd.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1", _compShell], []];

if (count _params == 0) exitWith {
	[format["Erreur la commande %1, nécessite un paramétres !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <run help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

_fileStr = (_params select 0);

switch (_file) do {

	case "help" : {
		[format["La commande run permet de lancer un script qui finit par <.sh>."], false] spawn life_fnc_shellPrint;
		[format["Les paramétres sont: "], false] spawn life_fnc_shellPrint;
		[format["    ->  <script> <paramscomp>   Permet de choisir le script a executer."], false] spawn life_fnc_shellPrint;
		[format[" <paramscomp> sont les paramétre nécésaire au fichier."], false] spawn life_fnc_shellPrint;
		
	};

	default {

		if ([_fileStr] call life_fnc_shellCheckFileExist) exitWith {
			[format["Erreur le fichier %1 n'existe pas !", _fileStr], false] spawn life_fnc_shellPrint;
		};
		
		_params deleteAt 0;

		[_fileStr ,_params] call life_fnc_shellRunExec;
	}; 
};