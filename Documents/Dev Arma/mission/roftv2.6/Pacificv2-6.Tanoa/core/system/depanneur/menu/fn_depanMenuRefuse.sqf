/*
	File: fn_depanMenuRefuse.sqf

	Autor: Iron
	Date: 12 Mar 2020 20:06:51
	Version: 0.1
*/
closeDialog 0;

_var = life_depan_bal_selected select 0;

[player, _var] remoteExec ["TON_fnc_depanRefuseBalise", 2];