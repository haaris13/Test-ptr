/*
	File: fn_subxp.sqf

	Autor:IronBlade
*/
_amount = [_this,0,0,[0]] call BIS_fnc_param;

if (_amount <= 0) exitWith {};
_oldLevel = life_playerlevel;

life_playerxp = life_playerxp - _amount;

if (life_playerxp < 0) then {
	life_playerxp = 0;
};

_xp = [] call life_fnc_checkXP;

if (life_playerlevel < _oldLevel) then {
	["LEVELSUB","",life_playerlevel] spawn life_fnc_eventFeed;
} else {
	if (life_playerlevel < 50) then {
		["XPSUB","",_amount] spawn life_fnc_eventFeed;
	};
};

[12] call SOCK_fnc_updatePartial;