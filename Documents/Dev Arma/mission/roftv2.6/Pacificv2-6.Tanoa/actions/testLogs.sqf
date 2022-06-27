[] spawn {
    disableSerialization;

    createDialog "Dialog_gouv_Logs";

    _display = findDisplay 9700;
    _group = _display displayCtrl 9702;

    _pos = 0;

    {
    	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
        _controlBack = _display ctrlCreate ["RscText", -1, _group];

        _controlIcon = _display ctrlCreate ["RscStructuredText", -1, _group];
        _controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

        _controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
        _controlBack ctrlSetPosition [0.01, _pos, 0.99, 0.1];
        
        _controlText ctrlSetPosition [0.02, _pos, 0.89, 0.1];

        _displayName = _x;
        _description = _x;
        _icon ="";

        if (_icon != "") then {
          _controlIcon ctrlSetStructuredText parseText format["<img image='%1' size='2.5'></img><br/>",_icon];
        };

        _controlText ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaBold'>%1</t><br/><t size='0.8' font='PuristaLight' color='#c4c4c4'>%2</t><br/>", _displayName, _description];

        _controlStrip ctrlSetBackgroundColor [0.043,0.486,0.769,1];
        _controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];

        _controlBack ctrlCommit 0;
        _controlStrip ctrlCommit 0;
        _controlIcon ctrlCommit 0;
        _controlText ctrlCommit 0;

        _pos = _pos + 0.11;

    } forEach gouv_logs_bank_gouv;

};