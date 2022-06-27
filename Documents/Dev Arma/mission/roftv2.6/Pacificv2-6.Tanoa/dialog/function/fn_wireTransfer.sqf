#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initiates the wire-transfer
*/
params [
	["_value",0,[0]],
	["_from","",[""]],
	["_fromObj", objNull,[objNull]]
];

if (isNull _fromObj) exitWith {["Error", "Problème CHEAT, Merci de contacter un Admin !"] spawn life_fnc_showPredefinedNotification;};
if (isNil "_value") exitWith {};
if(EQUAL(_value,0) OR EQUAL(_from,"") OR EQUAL(_from,profileName)) exitWith {}; //No
if (_value < 0) exitWith {};
if (_value > 999999) exitWith {["Error", "Problème CHEAT, Merci de contacter un Admin !"] spawn life_fnc_showPredefinedNotification;};

_idTrans = _fromObj getVariable ["idTrans", [0,""]];
_valFrom = _idTrans select 0;
_uidFrom = _idTrans select 1;

if (_valFrom != _value) exitWith {["Error", "Problème CHEAT, Merci de contacter un Admin !"] spawn life_fnc_showPredefinedNotification;};
if ((getPlayerUID _fromObj) != _uidFrom) exitWith {["Error", "Problème CHEAT, Merci de contacter un Admin !"] spawn life_fnc_showPredefinedNotification;};

_fromObj setVariable ["idTrans", nil, true];

life_newMoney = life_newMoney + _value;

ADD(BANK,_value);
["InfoWithSound", format ["On vous a transféré $%1 sur votre compte en banque.", _value]] spawn life_fnc_showPredefinedNotification;

[1] call SOCK_fnc_updatePartial;