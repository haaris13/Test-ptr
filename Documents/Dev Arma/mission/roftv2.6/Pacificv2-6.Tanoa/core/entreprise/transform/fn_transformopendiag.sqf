#include "..\..\..\script_macros.hpp"
/*
	File: fn_transformOpenDiag.sqf
		
	Author: IronBlade
	    
	Description:
		- Open transform window, add stuff that you can process
	    
	Parameter(s):

*/

if (life_is_processing) exitWith {};
disableSerialization;
createDialog 'TransformDialog';
_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};
_type = (_this select 3) select 0;
_entID = (_this select 3) select 1;

_owners = getArray(missionconfigFile >> "CfgEntreprise" >> _entID >> "owners");


if (!((getPlayerUID player) in _owners)) exitWith {
	["Error", "Vous ne faites pas partie de l'entreprise !"] spawn life_fnc_showPredefinedNotification;
	closeDialog 0;
};


life_vendortarget = _vendor;

_list = CONTROL(18000,18001);

{
	_cfg = _x; 
	
	_itemToProcess =  getArray(missionconfigFile >> "CfgEntreprise" >> _entID >> "Processing" >> _cfg >> "Required");

	_result =  getArray(missionconfigFile >> "CfgEntreprise" >> _entID >> "Processing" >> _cfg >> "Given");

	_id =  getNumber(missionconfigFile >> "CfgEntreprise" >> _entID >> "id");

	_resultItemCfg = _result select 0 select 0;
	_resultItemCfgNb = _result select 0 select 1;

	_itemToProcessCfg = _itemToProcess select 0 select 0;
	_itemToProcessNeed = _itemToProcess select 0 select 1;
	_amount = ITEM_VALUE(_itemToProcessCfg);

	if (_amount >= _itemToProcessNeed) then {
		_displayName = M_CONFIG(getText,"VirtualItems",_resultItemCfg,"displayName");
		_icon = M_CONFIG(getText,"VirtualItems",_resultItemCfg,"icon");
		_numberInInv = ITEM_VALUE(_itemToProcessCfg);

		// -- Only used for LB switch price tag rly

		_list lbAdd format["%1",localize _displayName];
		_list lbSetData[(lbSize _list)-1,_cfg];
		_list lbSetValue[(lbSize _list)-1,_id];

		if(!(EQUAL(_icon,""))) then {
			_list lbSetPicture [(lbSize _list)-1,_icon];
		};
	};
} forEach _type;

CONTROL(18000,18003) ctrlEnable false;