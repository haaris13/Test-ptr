#include "..\..\script_macros.hpp"
/*
	File: fn_requestMedic.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	N/A
*/
private "_medicsOnline";
_medicsOnline = [];
{
  if (_x != player && {side _x == independent} && {alive _x}) then {
  	_medicsOnline pushBack _x;
  };
} forEach playableUnits;

life_corpse SVAR ["Revive",false,true]; //Set the corpse to a revivable state.
life_corpse setVariable ["wantRevive",true,true];
if ((count _medicsOnline) > 0) then {
	//There is medics let's send them the request.
	//[life_corpse,profileName] remoteExecCall ["life_fnc_medicRequest",_medicsOnline];
	[2] spawn max_callsmanage_fnc_deathMessage;

} else { 
	[1] spawn max_callsmanage_fnc_deathMessage;
  };
	

//Create a thread to monitor duration since last request (prevent spammage).
[] spawn  {
	((findDisplay 7300) displayCtrl 7303) ctrlEnable false;
	sleep (2 * 60);
	((findDisplay 7300) displayCtrl 7303) ctrlEnable true;
};
