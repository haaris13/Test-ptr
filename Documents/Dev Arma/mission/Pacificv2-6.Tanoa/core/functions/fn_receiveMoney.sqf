#include "..\..\script_macros.hpp"
/*
	File: fn_receiveMoney.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Receives money
*/

params [
	["_unit",objNull,[objNull]],
	["_val","",[""]],
	["_from",objNull,[objNull]]
];

if(isNull _unit OR isNull _from OR EQUAL(_val,"")) exitWith {};
if(player != _unit) exitWith {};
if(!([_val] call TON_fnc_isnumber)) exitWith {};
if(_unit == _from) exitWith {}; //Bad boy, trying to exploit his way to riches.
if ((parseNumber(_val)) <= 0) exitWith {};
if((player distance _from) > 30) exitWith {
	diag_log format["Distance to important for $%1", _val];
};

life_newMoney = life_newMoney + parseNumber(_val);

["Accepted", format["Vous avez reçu $%1.", [(parseNumber(_val))] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;

ADD(CASH, parseNumber(_val));
[0] call SOCK_fnc_updatePartial;