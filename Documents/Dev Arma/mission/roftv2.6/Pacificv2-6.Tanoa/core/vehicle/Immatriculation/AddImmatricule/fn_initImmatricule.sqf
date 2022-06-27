#include "..\..\..\script_macros.hpp"
/*
	File: fn_initImmatricule.sqf
	Author: IronBlade
	
*/

disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2"];
_control = CONTROL(71400,71402);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [position life_immat_pnj,["Car","Truck"],25];

_vehicle = SEL(_nearVehicles,_vehicle);
if(isNull _vehicle) exitWith {};

_db = _vehicle getVariable ["dbInfo",["",""]];

_good = false;

if (alive _vehicle && (_vehicle getVariable ["immatriculation","Na"] isEqualTo "Na") && (_db select 0) isEqualTo (getPlayerUID player)) then {_good = true;};

if (alive _vehicle && (_vehicle getVariable ["immatriculation","Na"] isEqualTo "NaI") && life_immat_type && (_db select 0) isEqualTo (getPlayerUID player)) then {_good = true;};

if (!_good) exitWith {};

life_vehicle_to_immat = _vehicle;

_price = getNumber(missionConfigFile >> "CfgImmatriculationTags" >> (typeof life_vehicle_to_immat) >> "price");

if (!life_immat_type) then {
	_price = 0;
};

if (life_atmbank < _price) exitWith {["Error", "Vous n'avez pas suffisament d'argents en banque pour faire cela !"] spawn life_fnc_showPredefinedNotification;};

closeDialog 0;

if(!(createDialog "Life_immatricule")) exitWith {["Error", "Une erreur est survenue !"] spawn life_fnc_showPredefinedNotification;};
ctrlSetText[2651,format["Immatriculation %1",getText(configFile >> "CfgVehicles" >> (typeof life_vehicle_to_immat) >> "displayName")]];

