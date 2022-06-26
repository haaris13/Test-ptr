/*
	File:fn_returnAddImatricule.sqf

	Autor:IronBlade
*/

_type = [_this,0,false,[false]] call BIS_fnc_param;
_veh = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;

if (_type) then {
	if(_badChar) exitWith {["Error", localize "STR_GNOTF_IncorrectCharV"] spawn life_fnc_showPredefinedNotification;};
	["Accepted", "Immatriculation réussi !"] spawn life_fnc_showPredefinedNotification;

	_price = getNumber(missionConfigFile >> "CfgImmatriculationTags" >> (typeof life_vehicle_to_immat) >> "price");

	if (!life_immat_type) then {_price = 0;};

	life_atmbank = life_atmbank - _price;

	[1] call SOCK_fnc_updatePartial;

	[_veh, (_veh getVariable ["immatriculation", "Na"])] call life_fnc_immatriculeVehSet;

} else {
	if(_badChar) exitWith {["Error", localize "STR_GNOTF_IncorrectCharV"] spawn life_fnc_showPredefinedNotification;};
	["Error", "Immatriculation impossible, il y a déja une Immatriculation avec ces caractères !"] spawn life_fnc_showPredefinedNotification;
};

life_action_immatriculationInUse = false;