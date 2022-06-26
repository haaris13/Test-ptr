/*
	File: fn_papierReceive.sqf

	Autor:IronBlade
*/
_player = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_papier = [_this, 1, [], [[]]] call BIS_fnc_param;

if (isNull _player || (count _papier) == 0) exitWith {};

hint parseText format [
		"<t color='#003366' size='2' align='center'>Papier<br/><br/></t>" +
		"<t color='#33CC33' align='left' size='1'>De: <t color='#ffffff'>%1</t><br/><br/>" +
		"<t color='#4C7093' align='left' size='1'>Titre: <t color='#ffffff'>%2</t></t><br/><br/>" +
		"%3<br/>" +
		"<t color='#ffffff' align='left' size='1'>Signature: <t color='#ffffff'>%4</t><br/><br/>",
		(name _player),
		(_papier select 0),
		(_papier select 1),
		(_papier select 2)
];

life_papiers_list pushBack _papier;

[] spawn life_fnc_papierSave;