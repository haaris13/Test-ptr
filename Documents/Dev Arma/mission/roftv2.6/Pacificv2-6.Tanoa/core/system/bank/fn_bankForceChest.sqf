#include "..\..\..\script_macros.hpp"
/*
	File: fn_bankForceChest.sqf

	Autor: Iron
	Date: 29 Mar 2020 17:41:39
	Version: 0.1
*/
_chest = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

_class = typeOf _chest;
_classChest = (missionConfigFile >> "BankCfg" >> "Chests" >> _class);

if({side _x == west} count playableUnits < (LIFE_SETTINGS(getNumber,"cops_online_min_littleBankSimple")) && life_debug == 0) exitWith {
 	hint format [localize "STR_Civ_NotEnoughCopsLittleBankSimple",(LIFE_SETTINGS(getNumber,"cops_online_min_littleBankSimple"))];
};

_isOpen = _chest getVariable["isOpen", false];
if (_isOpen) exitWith {
	[_chest] spawn life_fnc_bankOpenChest;
};

if (ITEM_VALUE("disqueuse") < 1 ) exitWith {
	["Error", "Il vous faut une disqueuse !"] spawn life_fnc_showPredefinedNotification;
};

_grinderCfg = (_classChest >> "Grinder");
_grinderClass = getText(_grinderCfg >> "className");
_grinderPosition = getArray(_grinderCfg >> "position");
_grinderDir = getArray(_grinderCfg >> "dir");
_grinderEffects = getArray(_grinderCfg >> "effects");
_nbRestart = getNumber(_grinderCfg >> "nbRestart");

_grinder = (_grinderClass createVehicle (position _chest));
_grinder enableSimulation false;
_grinder setPos (_chest modelToWorld _grinderPosition);
_grinder setVectorDir _grinderDir;

["Ouverture en cours..."] spawn life_fnc_dynamicText;

[((1 * 60) + 15.5) * _nbRestart] spawn life_fnc_timerLaunch;

for "_i" from 1 to _nbRestart do {
	uiSleep 0.5;

	life_bank_simple_effects = [];

	{
		_class = _x select 0;
		_pos = _x select 1;

		_eff = "#particlesource" createVehicle (position _grinder);
		_eff setParticleClass _class;
		
		_eff setPos (_grinder modelToWorld _pos);

		life_bank_simple_effects pushBack _eff;
	} forEach _grinderEffects;

	[_grinder, "disqueuse", 400] spawn life_fnc_playSound3DNear;

	_time = time + ((1 * 60) + 15);

	while {true} do {
		if(round(_time - time) < 1) exitWith {};
		if !(alive player) exitWith {};
		if (life_istazed) exitWith {};
		if (life_interrupted) exitWith {};
		if (player getVariable ["restrained", false]) exitWith {};

		if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
			[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
			player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
		};

		sleep 0.08;
	};

	{
	  deleteVehicle _x;
	} forEach life_bank_simple_effects;

	life_bank_simple_effects = [];

	if !(alive player) exitWith {};
	if (life_istazed) exitWith {};
	if (life_interrupted) exitWith {};
	if (player getVariable ["restrained", false]) exitWith {};
};

sleep 2;
player playActionNow "stop";
[_grinder] spawn life_fnc_deleteVehicle;

if !(alive player) exitWith {};
if (life_istazed) exitWith {};
if (life_interrupted) exitWith {};
if (player getVariable ["restrained", false]) exitWith {};

_items = (_chest getVariable [format["items"],[]]);

_chest setVariable [format["isOpen"], true, true];

if (count (_items) <= 0) exitWith {
	["Error", "Le Coffre est vide."] spawn life_fnc_showPredefinedNotification;
};

[_chest] spawn life_fnc_bankOpenChest;