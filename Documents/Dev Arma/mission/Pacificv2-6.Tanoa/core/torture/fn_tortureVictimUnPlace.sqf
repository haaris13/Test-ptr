/*
	File: fn_tortureVictimUnPlace.sqf

	Autor: IronBlade
*/
_victim = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_victim setVariable ["torture", nil, true];

if (alive player && (vehicle player) == player) then {
	if !((currentWeapon player) isEqualTo "") then {
	    player switchMove "default";
	} else {
	    player playAction "gesturenod";	
	};
};