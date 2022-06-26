#include "..\..\script_macros.hpp"
/*

	adminReceiveLog

*/
_log = [_this,0,"",[""]] call BIS_fnc_param;

//if(FETCH_CONST(life_adminlevel) < 4) exitWith {};

if (!((getPlayerUID player) in ["76561198059757685","76561198050669838"])) exitWith {};

if (!life_log_admin) exitWith {};

["LogAdmin",[_log]] call BIS_fnc_showNotification;