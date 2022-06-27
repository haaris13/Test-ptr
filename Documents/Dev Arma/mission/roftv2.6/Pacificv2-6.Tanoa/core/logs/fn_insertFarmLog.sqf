#include "..\..\script_macros.hpp"
/*

	filename = insertFarmLog

*/
_type = [_this,0,"",[""]] call BIS_fnc_param;
_variable = [_this,1,"",[""]] call BIS_fnc_param;
_nb = [_this,2,1] call BIS_fnc_param;


[getPlayerUID player, _type, _variable, _nb] remoteExecCall ["TON_fnc_insertFarmLogs",RSERV];