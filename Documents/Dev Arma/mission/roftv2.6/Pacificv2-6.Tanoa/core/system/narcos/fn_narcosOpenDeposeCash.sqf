/*
	File: fn_narcosOpenDeposeCash.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:23:43
	Version: 0.1
*/
_group = group player;

if (isnil {_group getVariable "clan_id"}) exitWith {
	["Error", "Il vous faut un clan pour faire cela."] spawn life_fnc_showPredefinedNotification;
};

disableSerialization;
createDialog 'Narcos_Cash_Depose';