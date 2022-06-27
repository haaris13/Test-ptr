/*
	File: fn_narcosOpenClanStat.sqf

	Autor: Iron
	Date: 25 Mar 2020 23:28:24
	Version: 0.1
*/
_stats = [_this, 0, [], [[]]] call BIS_fnc_param;

life_fnc_narcos_stats_content = _stats;

createDialog "Narcos_Cash_Board";

disableserialization;

_display = findDisplay 29100;
_ctrlTitle = _display displayCtrl 29110;
_ctrlFilterRow = _display displayCtrl 29101;
_ctrlListNBox = _display displayCtrl 29102;
_ctrlSearchEdit = _display displayCtrl 29103;


_ctrlTitle ctrlSetText "Historique";

//Sorting for listbox
[_ctrlFilterRow, _ctrlListNBox] call life_fnc_narcosClanStatsFilterDo;

//Will automatically filter this list when typing in the edit box
_ctrlSearchEdit ctrlAddEventHandler ["KeyUp", {["search"] call life_fnc_narcosClanStatsInfoFilter;}];

//Update the list
["refresh"] call life_fnc_narcosClanStatsInfoFilter;