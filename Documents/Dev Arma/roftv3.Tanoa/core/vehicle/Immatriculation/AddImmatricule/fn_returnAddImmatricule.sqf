/*
	File:fn_returnAddImatricule.sqf

	Autor:IronBlade
*/

_type = [_this,0,false,[false]] call BIS_fnc_param;

if (_type) then {
	hint "Immatriculation réussi !";

	_price = getNumber(missionConfigFile >> "CfgImmatriculationTags" >> (typeof life_vehicle_to_immat) >> "price");

	if (life_immat_type) then {_price = _price  / 2;};

	life_atmbank = life_atmbank - _price;

	[1] call SOCK_fnc_updatePartial;

} else {
	hint "Immatriculation impossible, il y a déja une Immatriculation avec ces caractéres !";
};

life_action_immatriculationInUse = false;