/*
	File: fn_transfertVehValidReceive.sqf

	Autor: Iron
*/
_good = [_this, 0, false, [false]] call BIS_fnc_param;
_type = [_this, 1, "", [""]] call BIS_fnc_param;

life_trans_on = false;

if (!_good) exitWith {
	if (_type == "legal") then {
		["Error", "Les papiers du véhicules sont introuvable, vous étes sur qu'il est légal ?"] spawn life_fnc_showPredefinedNotification;
	} else {
		["Error", "C'est un véhicule légal, allez a la préfecture pour faire ça !"] spawn life_fnc_showPredefinedNotification;
	};
};

[life_trans_veh] spawn life_fnc_keyRemove;

_class = (typeOf life_trans_veh);

if (!(isNil "life_trans_veh_price")) then {
	if (life_trans_veh_price > 0) then {
		life_atmbank = life_atmbank - life_trans_veh_price;
		[1] call SOCK_fnc_updatePartial;
		[player, life_trans_veh_price] remoteExecCall ["TON_fnc_gouvTaxesPay", 2];
	};
};

["Accepted", "Les papiers ont été signé, le véhicule ne vous appartient plus désormais."] spawn life_fnc_showPredefinedNotification;
["sellveh", 200] call life_fnc_addXP;

if (([] call life_ocasLevel) >= 1) then {
	if ((player distance (getMarkerPos "ocas_spawn") <= 100)) then {
		["sellveh_ocas", 700] call life_fnc_addXP;
	};
};