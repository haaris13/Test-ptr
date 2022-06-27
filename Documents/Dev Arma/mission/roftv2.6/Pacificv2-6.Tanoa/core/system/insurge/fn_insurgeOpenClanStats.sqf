/*
	File: fn_insurgeOpenClanStat.sqf

	Autor: IronBlade
*/
_stats = [_this, 0, [], [[]]] call BIS_fnc_param;

life_fnc_insurge_stats_content = _stats;

createDialog "Insurge_Cash_Board";

disableserialization;

_display = findDisplay 29100;
_ctrlTitle = _display displayCtrl 29110;
_ctrlFilterRow = _display displayCtrl 29101;
_ctrlListNBox = _display displayCtrl 29102;
_ctrlSearchEdit = _display displayCtrl 29103;


_ctrlTitle ctrlSetText "Historique";

//Sorting for listbox
[_ctrlFilterRow, _ctrlListNBox] call life_fnc_insurgeClanStatsFilterDo;

//Will automatically filter this list when typing in the edit box
_ctrlSearchEdit ctrlAddEventHandler ["KeyUp", {["search"] call life_fnc_insurgeClanStatsInfoFilter;}];

//Update the list
["refresh"] call life_fnc_insurgeClanStatsInfoFilter;