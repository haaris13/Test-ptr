
time_tp = time;

tele={
	if ((time - time_tp) > 25) exitWith {onMapSingleClick ""; openMap [false, false];};

	_pos = [_this select 0, _this select 1, _this select 2];
	(vehicle player) setpos [_pos select 0, _pos select 1, 0];
	onMapSingleClick "";
	openMap [false, false];
	["Accepted", "Vous vous êtes téléporté à l'emplacement sélectionné."] spawn life_fnc_showPredefinedNotification;
	[format ["%1 Se TP",profileName], getPlayerUID player,0] remoteExecCall ["TON_fnc_logsAdmin",2];
};

openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call tele";
