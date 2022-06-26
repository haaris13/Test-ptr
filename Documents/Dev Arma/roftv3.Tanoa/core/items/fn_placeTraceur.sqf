#include "..\..\script_macros.hpp"
/*
	File: fn_placeTraceur.sqf

	Autor: IronBlade
*/
_veh = cursorTarget;
life_interrupted = false;

if((FETCH_CONST(life_coplevel) < 1 )) exitWith {hint format ["Désolé %1 , mais tu n'a pas le droit d'utiliser l'objet. Tu doit être un Policier. ",(name player)]}; //de base 5 modifié par alharis

if(life_action_inUse) exitWith {hint "tu est déja occupé !";};
if(isNull _veh) exitWith {hint "Tu ne vise pas un vehicule ou tu peux mettre le traceur"}; //Bad type
_distance = ((boundingBox _veh select 1) select 0) + 2;
if(player distance _veh > _distance) exitWith {hint format ["Désolé %1 mais tu est trop loin du vehicule pour mettre le traceur.",(name player)];}; //Too far

_isVehicle = if((_veh isKindOf "LandVehicle") OR (_veh isKindOf "Ship") OR (_veh isKindOf "Air")) then {true} else {false};

//More error checks
if(!_isVehicle) exitWith {hint format ["Désolé %1 , mais tu ne peux mettre que les traceurs sur des bateaux, des voitures , des camions ou des vehicules aériens.",(name player)]};

_title = "Mise en place du traceur";
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
if(!isNil "_badDistance") exitWith {titleText["Vous étes trop loin !","PLAIN"]; life_action_inUse = false;};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"]; life_action_inUse = false;};
if(!([false,"traceur",1] call life_fnc_handleInv)) exitWith {life_action_inUse = false;};

life_action_inUse = false;

[_veh,player] remoteExecCall ["TON_fnc_placeTraceur",RSERV];

hint "Traceur Posé !";