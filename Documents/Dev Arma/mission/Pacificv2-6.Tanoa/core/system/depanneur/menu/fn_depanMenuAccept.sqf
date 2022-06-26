/*
	File: fn_depanMenuAccept.sqf

	Autor: Iron
	Date: 12 Mar 2020 20:07:05
	Version: 0.1
*/
closeDialog 0;

_var = life_depan_bal_selected select 0;

[player, _var] remoteExec ["TON_fnc_depanAcceptBalise", 2];