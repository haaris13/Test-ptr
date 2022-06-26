#include "..\..\script_macros.hpp"
/*
	File: fn_resourceinfoopen.sqf
		
	Author: IronBlade
	    
	Description:

*/

if(!(createDialog "resourceInformation")) exitWith {};

_ctrlFilterRow = CONTROL(19000,19001);
_ctrlListNBox =  CONTROL(19000,19002);
_ctrlSearchEdit = CONTROL(19000,19003);
_ctrlfilterCombo = CONTROL(19000,19004);

_cfgBourse = (missionConfigFile >> "CfgBourse");
_lists = ("true" configClasses (_cfgBourse >> "Category"));

lbClear _ctrlfilterCombo;

{
	_className = configName(_x);
	_displayName = getText(_x >> "displayname");

	_ctrlfilterCombo lbAdd _displayName;
	_ctrlfilterCombo lbSetData [(lbSize _ctrlfilterCombo)-1, _className];
} forEach _lists;

_ctrlfilterCombo lbSetCurSel 0;


//Sorting for listbox
[_ctrlFilterRow, _ctrlListNBox] call life_fnc_resourceinfofilterDo;

//Will automatically filter this list when typing in the edit box
_ctrlSearchEdit ctrlAddEventHandler ["KeyUp", {["search"] call life_fnc_resourceInfoFilter;}];

//Update the list
["refresh"] call life_fnc_resourceInfoFilter;