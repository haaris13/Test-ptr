#include "..\..\script_macros.hpp"
/*
	File:fn_clanCreated.sqf

	Autor:IronBlade
*/
private "_group";
life_action_clanInUse = nil;

_price = (LIFE_SETTINGS(getNumber,"gang_price"));

life_atmbank = life_atmbank - _price;
[1] call SOCK_fnc_updatePartial;

hint format["Vous avez créé le clan %1 !", (group player) getVariable "clan_name"];