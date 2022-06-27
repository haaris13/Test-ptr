/*
	File: fn_clanInvitePlayer.sqf

	Autor: IronBlade
*/

disableSerialization;
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNil "_unit") exitWith {["Error", "Vous n'avez pas sélectionné une personne."] spawn life_fnc_showPredefinedNotification;};
if(isNull _unit) exitWith {}; //Bad unit?
if! (side _unit isEqualTo civilian) exitWith {};
if !(isNil {(group _unit) getVariable "clan_id"}) exitWith {["Error", "Cette personne est déja dans un gang !"] spawn life_fnc_showPredefinedNotification;}; //Added

_group = group player;
_members = _group getVariable["clan_members", []];

_currentUpgrade = [] call life_fnc_clanGetUpgrade;
_maxMembers = getNumber(_currentUpgrade >> "maxMembers");

if (count _members >= _maxMembers) exitWith {["Error", localize "STR_GNOTF_MaxSlot"] spawn life_fnc_showPredefinedNotification;};

_action = [
	format[localize "STR_GNOTF_InvitePlayerMSG",_unit getVariable ["realname",name _unit]],
	localize "STR_Gang_Invitation",
	localize "STR_Global_Yes",
	localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
	[profileName, _group] remoteExec ["life_fnc_clanInvite", _unit];
	hint format[localize "STR_GNOTF_InviteSent",_unit getVariable ["realname",name _unit]];
} else {
	["InfoWithSound", localize "STR_GNOTF_InviteCancel"] spawn life_fnc_showPredefinedNotification;
};