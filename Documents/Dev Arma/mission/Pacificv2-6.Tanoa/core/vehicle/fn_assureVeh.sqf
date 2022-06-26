#include "..\..\script_macros.hpp"
/*
	FileName: fn_assureVeh.sqf

	Autor: IronBlade
*/
private["_vehicle","_vehicleLife","_vid","_pid","_unit","_sellPrice"];
disableSerialization;
if(EQUAL(lbCurSel 2802,-1)) exitWith {["Error", localize "STR_Global_NoSelection"] spawn life_fnc_showPredefinedNotification;};
_vehicle = lbData[2802,(lbCurSel 2802)];
_vehicle = (call compile format["%1",_vehicle]) select 0;
_vehicleLife = _vehicle;
_vid = lbValue[2802,(lbCurSel 2802)];
_pid = steamid;
_unit = player;

if(isNil "_vehicle") exitWith {["Error", localize "STR_Garage_Selection_Error"] spawn life_fnc_showPredefinedNotification;};
if((time - life_action_delay) < 1.5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
if(!isClass (missionConfigFile >> CONFIG_LIFE_VEHICLES >> _vehicleLife)) then {
	_vehicleLife = "Default"; //Use Default class if it doesn't exist
	diag_log format["%1: LifeCfgVehicles class doesn't exist",_vehicle];
};

_assuranceArray = ([_vehicle] call life_fnc_vehicleAssuranceCfg);

_assuranceBase = _assuranceArray select 1;
_assurance = _assuranceArray select 0;

if(!(EQUAL(typeName _assurance,typeName 0)) OR _assurance < 1) then {_assurance = 10000;};
if (BANK < _assurance) exitWith {["Error", "Vous n'avez pas assez d'argents en banque."] spawn life_fnc_showPredefinedNotification;};

//_assurance = (["veh_assure", _assuranceBase] call life_fnc_gouvTaxesPay);

[_vid,_pid] remoteExecCall ["TON_fnc_vehicleAssure",RSERV];
hint format["Vous avez assuré votre vehicule pour $%1",[_assurance] call life_fnc_numberText];

SUB(BANK,_assurance);
life_action_delay = time;
closeDialog 0;