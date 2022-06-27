#include "..\..\..\..\script_macros.hpp"
#include "script_ice_container.hpp"
/*
	File: fn_iceContainerDiag.sqf

	Autor:IronBlade
*/

disableSerialization;

// Init Config
_cfgItems = (missionConfigFile >> "VirtualItems");
_cfgChimie = (missionConfigFile >> "CfgChimie");

// Diag
_listTrunk = CONTROL(IceContainerDiag, TrunkGear);
_listPlayer = CONTROL(IceContainerDiag, PlayerGear);

lbClear _listTrunk;
lbClear _listPlayer;

_listCompoItems = (life_iceChimie_compo select 0);

// Init List Left
{
	_itemArray = _x;
	_cfgItem = (_itemArray select 0);
	_ammountItem = (_itemArray select 1);

	if (_ammountItem > 0) then {
		_displayName = getText(_cfgItems >> _cfgItem >> "displayName");
		_icon = getText(_cfgItems >> _cfgItem >> "icon");

		_listTrunk lbAdd format["%1 [x%2]",localize _displayName,_ammountItem];
		_listTrunk lbSetData[(lbSize _listTrunk)-1,_cfgItem];
		_listTrunk lbSetValue[(lbSize _listTrunk)-1,_ammountItem];

		if (!(EQUAL(_icon,""))) then {
			_listTrunk lbSetPicture [(lbSize _listTrunk)-1,_icon];
		};
	};
} forEach _listCompoItems;


// Init List Right
{
	_item = (configName _x);
	if ((ITEM_VALUE(_item) > 0) && (isClass(_cfgChimie >> "Ingredients" >> _item) || (_item in ["zippo"]))) then {
		_listPlayer lbAdd format["%2 [x%1]",ITEM_VALUE(_item),localize (getText(_x >> "displayName"))];
		_listPlayer lbSetData [(lbSize _listPlayer)-1,_item];
		_icon = M_CONFIG(getText,"VirtualItems",_item,"icon");
		if(!(EQUAL(_icon,""))) then {
			_listPlayer lbSetPicture [(lbSize _listPlayer)-1,_icon];
		};
	};
} foreach ("true" configClasses (missionConfigFile >> "VirtualItems"));