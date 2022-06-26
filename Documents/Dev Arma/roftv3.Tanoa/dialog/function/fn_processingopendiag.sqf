#include "..\..\script_macros.hpp"
/*
	File: fn_processingopendiag.sqf
		
	Author: IronBlade
	    
	Description:
		- Open processing window, add stuff that you can process
	    
	Parameter(s):

	Usage: 
		
	Todo:
	- Currently only makes sense when 1 item type is being processed,
	 fix this later but not relevant for anything atm

	- Add an extra window to the UI showing all required material types, 
	if there is more than 1
*/

private["_amount","_available","_side","_list","_displayName","_price","_action","_numberInInv","_itemToProcessCfgType","_itemToProcessCfgQt","_itemToProcessQt","_itemToProcessReq"];
if (life_is_processing) exitWith {};
disableSerialization;
createDialog 'ProcessingDialog';
_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};
_type = _this select 3;


life_vendortarget = _vendor;

_list = CONTROL(16000,16001);
_btnAction = CONTROL(16000, 16003);

{
	_cfg = _x; 
	
	_itemToProcess = M_CONFIG(getArray,"Processing",_cfg,"Given");  
	_itemToProcessCfg = _itemToProcess select 0 select 0;
	_itemToProcessReq = M_CONFIG(getArray,"Processing",_cfg,"Required"); 
	_itemToProcessCfgQt = _itemToProcessReq select 0 select 1;
	_itemToProcessCfgType = _itemToProcessReq select 0 select 0;
	_numberInInv = ITEM_VALUE(_itemToProcessCfgType);

	_amount = round (_numberInInv / _itemToProcessCfgQt);  // _itemToProcessCfgInv => envoi le nom de la ressources

	if (_amount > 0) then {
		_displayName = M_CONFIG(getText,"VirtualItems",_itemToProcessCfg,"displayName");
		_icon = M_CONFIG(getText,"VirtualItems",_itemToProcessCfg,"icon");
		_action = M_CONFIG(getText,"Processing",_itemToProcessCfg,"Action");

		// -- Only used for LB switch price tag rly
		_price = M_CONFIG(getNumber,"Processing",_cfg,"Cost");
		_license = LICENSE_VALUE(_cfg,_side); 

		if(_cfg in ["tropicalCharpente","parcCharpente","parcTonnerie","tropicalTonnerie"]) then {
		    _license = LICENSE_VALUE("forestiere","civ");
		};

		if (_license) then {_price = 0};

		_list lbAdd format["%1 [x%2]",localize _displayName,_amount];
		_list lbSetData[(lbSize _list)-1,_cfg];
		_list lbSetValue[(lbSize _list)-1,_price];

		if(!(EQUAL(_icon,""))) then {
			_list lbSetPicture [(lbSize _list)-1,_icon];
		};

		// Alter le bouton d'action
		if(!(EQUAL(_action,""))) then {
			_originalAction = "[] spawn life_fnc_processAction;";
			_btnAction ctrlAddEventHandler ["ButtonClick", format["%1 %2", _originalAction, _action]];
		};
	};
} forEach _type;

CONTROL(16000,16003) ctrlEnable false;