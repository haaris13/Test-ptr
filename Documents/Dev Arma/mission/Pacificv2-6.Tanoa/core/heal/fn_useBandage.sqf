/*
	File:fn_useBandage.sqf

	Autor:IronBlade
*/

if (isNull life_mode_medic_civ) exitWith {};
if (!([false,"bandage",1] call life_fnc_handleInv)) exitWith {["Error", "Bandage nécésaire !"] spawn life_fnc_showPredefinedNotification;};

if (life_mode_medic_civ getVariable ["bandage",false]) exitWith {["Error", "Le patient est déja bandé !"] spawn life_fnc_showPredefinedNotification;};

life_mode_medic_civ setVariable ["bandage", true, true];

_val = switch (true) do { 
	case (life_medic_canRevive  == 0) : {0};
	case (life_medic_canRevive  <= 20) : {5};
	case (life_medic_canRevive  <= 50) : {10};
	case (life_medic_canRevive  <= 90) : {10};
	case (life_medic_canRevive  <= 100) : {10};
};


life_medic_canRevive = life_medic_canRevive + _val;

if (life_medic_canRevive > 100) then {life_medic_canRevive = 100};

sleep 3;

["Accepted", "Bandage appliqué !"] spawn life_fnc_showPredefinedNotification;