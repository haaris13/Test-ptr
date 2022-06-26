tele={
	_pos = [_this select 0, _this select 1, _this select 2];
	(vehicle player) setpos [_pos select 0, _pos select 1, 0];
	onMapSingleClick "";
	openMap [false, false];
	hint "You have teleported to your selected position";
	[format ["%1 Se TP",profileName], getPlayerUID player,0] remoteExecCall ["TON_fnc_logsAdmin",2];
};

openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call tele";
