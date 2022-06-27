/*
	File:fn_droguePlayer.sqf

	Autor: IronBlade
*/
_target = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_drogue = [_this,1,"",[""]] call BIS_fnc_param;
if (_target isEqualTo objNull) exitWith {};

[false,_drogue,1] call life_fnc_handleInv;

// [true,"detecteur_balise",1] call life_fnc_handleInv;

[] spawn {
	while {dialog} do {
		closeDialog 0;
		sleep 0.01;
	};
};

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
sleep 2.5;

[_drogue] remoteExecCall ["life_fnc_drogueUse",_target];

// ["red"] remoteExecCall ["life_fnc_drogueUse",cursortarget];