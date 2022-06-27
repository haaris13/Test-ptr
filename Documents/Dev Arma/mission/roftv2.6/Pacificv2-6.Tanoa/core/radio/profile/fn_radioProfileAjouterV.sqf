/*
	File: fn_radioProfileAjouterV.sqf

	Autor: IronBlade
*/
disableSerialization;
_display = findDisplay 8100;
_group = _display displayCtrl 8101;
_button = _display displayCtrl 8111;
_editName = _display displayCtrl 8112;

_name = ctrlText _editName;
if (_name == "") exitWith {["Error", "Le nom du profil n'est pas valide !"] spawn life_fnc_showPredefinedNotification;};
_nameArray = toArray(_name);
if (count _nameArray > 10) exitWith {["Error", "Le Nom du Profil est trop grand ! (10 Caractères maximum !)"] spawn life_fnc_showPredefinedNotification;};

life_radio_profile_new set[0, _name];

_bad = false;

for "_i" from 8120 to 8128 do {
	_edit = _display displayCtrl _i;

	_value = parsenumber(ctrlText _edit);

	if (_value < 20 || _value > 512) exitWith { _bad = true; };
};

if (_bad) exitWith {["Error", "Une fréquence est mal paramétré (Entre 20 et 512)!"] spawn life_fnc_showPredefinedNotification;};

_vals = [];

for "_i" from 8120 to 8128 do {

	_edit = _display displayCtrl _i;
	_value = parsenumber(ctrlText _edit);

	_val = str(round (_value * TF_FREQ_ROUND_POWER) / TF_FREQ_ROUND_POWER);

	_vals pushBack _val;
};

life_radio_profile_new set[1, _vals];

_currentProfiles = [];

switch (playerSide) do { 
	case civilian : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_civ", []]);}; 
	case west : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_west", []]); }; 
	case independent : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_med", []]); }; 
};

_currentProfiles pushBack life_radio_profile_new;

switch (playerSide) do { 
	case civilian : { profileNamespace setVariable ["radio_v2_profiles_civ", _currentProfiles]; }; 
	case west : { profileNamespace setVariable ["radio_v2_profiles_west", _currentProfiles]; }; 
	case independent : { profileNamespace setVariable ["radio_v2_profiles_med", _currentProfiles]; }; 
};

saveProfileNamespace;

closeDialog 0;
[] spawn life_fnc_radioProfileOpenDiag;