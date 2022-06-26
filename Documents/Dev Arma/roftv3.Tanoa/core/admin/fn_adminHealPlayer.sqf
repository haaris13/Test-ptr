/*
	File:fn_adminHealPlayer.sqf

	Autor: IronBlade
*/
_admin = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _admin) exitWith {};

[_admin, player] call ace_medical_treatment_fnc_fullHealLocal;

life_thirst = 100;
life_hunger = 100;
[] call life_fnc_hudUpdate;

[format ["%1 Soigne %2", name _admin, profileName], getPlayerUID _admin, 6] remoteExecCall ["TON_fnc_logsAdmin",2];