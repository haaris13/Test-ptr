#include "..\..\script_macros.hpp"
/*
	File: fn_healMedic.sqf
	Author: IronBlade
	
	Description:
	
*/
private["_target","_revivable","_targetName","_ui","_progressBar","_titleText","_cP","_title","_fee","_firstAidSkill","_reviveCost"];
_target = param [0,ObjNull,[ObjNull]];
if(isNull _target) exitWith {}; //DAFUQ?@!%$!R?EFFD?TGSF?HBS?DHBFNFD?YHDGN?D?FJH

_revivable = _target GVAR ["Revive",FALSE];
if(_revivable) exitWith {};
if(_target GVAR ["Reviving",ObjNull] == player) exitWith {hint localize "STR_Medic_AlreadyReviving";};
if(player distance _target > 5) exitWith {}; //Not close enough.
if (life_medic_canRevive < 0) exitWith {hint "Un Check Up est nécésaire avant un massage cardiaque !"};
if (_target getVariable ["executed", false]) exitWith {hint "Cette personne est décédée";};


_reviveCost = LIFE_SETTINGS(getNumber,"revive_fee");


//Fetch their name so we can shout it.
_targetName = _target GVAR ["name","Unknown"];
_title = format[localize "STR_Medic_Progress"];
life_action_inUse = true; //Lockout the controls.

_target SVAR ["Reviving",player,TRUE];
//Setup our progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS ["life_progress",displayNull];
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

//Lets reuse the same thing!
while {true} do {
	
	sleep .15;
	_cP = _cP + .01;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_istazed) exitWith {}; //Tazed
	if(life_interrupted) exitWith {};
	if((player GVAR ["restrained",false])) exitWith {};
	if(player distance _target > 4) exitWith {_badDistance = true;};
	if(_target GVAR ["Revive",FALSE]) exitWith {};
	if(_target GVAR ["Reviving",ObjNull] != player) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";

if(_target GVAR ["Reviving",ObjNull] != player) exitWith {hint localize "STR_Medic_AlreadyReviving"};
_target SVAR ["Reviving",NIL,TRUE];

if(!alive player OR life_istazed) exitWith {life_action_inUse = false;};
if(_target GVAR ["Revive",FALSE]) exitWith {hint localize "STR_Medic_RevivedRespawned"};
if((player GVAR ["restrained",false])) exitWith {life_action_inUse = false;};
if(!isNil "_badDistance") exitWith {titleText[localize "STR_Medic_TooFar","PLAIN"]; life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};

_rand = random(100);

if (life_medic_canRevive < _rand || life_medic_canRevive == 0) exitWith {
	
	["La réanimation a échouée, le patient est décédée.."] call life_fnc_dynamicText;
	sleep 5;
	_target setVariable ["executed", true, true];
	life_mode_medic = false;
};

if (life_medic_canRevive >= 80) then {
	["Réanimation réussie !"] call life_fnc_dynamicText;
} else {
	["Réanimation réussie, il est salement touché, amenez le vite a l'hopital !"] call life_fnc_dynamicText;
};

//Add money, level skill
ADD(BANK,_reviveCost);
["revive"] call life_fnc_addXP;

life_action_inUse = false;
_target SVAR ["Revive",TRUE,TRUE];
[profileName, false, life_medic_canRevive] remoteExecCall ["life_fnc_revived",_target];

sleep 0.6;
player reveal _target;

life_mode_medic = false;