/*
	File: fn_fixUniform.sqf

	Autor: alharis
	
*/
if (isNil "life_fix_uniform") then {life_fix_uniform = false;};

if (life_fix_uniform) exitWith {
	["Error", "Déja fait il y a moins de 2 minutes."] spawn life_fnc_showPredefinedNotification;
};
closeDialog 0;
life_fix_uniform = true;

_loadOut = (getUnitLoadout player);

removeUniform player;
removeVest player;
removeBackPack player;

uiSleep 0.3;

player setUnitLoadout _loadOut;

["Accepted", "Fixé !"] spawn life_fnc_showPredefinedNotification;

[] spawn {
	sleep (2 * 60);
	life_fix_uniform = false;
};