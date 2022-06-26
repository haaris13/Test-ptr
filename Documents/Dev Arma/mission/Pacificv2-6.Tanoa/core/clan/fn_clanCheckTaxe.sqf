/*
	fn_clanCheckTaxe.sqf
	
	Autor: IronBlade

	Type:
		0 -> Cash
		1 -> XP
*/
_value = [_this,0, 0 ,[0]] call BIS_fnc_param;
_typeTaxe = [_this,1, 0 ,[0]] call BIS_fnc_param;

if (_value <= 0) exitWith {_value;};

_group = group player;

if (isNil {_group getVariable "clan_id"}) exitWith {_value;};

_taxe = _group getVariable "clan_taxe";

switch (_typeTaxe) do {
	case 0 : {
		_taxeMoney = _taxe select 0;

		_take = (_value * (_taxeMoney / 100));
		_value = _value - _take;

		_currentMoney =  _group getVariable "clan_bank";
		_currentMoney = _currentMoney + _take;
		_group setVariable ["clan_bank", _currentMoney, true];
	};

	case 1 : {
		_taxeXP = _taxe select 1;

		_take = (_value * (_taxeXP / 100));
		_value = _value - _take;

		[_take] spawn life_fnc_clanAddxp;
	};
};

_value;