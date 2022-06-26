#include "..\..\script_macros.hpp"
/*
	File: fn_giveMoney.sqf
	Author: Tonic, IronBlade


*/

private["_unit","_amount"];
_type = SEL(_this,0);
_unit = SEL(_this,1);;

switch (_type) do {

	case "load" : {
		if (!createDialog "interactionGiveMoney1") exitWith {};
		life_pInact_curTarget = _unit;
	};

	case "give" : {

		_amount = ctrlText 15601;
		_unit = life_pInact_curTarget;

		if(isNil "_unit") exitWith {};
		if(_unit == player) exitWith {};
		if(isNull _unit) exitWith {};


		if(!life_use_atm) exitWith {hint "Vous avez récemment volé ! Vous ne pouvez pas donner de l'argent pour l'instant.";};
		if(!([_amount] call TON_fnc_isnumber)) exitWith {hint "Vous n'avez pas entré de numéro.";};
		if(parseNumber(_amount) <= 0) exitWith {hint "Vous devez saisir un montant que vous souhaitez donner.";};
		if(parseNumber(_amount) > ArgentSal) exitWith {hint "Tu n'as pas autant à donner!";};
		if(isNull _unit) exitWith {};
		if(isNil "_unit") exitWith { hint "Le joueur sélectionné n'est pas à portée";};

		hint format["You gave $%1 to %2",[(parseNumber(_amount))] call life_fnc_numberText,_unit getVariable["realname",name _unit]];
//		CASH = CASH - (parseNumber(_amount));
		ArgentSal = ArgentSal - (parseNumber(_amount));
		[getPlayerUID player,ArgentSal] remoteExec ["TON_fnc_updateDB",2];
		[_unit,_amount,player] remoteExecCall ["life_fnc_receiveMoney1",_unit];

		//[0, (parseNumber(_amount)), _unit] call life_fnc_TransfersMoneyLog;

	};
};