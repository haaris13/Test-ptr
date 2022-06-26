#include "..\..\script_macros.hpp"
/*
	File: fn_jerryBurnTarget.sqf

	Autor:IronBlade		
*/
_target = cursorTarget;

[] spawn {
	while {dialog} do {
		closeDialog 0;
		sleep 0.01;
	};
};

if (!(_target isKindOf "Man")) exitWith {};
if (!(isPlayer _target)) exitWith {};
if (!(alive _target)) exitWith {};
if (player distance _target > 5) exitWith {};
if(!([false,"fuelFull",1] call life_fnc_handleInv)) exitWith {};

life_interrupted = false;
life_action_inUse = true;

_upp = "Préparation pour le bûcher";


//Setup our progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.015;

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	sleep 0.2;
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + 0.01;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if (_cP >= 1) exitWith {};
	if (!alive player) exitWith {};
	if (life_interrupted) exitWith {};
	if (player distance _target > 5) exitWith {};
};
life_action_inUse = false;
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player) exitWith {};
if (player distance _target > 5) exitWith {};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"];};


[true,"fuelEmpty",1] call life_fnc_handleInv;

_target setVariable ["oil",true,true];