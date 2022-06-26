#include "..\..\script_macros.hpp"
/* 
	File: fn_safeFix.sqf
		
	Author: Tonic, IronBlade
	    
	Description:
		- Repairs a broken vault/locked heist related object

*/

private ["_vault"];
_target = SEL(_this,0);
if ((_target isEqualTo goldmine_safe) && (!(_target GVAR ["safe_open",false]))) exitWith {hint localize "STR_Cop_VaultLocked"};
if ((_target isEqualTo jewelers_safe) && (!(_target GVAR ["lockBroken",false]))) exitWith {hint "You cannot repair this."};
if ((_target isEqualTo nicoletbank_lockup) && (!(_target GVAR ["lockBroken",false]))) exitWith {hint "You cannot repair this"};

life_action_inUse = true;

//Setup the progress bar
disableSerialization;
_title = localize "STR_Cop_RepairVault";
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

while {true} do {
	if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
		[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
		player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
	};
	
	sleep 0.26;
	
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + .012;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_interrupted) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player) exitWith {life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; 
titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};

life_action_inUse = false;

switch (_target) do {
	case goldmine_safe : {_target setVariable ["safe_open",false,true]};
	case jewelers_safe : {_target setVariable ["lockBroken",false,true]};
	case nicoletbank_lockup : {_target setVariable ["lockBroken",false,true]; cursorObject animate [format["door_1_rot", _i], 0];};
	default {_target setVariable ["lockBroken",false,true]; _target setVariable ["safe_open",false,true]};

};

hint format ["Repair complete."];