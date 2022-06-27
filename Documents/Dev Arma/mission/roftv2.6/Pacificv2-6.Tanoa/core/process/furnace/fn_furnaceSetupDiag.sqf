#include "..\..\..\script_macros.hpp"
#include "script_furnace.hpp"
/*
	File: fn_furnaceSetupDiag.sqf

	Autor:IronBlade
*/

disableSerialization;

// Init Config
_cfgFurnace = (missionConfigFile >> "CfgFurnace");
_cfgItems = (missionConfigFile >> "VirtualItems");

// Diag
_listleft = CONTROL(Dialog_Furnace, Listleft);
_listRight = CONTROL(Dialog_Furnace, ListRight);

lbClear _listleft;
lbClear _listRight;


// Init List Left
{
	_cfgAct = _x; 
	
	_itemRequiredArray = getArray(_cfgFurnace >> _cfgAct >> "Required");
	_itemRequiredCfg = (_itemRequiredArray select 0);
	_itemRequiredQty = (_itemRequiredArray select 1);

	_amount = ITEM_VALUE(_itemRequiredCfg);

	if (_amount > 0) then {
		_displayName = getText(_cfgItems >> _itemRequiredCfg >> "displayName");
		_icon = getText(_cfgItems >> _itemRequiredCfg >> "icon");
		_numberInInv = ITEM_VALUE(_itemRequiredCfg);

		_listleft lbAdd format["%1 [x%2]",localize _displayName,_numberInInv];
		_listleft lbSetData[(lbSize _listleft)-1,_cfgAct];
		_listleft lbSetValue[(lbSize _listleft)-1,_numberInInv];

		if(!(EQUAL(_icon,""))) then {
			_listleft lbSetPicture [(lbSize _listleft)-1,_icon];
		};

		/* -- Only used for LB switch price tag rly
		_license = LICENSE_VALUE(_cfgAct,"civ");

		if (_license) then {
			_listleft lbAdd format["%1 [x%2]",localize _displayName,_numberInInv];
			_listleft lbSetData[(lbSize _listleft)-1,_cfgAct];
			_listleft lbSetValue[(lbSize _listleft)-1,_numberInInv];

			if(!(EQUAL(_icon,""))) then {
				_listleft lbSetPicture [(lbSize _listleft)-1,_icon];
			};
		};
		*/
	};
} forEach life_furnacePnj_type;


// Init List Right
{
	if(ITEM_VALUE(configName _x) > 0) then {
		_listRight lbAdd format["%2 [x%1]",ITEM_VALUE(configName _x),localize (getText(_x >> "displayName"))];
		_listRight lbSetData [(lbSize _listRight)-1,configName _x];
		_icon = M_CONFIG(getText,"VirtualItems",configName _x,"icon");
		if(!(EQUAL(_icon,""))) then {
			_listRight lbSetPicture [(lbSize _listRight)-1,_icon];
		};
	};
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));