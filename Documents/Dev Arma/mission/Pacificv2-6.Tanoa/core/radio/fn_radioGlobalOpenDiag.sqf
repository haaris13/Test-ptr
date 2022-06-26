/*
	File: fn_radioGlobalOpenDiag.sqf

	Autor:IronBlade
*/

_currentProfiles = [];

switch (playerSide) do { 
	case civilian : { _currentProfiles = ((profileNamespace getVariable ["radio_v2_profiles_civ", []]));}; 
	case west : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_west", []]); }; 
	case independent : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_med", []]); }; 
};

switch (playerSide) do {
	case civilian : {(profileNamespace setVariable ["radio_v2_profiles_civ", _currentProfiles]); }; 
	case west : { (profileNamespace setVariable ["radio_v2_profiles_west", _currentProfiles]); }; 
	case independent : { (profileNamespace setVariable ["radio_v2_profiles_med", _currentProfiles]); }; 
};

disableSerialization;

createDialog "radio_global";

_display = findDisplay 8000;
_group = _display displayCtrl 8001;

_controlButtonProfiles = _display ctrlCreate ["RscButtonMenu", -1, _group];
_controlButtonProfiles ctrlSetPosition [0.06, 0.70, 0.3, 0.12];
_controlButtonProfiles ctrlCommit 0;
_controlButtonProfiles ctrlSetStructuredText parseText format ["<br/><t align='center' size='0.8' font='PuristaBold'>Profiles Radio</t>"];
_controlButtonProfiles buttonSetAction "closeDialog 0; [] spawn life_fnc_radioProfileOpenDiag;";

_controlButtonSquad = _display ctrlCreate ["RscButtonMenu", -1, _group];
_controlButtonSquad ctrlSetPosition [0.39, 0.70, 0.3, 0.12];
_controlButtonSquad ctrlCommit 0;
_controlButtonSquad ctrlSetStructuredText parseText format ["<br/><t align='center' size='0.8' font='PuristaBold'>Fréquences Squad</t>"];
_controlButtonSquad ctrlEnable false;

_controlButtonGestion = _display ctrlCreate ["RscButtonMenu", -1, _group];
_controlButtonGestion ctrlSetPosition [0.72, 0.70, 0.3, 0.12];
_controlButtonGestion ctrlCommit 0;
_controlButtonGestion ctrlSetStructuredText parseText format ["<br/><t align='center' size='0.8' font='PuristaBold'>Gestion Fréquences</t>"];
_controlButtonGestion ctrlEnable false;

_controlText = _display ctrlCreate ["RscStructuredText", -1, _group];
_controlText ctrlSetPosition [0.16, 0, 0.4, 0.04];
_controlText ctrlCommit 0;
_controlText ctrlSetStructuredText parseText format ["<t align='center' size='0.8' font='PuristaBold'>Profiles</t>"];

_posY = 0.05;
_posX = 0.05;

{

	switch (_forEachIndex) do {
		case 0 : {};
		case 1 : { _posX = 0.38; };
		case 2 : { _posY = 0.33; _posX = 0.05; };
		case 3 : { _posY = 0.33; _posX = 0.38; };
	};

	if (_forEachIndex > 3) exitWith {};

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
	_controlButtonApp ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >Appliquer</t>"];
	_controlButtonApp buttonSetAction format ["['%1', %2] spawn life_fnc_radioActionProfile;", "load", _forEachIndex];

	if !(isNil "TF_saved_active_sw_settings") then {

		_settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;

		if ((_x select 1) isEqualTo (_settings select 2)) then {
			_controlButtonApp ctrlEnable false;
		};
	};

	_controlButtonSave = _display ctrlCreate ["RscButtonMenu", -1, _group];
	_controlButtonSave ctrlSetPosition [_posX + 0.005 , _posY + 0.21, 0.14, 0.04];
	_controlButtonSave ctrlSetBackgroundColor [0.58,0.58,0.58,1];
	_controlButtonSave ctrlCommit 0;
	_controlButtonSave ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >Sauvegarder</t>"];
	_controlButtonSave buttonSetAction format ["['%1', %2] spawn life_fnc_radioActionProfile;", "save", _forEachIndex];
	
	if !(isNil "TF_saved_active_sw_settings") then {

		_settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;

		if ((_x select 1) isEqualTo (_settings select 2)) then {
			_controlButtonSave ctrlEnable false;
		};
	};

} forEach _currentProfiles;

_controlBackHelp = _display ctrlCreate ["RscText", -1, _group];
_controlBackHelp ctrlSetPosition [0.72, 0.05, 0.3, 0.26];
_controlBackHelp ctrlSetBackgroundColor [-1, -1, -1, 0.6];
_controlBackHelp ctrlCommit 0;

_controlBackTitleHelp = _display ctrlCreate ["RscText", -1, _group];
_controlBackTitleHelp ctrlSetPosition [0.72, 0.055, 0.3, 0.04];
_controlBackTitleHelp ctrlSetBackgroundColor [0.796,0.173,0.224,1];
_controlBackTitleHelp ctrlCommit 0;

_controlTextTitleHelp = _display ctrlCreate ["RscStructuredText", -1, _group];
_controlTextTitleHelp ctrlSetPosition [0.72, 0.06, 0.3, 0.04];
_controlTextTitleHelp ctrlCommit 0;


_controlTextHelp = _display ctrlCreate ["RscStructuredText", -1, _group];
_controlTextHelp ctrlSetPosition [0.73, 0.11, 0.28, 0.3];
_controlTextHelp ctrlCommit 0;


_controlBackVeh = _display ctrlCreate ["RscText", -1, _group];
_controlBackVeh ctrlSetPosition [0.72, 0.35, 0.3, 0.26];
_controlBackVeh ctrlSetBackgroundColor [-1, -1, -1, 0.6];
_controlBackVeh ctrlCommit 0;

_controlBackTitleVeh = _display ctrlCreate ["RscText", -1, _group];
_controlBackTitleVeh ctrlSetPosition [0.72, 0.355, 0.3, 0.04];
_controlBackTitleVeh ctrlSetBackgroundColor [1,0.51,0.012,1];
_controlBackTitleVeh ctrlCommit 0;

_controlTextTitleVeh = _display ctrlCreate ["RscStructuredText", -1, _group];
_controlTextTitleVeh ctrlSetPosition [0.72, 0.36, 0.3, 0.04];
_controlTextTitleVeh ctrlCommit 0;

_controlTextVeh = _display ctrlCreate ["RscStructuredText", -1, _group];
_controlTextVeh ctrlSetPosition [0.73, 0.41, 0.28, 0.3];
_controlTextVeh ctrlCommit 0;

_cfgRadio = (missionConfigFile >> "CfgRadio" >> "Category");
_cfgRadioUrgence = (_cfgRadio >> "urgence");
_cfgRadioVehicle = (_cfgRadio >> "vehicle");

_controlTextTitleVeh ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >Fréquences %1</t>", getText(_cfgRadioVehicle >> "displayName")];
_controlTextTitleHelp ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >Fréquences %1</t>", getText(_cfgRadioUrgence >> "displayName")];

_textGlobal = "";

{
	_displayName = getText(_x >> "displayName");
	_freq = getText(_x >> "freq");

  	_textGlobal = _textGlobal + format["%1 %2 Hz<br/>", _displayName, _freq];
} forEach ("true" configClasses (_cfgRadioUrgence >> "freqs"));

_textVeh = "";
{
	_displayName = getText(_x >> "displayName");
	_freq = getText(_x >> "freq");

  	_textVeh = _textVeh + format["%1 %2 Hz<br/>", _displayName, _freq];
} forEach ("true" configClasses (_cfgRadioVehicle >> "freqs"));


_controlTextHelp ctrlSetStructuredText parseText format ["<t size='0.8' >%1</t>", _textGlobal];
_controlTextVeh ctrlSetStructuredText parseText format ["<t size='0.8' >%1</t>", _textVeh];