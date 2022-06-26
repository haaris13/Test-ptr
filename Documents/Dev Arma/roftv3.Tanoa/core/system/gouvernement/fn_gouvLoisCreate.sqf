/*
	File: fn_gouvLoisCreate.sqf

	Autor: IronBlade
*/

disableSerialization;
_display = findDisplay 9500;

_texte = ctrlText(_display displayCtrl 9501);
_titre = ctrlText(_display displayCtrl 9502);

[player, _titre, _texte] remoteExecCall ["TON_fnc_gouvLoisCreate",2];

closeDialog 0;