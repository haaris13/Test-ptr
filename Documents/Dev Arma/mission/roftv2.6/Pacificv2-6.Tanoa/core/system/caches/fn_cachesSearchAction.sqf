/*
	File: fn_cachesSearchAction.sqf

	Autor: Iron
*/
if (vehicle player != player) exitWith {};

if (surfaceIsWater position player) exitWith {diag_log "On water";};

_surface = surfaceType (position player);

_cfgCaches = (missionConfigFile >> "CfgCaches" >> "Config");
_surfaces = getArray(_cfgCaches >> "surfaces");

if (!(_surface in _surfaces)) exitWith {diag_log ["Not good surface %1", _surface];};

if (life_action_inUse) exitWith {};
life_action_inUse = true;
sleep 0.1;
life_interrupted = false;

//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_upp = "Creuser...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;

_cpRate = 0.01;

[player, "shovel", 25] spawn life_fnc_playSound3DNear;

while {true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync", -2];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
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

if (dialog) exitWith {life_action_inUse = false;};
if (player != vehicle player) exitWith {life_action_inUse = false;};

if(life_interrupted) exitWith {
	life_interrupted = false;
	player playActionNow "stop"; 
	titleText["Interrompu","PLAIN"]; 
	life_action_inUse = false;
};

uiSleep (random 2);

life_action_inUse = false;

_surface = [_surface, 1, (count _surface) - 1] call BIS_fnc_trimString;
[player, _surface] remoteExec ["TON_fnc_cachesFind", 2];