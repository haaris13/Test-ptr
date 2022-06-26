#include "..\..\script_macros.hpp"
/*
	File: fn_giveMoney.sqf
	Author: Tonic, IronBlade


*/

private["_unit","_amount"];
_type = SEL(_this,0);
_unit = SEL(_this,1);

switch (_type) do {

	case "load" : {
		if (!createDialog "interactionGiveMoney") exitWith {};
		life_pInact_curTarget = _unit;
	};

	case "give" : {

		_amount = ctrlText 15601;
		_unit = life_pInact_curTarget;

		if(isNil "_unit") exitWith {};
		if(_unit == player) exitWith {};
		if(isNull _unit) exitWith {};


		if(!life_use_atm) exitWith {["Error", "Vous avez récemment volé ! Vous ne pouvez pas donner de l'argent pour l'instant."] spawn life_fnc_showPredefinedNotification;};
		if(!([_amount] call TON_fnc_isnumber)) exitWith {["Error", "Vous n'avez pas entré un chiffre."] spawn life_fnc_showPredefinedNotification;};
		if(parseNumber(_amount) <= 0) exitWith {["Error", "Vous devez indiquer un montant à donner!"] spawn life_fnc_showPredefinedNotification;};
		if(parseNumber(_amount) > CASH) exitWith {["Error", "Vous n'avez pas autant d'argent à donner."] spawn life_fnc_showPredefinedNotification;};
		if(isNull _unit) exitWith {};
		if(isNil "_unit") exitWith {["Error", "La personne est trop loin."] spawn life_fnc_showPredefinedNotification;};

		["Accepted", format["Vous avez donné $%1.", [(parseNumber(_amount))] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;

		CASH = CASH - (parseNumber(_amount));

		[0] call SOCK_fnc_updatePartial;
		[_unit,_amount,player] remoteExecCall ["life_fnc_receiveMoney",_unit];

		[0, (parseNumber(_amount)), _unit] call life_fnc_TransfersMoneyLog;

	};
};