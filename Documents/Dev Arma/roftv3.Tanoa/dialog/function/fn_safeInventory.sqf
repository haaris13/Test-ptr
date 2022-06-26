#include "..\..\script_macros.hpp"
/*
	File: fn_safeInventory.sqf
		
	Author: Tonic, IronBlade
	    
	Description:
		- Fills the safe inventory based on type
		- Adapated for heist system

*/

private["_safe","_tInv","_pInv","_safeInfo","_displayName","_shrt","_item"];
_safe = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_safeType = [_this,1,"",[""]] call BIS_fnc_param;
diag_log format ["%1",_safeType];
if(isNull _safe) exitWith {closeDialog 0;};
disableSerialization;

_tInv = (findDisplay 3500) displayCtrl 3502;
lbClear _tInv;

_safeInfo = _safe getVariable["safe",-1];
if(_safeInfo < 1) exitWith {closeDialog 0; hint localize "STR_Civ_VaultEmpty";};

switch (_safeType) do {
	case "goldmine" : {_item = "gold_container"};
	case "jewelers" : {_item = "assortedgems"};
};
uiNamespace setVariable ["safe_filter",_safeType];


_displayName = M_CONFIG(getText,"VirtualItems",_item,"displayName");
_tInv lbAdd format["[%1] - %2",_safeInfo,(localize _displayName)];
_tInv lbSetData [(lbSize _tInv)-1,_item];