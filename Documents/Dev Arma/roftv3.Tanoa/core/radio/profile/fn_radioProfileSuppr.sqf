/*
	File: fn_radioProfileSuppr.sqf

	Autor: IronBlade
*/
_id = [_this,0,0,[0]] call BIS_fnc_param;

_currentProfiles = [];

switch (playerSide) do { 
	case civilian : { _currentProfiles = call compile ((profileNamespace getVariable ["radio_profiles_civ",str []]));}; 
	case west : { _currentProfiles = call compile (profileNamespace getVariable ["radio_profiles_west",str []]); }; 
	case independent : { _currentProfiles = call compile (profileNamespace getVariable ["radio_profiles_med",str []]); }; 
};

_currentProfiles deleteAt _id;

switch (playerSide) do { 
	case civilian : { profileNamespace setVariable ["radio_profiles_civ",str _currentProfiles]; }; 
	case west : { profileNamespace setVariable ["radio_profiles_west",str _currentProfiles]; }; 
	case independent : { profileNamespace setVariable ["radio_profiles_med",str _currentProfiles]; }; 
};

saveProfileNamespace;

closeDialog 0;
[] spawn life_fnc_radioProfileOpenDiag;