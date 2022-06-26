#include "..\..\..\script_macros.hpp"
/*
	File: fn_initImmatricule.sqf
	Author: IronBlade
	
*/

disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];
_control = CONTROL(72400,72402);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [position life_receleur_pnj,["Car","Truck"],25];

_vehicle = SEL(_nearVehicles,_vehicle);
if(isNull _vehicle) exitWith {};

_db = _vehicle getVariable ["dbInfo",["",""]];

_good = false;

if (alive _vehicle && (!(_vehicle getVariable ["immatriculation","Na"] in ["Na","NaI"])) && (_db select 0) isEqualTo (getPlayerUID player)) then {_good = true;};

if (!_good) exitWith {};

life_vehicle_to_remove = _vehicle;

_price = getNumber(missionConfigFile >> "CfgImmatriculationTags" >> (typeof life_vehicle_to_remove) >> "priceRemove");

closeDialog 0;

if (life_atmbank < _price) exitWith {hint "Votre compte en banque est vide !";};

life_atmbank = life_atmbank - _price;
[1] call SOCK_fnc_updatePartial;

[life_vehicle_to_remove, player] remoteExecCall ["TON_fnc_removeImmatriculation",RSERV];

closeDialog 0;

life_vehicle_to_remove = objNull;

hint "L'immaticulation à été retiré !";