/*
	File: fn_radioProfileSuppr.sqf

	Autor: IronBlade
*/
_id = [_this,0,0,[0]] call BIS_fnc_param;

_currentProfiles = [];

switch (playerSide) do { 
	case civilian : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_civ", []]);}; 
	case west : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_west", []]); }; 
	case independent : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_med", []]); }; 
};

_currentProfiles deleteAt _id;

switch (playerSide) do { 
	case civilian : { profileNamespace setVariable ["radio_v2_profiles_civ", _currentProfiles]; }; 
	case west : { profileNamespace setVariable ["radio_v2_profiles_west", _currentProfiles]; }; 
	case independent : { profileNamespace setVariable ["radio_v2_profiles_med", _currentProfiles]; }; 
};

saveProfileNamespace;

closeDialog 0;
[] spawn life_fnc_radioProfileOpenDiag;