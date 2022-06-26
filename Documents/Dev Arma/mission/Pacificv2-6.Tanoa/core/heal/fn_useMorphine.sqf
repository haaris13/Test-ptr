/*
	File: fn_useMorphine.sqf

	Autor: IronBlade
*/
_civ = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (!([false,"morphine",1] call life_fnc_handleInv)) exitWith {["Error", "La Morphine est nécésaire !"] spawn life_fnc_showPredefinedNotification;};

if (_civ getVariable ["morphine",false]) exitWith {["Error", "Le patient a déjà un coup de morphine !"] spawn life_fnc_showPredefinedNotification;};

_civ setVariable ["morphine",true,true];

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
sleep 2.5;

[] remoteExecCall ["life_fnc_morphine", _civ];