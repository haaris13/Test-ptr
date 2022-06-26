/*
	File: fn_insurgeOpenDeposeCash.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:23:27
	Version: 0.1
*/
_group = group player;

if (isnil {_group getVariable "clan_id"}) exitWith {
	["Error", "Il vous faut un clan pour faire cela."] spawn life_fnc_showPredefinedNotification;
};

disableSerialization;
createDialog 'Insurge_Cash_Depose';