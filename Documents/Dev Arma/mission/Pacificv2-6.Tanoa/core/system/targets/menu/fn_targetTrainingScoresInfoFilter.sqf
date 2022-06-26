/*
	File: fn_targetTrainingScoresInfoFilter.sqf

	Autor: IronBlade
*/

private ["_ctrlListNBox","_itemWeight","_itemDisplay","_itemPrice","_type","_ctrlFilterRow","_ctrlListNBox","_ctrlSearchEdit","_searchedText","_itemPourcent"]; //modif
_type = _this select 0;

disableserialization;

_display = findDisplay 29000;
_ctrlFilterRow = _display displayCtrl 29001;
_ctrlListNBox = _display displayCtrl 29002;
_ctrlSearchEdit = _display displayCtrl 29003;
_ctrlfilterCombo = _display displayCtrl 29004;

_searchValue = (toUpper ctrlText _ctrlSearchEdit);

_targetsConfig = (missionConfigFile >> "CfgTargets");
_difficultiesConfig = (_targetsConfig >> "Difficulties");

switch (_type) do {
	
	case "filterCombo" : {
		_currentComboClass = _ctrlfilterCombo lbData (lbCurSel _ctrlfilterCombo);
		_ctrlfilterCombo ctrlEnable false;

		life_training_target_scores_filter_difficulty = _currentComboClass;
		life_training_target_scores_wait_data = true;

		lnbClear _ctrlListNBox;
		[life_targets_training_class_current, player, life_training_target_scores_filter_action, life_training_target_scores_filter_profile, _currentComboClass] remoteExec ['TON_fnc_trainingTargetRetrieveScores', 2];
	};
	
	case "search" : {

		["refresh"] call life_fnc_targetTrainingScoresInfoFilter;
	};
	
	case "refresh" : {

		lnbClear _ctrlListNBox;
		_currentRow = 0;
		{
			_line = _x;

			_profileName = _x select 0;
			_type = _x select 1;
			_score = _x select 2;
			_time = _x select 3;
			_nbFire = _x select 4;
			_nbTarget = _x select 5;
			_weaponName = _x select 6;
			_timeTargetAverage = _x select 7;

			_find = false;
			if ((toUpper _profileName) find _searchValue != -1) then {
				_find = true;
			};

			if ((toUpper _weaponName) find _searchValue != -1) then {
				_find = true;
			};

			if (_find) then {
				_color = [1,1,1,1];

				_pres = abs((_nbTarget / _nbFire) * 100);

				if (_pres < 25) then {
					_color = [1,0,0,1];
				} else {
					if (_pres < 50) then {
						_color = [1,0.49,0.145,1];
					} else {
						if (_pres < 90) then {
							_color = [0.13,0.87,0.50,1];
						} else {
							_color = [0,1,0,1];
						};
					};
				};

				_displayType = getText(_difficultiesConfig >> _type >> "displayName");

				_pres = format["%1%2", _pres, "%"];

				_time = [_time, "MM:SS.MS"] call BIS_fnc_secondsToString;
				_score = format ["%1", _score];

				_ctrlListNBox lnbAddRow [_profileName, _displayType, _weaponName, _score, _time, _pres];
				_ctrlListNBox lnbSetColor [[_currentRow, 4], _color];

				_currentRow = _currentRow + 1;
			};

		} forEach life_training_target_scores_data;
		_ctrlListNBox lnbSetCurSelRow -1;
	};

	default {};
};