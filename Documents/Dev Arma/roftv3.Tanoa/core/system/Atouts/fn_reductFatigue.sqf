/*
	file: fn_reductFatigue.sqf

	Autor: IronBlade
*/
_atout = [_this,0,"",[""]] call BIS_fnc_param;

_fatigue = life_fatigue;

switch (_atout) do { 
	case "" : {_fatigue = 0.4;};  
};

while {true} do {
	uiSleep 3;

	if (_fatigue < (getFatigue player)) then {
            player setFatigue _fatigue;
    };

	if (!([_atout] call life_fnc_hasAtouts)) exitWith {};
};