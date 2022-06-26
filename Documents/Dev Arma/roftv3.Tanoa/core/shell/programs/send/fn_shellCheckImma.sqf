/*
	File:fn_shellCheckImma.sqf

	Autor:IronBlade
*/
_progrm = [_this,0,"",[""]] call BIS_fnc_param;
_params = [_this,1,[],[[]]] call BIS_fnc_param;

_compShell = uiNamespace getVariable ["life_shell_CompShell","Personal"];
_cfgArray = uiNamespace getVariable [format["life_shell_cfg_%1", _compShell], []];

if (count _params == 0) exitWith {
	[format["Erreur le programme %1, nécessite plusieurs paramétres !", _progrm], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <-help> en paramétre pour plus d'infos", _progrm], false] spawn life_fnc_shellPrint;
};

if (count _params > 2) exitWith {
	[format["Erreur le programme %1, nécessite deux paramétres Maximum !", _progrm], false] spawn life_fnc_shellPrint;
	[format["Essayez avec <-help> en paramétre pour plus d'infos", _progrm], false] spawn life_fnc_shellPrint;
};

switch (_params select 0) do { 
	case "help" : {
		[format["Le programme %1 permet d'acceder aux immatriculations.", _progrm], false] spawn life_fnc_shellPrint;
		[format["Les paramétres sont: "], false] spawn life_fnc_shellPrint;
		[format["    ->  <check> <Imma> Permet de check une Immatriculation dans la base de donnés."], false] spawn life_fnc_shellPrint;
	};

	case "check" : {

		if (count _params == 1) exitWith {
			[format["Erreur la commande %1, nécessite deux paramétres pour check !", _cmd], false] spawn life_fnc_shellPrint;
			[format["Essayez avec <-help> en paramétre pour plus d'infos", _cmd], false] spawn life_fnc_shellPrint;
		};
		_check = (_params select 1);

		_length = count (toArray(_check));
		_chrByte = toArray (_check);
		_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-");

		if(_length != 9) exitWith {[format["Error: 9 caractéres maximum pour une Immatriculation !", _cmd], false] spawn life_fnc_shellPrint;};
		_badChar = false;
		{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
		if(_badChar) exitWith {["Error: caractères non valides, [A-Z 1-9] [-] Uniquement !", false] spawn life_fnc_shellPrint;};
		["Envoi des Information au Serveur...", false] spawn life_fnc_shellPrint;

		[_check, player] remoteExecCall ["TON_fnc_checkImmatriculation", 2];
	};

	default {};
};