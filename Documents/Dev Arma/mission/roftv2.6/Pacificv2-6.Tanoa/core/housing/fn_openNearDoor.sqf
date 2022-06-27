#include "..\..\script_macros.hpp"
/*


*/
_veh = cursorTarget;
_house = param [0,ObjNull,[ObjNull]];
if(isNull _house) exitWith {};
if(!(_house isKindOf "House_F")) exitWith {};

_door = [_house] call life_fnc_nearestDoor;

if(EQUAL(_door,0)) exitWith {["Error", localize "STR_House_Door_NotNear"] spawn life_fnc_showPredefinedNotification;};
_locked = _veh GVAR [format["bis_disabled_Door_%1",_door],0];

if(EQUAL(_locked,0)) then {
	_veh SVAR [format["bis_disabled_Door_%1",_door],1,true];
	_veh animate [format["door_%1_rot",_door],0];
	systemChat localize "STR_House_Door_Lock";
} else {
	_veh SVAR [format["bis_disabled_Door_%1",_door],0,true];
	_veh animate [format["door_%1_rot",_door],1];
	systemChat localize "STR_House_Door_Unlock";
};