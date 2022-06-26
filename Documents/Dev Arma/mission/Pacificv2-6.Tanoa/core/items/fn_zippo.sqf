#include "..\..\script_macros.hpp"
/*
	File: fn_zippo.sqf

	Autor:IronBlade		
*/
_target = cursorTarget;

if (_target isEqualTo objNull) exitWith {};
if (!(_target isKindOf "Man")) exitWith {};
if (!(isPlayer _target)) exitWith {};
if (!(alive _target)) exitWith {};
if (player distance _target > 5) exitWith {};
if (!(_target getVariable ["oil",false])) exitWith {};


[] spawn {
	while {dialog} do {
		closeDialog 0;
		sleep 0.01;
	};
};

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
sleep 3.5;

[false,"zippo",1] call life_fnc_handleInv;

[] remoteExecCall ["life_fnc_jerryBurnPlayer",_target];

["Accepted", "C'est Parti !"] spawn life_fnc_showPredefinedNotification;