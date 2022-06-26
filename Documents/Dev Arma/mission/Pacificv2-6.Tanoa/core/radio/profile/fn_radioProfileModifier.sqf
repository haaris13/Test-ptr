/*
	File: fn_radioProfileModifier.sqf

	Autor: IronBlade
*/
_id = [_this,0,0,[0]] call BIS_fnc_param;

if (life_profile_inCur) exitWith { ["Error", "Impossible pour le moment !"] spawn life_fnc_showPredefinedNotification;};
life_profile_inCur = true;

disableSerialization;
_display = findDisplay 8100;
_group = _display displayCtrl 8101;
_button = _display displayCtrl 8111;

_button ctrlSetStructuredText parseText format ["<br/><t align='center' size='0.8' font='PuristaBold'>Valider Profile</t>"];
_button buttonSetAction format["[%1] spawn life_fnc_radioProfileModifierV;", _id];

_currentProfiles = [];

switch (playerSide) do { 
	case civilian : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_civ", []]);}; 
	case west : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_west", []]); }; 
	case independent : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_med", []]); }; 
};

_curMod = _currentProfiles select _id;

_controlBack = _display ctrlCreate ["RscText", -1, _group];
_controlBack ctrlSetPosition [0.4, 0.05, 0.6, 0.71];
_controlBack ctrlSetBackgroundColor [-1, -1, -1, 0.6];
_controlBack ctrlCommit 0;

_controlBackTitle = _display ctrlCreate ["RscText", -1, _group];
_controlBackTitle ctrlSetPosition [0.4, 0.05 + 0.005, 0.6, 0.04];
_controlBackTitle ctrlSetBackgroundColor [0,0.494,0.867,1];
_controlBackTitle ctrlCommit 0;

_controlTextTitle = _display ctrlCreate ["RscStructuredText", -1, _group];
_controlTextTitle ctrlSetPosition [0.4, 0.05 + 0.01, 0.6, 0.04];
_controlTextTitle ctrlCommit 0;
_controlTextTitle ctrlSetStructuredText parseText format ["<t align='center' size='0.8' >Modification Profile</t>"];

_controlBackNom = _display ctrlCreate ["RscText", -1, _group];
_controlBackNom ctrlSetPosition [0.41, 0.1 + 0.005, 0.58, 0.04];
_controlBackNom ctrlSetBackgroundColor [0.898,0.898,0.898,1];
_controlBackNom ctrlCommit 0;

_controlTextNom = _display ctrlCreate ["RscStructuredText", -1, _group];
_controlTextNom ctrlSetPosition [0.41, 0.1 + 0.01, 0.58, 0.04];
_controlTextNom ctrlCommit 0;
_controlTextNom ctrlSetStructuredText parseText format ["<t align='center' size='0.8' color='#000000' >Nom</t>"];

_controlEditNom = _display ctrlCreate ["RscEdit", 8112, _group];
_controlEditNom ctrlSetPosition [0.41, 0.14 + 0.01, 0.58, 0.04];
_controlEditNom ctrlCommit 0;
_controlEditNom ctrlSetText (_curMod select 0);

_idBase = 8120;

_posY = 0.21;
_posX = 0.49;

{

	switch (_forEachIndex) do { 
		case 0 : {};
		case 1 : {_posX = 0.79;};
		case 2 : {_posX = 0.49; _posY = _posY + 0.1;};
		case 3 : {_posX = 0.79;};
		case 4 : {_posX = 0.49; _posY = _posY + 0.1;};
		case 5 : {_posX = 0.79;};
		case 6 : {_posX = 0.49; _posY = _posY + 0.1;};
		case 7 : {_posX = 0.79;};
		case 8 : {_posX = 0.49; _posY = _posY + 0.1;};
	};

	_controlBackNom = _display ctrlCreate ["RscText", -1, _group];
	_controlBackNom ctrlSetPosition [_posX, _posY + 0.005, 0.15, 0.04];
	_controlBackNom ctrlSetBackgroundColor [1,1,1,1];
	_controlBackNom ctrlCommit 0;

	_controlTextNom = _display ctrlCreate ["RscStructuredText", -1, _group];
	_controlTextNom ctrlSetPosition [_posX, _posY + 0.01, 0.15, 0.04];
	_controlTextNom ctrlCommit 0;
	_controlTextNom ctrlSetStructuredText parseText format ["<t align='center' size='0.8' color='#000000' >Chanel %1</t>", _forEachIndex + 1];

	_controlEditNom = _display ctrlCreate ["RscEdit", _idBase, _group];
	_controlEditNom ctrlSetPosition [_posX, _posY + 0.05, 0.15, 0.04];
	_controlEditNom ctrlCommit 0;
	_controlEditNom ctrlSetText _x;

	_idBase = _idBase + 1;
} forEach (_curMod select 1);