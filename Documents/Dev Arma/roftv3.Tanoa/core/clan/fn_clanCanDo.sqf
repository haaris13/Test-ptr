/*
	File: fn_clanCanDo.sqf

	Autor: IronBlade
*/
_cfgCan = [_this, 0, "" ,[""]] call BIS_fnc_param;

if (playerSide != civilian) exitWith {false;};

_canDo = false;
if !(isnil{group player getVariable "clan_id"}) then {
	_currentRank = [] call life_fnc_clanGetRank;
	_canDoList = getArray(_currentRank >> "canDo");

	if (_cfgCan in _canDoList) then {
		_canDo = true;
	};
};

_canDo;