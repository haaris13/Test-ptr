#include "..\..\script_macros.hpp"
/*
	File: fn_whiteListCop.sqf

	Autor: IronBlade
*/
_target = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};
if ((FETCH_CONST(life_coplevel)) < 10) exitWith {};

life_unit_whitelist = _target;
life_type_whitelist = 0;

closeDialog 0;

disableSerialization;

createDialog "Life_WhiteList_Action";

_ctrl = CONTROL(9940,9942);
lbClear _ctrl; //Purge the list

_teams = "true" configClasses (missionConfigFile >> "CfgNameTags" >> "POLICE");

{
	_ctrl lbAdd format["%1",getText(_x >> "text")];
	_ctrl lbSetData [(lbSize _ctrl)-1,str(_forEachIndex + 1)];
} foreach _teams;