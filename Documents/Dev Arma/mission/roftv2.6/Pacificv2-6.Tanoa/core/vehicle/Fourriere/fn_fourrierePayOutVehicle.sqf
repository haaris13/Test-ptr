/*
	File: fn_fourrierePayOutVehicle.sqf

	Autor: Iron
*/
diag_log "fn_fourrierePayOutVehicle";
_idVeh = [_this, 0, -1, [0]] call BIS_fnc_param;
_class = [_this, 1, "", [""]] call BIS_fnc_param;

if (([] call life_fnc_fourriereNbPlayers) > 0) exitWith {
	[
		"Error", 
		"Impossible, allez voir la société de dépannage ou contactez la 120."
	] spawn life_fnc_showPredefinedNotification;
};

if (life_fourriere_on_payout) exitWith {};

_classVeh = (missionConfigFile >> "LifeCfgVehicles" >> _class);
_price = getNumber(_classVeh >> "insurance");

if (_price > life_atmbank) exitWith {
	[
		"Error",
		format["Vous n'avez pas l'argent nécessaire sur le compte en banque ! Manque: %1", [(_price - life_atmbank)] call life_fnc_numberText]
	] spawn life_fnc_showPredefinedNotification;
};

life_fourriere_on_payout = true;

life_atmbank = life_atmbank - _price;
[1] call SOCK_fnc_updatePartial;

[_idVeh, player] remoteExec ["TON_fnc_fourrierePayOutVehicle", 2];
closeDialog 0;