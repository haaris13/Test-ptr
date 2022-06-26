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
	["_argentsal",0,[0]]
];

if(isNull _civ) exitWith {};


_inv = "";
if(count _invs > 0) then {
	{

		_name = SEL(_x,0);
		

		_displayName = M_CONFIG(getText,"VirtualItems",SEL(_x,0),"displayName");
		_inv = _inv + format["%1 %2<br/>",SEL(_x,1),(localize _displayName)];

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
	_gears = "Aucune Arme";
};

if(!alive _civ || player distance _civ > 5) exitWith {hint format[localize "STR_Cop_CouldntSearch",_civ GVAR ["realname",name _civ]]};
//hint format["%1",_this];
hint parseText format["<t color='#FF0000'><t size='2'>%1</t></t><br/><t color='#FFD700'><t size='1.5'><br/> Argent Sale: %4 <br/><br/>Articles</t></t><br/>%3<br/><t color='#FFD700'><t size='1.5'><br/>Armes</t></t><br/><t color='#FF0000'>%4</t>",(_civ GVAR ["realname",name _civ]),_argentsal,_inv,_gear];
