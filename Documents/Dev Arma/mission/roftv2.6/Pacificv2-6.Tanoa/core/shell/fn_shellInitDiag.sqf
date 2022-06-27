#include "..\..\script_macros.hpp"
#include "script_macro_shell.hpp"
/*
	File: fn_shellInitDiag.sqf

	Autor: IronBlade
*/
_type = [_this,0,"Personal",[""]] call BIS_fnc_param;

disableSerialization;
if(dialog) exitWith {};

if(!createDialog "shellDialog") exitWith {};

// Init Variables

uiNamespace setVariable ["life_shell_CompShell", _type];
_etat = uiNamespace getVariable [format["life_shell_etat_%1",_type], 0];
_comp = uiNamespace getVariable [format["life_shell_cfg_%1",_type], []];

_zoneText = CONTROL(ShellDialog, ShellText);
_zoneText ctrlSetEventHandler ["onKeyDown", "if ((_this select 1) == DIK_RETURN) then {[] call life_fnc_shellEnter};"];

if ((count _comp) == 0) exitWith {
	[_type] spawn life_fnc_shellCreatePersonal;
};

if (_etat == 0) then {
	uiNamespace setVariable [format["life_shell_cfg_%1",_type], []];

	_cfg = [] call life_fnc_shellGetRCfg;
	_load = getArray(_cfg >> "load");
	{
		[_x, false] call life_fnc_shellPrint;
		uiSleep (random 0.5);
	} forEach _load;
	uiSleep (random 3);

	lbClear ListShell;

	_varCheck = "life_shell_wait";

	[
			[
				[["JarvisOs 1.0.","JarvisOs 1.0..","JarvisOs 1.0..."],5],
				[["Loading.","Loading..", "Loading..."], 2],
				[["/","//", "///","////","////Connection."], 2],
				[[">",">>", ">>> Terminé."], 1]
			],
			 true, _varCheck
	] spawn life_fnc_shellProgressMessage;

	waitUntil {uiNamespace getVariable [_varCheck, false];};

	uiNamespace setVariable [_varCheck, false];

	uiNamespace setVariable ["life_shell_Comp_Enter","Login"];
	["Login:", false] call life_fnc_shellPrint;

	_waitVarLog = "life_shell_wait_login";
	uiNamespace setVariable [_waitVarLog, "bad"];
	_login = ["true",3,8,_waitVarLog] call life_fnc_shellWaitVar;

	["Password:", false] call life_fnc_shellPrint;
	uiNamespace setVariable [_waitVarLog, "bad"];
	_pass = ["true",3,8,_waitVarLog] call life_fnc_shellWaitVar;

	_goodUser = (_comp select 2) select 0;
	if (_login != (_goodUser select 1) || _pass != (_goodUser select 2)) exitWith {
		["Erreur !", false] call life_fnc_shellPrint;
		[] call life_fnc_shellresetVar;
		uiSleep 2;
		closeDialog 0;
	};

	["Good !", false] call life_fnc_shellPrint;

	uiNamespace setVariable [format["life_shell_user_%1",_compShell], _goodUser];
	_user = [] call life_fnc_shellGetUser;
	["Bienvenue sur JarvisOs 1.0 !", false] call life_fnc_shellPrint;
	[format["Bonjour %1", _user], false] call life_fnc_shellPrint;
	["", true] call life_fnc_shellPrint;

	uiNamespace setVariable [format["life_shell_list_%1",_type], []];
	uiNamespace setVariable [format["life_shell_etat_%1",_type], 1];
	uiNamespace setVariable ["life_shell_Comp_Enter","Send"];
} else {

	_shellList = uiNamespace getVariable [format["life_shell_list_%1",_type], []];

	_list = CONTROL(ShellDialog,ListShell);

	{
		_value = _x;

		_list lbAdd format["%1", _value];
		_list lbSetData[(lbSize _list)-1,""];
		_list lbSetValue[(lbSize _list)-1, _forEachIndex];

	} forEach _shellList;

	_list lbSetCurSel ((lbSize _list)-1);
};