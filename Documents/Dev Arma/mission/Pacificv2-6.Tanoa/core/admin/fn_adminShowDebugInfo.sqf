/*
	File: fn_adminShowDebugInfo.sqf

	Autor:IronBlade
*/

if (isNil "admin_debug_show") then {
	admin_debug_show = false;
};

if (admin_debug_show) exitWith {admin_debug_show = false;};
admin_debug_show = true;

disableSerialization;

waitUntil {!isNull (findDisplay 316000)};

admin_debug_show_vars = [];

_display = findDisplay 316000;

{
	_text = ctrlText (_display displayCtrl _x);

	if (_text != "") then {
		admin_debug_show_vars pushBack _text;
	};
} forEach [12285, 12287, 12289, 12291];

5 cutRsc ["life_admin_show","PLAIN"];
_ui = uiNamespace getVariable "life_admin_show";
_pgText = _ui displayCtrl 38401;

while {admin_debug_show} do {

	uiSleep 0.2;

	_text = "Variables: <br/>";

	{
		_debugT = _x;

		_result = call(compile _debugT);

		if (typeName _result != typeName "") then {
			_result = str (_result);
		};

		_text = format["%1Variable %2: <br/>", _text, _forEachIndex];
		_text = format["%1%2<br/>", _text, _result];

	} forEach admin_debug_show_vars;

	_pgText ctrlSetStructuredText parseText _text;
};

5 cutText ["","PLAIN"];