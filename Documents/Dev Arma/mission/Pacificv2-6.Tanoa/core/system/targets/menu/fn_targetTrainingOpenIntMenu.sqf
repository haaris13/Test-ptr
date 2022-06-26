/*
	File: fn_targetTrainingOpenIntMenu.sqf

	Autor: IronBlade
*/
_trainingClassName = [_this, 3, "", [""]] call BIS_fnc_param;

_CfgTargets = (missionConfigFile >> "CfgTargets");
_currentTraining = (_CfgTargets >> "Trainings" >> _trainingClassName);

if (!(isClass(_currentTraining))) exitWith {
	diag_log "Not class";
};

_side = switch (playerSide) do { 
	case west : {"cop";}; 
	case civilian : {"civ";}; 
	case independent : {"med"};  
};

_sides = getArray(_currentTraining >> "sides");

if (!(_side in _sides)) exitWith {
	["Error", "Vous n'avez pas l'autorisation."] spawn life_fnc_showPredefinedNotification;
};

if (isNil "life_training_target_has_profile") exitWith {
	diag_log "wait life_training_target_has_profile";
};

life_targets_training_class_current = _trainingClassName;

#define Btn1 37550
#define Btn2 37551
#define Btn3 37552
#define Btn4 37553
#define Btn5 37554
#define Btn6 37555
#define Btn7 37556
#define Btn8 37557
#define Btn9 37558
#define Btn10 37559
#define Title 37501
#define CloseButton 37502

disableSerialization;

if(dialog) exitWith {};

createDialog "Training_Target_Interaction_Menu";

_display = findDisplay 37500;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
_Btn6 = _display displayCtrl Btn6;
_Btn7 = _display displayCtrl Btn7;
_Btn8 = _display displayCtrl Btn8;
_Btn9 = _display displayCtrl Btn9;
_Btn10 = _display displayCtrl Btn10;

if (count life_training_target_profile == 0) exitWith {
	_Btn1 ctrlSetText "Créer un profil";
	_Btn1 buttonSetAction "closeDialog 0; [] call life_fnc_targetTrainingCreateProfileMenu;";

	_Btn2 ctrlShow false;
	_Btn3 ctrlShow false;
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;
};

if (life_targets_training_launched) exitWith {
	_Btn1 ctrlSetText "Stopper l'entraînement";
	_Btn1 buttonSetAction "closeDialog 0; [] call life_fnc_cancelTargetTraining;";

	_Btn2 ctrlShow false;
	_Btn3 ctrlShow false;
	_Btn4 ctrlShow false;
	_Btn5 ctrlShow false;
	_Btn6 ctrlShow false;
	_Btn7 ctrlShow false;
	_Btn8 ctrlShow false;
	_Btn9 ctrlShow false;
	_Btn10 ctrlShow false;
};

// Reset Vars;
life_training_target_scores_wait_data = false;
life_training_target_scores_filter_difficulty = "";
life_training_target_scores_filter_profile = "";
life_training_target_scores_filter_action = "";

_difficulties = getArray(_currentTraining >> "difficulties");
_indexButton = 0;
_buttons = [_Btn1, _Btn2, _Btn3, _Btn4, _Btn5, _Btn6, _Btn7, _Btn8, _Btn9, _Btn10];

{
	_button = _buttons select _indexButton;
	_difficultyDisplayName = getText(_CfgTargets >> "Difficulties" >> _x >> "displayName");

	_button ctrlSetText format["Lancer %1", _difficultyDisplayName];
	_button buttonSetAction format["closeDialog 0; ['%1', '%2'] spawn life_fnc_launchTargetTraining;", _trainingClassName, _x];

	_indexButton = _indexButton + 1;
} forEach _difficulties;

// Line
if ((count _difficulties) == 0) then {
	_button = _buttons select _indexButton;

	_button ctrlSetText "Lancer Entrainement";
	_button buttonSetAction format["closeDialog 0; ['%1'] spawn life_fnc_launchTargetTraining;", _trainingClassName];

	_indexButton = _indexButton + 1;
};

_button = _buttons select _indexButton;
_indexButton = _indexButton + 1;

_button ctrlSetText "Mes compétences";
_button buttonSetAction format["closeDialog 0; [] spawn life_fnc_targetTrainingStatsOpenMenu;", _trainingClassName];

_button = _buttons select _indexButton;
_indexButton = _indexButton + 1;

_button ctrlSetText "Mes scores";
_button buttonSetAction format["closeDialog 0; life_training_target_scores_filter_action = 'mine'; ['%1', player, 'mine'] remoteExec ['TON_fnc_trainingTargetRetrieveScores', 2];", _trainingClassName];

_button = _buttons select _indexButton;
_indexButton = _indexButton + 1;

_button ctrlSetText "Leader board";
_button buttonSetAction format["closeDialog 0; life_training_target_scores_filter_action = 'leader'; ['%1', player, 'leader'] remoteExec ['TON_fnc_trainingTargetRetrieveScores', 2];", _trainingClassName];

_button = _buttons select _indexButton;
_indexButton = _indexButton + 1;

_button ctrlSetText "Rechercher";
_button buttonSetAction format["closeDialog 0; ['%1'] spawn life_fnc_targetTrainingScoresSearch;", _trainingClassName];

for "_i" from _indexButton to ((count _buttons) - 1) do {
	_button = _buttons select _i;
	_button ctrlShow false;
};