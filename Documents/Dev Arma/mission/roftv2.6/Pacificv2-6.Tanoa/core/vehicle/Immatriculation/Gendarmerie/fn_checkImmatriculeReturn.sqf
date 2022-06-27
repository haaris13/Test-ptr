/*
	File:fn_checkImmatriculeReturn.sqf

	Autor: IronBlade
*/
_className = [_this,0,"",[""]] call BIS_fnc_param;
_nameOwner = [_this,1,"",[""]] call BIS_fnc_param;
_immatriculation = [_this,2,"",[""]] call BIS_fnc_param;

if (_className == "" || _nameOwner == "") exitWith {
	hint format ["Aucun véhicule pour l'immatriculation %1", _immatriculation];
};

_text = getText(configFile >> "CfgVehicles" >> _className >> "displayName");

hint parseText format["<t color='#232aef' size='1.8'>Info %1</t><br/><br/><t color='#f2f2f9' size='1.5'>Vehicule:</t><br/>%2<br/><t color='#f2f2f9' size='1.5'><br/>Propriétaire:</t><br/>%3",_immatriculation, _text, _nameOwner];