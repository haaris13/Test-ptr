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
if (_immatricule in ["gendarmerie","P-U-T-E"]) exitWith {hint "Nom Interdit !"};

if(_length != 9) exitWith {hint "9 Caractéres Obligatoire en majuscules !"};
_badChar = false;
{if(!(_x in _allowed)) exitWith {_badChar = true;};} foreach _chrByte;
if(_badChar) exitWith {hint localize "STR_GNOTF_IncorrectCharV";};

[life_vehicle_to_immat, player, life_immat_type, _immatricule] remoteExecCall ["TON_fnc_addImmatriculation",RSERV];
hint localize "STR_NOTF_SendingData";
closeDialog 0;

life_action_immatriculationInUse = true;