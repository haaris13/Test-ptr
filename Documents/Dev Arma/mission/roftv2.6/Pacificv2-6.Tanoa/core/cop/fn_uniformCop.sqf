/*
	File:fn_uniformCop.sqf

	Autor: Iron
*/

if (playerside != west) exitWith {};

if (([] call life_copUlevel) != 3) exitWith {};


life_serviceGhost = !life_serviceGhost;

if (life_serviceGhost) then {
	life_group_west = (group player);

	[player] join grpNull;

	if (life_group_ghost isEqualTo grpNull) then {
		life_group_ghost = (group player);
		publicVariable "life_group_ghost";
	};

	_log = format ["%1 Début du Service Ghost", name player];
	[getPlayerUID player, 2, _log] remoteExecCall ["TON_fnc_insertActionLogs", 2];

	[player] join life_group_ghost;

	player setVariable["team",4,true];

	[] call life_fnc_updateClothing;

	[] spawn {

		_char = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
		_numb = toArray("0123456789");

		for "_y" from 0 to 100 do {

			uiSleep 0.05;
			_text = "#";

			for "_i" from 0 to 1 do {
				_text = format["%1%2", _text, toString([selectRandom _char])];
			};

			for "_v" from 1 to 4 do {
				_text = format["%1%2", _text, toString([selectRandom _numb])];
			};

			player setVariable ["realname",_text,true];
		};
		["Accepted", format["Ghost en Place Unité: %1!", player getVariable ["realname",name player]]] spawn life_fnc_showPredefinedNotification;
	};
	
} else {

	if (life_group_west isEqualTo grpNull) then {
		[player] join (createGroup west);
	} else {
		[player] join life_group_west;
	};

	_log = format ["%1 Fin du Service Ghost", name player];
	[getPlayerUID player, 2, _log] remoteExecCall ["TON_fnc_insertActionLogs", 2];

	player setVariable ["realname",name player,true];
	player setVariable["team",3,true];

	[] call life_fnc_updateClothing;

	[player] join life_group_west;
	["Error", "Fin du Service Ghost !"] spawn life_fnc_showPredefinedNotification;
};