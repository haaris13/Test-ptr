/*
	File:fn_shellresetVar.sqf

	Autor:IronBlade
*/

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];
uiNamespace setVariable ["life_shell_CompShell", ""];
uiNamespace setVariable [format["life_shell_etat_%1",_compShell], 0];
uiNamespace setVariable [format["life_shell_list_%1",_compShell], []];
uiNamespace setVariable [format["life_shell_path_%1",_compShell], []];
uiNamespace setVariable [format["life_shell_user_%1",_compShell], [0,"noUser",""]];