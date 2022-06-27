/*
	File: fn_phoneMessageLbChange.sqf

	Autor: Iron
*/
private ["_number", "_messages", "_var", "_idPhone", "_name", "_contact", "_convMessages", "_id"];
diag_log "fn_phoneMessageLbChange";
_number = [_this, 0, "", [""]] call BIS_fnc_param;
life_phone_conv_selected = _number;

_idPhone = life_phone select 0;

_var = format["life_phone_%1_messages", _idPhone];
_messages = missionNamespace getVariable [_var, []];

diag_log str _messages;

_contact = [_number] call life_fnc_phoneContactFindByNumber;

_name = _number;
if (count _contact > 0) then {
	_name = _contact select 1;
};

{
	_numberConv = _x select 0;
	_controlBack = _x select 1;

	if (_numberConv == _number) then {
		_controlBack ctrlSetBackgroundColor [1,1,1,0.3];
	} else {
		_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];
	};
} forEach life_phone_convs_dialogs;

_convMessages = [];
_needToReads = [];

{
	_id = _x select 0;
	_local = _x select 1;
	_read = _x select 2;
	_message = _x select 3;
	_number_sec = _x select 4;
	_time_data = _x select 5;

	if (_number_sec == _number) then {
		_convMessages pushBack [_local, _read, _message, _time_data];

		if (_read == 0) then {
			_needToReads pushBack _id;
		};
	};
} forEach _messages;

{
	ctrlDelete _x;
} forEach life_phone_conv_ctrls;

life_phone_conv_ctrls = [];

disableSerialization;

_display = findDisplay 24300;
_group = _display displayCtrl 24302;
_deleteButton = _display displayCtrl 24306;
_deleteButton ctrlEnable true;

reverse _convMessages;

_pos = -0.14;

{
	_pos = _pos + 0.14;

	_local = _x select 0;
	_read = _x select 1;
	_message = _x select 2;
	_time_data = _x select 3;

	if (_local == 1) then {
		_local = true;
	} else {
		_local = false;
	};

	if (_read == 1) then {
		_read = true;
	} else {
		_read = false;
	};

  	_controlStrip = _display ctrlCreate ["RscText", -1, _group];
  	_controlBack = _display ctrlCreate ["RscText", -1, _group];

  	_controlTextDate = _display ctrlCreate ["RscStructuredText", -1, _group];
  	_controlTextMessage = _display ctrlCreate ["RscStructuredText", -1, _group];

	_controlBack ctrlSetBackgroundColor [-1,-1,-1,0.8];

	_messageHeight = 0.10;

  	if (!_local) then {
  		_controlStrip ctrlSetBackgroundColor [0.969,0.98,0.976,1];

  		if (!_read) then {
  			_controlStrip ctrlSetBackgroundColor [0.078,0.698,0.306,1];
  		};

  		_controlStrip ctrlSetPosition [0, _pos, 0.01, 0.13];
		_controlBack ctrlSetPosition [0.01, _pos, 0.39, 0.13];

		_controlTextMessage ctrlSetPosition [0.008, _pos, 0.399, _messageHeight];
		_controlTextDate ctrlSetPosition [0.255, _pos + 0.095, 0.19, 0.05];
  	} else {
  		_controlStrip ctrlSetBackgroundColor [0,0.494,0.867,1];

		_controlBack ctrlSetPosition [0.18, _pos, 0.399, 0.13];
  		_controlStrip ctrlSetPosition [0.58, _pos, 0.01, 0.13];

		_controlTextMessage ctrlSetPosition [0.18, _pos, 0.399, _messageHeight];
		_controlTextDate ctrlSetPosition [0.435, _pos + 0.095, 0.148, 0.05];
  	};

	_controlBack ctrlCommit 0;
	_controlStrip ctrlCommit 0;

	_controlTextDate ctrlCommit 0;
	_controlTextMessage ctrlCommit 0;

	_controlTextDate ctrlSetStructuredText parseText format ["<t size='0.7' font='PuristaLight'>%1</t>", _time_data];
	_controlTextMessage ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaLight' color='#c4c4c4'>%1</t><br/>", _message];

	_h = ctrlTextHeight _controlTextMessage;

	if (_h > _messageHeight) then {
		_messageHeight = _h;

		if (!_local) then {
	  		_controlStrip ctrlSetPosition [0, _pos, 0.01, _messageHeight + 0.03];
			_controlBack ctrlSetPosition [0.01, _pos, 0.39, _messageHeight + 0.03];

			_controlTextMessage ctrlSetPosition [0.008, _pos, 0.399, _messageHeight];
			_controlTextDate ctrlSetPosition [0.26, _pos + (_messageHeight - 0.1) + 0.095, 0.19, _messageHeight + 0.03];
	  	} else {
			_controlBack ctrlSetPosition [0.18, _pos, 0.399, _messageHeight + 0.03];
	  		_controlStrip ctrlSetPosition [0.58, _pos, 0.01, _messageHeight + 0.03];

			_controlTextMessage ctrlSetPosition [0.18, _pos, 0.399, _messageHeight];
			_controlTextDate ctrlSetPosition [0.44, _pos + (_messageHeight - 0.1) + 0.095, 0.148, _messageHeight + 0.03];
	  	};

		_controlBack ctrlCommit 0;
		_controlStrip ctrlCommit 0;

		_controlTextDate ctrlCommit 0;
		_controlTextMessage ctrlCommit 0;

		_pos = _pos + (_messageHeight - 0.1);
	};

	life_phone_conv_ctrls pushBack _controlBack;
	life_phone_conv_ctrls pushBack _controlStrip;
	life_phone_conv_ctrls pushBack _controlTextDate;
	life_phone_conv_ctrls pushBack _controlTextMessage;
} forEach _convMessages;

_sendMessageEdit = _display displayCtrl 24304;
_sendMessageEdit ctrlEnable true;

_sendMessageBtn = _display displayCtrl 24305;
_sendMessageBtn ctrlEnable true;

if (count _needToReads > 0) then {
	[player, _idPhone, _needToReads] remoteExec ["TON_fnc_phoneReadMessage", 2];

	_messages = missionNamespace getVariable [_var, []];

	{
		if ((_x select 0) in _needToReads) then {
			_x set [2, 1];
		};
	} forEach _messages;

	missionNamespace setVariable [_var, _messages];
};