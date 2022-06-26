#include "..\..\script_macros.hpp"
/*
	File: fn_paycheck.sqf
		
	Author: IronBlade   
*/
private ["_hasPerk","_pay"];

if (playerSide != civilian) then {

	_pay = (FETCH_CONST(life_paycheck));
	//_pay = (["salaire", _pay] call life_fnc_gouvTaxesTake);

	if (["salaireCivV1"] call life_fnc_hasPerk) then {
		_pay = _pay * 1.1;
	};

	if (["salaireCivV2"] call life_fnc_hasPerk) then {
		_pay = _pay * 1.1;
	};

	if (["salaireCivV3"] call life_fnc_hasPerk) then {
		_pay = _pay * 1.1;
	};

	if (isNil "_pay") exitWith {};

	life_atmbank = life_atmbank + _pay;
	life_newMoney = life_newMoney + _pay;

	systemChat format[localize "STR_FSM_ReceivedPay",_pay] call life_fnc_numberText;
};

["paycheck"] call life_fnc_addXP;

if ((getPlayerUID player) == gouv_president_uid) exitWith {
	["paycheckGouv"] call life_fnc_addXP;
};