#include "..\..\script_macros.hpp"
/*
	File: fn_paycheck.sqf
		
	Author: IronBlade   
*/
private ["_hasPerk","_pay"];
_pay = (FETCH_CONST(life_paycheck));
_pay = (["salaire", _pay] call life_fnc_gouvTaxesTake);

if (["salaireCivV1"] call life_fnc_hasPerk) then {
	_pay = _pay * 1.1;
};

if (["salaireCivV2"] call life_fnc_hasPerk) then {
	_pay = _pay * 1.1;
};

if (["salaireCivV3"] call life_fnc_hasPerk) then {
	_pay = _pay * 1.1;
};

if (["respectable"] call life_fnc_hasPerk) then {
	[true,5] call life_fnc_changeRep;
};

life_atmbank = life_atmbank + _pay;
life_newMoney = life_newMoney + _pay;

// XP for Civilian:
if (playerSide == civilian) then {
	["paycheck"] call life_fnc_addXP;
};

systemChat format[localize "STR_FSM_ReceivedPay",_pay] call life_fnc_numberText;