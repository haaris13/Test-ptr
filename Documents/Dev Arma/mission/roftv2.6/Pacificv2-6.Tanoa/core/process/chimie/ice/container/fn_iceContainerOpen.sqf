#include "..\..\..\..\script_macros.hpp"
#include "script_ice_container.hpp"
/*
	File: fn_iceContainerOpen.sqf

	Autor:IronBlade
*/
if (life_action_inUse) exitWith {};
if (playerside != civilian) exitWith {};
if (vehicle player != player) exitWith {};

_type = _this select 3;

if (_type == "") exitWith {};

disableSerialization;
createDialog 'Ice_Container';

life_iceChimie_type = _type;
life_iceChimie_compo = missionNamespace getVariable[format["ice_compo_%1", life_iceChimie_type], [[],[]]];

[] spawn life_fnc_iceContainerDiag;