/*
	File: fn_radioProfileModifierV.sqf

	Autor: IronBlade
*/
_id = [_this,0,0,[0]] call BIS_fnc_param;

disableSerialization;
_display = findDisplay 8100;
_group = _display displayCtrl 8101;
_button = _display displayCtrl 8111;
_editName = _display displayCtrl 8112;

_name = ctrlText _editName;
if (_name == "") exitWith { hint "Le nom du profil n'est pas valide !"};
_nameArray = toArray(_name);
if (count _nameArray > 10) exitWith { hint "Le Nom du Profil est trop grand ! (10 Caractéres maximum !)"};

_curModif = [];
_curModif set[0, _name];

_bad = false;

for "_i" from 8120 to 8128 do {
	_edit = _display displayCtrl _i;

	_value = parsenumber(ctrlText _edit);

	if (_value < 20 || _value > 512) exitWith { _bad = true; };
};

if (_bad) exitWith {hint "Une fréquence est mal paramétré (Entre 20 et 512)!"};

_vals = [];

for "_i" from 8120 to 8128 do {

	_edit = _display displayCtrl _i;
	_value = parsenumber(ctrlText _edit);

	_val = str(round (_value * TF_FREQ_ROUND_POWER) / TF_FREQ_ROUND_POWER);

	_vals pushBack _val;
};

_curModif set[1, _vals];

_currentProfiles = [];

switch (playerSide) do { 
	case civilian : { _currentProfiles = call compile ((profileNamespace getVariable ["radio_profiles_civ",str []]));}; 
	case west : { _currentProfiles = call compile (profileNamespace getVariable ["radio_profiles_west",str []]); }; 
	case independent : { _currentProfiles = call compile (profileNamespace getVariable ["radio_profiles_med",str []]); }; 
};

_currentProfiles set[_id, _curModif];

switch (playerSide) do { 
	case civilian : { profileNamespace setVariable ["radio_profiles_civ",str _currentProfiles]; }; 
	case west : { profileNamespace setVariable ["radio_profiles_west",str _currentProfiles]; }; 
	case independent : { profileNamespace setVariable ["radio_profiles_med",str _currentProfiles]; }; 
};

saveProfileNamespace;

closeDialog 0;
[] spawn life_fnc_radioProfileOpenDiag;