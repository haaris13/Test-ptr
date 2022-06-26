/*
	File: fn_clanBankAction.sqf

	Autor: IronBlade
*/
_type = [_this, 0, 0, [0]] call BIS_fnc_param;
_value = [_this, 1, "", [""]] call BIS_fnc_param;

if (_value == "") exitWith {};

if((time - life_action_delay) < 1) exitWith {hint localize "STR_NOTF_ActionDelay";};
life_action_delay = time;

_value = parseNumber _value;

if (_value <= 0 || _value > 999999) exitWith {hint "Valeur autorisé entre 1$ et 999.999$ !"; playSound "addItemFailed";};

_group = group player;
if (isNil {_group getVariable "clan_id"}) exitWith {closeDialog 0;};

switch (_type) do { 
	case 0 : {

		if (life_atmbank < _value) exitWith {hint "Il n'y a pas autant !"; playSound "addItemFailed";};

		_actualMoney = _group getVariable "clan_bank";
		_actualMoney = _actualMoney + _value;
		_group setVariable ["clan_bank", _actualMoney, true];

		life_atmbank = life_atmbank - _value;
		[1] call SOCK_fnc_updatePartial;
		[life_atm_type] call life_fnc_atmMenu;
		[2, player] remoteExec ["TON_fnc_clanUpdate", 2];
	};

	case 1 : {
		_actualMoney = _group getVariable "clan_bank";

		if (_actualMoney < _value) exitWith {hint "Il n'y a pas autant !"; playSound "addItemFailed";};

		uiSleep (random 1);

		_actualMoney = _group getVariable "clan_bank";

		if (_actualMoney < _value) exitWith {hint "Il n'y a pas autant !"; playSound "addItemFailed";};

		_actualMoney = _actualMoney - _value;

		_group setVariable ["clan_bank", _actualMoney, true];

		[2, player] remoteExec ["TON_fnc_clanUpdate", 2];

		life_atmbank = life_atmbank + _value;
	};
};