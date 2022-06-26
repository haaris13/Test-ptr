/*
	File: fn_atoutsOpen.sqf

	Autor: Iron
	Date: 17 Mar 2020 23:06:15
	Version: 0.1
*/

disableSerialization;

createDialog "dlg_player_atouts";


_display = findDisplay 25100;
_group = _display displayCtrl 25101;


_pos = 0;

{
	_var = _x select 0;
	_timeLeft = _x select 1;
	_timeStart = _x select 2;

	_cfgAtouts = (missionConfigFile >> "Atouts" >> _var);
	_name = getText(_cfgAtouts >> "title");
	_type = getText(_cfgAtouts >> "type");
	_desc = getText(_cfgAtouts >> "description");

	_curTime = time;

	_time = _timeLeft - (_curTime - _timeStart);

	if (_time < 0) then {
		_time = 0;
	};

	_color = [0.078,0.533,0.773,1];

	switch (_type) do {
		case "drogue" : {_color = [0.09,0.455,0.169,1];};
		case "alcohol" : {_color = [0.38,0,0.78,1];};
		case "cooldown" : {_color = [0.463,0.471,0.494,1];};
	};

  	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
  	_controlTimeBack = _display ctrlCreate ["RscText", -1, _group];
  	_controlBack = _display ctrlCreate ["RscText", -1, _group];

  	_controlTime = _display ctrlCreate ["RscStructuredText", -1, _group];
  	_controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

	_controlStrip ctrlSetBackgroundColor _color;
	_controlTimeBack ctrlSetBackgroundColor _color;
	_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];

	_controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
	_controlBack ctrlSetPosition [0.01, _pos, 0.74, 0.1];
	_controlText ctrlSetPosition [0.01, _pos, 0.74, 0.1];

	_controlTimeBack ctrlSetPosition [0.75, _pos, 0.25, 0.1];
	_controlTime ctrlSetPosition [0.752, _pos + 0.005, 0.248, 0.1];

	_controlStrip ctrlCommit 0;
	_controlBack ctrlCommit 0;
	_controlText ctrlCommit 0;
	_controlTime ctrlCommit 0;
	_controlTimeBack ctrlCommit 0;

  	_timeText = [_time,"HH:MM:SS"] call BIS_fnc_secondsToString;

	_controlTime ctrlSetStructuredText parseText format ["<t size='2.3' font='PuristaBold'>%1</t>", _timeText];
	_controlText ctrlSetStructuredText parseText format ["<t size='1' font='PuristaBold'>%1</t><br/><t size='0.8' font='PuristaLight'>%2</t>", _name, _desc];

	[_time, _controlTime] spawn {

		_time = (_this select 0);
		_controlTime = (_this select 1);

		while {true} do {
		  UISleep 1;

		  if (isNull (findDisplay 25100)) exitWith {};

		  _time = _time - 1;

		  if (_time < 0) then {
		  	_time = 0;
		  };

		  _timeText = [_time,"HH:MM:SS"] call BIS_fnc_secondsToString;
		  _controlTime ctrlSetStructuredText parseText format ["<t  size='2.3' font='PuristaBold'>%1</t>", _timeText];
		};
	};
	
	_pos = _pos + 0.11;
} forEach life_atouts_actif;