/*
	File: fn_targetTrainingOpenScores.sqf

	Autor: IronBlade
*/
_scores = [_this, 0, [], [[]]] call BIS_fnc_param;

_createDialog = false;
if (!dialog) then {
	if(!(createDialog "Training_Target_Score_Board")) exitWith {};
	_createDialog = true;
};

disableserialization;

if (isNull (findDisplay 29000)) exitWith {diag_log "findDisplay 29000 null";};

life_training_target_scores_data = _scores;
life_training_target_scores_wait_data = false;

_display = findDisplay 29000;
_ctrlTitle = _display displayCtrl 29010;
_ctrlFilterRow = _display displayCtrl 29001;
_ctrlListNBox = _display displayCtrl 29002;
_ctrlSearchEdit = _display displayCtrl 29003;
_ctrlfilterCombo = _display displayCtrl 29004;
_ctrlfilterComboWeapons = _display displayCtrl 29005;

_CfgTargets = (missionConfigFile >> "CfgTargets");
_difficultiesConfig = (_CfgTargets >> "Difficulties");
_currentTraining = (_CfgTargets >> "Trainings" >> life_targets_training_class_current);

_difficulties = getArray(_currentTraining >> "difficulties");
_currentDifficulty = life_training_target_scores_filter_difficulty;


// Trop gourmant, a réfléchir.
/*
	_weaponCategories = getArray(_currentTraining >> "weaponCategories");
	_conditions = format["(isClass _x) && (%1 find ([configName(_x)] call life_fnc_weaponFindCategory)) != -1", str _weaponCategories];
	_weapons = _conditions configClasses (configFile >> "CfgWeapons");
*/

_ctrlfilterComboWeapons ctrlShow false;

if (_createDialog) then {

	_added = [];

	lbClear _ctrlfilterCombo;

	if (count _difficulties != 1) then {
		_ctrlfilterCombo lbAdd "Toutes";
		_ctrlfilterCombo lbSetData [(lbSize _ctrlfilterCombo)-1, "All"];

		_added pushBack "All";
	};

	{
		_className = _x;
		_displayName = getText(_difficultiesConfig >> _className >> "displayName");

		_ctrlfilterCombo lbAdd _displayName;
		_ctrlfilterCombo lbSetData [(lbSize _ctrlfilterCombo)-1, _className];

		_added pushBack _className;
	} forEach _difficulties;

	_find = _added find _currentDifficulty;

	if (_find != -1) then {
		_ctrlfilterCombo lbSetCurSel _find;
	} else {
		_ctrlfilterCombo lbSetCurSel 0;
	};

	// Set title
	_ctrlTitle ctrlSetText "";

	//Sorting for listbox
	[_ctrlFilterRow, _ctrlListNBox] call life_fnc_targetTrainingScoresfilterDo;

	//Will automatically filter this list when typing in the edit box
	_ctrlSearchEdit ctrlAddEventHandler ["KeyUp", {["search"] call life_fnc_targetTrainingScoresInfoFilter;}];
};

_ctrlfilterCombo ctrlEnable true;

//Update the list
["refresh"] call life_fnc_targetTrainingScoresInfoFilter;