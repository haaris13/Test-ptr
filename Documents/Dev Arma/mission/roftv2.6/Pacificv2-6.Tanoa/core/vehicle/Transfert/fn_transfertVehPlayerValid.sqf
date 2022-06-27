/*
	File: fn_transfertVehPlayerValid.sqf

	Autor: Iron
	Date: 29 Feb 2020 13:57:31
	Version: 0.1
*/
disableSerialization;

_display = (findDisplay 74400);
_control = (_display displayCtrl 74402);

_curSel = (lbCurSel _control);
_index = _control lbValue _curSel;

_pl = life_trans_players select _index;

closeDialog 0;

if (!(isPlayer _pl) || !(alive _pl) || (life_trans_veh_pnj distance _pl) > 10) exitWith {
	["Error", "Plus disponible."] spawn life_fnc_showPredefinedNotification;
};

life_trans_on = true;

[player, life_trans_veh, _pl, life_trans_type] remoteExec ["TON_fnc_vehicleTransfAction", 2];