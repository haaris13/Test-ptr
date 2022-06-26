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

if (isNull _fromObj) exitWith {hint "Probléme CHEAT, Merci de contacter un Admin !";};

if(EQUAL(_value,0) OR EQUAL(_from,"") OR EQUAL(_from,profileName)) exitWith {}; //No

if (_value > 999999) exitWith {hint "Probléme CHEAT, Merci de contacter un Admin !";};

_idTrans = _fromObj getVariable ["idTrans", [0,""]];
_valFrom = _idTrans select 0;
_uidFrom = _idTrans select 1;

if (_valFrom != _value) exitWith {hint "Probléme CHEAT, Merci de contacter un Admin !";};
if ((getPlayerUID _fromObj) != _uidFrom) exitWith {hint "Probléme CHEAT, Merci de contacter un Admin !";};

_fromObj setVariable ["idTrans", nil, true];

life_newMoney = life_newMoney + _value;

ADD(BANK,_value);
hint format["%1 has wire transferred $%2 to you",_from,[_value] call life_fnc_numberText];
[1] call SOCK_fnc_updatePartial;