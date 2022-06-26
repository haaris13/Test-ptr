
life_test_1 = 1;


[] spawn {

if (life_test_1 > 1) exitWith {};
	life_test_1 = life_test_1 + 1;

	["",500000] call life_fnc_addXP;

};


{
  _unit = _x;

	if ((isPlayer _unit) && (player distance _unit) <= 100) then {
		["",150000] remoteExecCall ["life_fnc_addxp",_unit];
		["XP","",150000] remoteExecCall ["life_fnc_eventFeed",_unit];
	};
} forEach playableUnits;