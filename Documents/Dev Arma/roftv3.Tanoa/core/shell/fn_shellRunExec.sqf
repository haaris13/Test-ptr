/*
	File: fn_shellRunExec.sqf

	Autor:IronBlade
*/
_file = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_file = (_file splitString ".") select 0;

_cfgFile = (missionConfigFile >> "CfgShell" >> "Programs" >> _file);

if (!([_file] call life_fnc_shellRunCan)) exitWith {
	[format["Le fichier %1 ne peut pas étre executé !"], false] spawn life_fnc_shellPrint;
	[format["Il est actuelement vide, vous n'étes pas assez compétent pour le coder !"], false] spawn life_fnc_shellPrint;
};

_action = getText(_cfgFile >> "action");

_run = [_params] call (compile _action);