#include "..\..\script_macros.hpp"
/*
	File: fn_vehPlaceTraceur.sqf

	Autor: IronBlade
*/

_vehicle = cursorTarget;

// if(playerSide != civilian) exitWith {closeDialog 0;}; // inutile car on veux pas qu'il n'y ait que les civils qui puisse poser

if(isNull _vehicle) exitwith { hint "Aucun véhicule à proximité !";};
if !((_vehicle isKindOf "Car") OR (_vehicle isKindOf "Ship") OR (_vehicle isKindOf "Air")) exitWith { hint "Aucun véhicule détécté à proximité !";};

if !(_vehicle in life_vehicles) exitWith {hint "Vous n'avez pas les clef de ce véhicule !";};

//_distance = ((boundingBox _vehicle select 1) select 0) + 2;
if (player distance _vehicle > 5) exitWith {}; //Too far
if !(["traceur"] call life_fnc_hasPerk) exitWith {};

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_upp = "Mise en place du Traceur";
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0;
_cpRate = 0.01;

playSound "Acts_carFixingWheel";
playSound "Acts_carFixingWheel";

_sound = false;

while{true} do {
	if (animationState player != "InBaseMoves_assemblingVehicleErc") then { // AinvPknlMstpSnonWnonDnon_medic_1 // InBaseMoves_assemblingVehicleErc
		[player,"InBaseMoves_assemblingVehicleErc",true] remoteExecCall ["life_fnc_animSync",RCLIENT];
		player switchMove "InBaseMoves_assemblingVehicleErc";
		player playMoveNow "InBaseMoves_assemblingVehicleErc";
	};
	
	sleep 0.27;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];

	if(_cP >= 0.5 && !_sound) then {_sound = true; playSound "Acts_carFixingWheel"; playSound "Acts_carFixingWheel";};

	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if(player != vehicle player) exitWith {};
	if(life_interrupted) exitWith {};
	if(player distance _vehicle > _distance) exitWith {};
};

life_action_inUse = false;
5 cutText ["","PLAIN"];
player playActionNow "stop";
if(player distance _vehicle > _distance) exitWith {};
if(life_interrupted) exitWith {life_interrupted = false; titleText[localize "STR_NOTF_ActionCancel","PLAIN"];};
if(player != vehicle player) exitWith {hint "Impossible dans un véhicule !";};

_marker = format["traceur_veh_%1_%2",typeOf _vehicle, str(floor(random 50))];

_marker = createMarkerLocal [_marker, position _vehicle];
_marker setMarkerColorLocal "ColorRed";
_marker setMarkerShapeLocal "ICON";

_displayName = FETCH_CONFIG2(getText,CONFIG_VEHICLES,(typeOf _vehicle),"displayName");

_marker setMarkerTextLocal (format["Traceur: %1", _displayName]);
_marker setMarkerTypeLocal "mil_destroy";
_marker setMarkerPosLocal (position _vehicle);

[false,"traceur",1] call life_fnc_handleInv;

_vehicle setVariable ["traceurPlaced_civ",1, true];

hint "Traceur Placé !";

[1000] call life_fnc_subXP;
[12] call SOCK_fnc_updatePartial;

while{true} do {
	uiSleep 10;

	if (!isNull _vehicle) then {
		_marker setMarkerPosLocal (position _vehicle);
	};

	if (!(alive _vehicle) || isNull _vehicle || (_vehicle getVariable ["traceurPlaced_civ", 0]) == 0) exitWith {};
};

deleteMarkerLocal _marker;

