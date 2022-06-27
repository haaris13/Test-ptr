/*
	File:fn_shellDate.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];

// Help Params
if (count _params > 0) exitWith {
	if ((_params select 0) == "help") exitWith {
		[format["La commande ls permet de voir la date actuelle"], false] spawn life_fnc_shellPrint;
	};
	[format["Erreur la commande %1, n'a besoin d'aucun paramétre !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <date help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

_date = format ["%1/%2/%3", (date select 0), (date select 1), (date select 2)];

[format["Heure du Systéme: %1 %2", _date, [dayTime, "HH:MM:SS"] call BIS_fnc_timeToString], false] spawn life_fnc_shellPrint;