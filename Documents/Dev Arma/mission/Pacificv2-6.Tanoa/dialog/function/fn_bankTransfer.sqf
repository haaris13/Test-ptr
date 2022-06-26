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

if((time - life_action_delay) < 0.3) exitWith {};
if((time - life_action_delay) < 1) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

_bad = false;

if (life_atm_type == 0) then {
	_bad = true;
};

if (([] call life_ocasLevel) >= 1) then {
	if ((player distance (getMarkerPos "ocas_spawn") <= 100)) then {
		_bad = false;
	};
};

if (_bad) exitWith {
	["Error", "Il faut aller dans une banque pour pouvoir transférer de l'argent !"] spawn life_fnc_showPredefinedNotification;
};

if (isNull _unit) exitWith {};
if ((lbCurSel 2705) == -1) exitWith {["Error", localize "STR_ATM_NoneSelected"] spawn life_fnc_showPredefinedNotification;};
if (isNil "_unit") exitWith {["Error", localize "STR_ATM_DoesntExist"] spawn life_fnc_showPredefinedNotification;};
if (_val > 999999) exitWith {["Error", localize "STR_ATM_TransferMax"] spawn life_fnc_showPredefinedNotification;};
if (_val < 0) exitwith {};
if (_val < 1000) exitWith {["Error", "Impossible le montant est de 1000 minimum !"] spawn life_fnc_showPredefinedNotification;};
if (!([str(_val)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if (_val > BANK) exitWith {["Error", localize "STR_ATM_NotEnough"] spawn life_fnc_showPredefinedNotification;};

_taxe = (["atm_virement", _val] call life_fnc_gouvTaxesPay);

if(_taxe > BANK) exitWith {hint format[localize "STR_ATM_SentMoneyFail",_val,(_taxe - _val)]};

BANK = BANK - _taxe;

player setVariable ["idTrans", [_val, getPlayerUID player] ,true];

[_val, profileName, player] remoteExecCall ["life_fnc_wireTransfer",_unit];
[life_atm_type] call life_fnc_atmMenu;

_txt = format[localize "STR_ATM_SentMoneySuccess", [_val] call life_fnc_numberText, _unit getVariable["realname",name _unit], [_taxe - _val] call life_fnc_numberText];

[
	"Accepted", 
	_txt
] spawn life_fnc_showPredefinedNotification;

[1] call SOCK_fnc_updatePartial;

[1, _val, _unit] call life_fnc_TransfersMoneyLog;