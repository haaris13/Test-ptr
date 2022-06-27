/*
	File: fn_clanBankAction.sqf

	Autor: IronBlade
*/
_type = [_this, 0, 0, [0]] call BIS_fnc_param;
_value = [_this, 1, "", [""]] call BIS_fnc_param;

if (_value == "") exitWith {};

if((time - life_action_delay) < 0.3) exitWith {};
if((time - life_action_delay) < 1) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

_value = parseNumber _value;

if (_value <= 0 || _value > 999999) exitWith {["Error", "Montant autorisé entre 1$ et 999.999$ !"] spawn life_fnc_showPredefinedNotification;};

_cfgClan = (missionConfigFile >> "CfgClan");
_cfgRank = (_cfgClan >> "Rank");
_cfgUpgrade = (_cfgClan >> "Upgrade");

_group = group player;
if (isNil {_group getVariable "clan_id"}) exitWith {closeDialog 0;};

switch (_type) do { 
	case 0 : {

		if (life_atm_type == 0) exitWith {
			["Error", "Il faut aller dans une banque pour pouvoir transférer de l'argent dans le clan !"] spawn life_fnc_showPredefinedNotification;
		};

		if (life_atmbank < _value) exitWith {["Error", "Il n'y a pas autant !"] spawn life_fnc_showPredefinedNotification;};

		uiSleep (random 1.2);

		if (life_atmbank < _value) exitWith {["Error", "Il n'y a pas autant !"] spawn life_fnc_showPredefinedNotification;};

		_actualMoney = _group getVariable "clan_bank";
		_clanUpgradeID = _group getVariable ["clan_upgradeID", 0];
		_curentUpgrade = (format["getnumber (_x >> 'level') == %1", _clanUpgradeID] configClasses (_cfgUpgrade)) select 0;
		_maxMoney = getNumber(_curentUpgrade >> "maxBank");

		if ((_actualMoney + _value) > _maxMoney) exitWith {
			["Error", "Il n'y a plus assez de place dans le compte du clan !"] spawn life_fnc_showPredefinedNotification;
		};

		_actualMoney = _actualMoney + _value;
		_group setVariable ["clan_bank", _actualMoney, true];

		life_atmbank = life_atmbank - _value;
		[1] call SOCK_fnc_updatePartial;
		[life_atm_type] call life_fnc_atmMenu;
		[2, player] remoteExec ["TON_fnc_clanUpdate", 2];

		["Accepted", format["Vous avez déposé $%1 dans le clan.", [_value] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;
	};

	case 1 : {

		_distance = (player distance (markerPos "lbank_1"));

		if (_distance > 40) exitWith {
			["Error", "Il faut aller près de la banque pour pouvoir transférer de l'argent du clan !"] spawn life_fnc_showPredefinedNotification;
		};

		_actualMoney = _group getVariable "clan_bank";

		if (_actualMoney < _value) exitWith {["Error", "Il n'y a pas autant !"] spawn life_fnc_showPredefinedNotification;};

		uiSleep (random 1.2);

		_actualMoney = _group getVariable "clan_bank";

		if (_actualMoney < _value) exitWith {["Error", "Il n'y a pas autant !"] spawn life_fnc_showPredefinedNotification;};

		_actualMoney = _actualMoney - _value;

		_group setVariable ["clan_bank", _actualMoney, true];

		[2, player] remoteExec ["TON_fnc_clanUpdate", 2];

		life_atmbank = life_atmbank + _value;

		["Accepted", format["Vous avez retiré $%1 du clan.", [_value] call life_fnc_numberText]] spawn life_fnc_showPredefinedNotification;
	};
};