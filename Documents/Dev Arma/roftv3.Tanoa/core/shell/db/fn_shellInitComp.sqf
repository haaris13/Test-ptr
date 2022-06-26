/*
	File:fn_shellInitComp.sqf

	Autor:IronBlade
*/
_type = [_this,1,"",[""]] call BIS_fnc_param;

switch (_type) do { 
	case "Personal" : {[player] remoteExecCall ["TON_fnc_shellGetByPlayer", 2];};
	default {}; 
};