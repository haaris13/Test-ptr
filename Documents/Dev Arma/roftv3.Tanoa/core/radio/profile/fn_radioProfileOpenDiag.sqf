/*
	File:fn_radioProfileOpenDiag.sqf

	Autor:IronBlade
*/

_currentProfiles = [];
switch (playerSide) do { 
	case civilian : { _currentProfiles = call compile ((profileNamespace getVariable ["radio_profiles_civ",str []]));}; 
	case west : { _currentProfiles = call compile (profileNamespace getVariable ["radio_profiles_west",str []]); }; 
	case independent : { _currentProfiles = call compile (profileNamespace getVariable ["radio_profiles_med",str []]); }; 
};

disableSerialization;
createDialog "radio_profiles";

life_profile_inCur = false;

_display = findDisplay 8100;
_group = _display displayCtrl 8101;

_controlText = _display ctrlCreate ["RscStructuredText", -1, _group];
_controlText ctrlSetPosition [0, 0, 0.4, 0.04];
_controlText ctrlCommit 0;
_controlText ctrlSetStructuredText parseText format ["<t align='center' size='0.8' font='PuristaBold'>Profiles</t>"];

_controlButtonProfiles = _display ctrlCreate ["RscButtonMenu", 8111, _group];
_controlButtonProfiles ctrlSetPosition [0.05, 0.05, 0.3, 0.12];
_controlButtonProfiles ctrlCommit 0;
_controlButtonProfiles ctrlSetStructuredText parseText format ["<br/><t align='center' size='0.8' font='PuristaBold'>Ajouter Profile</t>"];
_controlButtonProfiles buttonSetAction format ["[] spawn life_fnc_radioProfileAjouter"];

_posY = 0.2;
_posX = 0.05;

{

	_controlBack = _display ctrlCreate ["RscText", -1, _group];
	_controlBack ctrlSetPosition [_posX, _posY, 0.3, 0.26];
	_controlBack ctrlSetBackgroundColor [-1, -1, -1, 0.6];
	_controlBack ctrlCommit 0;

	_controlBackTitle = _display ctrlCreate ["RscText", -1, _group];
	_controlBackTitle ctrlSetPosition [_posX + 0.005, _posY + 0.005, 0.25, 0.04];
	_controlBackTitle ctrlSetBackgroundColor [0,0.494,0.867,1];
	_controlBackTitle ctrlCommit 0;

	_controlTextTitle = _display ctrlCreate ["RscStructuredText", -1, _group];
	_controlTextTitle ctrlSetPosition [_posX + 0.025, _posY + 0.01, 0.25, 0.04];
	_controlTextTitle ctrlCommit 0;
	_controlTextTitle ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >%1</t>", _x select 0];


	_posFreqX = _posX + 0.007;
	_posFreqY = _posY + 0.05;

	{

		switch (_forEachIndex) do {
			case 0 : {};
			case 1 : { _posFreqX = _posX + 0.14; };
			case 2 : { _posFreqX = _posX + 0.007; _posFreqY = _posFreqY + 0.031; };
			case 3 : { _posFreqX = _posX + 0.14; };
			case 4 : { _posFreqX = _posX + 0.007; _posFreqY = _posFreqY + 0.031; };
			case 5 : { _posFreqX = _posX + 0.14; };
			case 6 : { _posFreqX = _posX + 0.007; _posFreqY = _posFreqY + 0.031; };
			case 7 : { _posFreqX = _posX + 0.14; };
			case 8 : { _posFreqX = _posX + 0.007; _posFreqY = _posFreqY + 0.031; };
		};

		_controlTextFreq = _display ctrlCreate ["RscStructuredText", -1, _group];
		_controlTextFreq ctrlSetPosition [_posFreqX, _posFreqY, 0.15, 0.04];
		_controlTextFreq ctrlCommit 0;
		_controlTextFreq ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >C%1: %2 Hz</t>", _forEachIndex + 1, _x];

	} forEach (_x select 1);

	_controlButtonApp = _display ctrlCreate ["RscButtonMenu", -1, _group];
	_controlButtonApp ctrlSetPosition [_posX + 0.155, _posY + 0.21, 0.14, 0.04];
	_controlButtonApp ctrlSetBackgroundColor [0.58,0.58,0.58,1];
	_controlButtonApp ctrlCommit 0;
	_controlButtonApp ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >Supprimer</t>"];
	_controlButtonApp buttonSetAction format ["[%1] spawn life_fnc_radioProfileSuppr;", _forEachIndex];

	_controlButtonSave = _display ctrlCreate ["RscButtonMenu", -1, _group];
	_controlButtonSave ctrlSetPosition [_posX + 0.005 , _posY + 0.21, 0.14, 0.04];
	_controlButtonSave ctrlSetBackgroundColor [0.58,0.58,0.58,1];
	_controlButtonSave ctrlCommit 0;
	_controlButtonSave ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >Modifier</t>"];
	_controlButtonSave buttonSetAction format ["[%1] spawn life_fnc_radioProfileModifier;", _forEachIndex];

	_posY = _posY + 0.30;

} forEach _currentProfiles;

