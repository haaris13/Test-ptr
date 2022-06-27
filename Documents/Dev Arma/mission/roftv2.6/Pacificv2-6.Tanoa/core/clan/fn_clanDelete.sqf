/*
	File: fn_clanDelete.sqf

	Autor:IronBlade
*/
private "_action";
_action = [
	localize "STR_GNOTF_DisbandWarn",
	localize "STR_Gang_Disband_Gang",
	localize "STR_Global_Yes",
	localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
	["Info", localize "STR_GNOTF_DisbandGangPro"] spawn life_fnc_showPredefinedNotification;
	[player, group player] remoteExec ["TON_fnc_clanDelete",2];

	closeDialog 0;
} else {
	["InfoWithSound", localize "STR_GNOTF_DisbandGangCanc"] spawn life_fnc_showPredefinedNotification;
};