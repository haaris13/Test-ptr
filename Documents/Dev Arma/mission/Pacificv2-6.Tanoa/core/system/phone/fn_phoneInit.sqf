/*
	File: fn_phoeInit.sqf

	Autor: Iron
*/

life_phones = [];
life_phone = [];
life_phone_conv_selected = "";
life_phone_conv_ctrls = [];
life_phone_convs_ctrls = [];

[player] remoteExec ["TON_fnc_phoneLoad", 2];