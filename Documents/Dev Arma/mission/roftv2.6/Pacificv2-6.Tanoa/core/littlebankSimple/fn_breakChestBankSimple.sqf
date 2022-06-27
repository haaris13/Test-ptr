#include "..\..\script_macros.hpp"
/*
	File: fn_breakChestBankSimple.sqf


	Autor: IronBlade
*/

_bankNear = ([] call life_fnc_bankSimpleNear);

if (count _bankNear == 0) exitWith {
	["Error", "Vous n'êtes pas près d'une banque !"] spawn life_fnc_showPredefinedNotification;
};

closeDialog 0;

_bankConfig = (_bankNear select 0);
_build = (_bankNear select 1);

_curCfg = (missionConfigFile >> "CfgLittleBankSimple" >> "Banks" >> _bankConfig);

_chestArray = getArray(_curCfg >> "chest");

_classChest = (_chestArray select 0);
_posChest = (_chestArray select 1);

_curCfgChest = (missionConfigFile >> "CfgLittleBankSimple" >> "Config" >> "Chest" >> _classChest);

_distance = (player distance _posChest);

if (_distance > 3) exitWith {
	["Error", "Vous êtes trop loins du coffre de la banque !"] spawn life_fnc_showPredefinedNotification;
};

if (!(_build getVariable["open_vault2", false])) exitWith {};
if (!(_build getVariable["open_vault", false])) exitWith {};

_chest = nearestObjects [_posChest, [_classChest], 4] select 0;

if (_chest getVariable["on_open", ""] == (getPlayerUID player)) exitWith {[_chest] spawn life_fnc_bankSimpleOpenChest;};

if (_chest getVariable["rob", false]) exitWith {};

if (_chest getVariable["inRob", false]) exitWith {};

if (_chest getVariable["owner", getPlayerUID player] != (getPlayerUID player)) exitWith {};

if (isNil "bank_simple_nb_breaker") exitWith {["Error", "Vous n'êtes pas le poseur de bombe !"] spawn life_fnc_showPredefinedNotification;};

if (ITEM_VALUE("disqueuse") < 1 ) exitWith {
	["Error", "Il vous faut une disqueuse !"] spawn life_fnc_showPredefinedNotification;
};

_chest setVariable ["owner", getPlayerUID player, true]; 
_chest setVariable ["inRob", true, true];
_chest setVariable ["rob", true, true];

_textVar = getText(_curCfg >> "displayName");

_text = format["On essaye d'ouvrir le coffre de la banque de %1 !", _textVar];
[_text] remoteExecCall ["life_fnc_dynamicText", west];

_grinderCfg = (_curCfgChest >> "Grinder");
_grinderClass = getText(_grinderCfg >> "className");
_grinderPosition = getArray(_grinderCfg >> "position");
_grinderDir = getArray(_grinderCfg >> "dir");
_grinderEffects = getArray(_grinderCfg >> "effects");

_grinder = (_grinderClass createVehicle (position _chest));
_grinder attachTo [_chest, _grinderPosition];
_grinder setVectorDir _grinderDir;

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

_funcReset = {
	(_this select 0) setVariable ["inRob", nil,true];
	[(_this select 1)] spawn life_fnc_deleteVehicle;

	{
	  deleteVehicle _x;
	} forEach life_bank_simple_effects;

	life_bank_simple_effects = [];
	life_timer_stop = false;
};

if !(alive player) exitWith {
	[_chest, _grinder] call _funcReset;
};

if (life_istazed) exitWith {
	[_chest, _grinder] call _funcReset;
};

if (player getVariable ["restrained", false]) exitWith {
	[_chest, _grinder] call _funcReset;
};

["La disqueuse a besoin d'étre relancé."] spawn life_fnc_dynamicText;

life_bank_simple_wait_grinder = true;

while {life_bank_simple_wait_grinder} do {
	if !(alive player) exitWith {};
	if (life_istazed) exitWith {};
	sleep 0.4;
};

if !(alive player) exitWith {
	[_chest, _grinder] call _funcReset;
};

if (life_istazed) exitWith {
	[_chest, _grinder] call _funcReset;
};

if (player getVariable ["restrained", false]) exitWith {
	[_chest, _grinder] call _funcReset;
};

[_grinder, "disqueuse", 400] spawn life_fnc_playSound3DNear;

_time = time + ((1 * 60) + 15);
["C'est reparti..."] spawn life_fnc_dynamicText;

[((1 * 60) + 15)] spawn life_fnc_timerLaunch;

while {true} do {
	if(round(_time - time) < 1) exitWith {};
	if !(alive player) exitWith {};
	if (life_istazed) exitWith {};

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

life_bank_simple_effects = [];

_chest setVariable ["inRob", nil,true];

if !(alive player) exitWith {
	_chest setVariable ["owner", nil, true]; 
	_chest setVariable ["rob", nil, true];
};

if (life_istazed) exitWith {
	_chest setVariable ["owner", nil, true]; 
	_chest setVariable ["rob", nil, true];
};

if (player getVariable ["restrained", false]) exitWith {
	_chest setVariable ["owner", nil, true]; 
	_chest setVariable ["rob", nil, true];
};

if (_chest getVariable["owner", getPlayerUID player] != (getPlayerUID player)) exitWith {};

_items = (_chest getVariable ["items",[]]);

if (count (_items) <= 0) exitWith {
	["Error", "Il n'y a pas d'argent dans le coffre !"] spawn life_fnc_showPredefinedNotification;
};

_nb = 0;
{
	if ((_x distance _chest) < 30 && (alive _x) && (_x != player)) then {
		_nb = _nb + 1;
	};
} forEach (units group player);

if (_nb < bank_simple_nb_breaker) then {
	bank_simple_nb_breaker = _nb;
};

if (bank_simple_nb_breaker >= 10) then {
	[format ["La banque fait par %1, il y a %2 membres sur l'action", profileName, (bank_simple_nb_breaker)], getPlayerUID player] remoteExecCall ["TON_fnc_AlertAllAdmins",2];
	bank_simple_nb_breaker = 10;
};

for "_i" from 1 to bank_simple_nb_breaker do {
	_items pushBack "goldBar";
	_items pushBack "goldBar";
};

_chest setVariable ["items", _items, true];

diag_log format["Money: %1", str(_items)];

[_chest] spawn life_fnc_bankSimpleOpenChest;

_chest setVariable ["on_open", getPlayerUID player, true];
_chest setVariable ["rob_money", _items, true];
