/*
	File:fn_shellcd.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

// Help Params
if (count _params > 0) exitWith {
	if ((_params select 0) == "help") exitWith {
		[format["La commande ls permet de voir les fichiers et répertoires dans le répertoire courant."], false] spawn life_fnc_shellPrint;
	};
	[format["Erreur la commande %1, n'a besoin d'aucun paramétre !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <ls help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

// Init
_textDir = "Répertoires: ";
_textFiles = "Fichiers: ";

// Get
_dirs = [] call life_fnc_shellGetNextDir;
_files = [] call life_fnc_shellGetNextFiles;

// Files et Dirs
{
  _textDir = format["%1%2 ", _textDir, _x];
} forEach _dirs;

{
	_ext = getText(missionConfigFile >> "CfgShell" >> "Programs" >> _x >> "extention");
	_fileText = format["%1.%2", _x, _ext];
  	_textFiles = format["%1%2 ", _textFiles, _fileText];
} forEach _files;

// Secu
if (count _files == 0) then {
	_textFiles = "Répertoires: Aucun.";
};
if (count _files == 0) then {
	_textFiles = "Fichiers: Aucun.";
};

// Text
[_textDir, false] spawn life_fnc_shellPrint;
[_textFiles, false] spawn life_fnc_shellPrint;