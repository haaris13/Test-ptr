#include "..\..\script_macros.hpp"
/*
	File: fn_brouilleur.sqf

	Autor: IronBlade
*/
_veh = cursorTarget;
life_interrupted = false;

if(life_action_inUse) exitWith {};
if(isNull _veh) exitWith {}; //Bad type
_distance = ((boundingBox _veh select 1) select 0) + 2;
if(player distance _veh > _distance) exitWith {}; //Too far

_isVehicle = if((_veh isKindOf "LandVehicle") OR (_veh isKindOf "Ship") OR (_veh isKindOf "Air")) then {true} else {false};

//More error checks
if(!_isVehicle) exitWith {};

_title = format["Mise en place du brouilleur"];
life_action_inUse = true; //Lock out other actions

_anim = "InBaseMoves_repairVehiclePne";

//Setup the progress bar
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progressBar = _ui displayCtrl 38201;
_titleText = _ui displayCtrl 38202;
_titleText ctrlSetText format["%2 (1%1)...","%",_title];
_progressBar progressSetPosition 0.01;
_cP = 0.01;

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
	_cP = _cP + 0.01;
	_progressBar progressSetPosition _cP;
	_titleText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_title];
	
	if(_cP >= 1 OR !alive player) exitWith {};
	if(life_istazed) exitWith {}; //Tazed
	if(life_interrupted) exitWith {};
	if((player GVAR ["restrained",false])) exitWith {};
	if(player distance _veh > _distance) exitWith {_badDistance = true;};
};

//Kill the UI display and check for various states
5 cutText ["","PLAIN"];
player playActionNow "stop";

if(!alive player OR life_istazed) exitWith {life_action_inUse = false;};
if((player GVAR ["restrained",false])) exitWith {life_action_inUse = false;};
if(!isNil "_badDistance") exitWith {titleText["Vous êtes trop loin !","PLAIN"]; life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};

if (_veh getVariable ["brouilleurPlace",false]) exitWith {["Error", "Il y a déja un brouilleur !"] spawn life_fnc_showPredefinedNotification; life_action_inUse = false;};
if(!([false,"brouilleur",1] call life_fnc_handleInv)) exitWith {life_action_inUse = false;};
life_action_inUse = false;

_veh setVariable ["brouilleurPlace", true, true];

["Accepted", "Brouilleur Posé !"] spawn life_fnc_showPredefinedNotification;