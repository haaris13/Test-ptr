/*
	File : fn_showNotification.sqf

	Author: IronBlade

	Inspiré de UpperM
*/
private ["_display","_ctrlText","_ctrlStrip","_ctrlCommited", "_bad", "_text"];

params [
	["_title","Information",[""]],
	["_text","",[""]],
	["_stripColor",[0.043,0.486,0.769,1],[]],
	["_sound","FD_Timer_F",[""]]
];

if (_text isEqualTo "") exitWith {};
	
if (_text in life_eventNotifMessages) exitWith {};
if (!life_hasSpawn) exitWith {};

_queue = life_eventNotifQueue;
life_eventNotifQueue = life_eventNotifQueue + 1;

life_eventNotifMessages pushBack _text;

if (life_eventNotifQueue > 1) then {
	waitUntil {life_eventNotifQueue isEqualTo _queue};
};

disableSerialization;

{
	_ctrlText = (findDisplay 46) displayCtrl (_x select 0);
	_ctrlStrip = (findDisplay 46) displayCtrl (_x select 1);

	_posText = ctrlPosition _ctrlText;
	_posStrip = ctrlPosition _ctrlStrip;
	_height = (ctrlTextHeight _ctrlText) + 0.01;

	_posText set [1, (_posText select 1) + _height + 0.025];
	_posStrip set [1, (_posStrip select 1) + _height + 0.025];

	_ctrlText ctrlSetPosition _posText;
	_ctrlStrip ctrlSetPosition _posStrip;

	_ctrlText ctrlCommit 0.2;
	_ctrlStrip ctrlCommit 0.2;
} forEach life_activeNotifControl;

UISleep (0.2);

_ctrlText = (findDisplay 46) ctrlCreate ["RscStructuredText", life_notifControlText];
_ctrlStrip = (findDisplay 46) ctrlCreate ["RscText", life_notifControlStrip];

_ctrlStrip ctrlSetBackgroundColor _stripColor;
_ctrlText ctrlSetBackgroundColor [-1,-1,-1,0.8];

_ctrlText ctrlSetStructuredText parseText format ["<t size='0.8' font='PuristaLight'>%1</t><br/><t size='0.8' font='PuristaLight' color='#c4c4c4'>%2</t><br/>", _title, _text];

_ctrlStrip ctrlSetPosition [-0.16618509 * safezoneW + safezoneX, 0.291 * safezoneH + safezoneY, 0.003 * safezoneW, 0 * safezoneH];
_ctrlText ctrlSetPosition [-0.17031 * safezoneW + safezoneX, 0.291 * safezoneH + safezoneY, 0.180469 * safezoneW, 0 * safezoneH];
_ctrlText ctrlCommit 0;
_ctrlStrip ctrlCommit 0;

_ctrlText ctrlSetPosition [0.01 * safezoneW + safezoneX, (ctrlPosition _ctrlText) select 1, (ctrlPosition _ctrlText) select 2, ctrlTextHeight _ctrlText + 0.01];
_ctrlText ctrlCommit 0.7;

_ctrlStrip ctrlSetPosition [0.0055 * safezoneW + safezoneX, (ctrlPosition _ctrlStrip) select 1, (ctrlPosition _ctrlStrip) select 2, ctrlTextHeight _ctrlText + 0.01];
_ctrlStrip ctrlCommit 0.7;


//Runs for the newly created control
[life_notifControlText, life_notifControlStrip] spawn
{
	disableSerialization;
	_idcText = _this select 0;
	_idcStrip = _this select 1;

	_ctrlText = (findDisplay 46) displayCtrl _idcText;
	_ctrlStrip = (findDisplay 46) displayCtrl _idcStrip;

	UISleep 7;

	_ctrlText ctrlSetFade 1;
	_ctrlStrip ctrlSetFade 1;

	_ctrlText ctrlCommit 1;
	_ctrlStrip ctrlCommit 1;

	UISleep 0.5;

	ctrlDelete _ctrlText;
	ctrlDelete _ctrlStrip;

	life_activeNotifControl = life_activeNotifControl - [[_idcText, _idcStrip]];

	if (count life_activeNotifControl isEqualTo 0) then {
		life_notifControlText = 30000;
		life_notifControlStrip = 30001;
	};
};

//Add new control
life_activeNotifControl pushBack [life_notifControlText, life_notifControlStrip];
life_notifControlText = life_notifControlText + 10;
life_notifControlStrip = life_notifControlStrip + 10;

if (Life_UISounds_enabled) then {
	//Dont want the noise spamming
	if (count life_activeNotifControl <= 2) then {
		if (_sound != "") then {playSound _sound};
	};
};


//Queue thing
UISleep 0.7;
life_eventNotifQueue = life_eventNotifQueue - 1;
life_eventNotifMessages deleteAt ((count life_eventNotifMessages) - 1);