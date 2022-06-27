/*
	File:fn_alcotestClient.sqf

	Autor:IronBlade
*/
_cop = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _cop) exitWith {};
if (!(alive _cop)) exitWith {};

_confs = [];

{

	_conf = _x select 0;

	_is = getNumber(missionConfigFile >> "Atouts" >> _conf >> "illegal");

	if (_is == 1) then {
		_confs pushBack _conf;
	};

} forEach life_atouts_actif;


[_confs, player] remoteExecCall ["life_fnc_returnAlcoTest",_cop];