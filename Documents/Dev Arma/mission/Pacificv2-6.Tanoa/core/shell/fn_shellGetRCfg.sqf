/*
	File: fn_shellGetRCfg.sqf

	Autor: IronBlade
*/

_compShell = uiNamespace getVariable ["life_shell_CompShell", "Personal"];

_code = (missionConfigFile >> "CfgShell" >> "CompShell" >> _compShell);

_code;