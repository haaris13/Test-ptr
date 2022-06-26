/*
	File: fn_clanInvite.sqf

	Autor:IronBlade
*/
_name = [_this, 0, "", [""]] call BIS_fnc_param;
_group = [_this, 1, grpNull, [grpNull]] call BIS_fnc_param;

if(_name == "" OR isNull _group) exitWith {}; //Fail horn anyone?
if !(isNil {(group player) getVariable "clan_id"}) exitWith {hint "Vous étes déja dans un clan !"};

_clanName = _group getVariable "clan_name";
_action = [
	format[localize "STR_GNOTF_InviteMSG",_name, _clanName],
	localize "STR_Gang_Invitation",
	localize "STR_Global_Yes",
	localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if(_action) then {
	[player] join _group;
	life_group = (group player);
	[player, _group] remoteExecCall ["TON_fnc_clanAddPlayer", 2];
};