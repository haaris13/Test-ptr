#include "..\..\script_macros.hpp"
/*
	Author: IronBlade

	Description:
	Arsenal for Cop
*/
private["_container"];

_container = SEL(_this,0);

if(isNull _container) exitWith {true;}; //MEH

_uidP = getPlayerUID player;

_uid = _container getVariable ["uidUse","0"];

if (_uid != "0" && _uid != _uidP) exitWith {hint "En cours d'utilisation !.."; true;};

_container setVariable ["uidUse",_uidP, true];

_uid = _container getVariable ["uidUse","0"];

if (_uidP != _uid) exitWith {hint "En cours d'utilisation !"; true;};


[_container, getPlayerUID player] remoteExecCall ["TON_fnc_addArsenal",RSERV];

//waitUntil {(_container getVariable ["placedUID","0"] == getPlayerUID player) };

false;