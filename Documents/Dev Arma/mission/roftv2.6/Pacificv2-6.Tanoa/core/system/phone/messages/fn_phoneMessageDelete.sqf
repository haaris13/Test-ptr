/*
	File: fn_phoneMessageDelete.sqf

	Autor: Iron
*/

if (life_phone_conv_selected == "") exitWith {};

_action = [
	"Voulez vous vraiment supprimer la conversation ?","Supprimer la conversation",
	"Supprimer",
	localize "STR_Global_Cancel"
] call BIS_fnc_guiMessage;

if (!_action) exitWith {};

_idPhone = life_phone select 0;

_var = format["life_phone_%1_messages", _idPhone];
_messages = missionNamespace getVariable [_var, []];

_filteredMessages = [];
_convMessages = [];

{
	_id = _x select 0;
	_local = _x select 1;
	_read = _x select 2;
	_message = _x select 3;
	_number_sec = _x select 4;
	_time_data = _x select 5;

	if (_number_sec == life_phone_conv_selected) then {
		_convMessages pushBack _id;
	} else {
		_filteredMessages pushBack _x;
	}
} forEach _messages;

missionNamespace setVariable [_var, _filteredMessages];

if (count _convMessages > 0) then {
	[player, _idPhone, _convMessages] remoteExec ["TON_fnc_phoneDeleteMessage", 2];
};

closeDialog 0;