#include "..\..\script_macros.hpp"
/*
	File: fn_breakDoor2Bank.sqf


	Autor: IronBlade
*/

_bankNear = ([] call life_fnc_bankNear);

if (count _bankNear == 0) exitWith {
	hint "Vous n'étes pas prés d'une banque !";
};

if (ITEM_VALUE("disqueuse") < 1 ) exitWith {
	hint "Il vous faut une disqueuse !";
};

_build = (_bankNear select 1);
_posDoor1 = (_build modelToWorld (_build selectionPosition "Interact5"));
_distance = (player distance (_build modelToWorld (_build selectionPosition "Interact5")));

if (_distance > 3) exitWith {
	hint "Vous étes trop loins de la porte de la banque !";
};

if (_build getVariable ["open_vault2",false]) exitWith {
	hint "La porte est déja ouverte";
};

if !(_build getVariable ["open_vault",false]) exitWith {
	hint "La porte du coffre n'est pas ouverte !";
};

_bankConfig = (_bankNear select 0);
_curCfg = (missionConfigFile >> "CfgLittleBank" >> "Banks" >> _bankConfig);
_curCfgBuild = (missionConfigFile >> "CfgLittleBank" >> "Build" >> (typeOf _build));

_obj2Array = getArray(_curCfgBuild >> "obj2");
_obj3Array = getArray(_curCfgBuild >> "obj3");

_obj2 = ((_obj2Array select 0) createVehicle (_obj2Array select 1));
_obj2 attachTo [_build, (_obj2Array select 1)];

life_effects = [];

{
	_class = _x select 0;
	_pos = _x select 1;

	_eff = "#particlesource" createVehicleLocal _pos;
	_eff setParticleClass _class;// 

	_eff attachTo [_obj2, _pos];

	life_effects pushBack _eff;
} forEach (_obj2Array select 2);

[_obj2, "disqueuse", 200] spawn life_fnc_playSound3DNear;

// Time
_time = time + ((1 * 60) + 15);
["Ouverture en cours..."] spawn life_fnc_dynamicText;

["#ec440b", ((1 * 60) + 15)] spawn life_fnc_timerLaunch;

while {true} do {
	if(round(_time - time) < 1) exitWith {};
	if !(alive player) exitWith {};

	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.08;
};

sleep 2;
player playActionNow "stop";
deleteVehicle _obj2;

{
  deleteVehicle _x;
} forEach life_effects;

if !(alive player) exitWith {};

_build setVariable ["open_vault2", true, true];
_build animate ["Door_5",1];