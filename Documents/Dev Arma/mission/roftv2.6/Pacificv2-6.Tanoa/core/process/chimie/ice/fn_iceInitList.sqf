#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceInitList.sqf

	Autor: IronBlade
*/

disableSerialization;

// Init Config
_cfgItems = (missionConfigFile >> "VirtualItems");
_cfgChimie = (missionConfigFile >> "CfgChimie");
_cfgIngre = (_cfgChimie >> "Ingredients");
_cfgResult = (_cfgChimie >> "Resultats");

// Diag
_listleft = CONTROL(DialogIce, Listleft);
_listRight = CONTROL(DialogIce, ListRight);

lbClear _listleft;
lbClear _listRight;

_listCompoItems = (life_iceChimie_compo select 0);
_listCompoIng = (life_iceChimie_compo select 1);
_result = life_iceChimie_result;

_listCompo = [];

// List all Compo
{
	_cfgArray = _x;
	_item = _cfgArray select 0;
	_nb = _cfgArray select 1;

	if (_nb > 0 && isClass(_cfgIngre >> _item)) then {

		_lt = getNumber(_cfgIngre >> _item >> "amount");

		_ammount = (_nb * _lt);

		_listCompo pushBack [_item, _ammount];
	};
} forEach _listCompoItems;


{
	_cfgArray = _x;
	_ing = _cfgArray select 0;
	_ammount = _cfgArray select 1;

	if (_ammount > 0) then {
		_index = [_ing,_listCompo] call TON_fnc_index;

		if (_index == -1) then {
			_listCompo pushBack [_ing, _ammount];
		} else {
			_val = _listCompo select _index select 1;
			_listCompo set[_index,[_ing, _val + _ammount]]; 
		};
	};
} forEach _listCompoIng;




// Init List Left
{
	_ingArray = _x;
	_cfgIng = (_ingArray select 0);
	_ammountIng = (_ingArray select 1);

	if (_ammountIng > 0) then {
		_displayName = getText(_cfgIngre >> _cfgIng >> "displayName");

		_listleft lbAdd format["%1 %2cl", _displayName, _ammountIng];
		_listleft lbSetData[(lbSize _listleft)-1,_cfgIng];
		_listleft lbSetValue[(lbSize _listleft)-1,_ammountIng];
	};
} forEach _listCompo;

_index = ["zippo",_listCompoItems] call TON_fnc_index;

if (_index != -1) then {

	_displayName = getText(_cfgItems >> "zippo" >> "displayName");
	
	_listleft lbAdd format["%1", localize _displayName];
	_listleft lbSetData[(lbSize _listleft)-1,"zippo"];
	_listleft lbSetValue[(lbSize _listleft)-1,1];
};


// Init List Right
{
	_resultArray = _x;
	_itemResult = (_resultArray select 0);
	_ammountResult = (_resultArray select 1);

	if (_ammountResult > 0) then {
		_displayName = getText(_cfgItems >> _itemResult >> "displayName");

		_listRight lbAdd format["%1 [x%2]", localize _displayName, _ammountResult];
		_listRight lbSetData[(lbSize _listRight)-1,_itemResult];
		_listRight lbSetValue[(lbSize _listRight)-1,_ammountResult];
	};
} forEach _result;