/*
	File: fn_gouvOpenLogs.sqf

	Autor: IronBlade
*/
disableSerialization;

createDialog "Dialog_gouv_Logs";

_display = findDisplay 9700;
_group = _display displayCtrl 9702;
_combo = _display displayCtrl 9701;


_arrayLogs = str(gouv_logs_bank_gouv);
_arrayLogs = call(compile _arrayLogs);
reverse _arrayLogs;

_pos = 0;

{
	_uid = _x select 0;
	_name = _x select 1;
	_type = _x select 2;
	_val = _x select 3;
	_time = _x select 4;
	_color = [0.043, 0.486, 0.769, 1];

	switch (_type) do {
		case 0 : {
			_type = "Dépos Compte Gouvernemental";
			_color = [0.937,0.306,0.286,1];
		};
		
		case 1 : {
			_type = "Retrait Compte Gouvernemental";
			_color = [0.937,0.306,0.286,1];
		};

		case 2 : {
			_type = "Transfert Compte Gouvernemental --> Compte Police";
			_color = [0.937,0.306,0.286,1];
		};

		case 3 : {
			_type = "Dépos Compte Police";
			_color = [0.055,0.184,0.267,1];
		};

		case 4 : {
			_type = "Retrait Compte Police";
			_color = [0.055,0.184,0.267,1];
		};
	};

	_description = format["%1 %2 %3", _name, ([_val] call life_fnc_numberText), _time];

	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
    _controlBack = _display ctrlCreate ["RscText", -1, _group];

    _controlIcon = _display ctrlCreate ["RscStructuredText", -1, _group];
    _controlText = _display ctrlCreate ["RscStructuredText", -1, _group];

    _controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
    _controlBack ctrlSetPosition [0.01, _pos, 0.99, 0.1];
    
    _controlText ctrlSetPosition [0.02, _pos, 0.89, 0.1];

    _controlText ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaBold'>%1</t><br/><t size='0.8' font='PuristaLight' color='#c4c4c4'>%2</t><br/>", _type, _description];

    _controlStrip ctrlSetBackgroundColor _color;
    _controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];

    _controlBack ctrlCommit 0;
    _controlStrip ctrlCommit 0;
    _controlIcon ctrlCommit 0;
    _controlText ctrlCommit 0;

    _pos = _pos + 0.11;

} forEach _arrayLogs;