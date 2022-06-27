/*
	File: fn_phoneMessageOpenMenu.sqf

	Autor: Iron


	id, local, read, message, number_sec, time_data
*/
_phone = [_this, 0, 0, [0]] call BIS_fnc_param;
_messages = [_this, 1, [], [[]]] call BIS_fnc_param;

life_phone_conv_selected = "";

_var = format["life_phone_%1_messages_loaded", _phone];
_messageLoaded = missionNamespace getVariable [_var, false];

if (!_messageLoaded) then {
	_var = format["life_phone_%1_messages", _phone];
	missionNamespace setVariable [_var, _messages];
};

_convs = [];

{
	_id = _x select 0;
	_local = _x select 1;
	_read = _x select 2;
	_message = _x select 3;
	_number_sec = _x select 4;
	_time_data = _x select 5;

	if (_read == 1) then {
		_read = true;
	} else {
		_read = false;
	};

	_found = -1;

	{
		_numberConv = _x select 0;

		if (_numberConv == _number_sec) exitWith {
			_found = _forEachIndex;
		};
	} forEach _convs;

	if (_found == -1) then {
		_contact = [_number_sec] call life_fnc_phoneContactFindByNumber;

		_name = _number_sec;
		if (count _contact > 0) then {
			_name = _contact select 1;
		};

		_convs pushBack [_number_sec, _name, _read, _message, _time_data];
	};
} forEach _messages;


disableSerialization;

_display = findDisplay 24300;

if (isNull _display) then {
	createDialog "dlg_phone_messages";
	_display = findDisplay 24300;
	life_phone_convs_ctrls = [];
	life_phone_conv_ctrls = [];
};

_group = _display displayCtrl 24301;

_deleteButton = _display displayCtrl 24306;
_deleteButton ctrlEnable false;

{
	ctrlDelete _x;
} forEach life_phone_convs_ctrls;

life_phone_convs_dialogs = [];
life_phone_convs_ctrls = [];

_pos = 0;

{
	_number = _x select 0;
	_name = _x select 1;
	_read = _x select 2;
	_message = _x select 3;
	_date = _x select 4;

	if (count _message > 59) then {
		_message = [_message, 0, 59] call BIS_fnc_trimString;
		_message = format["%1..", _message];
	};

  	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
  	_controlBack = _display ctrlCreate ["RscText", -1, _group];

  	_controlTextTitle = _display ctrlCreate ["RscStructuredText", -1, _group];
  	_controlTextDate = _display ctrlCreate ["RscStructuredText", -1, _group];
  	_controlTextMessage = _display ctrlCreate ["RscStructuredText", -1, _group];
	
	_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];

  	if (!_read) then {
  		_controlStrip ctrlSetBackgroundColor [0.078,0.698,0.306,1];
  	} else {
  		_controlStrip ctrlSetBackgroundColor [0,0.494,0.867,1];
  	};

	_controlStrip ctrlSetPosition [0, _pos, 0.01, 0.1];
	_controlBack ctrlSetPosition [0.01, _pos, 0.49, 0.1];

	_controlTextTitle ctrlSetPosition [0.02, _pos, 0.19, 0.1];
	_controlTextDate ctrlSetPosition [0.25, _pos + 0.002, 0.19, 0.1];
	_controlTextMessage ctrlSetPosition [0.02, _pos + 0.029, 0.38, 0.1];

	_controlBack ctrlCommit 0;
	_controlStrip ctrlCommit 0;

	_controlTextTitle ctrlCommit 0;
	_controlTextDate ctrlCommit 0;
	_controlTextMessage ctrlCommit 0;

	_controlTextTitle ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaBold'>%1</t>", _name];
	_controlTextDate ctrlSetStructuredText parseText format ["<t size='0.7' font='PuristaLight'>%1</t>", _date];
	_controlTextMessage ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaLight' color='#c4c4c4'>%1</t><br/>", _message];

	_cmd = format["['%1'] spawn life_fnc_phoneMessageLbChange", _number];

	_controlStrip ctrlSetEventHandler ["MouseButtonUp", _cmd];
	_controlTextTitle ctrlSetEventHandler ["MouseButtonUp", _cmd];
	_controlTextDate ctrlSetEventHandler ["MouseButtonUp", _cmd];
	_controlTextMessage ctrlSetEventHandler ["MouseButtonUp", _cmd];

	life_phone_convs_dialogs pushBack [_number, _controlBack];

	life_phone_convs_ctrls pushBack _controlStrip;
	life_phone_convs_ctrls pushBack _controlBack;
	life_phone_convs_ctrls pushBack _controlTextTitle;
	life_phone_convs_ctrls pushBack _controlTextDate;
	life_phone_convs_ctrls pushBack _controlTextMessage;

	_pos = _pos + 0.11;

} forEach _convs;

_sendMessageEdit = _display displayCtrl 24304;
_sendMessageEdit ctrlEnable false;

_sendMessageBtn = _display displayCtrl 24305;
_sendMessageBtn ctrlEnable false;

if (count _convs > 0) then {
	_first = _convs select 0;
	_number = _first select 0;

	[_number] spawn life_fnc_phoneMessageLbChange;
};