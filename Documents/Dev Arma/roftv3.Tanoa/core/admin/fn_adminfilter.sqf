#include "..\..\script_macros.hpp"
/*
	File: fn_adminfilter.sqf
	Author: IronBlade
*/

private ["_type","_toSend","_includeLocation","_fnc","_ctrlSearchEdit"];
disableSerialization;
_list = CONTROL(2900,2902);
_ctrlSearchEdit = CONTROL(2900,2912);

lbClear _list;

{

	_unitName = _x GVAR ["realname",name _x];

	if (toUpper _unitName find (toUpper ctrlText _ctrlSearchEdit) >= 0) then {
		_side = switch(side _x) do {case west: {"Cop"}; case civilian: {"Civ"}; case independent: {"Medic"}; default {"Unknown"};};
		_list lbAdd format["%1 - %2", _x GVAR ["realname",name _x],_side];
		_list lbSetdata [(lbSize _list)-1,str(_x)];
	};

} foreach playableUnits;

lbSetCurSel [2902,0];