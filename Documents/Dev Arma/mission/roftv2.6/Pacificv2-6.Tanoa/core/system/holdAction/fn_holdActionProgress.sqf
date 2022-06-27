#include "defines.inc"
/*
	File: fn_holdActionProgress.sqf

	Based on Function of Arma 3 By Jiri Wainar
	Autor: IronBlade

	Description:
	Add a hold action. If the hold actions are not initialized yet, initialize the system first.
*/

params
[
	["_iconIdle","\A3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_revive_ca.paa",["",{}]],
	["_iconProgress","\A3\Ui_f\data\IGUI\Cfg\HoldActions\holdAction_revive_ca.paa",["",{}]],
	["_condProgress","true",[""]],
	["_codeStart",{},[{}]],
	["_codeProgress",{},[{}]],
	["_codeCompleted",{},[{}]],
	["_codeInterrupted",{},[{}]],
	["_duration",10,[123]]
];

//convert to structured text
if (_iconIdle isEqualType "") then
{
	_iconIdle = TEXTURE_TEMPLATE_ICON_IDLE(_iconIdle);
};
if (_iconProgress isEqualType "") then
{
	_iconProgress = TEXTURE_TEMPLATE_ICON_PROGRESS(_iconProgress);
};

//prepare progress textures
if (isNil {TEXTURES_PROGRESS}) then
{
	TEXTURES_PROGRESS = [];
	for "_i" from 0 to FRAME_MAX_PROGRESS do
	{
		TEXTURES_PROGRESS pushBack TEXTURE_TEMPLATE_PROGRESS(_i);
	};
};

//prepare idle textures
if (isNil {TEXTURES_IDLE}) then
{
	TEXTURES_IDLE = [];

	private _alpha = 0;
	private _color = "";

	for "_i" from 0 to FRAME_MAX_IDLE do
	{
		_alpha = (sin((_i/FRAME_MAX_IDLE) * 360) * 0.25) + 0.75;
		_color = [1,1,1,_alpha] call bis_fnc_colorRGBAtoHTML;

		TEXTURES_IDLE pushBack TEXTURE_TEMPLATE_IDLE_PULSE(_i,_color);
	};
};

//prepare in textures
if (isNil {TEXTURES_IN}) then
{
	TEXTURES_IN = [];
	for "_i" from 0 to FRAME_MAX_IN do
	{
		TEXTURES_IN pushBack TEXTURE_TEMPLATE_IN(_i);
	};
};


if (isNil "bis_fnc_holdAction_running") then {bis_fnc_holdAction_running = false;};

if (isNil "bis_fnc_holdAction_animationIdleFrame3") then {bis_fnc_holdAction_animationIdleFrame3 = 0;};
if (isNil "bis_fnc_holdAction_animationIdleFrame6") then {bis_fnc_holdAction_animationIdleFrame6 = 0;};
if (isNil "bis_fnc_holdAction_animationIdleFrame12") then {bis_fnc_holdAction_animationIdleFrame12 = 0;};
if (isNil "bis_fnc_holdAction_animationIdleFrame24") then {bis_fnc_holdAction_animationIdleFrame24 = 0;};


//[_target,_actionID,_title,_icon,_textures,_frame,_hint] call bis_fnc_holdAction_showIcon;
bis_fnc_holdAction_showIcon =
{
	params
	[
		["_icon","",["",{}]],
		["_texSet",TEXTURES_PROGRESS,[[]]],
		["_frame",0,[123]]
	];

	if (_icon isEqualType {}) then
	{
		_icon = _target call _icon;
	};

	_target setUserActionText [_actionID,_title,_texSet select _frame,_icon + "<br/><br/>" + _hint];
};

bis_fnc_holdAction_animationTimerCode =
{
	if (time > (missionNamespace getVariable ["bis_fnc_holdAction_animationIdleTime",-1]) && {_eval}) then
	{
		bis_fnc_holdAction_animationIdleTime = time + 0.065;

		bis_fnc_holdAction_animationIdleFrame3 = (bis_fnc_holdAction_animationIdleFrame3 + 1) % 3;
		bis_fnc_holdAction_animationIdleFrame6 = (bis_fnc_holdAction_animationIdleFrame6 + 1) % 6;
		bis_fnc_holdAction_animationIdleFrame12 = (bis_fnc_holdAction_animationIdleFrame12 + 1) % 12;
		bis_fnc_holdAction_animationIdleFrame24 = (bis_fnc_holdAction_animationIdleFrame24 + 1) % 24;

		//play idle animation only when action is not in progress
		if (!bis_fnc_holdAction_running) then
		{
			params["_title","_iconIdle","_hint"];

			//idle animations always have 12 frames
			[_target,_actionID,_title,_iconIdle,TEXTURES_IDLE,bis_fnc_holdAction_animationIdleFrame12,_hint] call bis_fnc_holdAction_showIcon;
		};
	};
};

private _codeInit =
{
	bis_fnc_holdAction_running = true;

	//check if another hold action is running, if so terminate it
	if (!isNil "bis_fnc_holdAction_scriptHandle" && {!scriptDone bis_fnc_holdAction_scriptHandle}) exitWith
	{
		if (!isNil "bis_fnc_holdAction_params") then
		{
			//unwrap arguments supplied by addAction command
			bis_fnc_holdAction_params params
			[
				["_target",objNull,[objNull]],
				["_caller",objNull,[objNull]],
				["_actionID",10,[123]],
				["_arguments",[],[[]]]
			];

			//unwrap 'arguments' argument :)
			_arguments params["_a0","_a1","_a2","_a3","_a4","_a5","_a6","_a7","_a8","_a9","","_title","_iconIdle","_iconProgress","","","","","","_codeInterrupted"];

			[_target,_caller,_actionID,_arguments] call _codeInterrupted;
			[_target,_actionID,_title,_iconIdle,TEXTURES_PROGRESS,0] call bis_fnc_holdAction_showIcon;
		};

		terminate bis_fnc_holdAction_scriptHandle;
		waitUntil{scriptDone bis_fnc_holdAction_scriptHandle};

		bis_fnc_holdAction_running = false;
	};

	bis_fnc_holdAction_params = _this;
	bis_fnc_holdAction_scriptHandle = _this spawn
	{
		//unwrap arguments supplied by addAction command
		params
		[
			["_target",objNull,[objNull]],
			["_caller",objNull,[objNull]],
			["_actionID",10,[123]],
			["_arguments",[],[[]]]
		];

		private _this = _caller;	//needed for conditions, there _caller is refferenced as _this for some legacy reason ;(
		private _displaysCount = count allDisplays;

		//disable player's action menu
		{inGameUISetEventHandler [_x, "true"]} forEach ["PrevAction", "NextAction"];

		//unwrap 'arguments' argument :)
		_arguments params["_a0","_a1","_a2","_a3","_a4","_a5","_a6","_a7","_a8","_a9","_target","_title","_iconIdle","_iconProgress","_condShow","_condProgress","_codeStart","_codeProgress","_codeCompleted","_codeInterrupted","_duration","_removeCompleted"];

		//retype conditions from string to code
		private _condProgressCode = compile _condProgress;

		//play transition-in animation
		for "_i" from 0 to FRAME_MAX_IN do
		{
			sleep 0.05;

			//update icon
			[_target,_actionID,_title,_iconIdle,TEXTURES_IN,_i] call bis_fnc_holdAction_showIcon;
		};

		//execute supplied 'on start' action code
		[_target,_caller,_actionID,_arguments] call _codeStart;

		//progress init
		private _frame = 0;
		private _timeStart = time;
		private _timeNextStep = time;
		private _stepDuration = _duration / FRAME_MAX_PROGRESS;

		//handle progress
		while {call _condProgressCode && {_frame < FRAME_MAX_PROGRESS}} do
		{
			_timeNextStep = _timeStart + (_frame * _stepDuration);

			waitUntil
			{
				time >= _timeNextStep || {(inputAction "Action" < 0.5 && {inputAction "ActionContext" < 0.5}) || {!(call _condProgressCode)}}
			};

			//exit if progression failed - key was released or condition was not fulfiled
			if (time < _timeNextStep  || {visibleMap || {_displaysCount != count allDisplays}}) exitWith {};

			//increment progress
			_frame = _frame + 1;

			//update icon
			[_target,_actionID,_title,_iconProgress,TEXTURES_PROGRESS,_frame] call bis_fnc_holdAction_showIcon;

			//execute supplied 'on progress' action code
			[_target,_caller,_actionID,_arguments,_frame,FRAME_MAX_PROGRESS] call _codeProgress;
		};

		//execute supplied 'completed' action code
		if (_frame == FRAME_MAX_PROGRESS) then
		{
			sleep _stepDuration;

			//play transition-out animation

			[_target,_caller,_actionID,_arguments] call _codeCompleted;

			if (_removeCompleted) then
			{
				_target removeAction _actionID;
			};
		}
		else
		{
			[_target,_caller,_actionID,_arguments] call _codeInterrupted;
		};

		//reset the progress texture
		[_target,_actionID,_title,_iconIdle,TEXTURES_PROGRESS,0] call bis_fnc_holdAction_showIcon;

		//enable player's action menu
		{inGameUISetEventHandler [_x, ""]} forEach ["PrevAction", "NextAction"];

		//reset 'running' flag
		bis_fnc_holdAction_running = false;
	};
};

//inject custom code to _condStart to allow for the idle animation
if (_iconIdle isEqualType "") then
{
	_condShow = format["_eval = %1; [""%2"",""%3"",""%4""] call bis_fnc_holdAction_animationTimerCode; _eval",_condShow,_title,_iconIdle,_hint];
}
else
{
	_condShow = format["_eval = %1; [""%2"",%3,""%4""] call bis_fnc_holdAction_animationTimerCode; _eval",_condShow,_title,_iconIdle,_hint];
};

//add the action
private _actionID = _target addAction [_title, _codeInit, _arguments, _priority, ACTION_SHOW_WINDOW, ACTION_HIDE_ON_USE, ACTION_SHORTCUT, _condShow, ACTION_DISTANCE, _showUnconscious];

//set the initial state to frame 0
[_target,_actionID,_title,_iconIdle,TEXTURES_IDLE,0] call bis_fnc_holdAction_showIcon;

_actionID