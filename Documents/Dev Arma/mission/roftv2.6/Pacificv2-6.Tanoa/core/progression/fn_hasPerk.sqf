#include "..\..\script_macros.hpp"
/**
	File: fn_hasperk.sqf
	
	Autor: Iron
*/
private ["_return"];
_perk = _this select 0;
_return = false;

_yourside = switch(playerSide) do {
	case west: {"cop"}; 
	case independent: {"med"}; 
	default {"civ"};
};

_perkside = M_CONFIG(getText,"CfgPerks",_perk,"side");

if (_perkside isEqualTo _yourside) then {
	if (_perk in life_activePerks) then {
		_return = true;
	};
};

_return;