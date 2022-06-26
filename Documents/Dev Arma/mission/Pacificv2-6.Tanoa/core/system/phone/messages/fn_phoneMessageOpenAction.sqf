/*
	File: fn_phoneMessageOpenAction.sqf

	Autor: Iron
*/

_idPhone = life_phone select 0;

_var = format["life_phone_%1_messages_loaded", _idPhone];
_messageLoaded = missionNamespace getVariable [_var, false];


if (_messageLoaded) exitWith {
	_var = format["life_phone_%1_messages", _idPhone];
	_messages = missionNamespace getVariable [_var, []];

	[_idPhone, _messages] spawn life_fnc_phoneMessageOpenMenu;
};

[player, _idPhone] remoteExec ["TON_fnc_phoneLoadMessages", 2];