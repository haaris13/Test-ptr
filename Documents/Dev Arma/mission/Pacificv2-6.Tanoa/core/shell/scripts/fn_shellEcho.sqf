/*
	File:fn_shellEcho.sqf

	Auto:IronBlade
*/
_cmd = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];

if (count _params == 0) exitWith {
	[format["Erreur la commande %1, nécessite un paramétres !", _cmd], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <echo help> pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
};

switch (_params select 0) do {
	case "help" : {
		[format["La commande echo permet d'afficher un message sur l'écran."], false] spawn life_fnc_shellPrint;
		[format["Les paramétres sont: "], false] spawn life_fnc_shellPrint;
		[format["    ->  <Text>  Permet d'afficher du text sur l'écran."], false] spawn life_fnc_shellPrint;
	};

	default {
		_text = "";

		{
			_text = format["%1 %2", _text, _x];
		} forEach _params;

		[_text, false] spawn life_fnc_shellPrint;
	}; 
};