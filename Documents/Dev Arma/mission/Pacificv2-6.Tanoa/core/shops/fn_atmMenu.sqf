#include "..\..\script_macros.hpp"
/*
	File: fn_atmMenu.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Opens and manages the bank menu.
*/
private["_units","_type"];

_type = [_this,0,0,[0]] call BIS_fnc_param;

if (!life_session_completed) exitWith {};

life_atm_type = _type;

if (playerSide == west) exitWith {
	[_type] spawn life_fnc_genBankOpen;
};

if(!life_use_atm) exitWith {
	hint format [localize "STR_Shop_ATMRobbed",(LIFE_SETTINGS(getNumber,"noatm_timer"))];
};

if (isNil "life_atmbank" || isNil "life_cash") exitWith {};

if(!dialog) then {
	if(!(createDialog "Life_atm_management")) exitWith {};
};

disableSerialization;
_units = CONTROL(2700,2705);

lbClear _units;
//Bank 
CONTROL(2700,2701) ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>",[BANK] call life_fnc_numberText];
//Cash
CONTROL(2700,2702) ctrlSetStructuredText parseText format["<t size = '1.5'>$%1</t>",[CASH] call life_fnc_numberText];


{
	_name = _x GVAR ["realname",name _x];
	if (alive _x && (player != _x) && (playerSide == side _x)) then {
		_units lbAdd format["%1",_x GVAR ["realname", name _x]];
		_units lbSetData [(lbSize _units)-1,str(_x)];
	};
} foreach playableUnits;

lbSetCurSel [2705,0];

if(isNil {((group player) getVariable "clan_bank")}) then {
	(CONTROL(2700,2708)) ctrlEnable false;
};

_group = group player;
if (isNil {_group getVariable "clan_id"}) exitWith {};

_gradeCfg = [] call life_fnc_clanGetRank;
_canDo = getArray(_gradeCfg >> "canDo");

if !("storeMoney" in _canDo) then {
	(CONTROL(2700,2708)) ctrlEnable false;
};