#include "..\..\..\script_macros.hpp"
#include "..\script_macro_shell.hpp"
/*
	File: fn_shellCreatePersonal.sqf

	Autor: IronBlade
*/
_type = [_this,0,"Personal",[""]] call BIS_fnc_param;
if(!dialog) exitWith {};

disableSerialization;

_list = CONTROL(ShellDialog,ListShell);

uiNamespace setVariable ["life_shell_Comp_Enter","Create"];
uiNamespace setVariable [format["life_shell_etat_%1",_type], 2];

_varGet = "life_shell_create_var"; 
_varCheck = "life_shell_wait";

[
	[
		[["JarvisOs 1.0.","JarvisOs 1.0..","JarvisOs 1.0..."],5],
		[["Loading.","Loading..", "Loading..."], 2],
		[[">",">>", ">>> Terminé."], 1]
	],
	 true, _varCheck
] spawn life_fnc_shellProgressMessage;

waitUntil {uiNamespace getVariable [_varCheck, false];};
uiNamespace setVariable [_varCheck, nil];
//
["Bienvenue sur JarvisOs 1.0 !", false] call life_fnc_shellPrint;
uiSleep 2;
["Nouveau ?", false] call life_fnc_shellPrint;
uiSleep 2;
["Initialisation Nécésaire !", false] call life_fnc_shellPrint;
uiSleep 2;
["Bonjours je me présente je suis JarvisOs !", false] call life_fnc_shellPrint;
uiSleep 1;
["Je vais vous aider à configuré votre Serveur...", false] call life_fnc_shellPrint;

uiNamespace setVariable [format["life_shell_etat_%1",_type], 1];

//
["Pour Commencer merci de lui donner un Nom: ", false] call life_fnc_shellPrint;
["Sans Espace Et carctéres Spéciaux Merci.", false] call life_fnc_shellPrint;
uiNamespace setVariable ["life_shell_create_var", "bad"];
_nom = ["true",[3,8],_varGet, ""] call life_fnc_shellWaitVar;

// User:
["Maintenant un nom d'utilisateur: ", false] call life_fnc_shellPrint;
["Sans Espace Et carctéres Spéciaux Merci.", false] call life_fnc_shellPrint;
uiNamespace setVariable ["life_shell_create_var", "bad"];
_user = ["true",[3,8],_varGet, ""] call life_fnc_shellWaitVar;

// Pass:
["Maintenant un Mot De Passe pour cette utilisateur: ", false] call life_fnc_shellPrint;
["Sans Espace Et carctéres Spéciaux Merci.", false] call life_fnc_shellPrint;
uiNamespace setVariable ["life_shell_create_var", "bad"];
_pass = ["true",[3,8],_varGet, ""] call life_fnc_shellWaitVar;

["Merci.", false] call life_fnc_shellPrint;
uiSleep 1;
["Maintenant Je vais le relancer...", false] call life_fnc_shellPrint;

 
_varCheck = "life_shell_wait_progress";
uiNamespace setVariable [_varCheck, false];
[
	[
		[["ShutDown.","ShutDown..","ShutDown..."],5]
	],
	 true, _varCheck
] spawn life_fnc_shellProgressMessage;


waitUntil {uiNamespace getVariable [_varCheck, false];};
uiNamespace setVariable [_varCheck, false];

_files = [];

_cfgFiles = "true" configClasses (missionConfigFile >> "CfgShell" >> "CompShell" >> _type >> "files");

{
	_files pushBack [0, configName(_x)];
} forEach _cfgFiles;

_comp = [0, _nom, [[0, _user, _pass, 5]], [[],_files]];

[] call life_fnc_shellresetVar;
uiNamespace setVariable [format["life_shell_cfg_%1",_type], _comp];

[_comp, _type] call life_fnc_shellCreateDB;

uiSleep 2;
lbClear ListShell;
closeDialog 0;