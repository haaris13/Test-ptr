#include "..\..\script_macros.hpp"
/*
	File: fn_breakDoorBankSimple.sqf


	Autor: IronBlade
*/

_bankNear = ([] call life_fnc_bankSimpleNear);

if (count _bankNear == 0) exitWith {
	["Error", "Vous n'êtes pas près d'une banque !"] spawn life_fnc_showPredefinedNotification;
};

if (ITEM_VALUE("blastingcharge") < 1 ) exitWith {
	["Error", "Il vous faut une charge !"] spawn life_fnc_showPredefinedNotification;
};

_bankConfig = (_bankNear select 0);
_build = (_bankNear select 1);

diag_log format ["fn_breakDoorBankSimple: %1", _bankConfig];

_curCfg = (missionConfigFile >> "CfgLittleBankSimple" >> "Banks" >> _bankConfig);

_doors = getArray(_curCfg >> "doors");

_door1 = (_doors select 0);
_classDoor1 = (_door1 select 0);
_posDoor1 = (_door1 select 1);

diag_log format ["fn_breakDoorBankSimple _classDoor1: %1", _classDoor1];

_curCfgDoor1 = (missionConfigFile >> "CfgLittleBankSimple" >> "Config" >> "Door" >> _classDoor1);

_distance = (player distance _posDoor1);

if (_distance > 3) exitWith {
	["Error", "Vous êtes trop loins de la porte du coffre de la banque !"] spawn life_fnc_showPredefinedNotification;;
};

if({side _x == west} count playableUnits < (LIFE_SETTINGS(getNumber,"cops_online_min_littleBankSimple")) && life_debug == 0) exitWith {
 	hint format [localize "STR_Civ_NotEnoughCopsLittleBankSimple",(LIFE_SETTINGS(getNumber,"cops_online_min_littleBankSimple"))];
};

if (_build getVariable ["open_vault", false]) exitWith {
	["Error", "La porte est déja ouverte."] spawn life_fnc_showPredefinedNotification;
};

[false, "blastingcharge", 1] call life_fnc_handleInv;

bank_simple_nb_breaker = 0;

{
	if ((_x distance _posDoor1) < 30 && (alive _x) && (_x != player)) then {
		bank_simple_nb_breaker = bank_simple_nb_breaker + 1;
	};
} forEach (units group player);

_textVar = getText(_curCfg >> "displayName");

_text = format["L'alarme silencieuse a été déclenché à la banque de %1 !", _textVar];
[_text] remoteExecCall ["life_fnc_dynamicText", west];

// Create Marker:
_markAlert = "bank_simple_mrk_alert_" + _bankConfig;
_markZone = "bank_simple_mrk_zone_" + _bankConfig;

_bankMarkerAlert = createMarker [_markAlert, _posDoor1];
_bankMarkerAlert setMarkerShape "ICON";
_bankMarkerAlert setMarkerType "mil_warning";
_bankMarkerAlert setMarkerColor "ColorRed";
_bankMarkerAlert setMarkerText format[" - Braquage en cours -"];

_bankMarkerZone = createMarker [_markZone, _posDoor1];
_bankMarkerZone setMarkerShape "ELLIPSE";
_bankMarkerZone setMarkerSize [300, 300];
_bankMarkerZone setMarkerColor "ColorRed";
_bankMarkerZone setMarkerAlpha 0.4;

life_bank_simple_players pushBack [getPlayerUID player, name player];
publicVariable "life_bank_simple_players";

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;
player playActionNow "stop";
_build setVariable ["chargeplaced_vault", true, true];

_door = nearestObjects [_posDoor1, [_classDoor1], 3] select 0;

_c4Array = getArray(_curCfgDoor1 >> "Explosive" >> "objs");
_c4ArrayDir = getArray(_curCfgDoor1 >> "Explosive" >> "objsDir");

life_bank_simple_c4 = [];

{
	_class = _x select 0;
	_pos = _x select 1;

	_c4 = (_class createVehicle (position _door));  

	_c4 attachTo [_door, _pos];
	_c4 setVectorDirAndUp _c4ArrayDir;

	life_bank_simple_c4 pushBack _c4;
} forEach _c4Array;


// ["Vous avez jusqu'au temps imparti pour désarmorcer les charges !"] remoteExecCall ["life_fnc_dynamicText",west];

_group = units group player;
_group = _group - [player];

[player, _posDoor1, _build] remoteExec ["life_fnc_chargeTimerBankSimple", west];
[player, _posDoor1, _build] remoteExec ["life_fnc_chargeTimerBankSimple", _group];
_handle = [player, _posDoor1, _build] spawn life_fnc_chargeTimerBankSimple;

waitUntil {scriptDone _handle};
sleep 0.9;

{
	[_x] spawn life_fnc_deleteVehicle;
} forEach life_bank_simple_c4;

if (!(_build getVariable["chargeplaced_vault", false])) exitWith {["Warning", localize "STR_ISTR_Blast_Disarmed"] spawn life_fnc_showPredefinedNotification;};

_explo = ("R_80mm_HE" createVehicle _posDoor1);
_explo setDamage 1;
uiSleep 1;
deleteVehicle _explo;

_build setVariable ["chargeplaced_vault", false, true];
_build setVariable ["open_vault", true, true];

["Les charges ont explosées !"] remoteExecCall ["life_fnc_dynamicText", west];

uiSleep 0.1;

_door animate ["Door_1_rot", 1];