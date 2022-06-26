#include "..\..\script_macros.hpp"
/*
	File: fn_serviceSos.sqf
	Author: Iron
	
	Description:
	.............
*/
if (playerSide == west) exitWith {};
if ((call life_euLevel) < 1) exitWith {["Error", "Vous ne faites pas parti(e) du SOS !"] spawn life_fnc_showPredefinedNotification;};

life_serviceUn = !life_serviceUn;

if (life_serviceUn) then {
	life_group = (group player);

	if (life_group_un isEqualTo grpNull) then {

		player join (createGroup civilian);
		life_group_un = (group player);
		publicVariable "life_group_un";

		/*
		_group setVariable["clan_id", -1, true];
		_group setVariable["clan_name", "ONU", true];
		_group setVariable["clan_members", [[getPlayerUID, name player, 1]], true];
		_group setVariable["clan_bank", 0, true];
		_group setVariable["clan_owner", "", true];
		_group setVariable["clan_upgradeID", 0, true];
		_group setVariable["clan_xp", 0, true];
		*/
	};

	[player] join life_group_un;
	["Accepted", "En Service !"] spawn life_fnc_showPredefinedNotification;

	//player setVariable["ACE_IsEngineer", 1, true];
	//player setVariable["ACE_isEOD", true, true];
	//player setVariable["ace_medical_medicClass", 2, true];

} else {

	if (life_group isEqualTo grpNull) then {
		player join (createGroup civilian);
	} else {
		[player] join life_group;
	};

	[player] join life_group;
	["Accepted", "Fin du Service !"] spawn life_fnc_showPredefinedNotification;

	//player setVariable["ACE_IsEngineer", 0, true];
	//player setVariable["ACE_isEOD", false, true];
	//player setVariable["ace_medical_medicClass", 0, true];
};