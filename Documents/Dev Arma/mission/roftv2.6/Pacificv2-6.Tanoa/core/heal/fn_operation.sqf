#include "..\..\script_macros.hpp"
/*
	File:fn_operation.sqf

	Autor:IronBlade
*/
_civ = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (player distance _civ > 5) exitWith {};

life_action_inUse = true;
sleep 0.1;
life_interrupted = false;

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Opération...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.02;
_bad = false;

while{true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};

	sleep 0.5;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {_bad = true;};
	if(player != vehicle player) exitWith {_bad = true;};
	if(life_interrupted) exitWith {_bad = true;};
	if(dialog) exitWith {_bad = true;};
	if(player distance _civ > 5) exitWith {_bad = true;};
};

5 cutText ["","PLAIN"];
player playActionNow "stop";
life_action_inUse = false;

if(_bad) exitWith {["Error", "Opération Annulée.."] spawn life_fnc_showPredefinedNotification;};


_civ setVariable ["op",true,true];

_civ setVariable ["morphine",nil,true];
_civ setVariable ["bandage",nil,true];

_civ setDamage 0;

["Opération réussie !"] call life_fnc_dynamicText;