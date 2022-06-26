#include "..\..\script_macros.hpp"
/*
	File: fn_fixDoorBank.sqf
	
	Autor: IronBlade
*/

_door = cursorTarget;

if (isNull _door) exitWith {};

if (playerSide != west) exitWith {};

_chest = _door getVariable ["chest", _chest];

if (_chest getVariable ["rob",false]) exitWith {["Error", "Le Coffre n'est pas fermé !"] spawn life_fnc_showPredefinedNotification;};

if (_door getVariable ["chargeplaced", false]) exitWith {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 2;

	player playActionNow "stop";

	_door setVariable ["chargeplaced", false, true];

	["La charge a été Désamorcé !"] remoteExecCall ["life_fnc_dynamicText",west];
};

if (!(_door getVariable ["open",false])) exitWith {["Error", "La porte est déja fermé !"] spawn life_fnc_showPredefinedNotification;};

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;

player playActionNow "stop";

_door setVariable ["open", false, true];

for "_i" from 1 to 1 do {
	_door setVariable[format["bis_disabled_Door_%1",_i], 1, true];
};
["Accepted", "Porte Fermé !"] spawn life_fnc_showPredefinedNotification;