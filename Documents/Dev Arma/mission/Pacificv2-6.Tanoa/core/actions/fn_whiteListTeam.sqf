#include "..\..\script_macros.hpp"
/*
	File: fn_whiteListTeam.sqf

	Autor: IronBlade
*/
_target = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_type = [_this,1,0,[0]] call BIS_fnc_param;
_config = [_this,2,"",[""]] call BIS_fnc_param;

if (isNull _target) exitWith {};
if (_type isEqualTo 0) exitWith {};

life_unit_whitelist = _target;
life_type_whitelist = _type;

closeDialog 0;

disableSerialization;

createDialog "Life_WhiteList_Action";

_ctrl = CONTROL(9940,9942);
lbClear _ctrl; //Purge the list

_teams = "true" configClasses (missionConfigFile >> "CfgNameTags" >> _config);

_current = (missionConfigFile >> "CfgNameTags" >> _config);
_var = getText(_current >> "rankvar");

_curVar = player getVariable [_var, 0];

diag_log str(_teams);

{
	_canAdd = true;

	switch (true) do {
		case (_config == 'MEDIC' && (_curVar < 5) && !(_forEachIndex in [0,1])) : {
			_canAdd = false;
		};
	};

	if (_canAdd) then {
		_ctrl lbAdd format["%1",getText(_x >> "text")];
		_ctrl lbSetData [(lbSize _ctrl)-1,str(_forEachIndex + 1)];
	};
} foreach _teams;