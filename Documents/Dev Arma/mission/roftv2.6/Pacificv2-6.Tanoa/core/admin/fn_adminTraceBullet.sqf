/*
	Author: Josef Zemanek, IronBlade

	Description:
	Visualizes bullet trajectories.
	NOTE: Currently works only for player in a single instance

	Parameter(s):
		0: OBJECT - unit who's bullets will be visualized
		1: (Optional) NUMBER - max trajectories (default 10)

	Returns:
	Nothing
*/

private ["_shooter","_maxLines","_EHIndex"];
_shooter = _this param [0,objNull,[objNull]];
_maxLines = _this param [1,10,[10]];


if (isNil "BIS_tracedShooter_Array") then {
	BIS_tracedShooter_Array = [_shooter];
} else {
	if (_shooter in BIS_tracedShooter_Array && _maxLines == 0) then {
		BIS_tracedShooter_Array = BIS_tracedShooter_Array - [_shooter];
	} else {
		if (!(_shooter in BIS_tracedShooter_Array)) then {
			BIS_tracedShooter_Array pushBack _shooter;
		};
	};
};

if (isNil {_shooter getVariable "BIS_bulletTrace_EHPool"}) then {
	_shooter setVariable ["BIS_bulletTrace_EHPool", []];
};

if (_maxLines == 0) then {
	{_shooter removeEventHandler ["Fired", _x]} forEach (_shooter getVariable "BIS_bulletTrace_EHPool");
	_shooter setVariable ["BIS_bulletTrace_EHPool", []];
	if (!isNil {_shooter getVariable "BIS_bulletTrace_EHDraw"}) then {removeMissionEventHandler ["Draw3D", _shooter getVariable "BIS_bulletTrace_EHDraw"]};
	if (!isNil {_shooter getVariable "BIS_lines"}) then {
		{for [{_i = 0}, {_i < count _x}, {_i = _i + 1}] do {_x set [_i, [[]]]}} forEach (_shooter getVariable "BIS_lines");
		_shooter setVariable ["BIS_lines", []];
	}
} else {
	_shooter setVariable ["BIS_maxLines", _maxLines];
	_shooter setVariable ["BIS_lines", []];
	_shooter setVariable ["BIS_colors", []];
	_shooter setVariable ["BIS_flying", 0];

	_EHIndex = _shooter addEventHandler ["Fired", {[_this select 0, position (_this select 6), _this select 6] spawn {
		_shooter = _this select 0;
		_start = _this select 1;
		_round = _this select 2;

		_shooter setVariable ["BIS_flying", (_shooter getVariable "BIS_flying") + 1];
		_startSpeed = vectorMagnitude (velocity _round);
		_shooter setVariable ["BIS_colors", (_shooter getVariable "BIS_colors") + [[]]];
		_shooter setVariable ["BIS_lines", (_shooter getVariable "BIS_lines") + [[]]];
		_i = (count (_shooter getVariable "BIS_lines") - 1);
		if (_i >= 0) then {
			((_shooter getVariable "BIS_colors") select _i) set [0, [1,0,0,1]];
			((_shooter getVariable "BIS_lines") select _i) set [0, _start];
		};
		if (count (_shooter getVariable "BIS_lines") > (_shooter getVariable "BIS_maxLines")) then {
			(_shooter getVariable "BIS_colors") set [(count (_shooter getVariable "BIS_colors")) - (_shooter getVariable "BIS_maxLines") - 1, []];
			(_shooter getVariable "BIS_lines") set [(count (_shooter getVariable "BIS_lines")) - (_shooter getVariable "BIS_maxLines") - 1, []];
		};
		while {!isNull _round && vectorMagnitude (velocity _round) > 1 && if (count (_shooter getVariable "BIS_lines") > 0) then {count ((_shooter getVariable "BIS_lines") select _i) > 0} else {FALSE}} do {
			_curSpd = vectorMagnitude (velocity _round);
			if (_curSpd > 0) then {
				_r = 2 - (_startSpeed / _curSpd);
				_b = (_startSpeed / _curSpd) - 1;
				((_shooter getVariable "BIS_colors") select _i) set [count ((_shooter getVariable "BIS_colors") select _i), [_r,0,_b,1]];
				((_shooter getVariable "BIS_lines") select _i) set [count ((_shooter getVariable "BIS_lines") select _i), position _round];
				if (_curSpd > 60) then {
					waitUntil {(vectorMagnitude (velocity _round)) < (_curSpd - (_curSpd / 100))};
				} else {
					sleep 0.1;
				};
			};

		};
		waitUntil {isNull _round || count (_shooter getVariable "BIS_lines") == 0 || vectorMagnitude (velocity _round) <= 1};
		if (count (_shooter getVariable "BIS_lines") > 0) then {
			_shooter setVariable ["BIS_flying", (_shooter getVariable "BIS_flying") - 1];
			if ((_shooter getVariable "BIS_flying") == 0) then {
				_shooter setVariable ["BIS_colors", (_shooter getVariable "BIS_colors") - [[]]];
				_shooter setVariable ["BIS_lines", (_shooter getVariable "BIS_lines") - [[]]];
			};
		};
	}}];

	_shooter setVariable ["BIS_bulletTrace_EHPool", (_shooter getVariable "BIS_bulletTrace_EHPool") + [_EHIndex]];

	_event = (call (compile format["addMissionEventHandler ['Draw3D', {

		if (%1 getVariable ['BIS_drawLines',true]) then {
			{
				for [{_i = 1}, {_i < count _x}, {_i = _i + 1}] do {
					drawLine3D [_x select (_i - 1), _x select _i, ((%1 getVariable 'BIS_colors') select _forEachIndex) select (_i - 1)];
				}
			} forEach (%1 getVariable 'BIS_lines')
		};
	}];", str (_shooter)]));

	_shooter setVariable ["BIS_bulletTrace_EHDraw", _event];
};