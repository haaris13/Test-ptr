#include "..\..\script_macros.hpp"
/*
	File: fn_breakDoor2BankSimple.sqf

	Autor: IronBlade
*/

_bankNear = ([] call life_fnc_bankSimpleNear);

if (count _bankNear == 0) exitWith {
	["Error", "Vous n'êtes pas près d'une banque !"] spawn life_fnc_showPredefinedNotification;
};

if (ITEM_VALUE("disqueuse") < 1 ) exitWith {
	["Error", "Il vous faut une disqueuse !"] spawn life_fnc_showPredefinedNotification;
};

_bankConfig = (_bankNear select 0);
_build = (_bankNear select 1);

_curCfg = (missionConfigFile >> "CfgLittleBankSimple" >> "Banks" >> _bankConfig);

_doors = getArray(_curCfg >> "doors");

_door2 = (_doors select 1);
_classDoor2 = (_door2 select 0);
_posDoor2 = (_door2 select 1);

_distance = (player distance _posDoor2);

if (_distance > 3) exitWith {
	["Error", "Vous êtes trop loins de la porte de la banque !"] spawn life_fnc_showPredefinedNotification;
};

if (_build getVariable ["open_vault2",false]) exitWith {
	["Error", "La porte est déja ouverte."] spawn life_fnc_showPredefinedNotification;
};

if !(_build getVariable ["open_vault",false]) exitWith {
	["Error", "La porte du coffre n'est pas ouverte !"] spawn life_fnc_showPredefinedNotification;
};

_door = nearestObjects [_posDoor2, [_classDoor2], 3] select 0;

if (isNull _door) exitWith {
	["Error", "Une erreur est survenue."] spawn life_fnc_showPredefinedNotification;
	diag_log "Door null";
};

_curCfgDoor2 = (missionConfigFile >> "CfgLittleBankSimple" >> "Config" >> "Door" >> _classDoor2);

_grinderCfg = (_curCfgDoor2 >> "Grinder");
_grinderClass = getText(_grinderCfg >> "className");
_grinderPosition = getArray(_grinderCfg >> "position");
_grinderDir = getArray(_grinderCfg >> "dir");
_grinderEffects = getArray(_grinderCfg >> "effects");

_grinder = (_grinderClass createVehicle (position _door));
_grinder attachTo [_door, _grinderPosition];
_grinder setVectorDirAndUp _grinderDir;

life_bank_simple_effects = [];

{
	_class = _x select 0;
	_pos = _x select 1;

	_eff = "#particlesource" createVehicle (position _door);
	_eff setParticleClass _class;

	_eff setPos (_grinder modelToWorld _pos);

	life_bank_simple_effects pushBack _eff;
} forEach _grinderEffects;

[_grinder, "disqueuse", 400] spawn life_fnc_playSound3DNear;

// Time
_time = time + ((1 * 60) + 15);
["Ouverture en cours..."] spawn life_fnc_dynamicText;

[((1 * 60) + 15)] spawn life_fnc_timerLaunch;

while {true} do {
	if(round(_time - time) < 1) exitWith {};
	if !(alive player) exitWith {};
	if (life_istazed) exitWith {};
	if (player getVariable ["restrained", false]) exitWith {};

	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.08;
};

sleep 2;
player playActionNow "stop";
[_grinder] spawn life_fnc_deleteVehicle;

{
  deleteVehicle _x;
} forEach life_bank_simple_effects;

if !(alive player) exitWith {life_timer_stop = false;};
if (life_istazed) exitWith {life_timer_stop = false;};
if (player getVariable ["restrained",false]) exitWith {life_timer_stop = false;};

_build setVariable ["open_vault2", true, true];
_door animate ["Door_1_rot", 1];