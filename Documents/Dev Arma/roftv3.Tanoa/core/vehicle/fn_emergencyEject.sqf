/*
	Auteur : IronBlade

	Desc : 
*/

if (!alive player) exitWith {};

if((player getVariable ["restrained",FALSE])) exitWith {hint "Vous étes menotté !";};

private ["_veh", "_push", "_vecDir","_wait", "_pos", "_para"];

_veh = vehicle player;
if (_veh == player) exitWith {};

moveOut player;

if (((position player) select 2) < 3) exitWith {};

player allowDamage false;

if (_veh isKindOf "Plane") then
{
	player setDir getDir _veh;
	_push = (vectorUp _veh) vectorMultiply 40; // Simulate ejection avion
} else {
	if ((getPos _veh) select 2 > 4) then
	{
		_vecDir = (getPosASL player) vectorDiff (getPosASL _veh);
		_push = _vecDir vectorMultiply (5 / vectorMagnitude _vecDir); // Eloigne de 5m
	};
};

if (!isNil "_push") then
{
	player setVelocity ((velocity player) vectorAdd _push);
};

_wait = false;

waitUntil {sleep 0.5; ((position player) select 2) < 200};

_para = "Steerable_Parachute_F" createVehicle position player;
_para setpos position player;
_para setdir direction player;
_vel = velocity player;
player moveindriver _para;
_para lock false;

_para setvelocity [(_vel select 0),(_vel select 1),(_vel select 2)];

bis_fnc_halo_DynamicBlur = ppeffectcreate ["DynamicBlur",464];
bis_fnc_halo_DynamicBlur ppEffectEnable true;
bis_fnc_halo_DynamicBlur ppEffectAdjust [8.0];
bis_fnc_halo_DynamicBlur ppEffectCommit 0;
bis_fnc_halo_DynamicBlur ppEffectAdjust [0.0];
bis_fnc_halo_DynamicBlur ppEffectCommit 1;

sleep 4;

ppeffectdestroy bis_fnc_halo_DynamicBlur;

waituntil {(position vehicle player select 2) < 2};