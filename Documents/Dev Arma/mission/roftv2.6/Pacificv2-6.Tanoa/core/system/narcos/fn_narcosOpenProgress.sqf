/*
	File: fn_narcosOpenProgress.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:24:40
	Version: 0.1
*/

disableSerialization;

createDialog "Narcos_Cash_Progress";

_display = findDisplay 2090;
_group = _display displayCtrl 2091;

_cfgInsurge = (missionConfigFile >> "CfgNarcos");
_steps = "true" configClasses (_cfgInsurge >> "Steps");

_pos = 0;
_lastAmount = 0;
{
	_step = _x;
	_stepName = configName(_x);
	_amount = getNumber(_step >> "amount");
	_img = getText(_step >> "icon");
	_displayName = getText(_step >> "displayName");
	
  	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
  	_controlBack = _display ctrlCreate ["RscText", -1, _group];

  	_controlIcon = _display ctrlCreate ["RscStructuredText", -1, _group];
  	_controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

  	_controlProgressBack = _display ctrlCreate ["RscText", -1, _group];
  	_controlProgress = _display ctrlCreate ["Life_RscProgress", -1, _group];
  	_controlProgressText = _display ctrlCreate ["RscStructuredText", -1, _group];

	_controlButton = _display ctrlCreate ["Life_RscButtonMenu", -1, _group];

	_controlStrip ctrlSetBackgroundColor [0.714,0.714,0.714,1];
	_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];
	_controlProgressBack ctrlSetBackgroundColor [-1,-1,-1,0.8];
	_controlProgress ctrlSetBackgroundColor [0,0,0,0.4];
	_controlButton ctrlSetBackgroundColor [0,0,0,0.4];

	_gap = _amount - _lastAmount;
	_stat = abs(life_narcos_cash_value - _lastAmount);

	if (_stat > _gap) then {
		_stat = _gap;
	};

	if (_lastAmount > life_narcos_cash_value) then {
		_controlStrip ctrlSetBackgroundColor [0.714,0.714,0.714,0.4];
		_controlProgress ctrlSetBackgroundColor [-1,-1,-1,0.2];
		_controlProgressBack ctrlSetBackgroundColor [-1,-1,-1,0.2];
		_controlText ctrlSetTextColor [0.714,0.714,0.714,0.5];
		_controlProgressText ctrlSetTextColor [0.714,0.714,0.714,0.5];
		_stat = 0;
	};

	_controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
	_controlBack ctrlSetPosition [0.01, _pos, 0.08, 0.1];

	_controlIcon ctrlSetPosition [0.005, _pos, 0.11, 0.1];
	_controlText ctrlSetPosition [0.1, _pos, 0.89, 0.1];
	_controlProgress ctrlSetPosition [0.105, _pos + 0.05, 0.89, 0.04];
	_controlProgressBack ctrlSetPosition [0.105, _pos + 0.05, 0.89, 0.04];
	_controlProgressText ctrlSetPosition [0.105, _pos + 0.055, 0.89, 0.04];

	_controlButton ctrlSetPosition [0.915, _pos, 0.08, 0.04];

	if (_stat > 0) then {
		_controlProgress progressSetPosition (1 / (_gap / (_stat)));
	} else {
		_controlProgress progressSetPosition 0;
	};

	_controlBack ctrlCommit 0;
	_controlStrip ctrlCommit 0;

	_controlIcon ctrlCommit 0;
	_controlText ctrlCommit 0;
	_controlProgress ctrlCommit 0;
	_controlProgressBack ctrlCommit 0;
	_controlProgressText ctrlCommit 0;

	_controlButton ctrlCommit 0;

	_controlButton ctrlSetStructuredText parseText "<t align='center'>Info</t>";

	_controlIcon ctrlSetStructuredText parseText format["<img image='%1' size='2.5'></img><br/>", _img];
	_controlText ctrlSetStructuredText parseText format ["<t size='0.9' font='PuristaBold'>%1</t>", _displayName];

	_statText = [_stat] call life_fnc_numberText;

	_controlProgressText ctrlSetStructuredText parseText format ["<t size='0.8'>%1/%2$</t>", _statText, _gap];

	_controlButton buttonSetAction format["['%1'] spawn life_fnc_narcosOpenProgressInfo;", _stepName];

	_pos = _pos + 0.14;
	_lastAmount = _amount;

} forEach _steps;