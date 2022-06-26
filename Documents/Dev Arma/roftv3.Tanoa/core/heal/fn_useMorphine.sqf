/*
	File: fn_useMorphine.sqf

	Autor: IronBlade
*/
_civ = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (!([false,"morphine",1] call life_fnc_handleInv)) exitWith {hint "La Morphine est nécésaire !"};

if (_civ getVariable ["morphine",false]) exitWith {hint "Le patient a déja un coup de morphine !"};

_civ setVariable ["morphine",true,true];

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
sleep 2.5;

["morphine",true] remoteExecCall ["life_fnc_launchAtouts", _civ];