/*
	File:fn_alcotest.sqf

	Autor:IronBlade
*/
_player = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _player) exitWith {};
if (!(alive _player)) exitWith {};
if (player distance _player > 4) exitWith {};
	
if(!([false,"alcotest",1] call life_fnc_handleInv)) exitWith {};

/*
_units = [];

{
 	_unit = _x;

	if ((isPlayer _unit) && (player distance _unit) <= 300) then {
		_units pushBack _unit;
	};
} forEach playableUnits;

[_player,"Souffle"] remoteExecCall ["life_fnc_playSound3D",_units];

*/

sleep 3;

[player] remoteExecCall ["life_fnc_alcotestClient",_player];