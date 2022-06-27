#include "..\..\script_macros.hpp"
/*
	File: fn_returnFouille.sqf
	Author: IronBlade

	Description:
	Returns information on the search.
*/
life_action_inUse = false;

params [
	["_civ",objNull,[objNull]],
	["_invs",[],[[]]],
	["_gears",[],[[]]],
	["_cash",0,[0]]
];

if(isNull _civ) exitWith {};


_inv = "";
if(count _invs > 0) then {
	{

		_name = SEL(_x,0);
		

		_displayName = M_CONFIG(getText,"VirtualItems",_name,"displayName");

		_isIllegalItem = M_CONFIG(getNumber,"VirtualItems",_name,"illegal");

		if (_isIllegalItem == 1) then {
			_inv = _inv + format["<t color='#FF0000'>%1 %2</t><br/>",SEL(_x,1),(localize _displayName)];
		} else {
			_inv = _inv + format["%1 %2<br/>",SEL(_x,1),(localize _displayName)];
		};
	} foreach _invs;
} else {
	_inv = "Aucun Article";
};

_gear = "";

if(count _gears > 0) then {
	{

		_name = _x;
		
		_displayName = getText(configFile >> "CfgWeapons" >> _name >> "displayName");
		_gear = _gear + format["%1<br/>",_displayName];

	} foreach _gears;
} else {
	_gears = "Aucune arme";
};

if(!alive _civ || player distance _civ > 5) exitWith {["Error", format[localize "STR_Cop_CouldntSearch",_civ GVAR ["realname",name _civ]]] spawn life_fnc_showPredefinedNotification;};

hint parseText format[
	"<t color='#FF0000'><t size='2'>%1</t></t><br/>" + 
	"<t color='#FFD700'><t size='1.5'><br/>Articles</t></t>" + 
	"<br/>" + 
	"%2" + 
	"<t color='#FFD700'><t size='1.5'><br/>Armes</t></t><br/><t color='#FF0000'>%3</t><br/>" + 
	"<t color='#FFD700'><t size='1.5'><br/>Cash</t></t><br/>%4$",
	(_civ getVariable ["realname",name _civ]),
	_inv,
	_gear,
	_cash
];
