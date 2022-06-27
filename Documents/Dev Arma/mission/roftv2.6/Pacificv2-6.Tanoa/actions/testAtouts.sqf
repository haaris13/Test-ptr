[] spawn {

disableSerialization;

createDialog "dlg_player_atouts";


_display = findDisplay 25100;
_group = _display displayCtrl 25101;

_pos = 0;

	{
	  	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
	  	_controlTimeBack = _display ctrlCreate ["RscText", -1, _group];
	  	_controlBack = _display ctrlCreate ["RscText", -1, _group];

	  	_controlTime = _display ctrlCreate ["RscStructuredText", -1, _group];
	  	_controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

		_controlStrip ctrlSetBackgroundColor [0.078,0.533,0.773,1];
		_controlTimeBack ctrlSetBackgroundColor [0.078,0.533,0.773,1];
		_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];

		_controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
		_controlBack ctrlSetPosition [0.01, _pos, 0.74, 0.1];
		_controlText ctrlSetPosition [0.01, _pos + 0.03, 0.74, 0.1];

		_controlTimeBack ctrlSetPosition [0.75, _pos, 0.25, 0.1];
		_controlTime ctrlSetPosition [0.76, _pos + 0.005, 0.24, 0.1];

		_controlStrip ctrlCommit 0;
		_controlBack ctrlCommit 0;
		_controlText ctrlCommit 0;
		_controlTime ctrlCommit 0;
		_controlTimeBack ctrlCommit 0;

		_time = 8;
	  	_timeText = [_time,"HH:MM:SS"] call BIS_fnc_secondsToString;

		_controlTime ctrlSetStructuredText parseText format ["<t size='2.3'  font='PuristaBold'>%1</t>", _timeText];
		_controlText ctrlSetStructuredText parseText format ["<t size='1' font='PuristaBold'>%1</t>", _x];

		[_time, _controlTime] spawn {

			_time = (_this select 0);
			_controlTime = (_this select 1);

			while {true} do {
			  UISleep 1;

			  if (isNull (findDisplay 25100)) exitWith {};

			  _time = _time - 1;

			  _timeText = [_time,"HH:MM:SS"] call BIS_fnc_secondsToString;
			  _controlTime ctrlSetStructuredText parseText format ["<t  size='2.3' font='PuristaBold'>%1</t>", _timeText];
			};
		};
		

		_pos = _pos + 0.11;

	} forEach ["Yolo", "Yolo 2", "Yolo 3"];

};