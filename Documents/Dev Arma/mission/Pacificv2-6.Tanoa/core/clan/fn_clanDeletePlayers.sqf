/*
	File:fn_clanDeletePlayers.sqf

	Autor:IronBlade
*/
private "_group";
_group = param [0,grpNull,[grpNull]];
if(isNull _group) exitWith {};
	
if(!isNull (findDisplay 6400)) then {closedialog 6400};

["InfoWithSound", localize "STR_GNOTF_DisbandWarn_2"] spawn life_fnc_showPredefinedNotification;
[player] joinSilent (createGroup civilian);

uiSleep 5;
life_group = grpNull;
deleteGroup _group;