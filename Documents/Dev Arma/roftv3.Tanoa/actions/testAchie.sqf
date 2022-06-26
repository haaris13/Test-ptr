[] spawn {

disableSerialization;

createDialog "playerAchievements";


_display = findDisplay 2060;
_group = _display displayCtrl 2061;

_pos = 0;

	{
	  	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
	  	_controlBack = _display ctrlCreate ["RscText", -1, _group];

	  	_controlIcon = _display ctrlCreate ["RscStructuredText", -1, _group];
	  	_controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

		_controlStrip ctrlSetBackgroundColor [0.714,0.714,0.714,1];
		_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];

		_controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
		_controlBack ctrlSetPosition [0.01, _pos, 0.99, 0.1];

		_controlIcon ctrlSetPosition [0.02, _pos, 0.11, 0.1];
		_controlText ctrlSetPosition [0.11, _pos, 0.89, 0.1];

		_controlBack ctrlCommit 0;
		_controlStrip ctrlCommit 0;

		_controlIcon ctrlCommit 0;
		_controlText ctrlCommit 0;

		_controlIcon ctrlSetStructuredText parseText format["<img image='icon.paa' size='2.5'></img><br/>"];

		_controlText ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaBold'>%1</t><br/><t size='0.8' font='PuristaLight' color='#c4c4c4'>%2</t><br/>", "Succés Dévérouillé", _x];

		_pos = _pos + 0.11;

	} forEach ["1","2","3","4","5","6","7","8"];

};