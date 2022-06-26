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
	hint localize "STR_GNOTF_DisbandGangPro";
	[player, group player] remoteExec ["TON_fnc_clanDelete",2];

	closeDialog 0;
} else {
	hint localize "STR_GNOTF_DisbandGangCanc";
};