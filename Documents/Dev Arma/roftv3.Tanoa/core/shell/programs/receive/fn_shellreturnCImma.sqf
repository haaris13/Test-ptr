/*
	File: fn_shellreturnCImma.sqf

	Autor:IronBlade
*/
_className = [_this,0,"",[""]] call BIS_fnc_param;
_nameOwner = [_this,1,"",[""]] call BIS_fnc_param;
_immatriculation = [_this,2,"",[""]] call BIS_fnc_param;

["root@genMaster.gouv --> Récupération d'information:", false] spawn life_fnc_shellPrint;

if (_className == "" || _nameOwner == "") exitWith {
	[format ["Aucun véhicule pour l'immatriculation %1", _immatriculation], false] spawn life_fnc_shellPrint;
};

_text = getText(configFile >> "CfgVehicles" >> _className >> "displayName");

[format ["Pour Immatriculation %1", _immatriculation], false] spawn life_fnc_shellPrint;
[format ["Vehicule de type %1 enregistré.", _text], false] spawn life_fnc_shellPrint;
[format ["Pour le Propriétaire au nom de %1", _nameOwner], false] spawn life_fnc_shellPrint;

[format ["root@genMaster.gouv >> Find de Transmission.", _nameOwner], false] spawn life_fnc_shellPrint;