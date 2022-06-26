/*
	File: fn_gouvLoisDelete.sqf

	Autor: IronBlade
*/

disableSerialization;
_display = findDisplay 9600;

_list = (_display displayCtrl 9601);
_info = (_display displayCtrl 9602);

_curSel = lbCurSel _list;
if (_curSel == -1) exitWith {};

_index = _list lbValue _curSel;

[2, [], _index] remoteExecCall ["TON_fnc_gouvLoisDB", 2];

closeDialog 0;