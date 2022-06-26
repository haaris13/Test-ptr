#include "..\..\script_macros.hpp"
/*
	File:fn_saboterVeh.sqf

	Autor:IronBlade
*/

_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _vehicle) exitWith {}; //Bad type
if (count crew _vehicle != 0) exitWith {["Error", "Quelqu'un est présent dans le véhicule !"] spawn life_fnc_showPredefinedNotification;};
life_interrupted = false;
if(life_action_inUse) exitWith {};
_distance = ((boundingBox _veh select 1) select 0) + 2;
if(player distance _veh > _distance) exitWith {}; //Too far

_isVehicle = if((_vehicle isKindOf "LandVehicle") OR (_vehicle isKindOf "Ship") OR (_vehicle isKindOf "Air")) then {true} else {false};
//More error checks
if(!_isVehicle) exitWith {};

_title = "Sabotage en cours.";
life_action_inUse = true; //Lock out other actions

[200] call life_fnc_subXP;

_anim = "InBaseMoves_repairVehiclePne";

//Setup the progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.005;

while {true} do
{
	if (animationState player != _anim) then {
		[player,_anim,true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove _anim;
		player playMoveNow _anim;
	};
	
	sleep 0.26;
	
	if(isNull _ui) then {
		5 cutRsc ["life_progress","PLAIN"];
		_ui = GVAR_UINS "life_progress";
		_progressBar = _ui displayCtrl 38201;
		_titleText = _ui displayCtrl 38202;
	};
	_cP = _cP + 0.005;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_istazed) exitWith {}; //Tazed
	if(life_interrupted) exitWith {};
	if((player getVariable ["restrained",false])) exitWith {};
	if(player distance _vehicle > _distance) exitWith {_badDistance = true;};
	if(player != vehicle player) exitWith {};
	if (life_earthquake) exitWith {};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";

if(!alive player OR life_istazed) exitWith {life_action_inUse = false;};
if (life_earthquake) exitWith {life_action_inUse = false;};
if((player GVAR ["restrained",false])) exitWith {life_action_inUse = false;};
if(!isNil "_badDistance") exitWith {titleText["Vous êtes trop loin !","PLAIN"]; life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
if(player != vehicle player) exitWith {life_action_inUse = false;};

life_action_inUse = false;

if (local _vehicle) then {
	_vehicle setHit ["motor", 1];
	_vehicle setHit ["engine_hit", 1];
	_vehicle setHit ["engine", 1];
} else {
	_owner = owner _vehicle;
	[_vehicle, "motor"] remoteExecCall ["TON_fnc_SetHit", _owner];
	[_vehicle, "engine_hit"] remoteExecCall ["TON_fnc_SetHit", _owner];
	[_vehicle, "engine"] remoteExecCall ["TON_fnc_SetHit", _owner];
};


["Accepted", "Moteur Saboté !"] spawn life_fnc_showPredefinedNotification;