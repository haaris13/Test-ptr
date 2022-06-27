#include "..\..\..\script_macros.hpp"
/*
	Author: IronBlade
	
	Description:
	
*/
disableSerialization;

_immatricule = ctrlText (CONTROL(2950,2952));
_length = count (toArray(_immatricule));
_chrByte = toArray (_immatricule);
_allowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-");
_restrictedNames = [
	"GENDARMERIE",
	"P-U-T-E"
];
	
if (_immatricule in _restrictedNames) exitWith {["Error", "Nom Interdit !"] spawn life_fnc_showPredefinedNotification;};

_cfgImma = [life_vehicle_to_immat] call life_fnc_immatriculeGetVehCfg;
_immaSize = _cfgImma select 0;

if(_length != _immaSize) exitWith {["Error", format["%1 Caractères obligatoire pour ce véhicule !", _immaSize]] spawn life_fnc_showPredefinedNotification;};
_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {["Error", localize "STR_GNOTF_IncorrectCharV"] spawn life_fnc_showPredefinedNotification;};

[life_vehicle_to_immat, player, life_immat_type, _immatricule] remoteExecCall ["TON_fnc_addImmatriculation",RSERV];
["Accepted", localize "STR_NOTF_SendingData"] spawn life_fnc_showPredefinedNotification;
closeDialog 0;

life_action_immatriculationInUse = true;