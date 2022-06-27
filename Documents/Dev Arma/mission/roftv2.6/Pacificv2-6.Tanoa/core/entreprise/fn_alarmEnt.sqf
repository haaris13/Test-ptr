/*
	File: fn_alarmEnt.sqf

	Autor:IronBlade
*/

_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_entID = (_this select 3) select 0;

_owners = getArray(missionconfigFile >> "CfgEntreprise" >> _entID >> "owners");


if (!((getPlayerUID player) in _owners)) exitWith {
	["Error", "Vous ne faites pas partie de l'entreprise !"] spawn life_fnc_showPredefinedNotification;
	closeDialog 0;
};

_text = getText(missionconfigFile >> "CfgEntreprise" >> _entID >> "displayName");

_message = format ["<t color='#ff4000' size = '.8'>L'alarme silencieuse de l'entreprise [%1] a été déclanché !</t>",_text];

[_message] remoteExecCall ["life_fnc_dynamicText",west];

["Accepted", "Alarme Activée !"] spawn life_fnc_showPredefinedNotification;