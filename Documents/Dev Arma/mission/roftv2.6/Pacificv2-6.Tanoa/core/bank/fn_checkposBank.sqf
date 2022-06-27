#include "..\..\script_macros.hpp"
/*

	Name: CheckPosBank

*/

while {true} do {
  uiSleep 10;

  _distance1 = player distance (getMarkerPos "lbank_1");
  _distance2 = player distance (getMarkerPos "fed_spawn_1");


  if (_distance1 <= 100 && !life_banck_rob && !(player getVariable ["restrained",false]) ) then {

  	[] remoteExecCall ["TON_fnc_alarmBank",RSERV];
  };
};