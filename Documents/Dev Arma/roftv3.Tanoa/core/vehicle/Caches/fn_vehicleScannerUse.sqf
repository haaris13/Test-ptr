#include "..\..\..\script_macros.hpp"
/*
	File:fn_vehicleScannerUse.sqf

	Autor:IronBlade
*/

_veh = cursorTarget;

[] spawn {
	while {dialog} do {
		closeDialog 0;
		sleep 0.01;
	};
};

_player = false;

if (isNull _veh) then {
	_player = true;
	_veh = player;
};

_isVehicle = if((_veh isKindOf "landVehicle") OR (_veh isKindOf "Ship")) then {true} else {false};
if(!_isVehicle && !_player) exitWith {closeDialog 0; hint "Aucun Véhicule à proximité !";};

if((time - life_action_scanner) < (60 * 2)) exitWith {hint "Le Scanner est en cours de Recharge !";};
life_action_scanner = time;

if ((time - (_veh getVariable["time_scaner",(time - (70 * 2))])) < (60 * 2)) exitWith {hint "Le Scanner est en cours de Recharge !";};
_veh setVariable ["time_scaner", time, true];

life_action_inUse = true;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Recherche...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.002;

// border_out, border_in

_units = [];

{
 	_unit = _x;

	if ((isPlayer _unit) && (player distance _unit) <= 40) then {
		_units pushBack _unit;
	};
} forEach playableUnits;

[_units] spawn {
	_units = _this select 0;

	uiSleep 3;

	[player,"Transition2"] remoteExecCall ["life_fnc_playSound3D",_units];
	uiSleep 2.5;
	for "_i" from 0 to 8 do {
		[player,"Transition1"] remoteExecCall ["life_fnc_playSound3D",_units];
		sleep 2.5;
	};
};

while{true} do {
	if(animationState player != "InBaseMoves_repairVehiclePne") then {
		[player,"InBaseMoves_repairVehiclePne",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "InBaseMoves_repairVehiclePne";
		player playMoveNow "InBaseMoves_repairVehiclePne";
	};

	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
	if(dialog) exitWith {};
};

//Stop player
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(dialog) exitWith {life_action_inUse = false; life_action_gathering = false;};
if(life_interrupted) exitWith {life_interrupted = false; player playActionNow "stop"; titleText["Recherche interrompu","PLAIN"]; life_action_inUse = false; life_action_gathering = false;};
if(player != vehicle player) exitWith {life_action_inUse = false; life_action_gathering = false;};
life_action_inUse = false;

if (_veh == player) exitWith {

	if (life_clientMouchard) then {
		hint "Un Mouchard a été détécté !";
		[true,"mouchard",1] call life_fnc_handleInv;
	};

	life_clientMouchard = false;
};

_caches = (_veh getVariable ["trunk_caches", []]);

if (count _caches == 0) exitWith {hint "Rien d'anormal à signalé !";};

_detect = false;

{
	_cfg = _x select 0;
	_inv = _x select 1;

	_nbIn = 0;

	{
		_nameItem = _x select 0;
		_nb = _x select 1;

		_nbIn = _nbIn + _nb;
	} forEach _inv;

	if (_nbIn > 0) then {
		_chance = getNumber(missionConfigFile >> "CfgVehicleCaches" >> _cfg >> "pdetecte");
		_rand = random 100;
		if (_rand < _chance) then {
			_detect = true;
		};
	};

	if (_detect) exitWith {};
	
} forEach _caches;

if (_detect) then {
	hint "Quelque chose semble suspect...";
} else {
	hint "Rien d'anormal a signaler !";
};