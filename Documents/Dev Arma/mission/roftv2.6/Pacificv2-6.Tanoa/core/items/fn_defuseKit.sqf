#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Defuses blasting charges for the cops?
*/
private["_vault","_ui","_title","_progressBar","_cP","_titleText"];

_bankNear = ([] call life_fnc_bankNear);

if (count _bankNear == 0) exitWith {
	["Error", "Vous n'êtes pas près d'une banque !"] spawn life_fnc_showPredefinedNotification;
};

_build = (_bankNear select 1);
_posDoor1 = (_build modelToWorld (_build selectionPosition "Vault_Interact"));
_distance = (player distance (_build modelToWorld (_build selectionPosition "Vault_Interact")));

if (_distance > 3) exitWith {
	["Error", "Vous êtes trop loins de la porte du coffre de la banque !"] spawn life_fnc_showPredefinedNotification;
};

life_action_inUse = true;
//Setup the progress bar
disableSerialization;

_title = localize "STR_ISTR_Defuse_Process";
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

while {true} do
{
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
	_cP = _cP + .0035;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_interrupted) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(!alive player) exitWith {life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
life_action_inUse = false;

_build setVariable ["open_vault", false, true];
_build setVariable ["open_vault2", false, true];
_build setVariable ["chargeplaced_vault", false, true];

_build animate ["Vault_Door", 0];
_build animate ["Door_5", 0];