#include "..\..\script_macros.hpp"
/*

	File: fn_player_licenses.sqf
		
	Author: IronBlade
    
*/

private ["_side"];
disableSerialization;
if (!createDialog "playerLicenses") exitWith {hint "An error occured"};

_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};

_list = CONTROL(2100,2101);

_Btn10 = CONTROL(2100,2102);

_Btn10 ctrlShow true;

{
	_displayName = getText(_x >> "displayName");
	_displayName = getText(_x >> "displayName");
	
	if(LICENSE_VALUE(configName _x,_side)) then {
		_list lbAdd format ["%1",localize _displayName];
		_list lbSetData [(lbSize _list)-1,configName _x];
	};
} foreach (format["getText(_x >> 'side') isEqualTo '%1'",_side] configClasses (missionConfigFile >> "Licenses"));