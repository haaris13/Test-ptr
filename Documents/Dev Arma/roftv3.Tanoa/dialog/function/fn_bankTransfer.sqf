#include "..\..\script_macros.hpp"
/*
	File: fn_bankTransfer.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Figure it out again.
*/
private["_val","_unit","_tax"];
_val = parseNumber(ctrlText 2707);
_unit = call compile format["%1",(lbData[2705,(lbCurSel 2705)])];

if((time - life_action_delay) < 1) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

if(isNull _unit) exitWith {};
if((lbCurSel 2705) == -1) exitWith {hint localize "STR_ATM_NoneSelected"};
if(isNil "_unit") exitWith {hint localize "STR_ATM_DoesntExist"};
if(_val > 999999) exitWith {hint localize "STR_ATM_TransferMax";};
if(_val < 0) exitwith {};
if(_val < 1000) exitWith {hint "Impossible le montant est de 1000 minimum !";};
if(!([str(_val)] call life_fnc_isnumeric)) exitWith {hint localize "STR_ATM_notnumeric"};
if(_val > BANK) exitWith {hint localize "STR_ATM_NotEnough"};

_taxe = (["atm_virement", _val] call life_fnc_gouvTaxesPay);

if(_taxe > BANK) exitWith {hint format[localize "STR_ATM_SentMoneyFail",_val,(_taxe - _val)]};

BANK = BANK - _taxe;

player setVariable ["idTrans", [_val, getPlayerUID player] ,true];

[_val, profileName, player] remoteExecCall ["life_fnc_wireTransfer",_unit];
[life_atm_type] call life_fnc_atmMenu;
hint format[localize "STR_ATM_SentMoneySuccess",[_val] call life_fnc_numberText,_unit getVariable["realname",name _unit],[_tax] call life_fnc_numberText];
[1] call SOCK_fnc_updatePartial;

[1, _val, _unit] call life_fnc_TransfersMoneyLog;