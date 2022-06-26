/* 
	File: fn_spawnIndicator.sqf
	
	Author: IronBlade
*/

if (isNull _this) exitWith {};

_oldPos = position _this;
_bb = boundingBox _this;
_hOffsetOrigin = (_bb select 1) select 2;
_vpOrigin = visiblePosition _this;

[_this] spawn BIS_fnc_VRSpawnEffect;

_type = [
	"VR_3DSelector_01_default_F","VR_3DSelector_01_incomplete_F","VR_3DSelector_01_complete_F",
	"VR_3DSelector_01_exit_F"
] call BIS_fnc_selectRandom;


_arrow = _type createVehicleLocal [0,0,0];
for "_i" from 0 to 40 do {
	if((position _this) distance _oldPos > 3) exitWith {};
	_newPos = _vpOrigin vectorAdd[0,0,_hOffsetOrigin + 0.6];
	_arrow setPos _newPos;
	_arrow setDir Getdir _arrow + 5;
	for "_i" from 0 to 5 do {
		if((position _this) distance _oldPos > 3) exitWith {};
		_newPos = _vpOrigin vectorAdd[0,0,_hOffsetOrigin + 0.6 - _i/10];
		_arrow setPos _newPos;
		_arrow setDir Getdir _arrow + 5;
		sleep 0.05;
	};
	for "_i" from 0 to 5 do {
		if((position _this) distance _oldPos > 3) exitWith {};
		_newPos = _vpOrigin vectorAdd[0,0,_hOffsetOrigin + 0.3 + _i/10];
		_arrow setPos _newPos;
		_arrow setDir Getdir _arrow + 5;
		sleep 0.05;
	};
};
deleteVehicle _arrow;