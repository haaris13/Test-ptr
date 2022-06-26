#include "..\..\script_macros.hpp"
/*
	File: fn_clanTaxeModify.sqf

	Autor:IronBlade
*/
_type = [_this,0, 0 ,[0]] call BIS_fnc_param;

disableSerialization;

_editXPTaxe = CONTROL(6400, 6428);
_editMoneyTaxe = CONTROL(6400, 6429);

_group = group player;
_taxe = _group getVariable["clan_taxe",[0,0]];

_clanTaxeMoney = _taxe select 0;
_clanTaxeXP = _taxe select 1;


_cfgRank = [] call life_fnc_clanGetRank;
_canDo = getArray(_cfgRank >> "canDo");


switch (_type) do { 
	case 0 : {
		if !("modifyTaxeXP" in _canDo) exitWith {};	
		_value = ctrlText _editXPTaxe;
		_value = parseNumber _value;
		if (_value > 100 || _value < 0) exitWith {hint "La taxe doit étre en pourcentage entre 0% et 100% !"; playSound "addItemFailed";};

		_group setVariable["clan_taxe", [_clanTaxeMoney, _value], true];

		[3, player] remoteExec ["TON_fnc_clanUpdate", 2];
		[] spawn life_fnc_clanMenuList;
	};

	case 1 : {
		if !("modifyTaxeMoney" in _canDo) exitWith {};
		_value = ctrlText _editMoneyTaxe;
		_value = parseNumber _value;
		if (_value > 100 || _value < 0) exitWith {hint "La taxe doit étre en pourcentage entre 0% et 100% !"; playSound "addItemFailed";};

		_group setVariable["clan_taxe", [_value, _clanTaxeXP], true];

		[2, player] remoteExec ["TON_fnc_clanUpdate", 2];
		[] spawn life_fnc_clanMenuList;
	};
};

