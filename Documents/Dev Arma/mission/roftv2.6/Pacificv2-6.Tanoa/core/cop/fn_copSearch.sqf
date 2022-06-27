#include "..\..\script_macros.hpp"
/*
	File: fn_copSearch.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Returns information on the search.
*/
life_action_inUse = false;
private["_license","_guns","_gun"];
params [
	["_civ",objNull,[objNull]],
	["_invs",[],[[]]],
	["_robber",false,[false]]
];

if(isNull _civ) exitWith {};

_illegal = 0;
_inv = "";
if(count _invs > 0) then {

	_informer = 0;
	_informerG = 0;
	{
		_name = _x select 0;
		
		if (_informer == 0 && _name in ["archeTOssements","archeTCasque","archeTUniforme","archeSVin","archeSCoffreB","archeSCoffreT"]) then {
			_informer = 1;
			["Error", "Le civil doit avoir la licence d'Archéologie !"] spawn life_fnc_showPredefinedNotification;
		};

		_displayName = M_CONFIG(getText,"VirtualItems",SEL(_x,0),"displayName");
		_inv = _inv + format["%1 %2<br/>",SEL(_x,1),(localize _displayName)];
		_price = M_CONFIG(getNumber,"VirtualItems",SEL(_x,0),"sellPrice");
		if(!isNull (missionConfigFile >> "VirtualItems" >> _var >> "processedItem")) then {
			_processed = M_CONFIG(getText,"VirtualItems",SEL(_x,0),"processedItem");
			_price = M_CONFIG(getNumber,"VirtualItems",_processed,"sellPrice");
		};

		if(!(EQUAL(_price,-1))) then {
			ADD(_illegal,(SEL(_x,1) * _price));
		};
	} foreach _invs;

	[0,"STR_Cop_Contraband",true,[(_civ GVAR ["realname",name _civ]),[_illegal] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",west];
} else {
	_inv = localize "STR_Cop_NoIllegal";
};

if (!alive _civ || player distance _civ > 5) exitWith {
	hint format[localize "STR_Cop_CouldntSearch", _civ getVariable["realname",name _civ]];
};

hint parseText format[
	"<t color='#FF0000'><t size='2'>%1</t></t><br/><t color='#FFD700'><t size='1.5'><br/>" +
	(localize "STR_Cop_IllegalItems") + 
	"</t></t><br/>%2<br/><br/><br/><br/><t color='#FF0000'>%3</t>",
	(_civ GVAR ["realname",name _civ]),
	_inv,
	if (_robber) then {"Robbed the bank"} else {""}
];

if(_robber) then {
	[0,"STR_Cop_Robber",true,[(_civ GVAR ["realname",name _civ])]] remoteExecCall ["life_fnc_broadcast", west];
};