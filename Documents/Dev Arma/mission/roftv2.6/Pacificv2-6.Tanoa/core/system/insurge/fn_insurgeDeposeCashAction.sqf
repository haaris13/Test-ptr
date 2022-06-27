/*
	File: fn_insurgeDeposeCashAction.sqf

	Autor: IronBlade
*/
disableSerialization;

_display = findDisplay 29200;
_ctrlEdit = _display displayCtrl 29202;

_amount = parseNumber(ctrlText _ctrlEdit);

if((time - life_action_delay) < 0.3) exitWith {};
if((time - life_action_delay) < 0.8) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification;};
life_action_delay = time;

if(_amount > 999999) exitWith {["Error", "Maximum 999999$."] spawn life_fnc_showPredefinedNotification;};
if(_amount <= 0) exitwith {};
if(!([str(_amount)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_amount > life_cash) exitWith {["Error", "Vous n'avez pas autant sur vous."] spawn life_fnc_showPredefinedNotification;};

life_cash = life_cash - _amount;
[0] call SOCK_fnc_updatePartial;

_group = group player;

_clanId = _group getVariable["clan_id", -1];
_clanName = _group getVariable["clan_name", "N/A"];

[player, _clanId, _clanName, _amount] remoteExec ["TON_fnc_insurgeDeposeCash", 2];
["Accepted", "Merci !"] spawn life_fnc_showPredefinedNotification;
closeDialog 0;