/*
	File: fn_targetTrainingStatsOpenMenu.sqf

	Autor: Iron
*/
private ["_cfgWeaponsCategories", "_categs", "_display", "_group"];

_cfgWeaponsCategories = (missionConfigFile >> "CfgWeaponsCategories");
_categs = getArray(_cfgWeaponsCategories >> "showStats");

disableSerialization;

createDialog "Training_Target_Stats";

_display = findDisplay 2070;
_group = _display displayCtrl 2071;

_pos = 0;
{
	_cfgName = _x;

	_class = (_cfgWeaponsCategories >> "Categories" >> _cfgName);
	_displayName = getText(_class >> "displayName");
	_img = getText(_class >> "img");


	_categ = [_cfgName] call life_fnc_targetTrainingStatsFindByCategory;
	_stat = _categ select 2;

  	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
  	_controlBack = _display ctrlCreate ["RscText", -1, _group];

  	_controlIcon = _display ctrlCreate ["RscStructuredText", -1, _group];
  	_controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

  	_controlProgressBack = _display ctrlCreate ["RscText", -1, _group];
  	_controlProgress = _display ctrlCreate ["Life_RscProgress", -1, _group];
  	_controlProgressText = _display ctrlCreate ["RscStructuredText", -1, _group];

	_controlStrip ctrlSetBackgroundColor [0.714,0.714,0.714,1];
	_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];
	_controlProgressBack ctrlSetBackgroundColor [-1,-1,-1,0.8];
	_controlProgress ctrlSetBackgroundColor [0,0,0,0.4];

	_controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
	_controlBack ctrlSetPosition [0.01, _pos, 0.08, 0.1];

	_controlIcon ctrlSetPosition [0.005, _pos, 0.11, 0.1];
	_controlText ctrlSetPosition [0.1, _pos, 0.89, 0.1];
	_controlProgress ctrlSetPosition [0.105, _pos + 0.05, 0.89, 0.04];
	_controlProgressBack ctrlSetPosition [0.105, _pos + 0.05, 0.89, 0.04];
	_controlProgressText ctrlSetPosition [0.105, _pos + 0.055, 0.89, 0.04];

	if (_stat > 0) then {
		_controlProgress progressSetPosition (1 / (1000 / (_stat)));
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

	_controlIcon ctrlSetStructuredText parseText format["<img image='%1' size='2.5'></img><br/>", _img];
	_controlText ctrlSetStructuredText parseText format ["<t size='0.9' font='PuristaBold'>%1</t>", _displayName];

	_controlProgressText ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaBold'>%1/1000</t>", _stat];

	_pos = _pos + 0.14;

} forEach _categs;