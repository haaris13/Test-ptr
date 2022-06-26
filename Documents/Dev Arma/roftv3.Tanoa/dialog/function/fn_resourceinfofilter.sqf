#include "..\..\script_macros.hpp"
/*
	File:

	Author: IronBlade

	Description:
		- Various shit related to filtering the resource info
*/

private ["_ctrlListNBox","_itemWeight","_itemDisplay","_itemPrice","_type","_ctrlFilterRow","_ctrlListNBox","_ctrlSearchEdit","_searchedText","_itemPourcent"]; //modif
_type = SEL(_this,0);

_ctrlSearchEdit = CONTROL(19000,19003);
_ctrlFilterRow = CONTROL(19000,19001);
_ctrlListNBox = CONTROL(19000,19002);
_ctrlfilterCombo = CONTROL(19000,19004);

_cfgBourse = (missionConfigFile >> "CfgBourse");

_blacklist = getArray(_cfgBourse >> "hideGlobal");

if (isNil "DYNMARKET_prices") then {
	[[getPlayerUID player],"TON_fnc_playerLogged",false,false] spawn life_fnc_MP;
	hint "Récupération des prix...";
};

switch (_type) do {

	case "search" : {

		["refresh"] call life_fnc_resourceInfoFilter;
	};

	case "refresh" : {

		_currentComboClass = _ctrlfilterCombo lbData (lbCurSel _ctrlfilterCombo);
		_currentCombo = (_cfgBourse >> "Category" >> _currentComboClass);

		_currentListType = getText(_currentCombo >> "type");
		_currentList = getArray(_currentCombo >> "list");

		lnbClear _ctrlListNBox;
		_currentRow = 0;
		{
			//Fetch basic info
			_itemCfg = _x select 0;

			_itemArrayOld = [];

			if (!isNil "DYNMARKET_Items_ToTrack") then {_itemArrayOld = DYNMARKET_Items_ToTrack select (([_itemCfg,DYNMARKET_prices] call TON_fnc_index))} else {_itemArrayOld=["",0];};

			_costOld = _itemArrayOld select 1;

			_itemPrice = _x select 1;

			_illegal = M_CONFIG(getNumber,"VirtualItems",_itemCfg,"illegal");

			/*if (_illegal == 1) then {
				_nbCop = (west countSide playableUnits);
				if (_nbCop <= 3) then {
					_itemPrice = _itemPrice * 0.7;
				};
			};
			*/
			_itemPourcent = ((_itemPrice-_costOld ) / _costOld) * 100;				// modif ajout pourcentage d'évolution par rapport au prix de départ

			_itemPourcent = (round (_itemPourcent * 100)) / 100;

			_itemDisplay = M_CONFIG(getText,"VirtualItems",_itemCfg,"displayName");
			_itemDisplay = localize _itemDisplay;

			_canShow = true;

			switch (_currentListType) do {
				case "show" : {
					if (_itemCfg in _currentList) then {
						_canShow = true;
					} else {
						_canShow = false;
					};
				};

				case "hide" : {
					if (_itemCfg in _currentList) then {
						_canShow = false;
					} else {
						_canShow = true;
					};
				};
			};

			if ((toUpper _itemDisplay find (toUpper ctrlText _ctrlSearchEdit) >= 0) && (_itemPrice >= 1) && !(_itemCfg in _blacklist) && _canShow) then {
				_itemWeight = M_CONFIG(getNumber,"VirtualItems",_itemCfg,"weight");
				/*_base = M_CONFIG(getText,"VirtualItems",_itemCfg,"base");

				if (_base != "") then {
					_itemWeight = M_CONFIG(getNumber,"VirtualItems",_base,"weight");
				};
*/
				_itemPriceweight = _itemPrice/_itemWeight; //mofif 2
				_itemPriceweight = round (_itemPriceweight);
				_itemWeight = format ["%1",_itemWeight];
				_itemPriceweight = format ["$%1",[_itemPriceweight] call life_fnc_numberText]; //modif 2
				_itemPrice = format ["$%1",[_itemPrice] call life_fnc_numberText];
				_costOld = format ["$%1",[_costOld] call life_fnc_numberText];
				_color = [1,1,1,1];
				if (_itemPourcent == 0) then {																					// ajout
					_itemPourcent = format["%2%1","%",[_itemPourcent] call life_fnc_numberText];							// ajout noir si pas d'augmentation
				} else {																									// ajout
					if (_itemPourcent < 0) then {																				// ajout
						_itemPourcent = format["↓  %2%1","%",[_itemPourcent] call life_fnc_numberText];	// ajout couleur en rouge si négatif
						_color = [1,0,0,1];
					} else {																								// ajout
						_itemPourcent = format["↑  %2%1","%",[_itemPourcent] call life_fnc_numberText];	// ajout couleur en vert dans autre cas
						_color = [0,1,0,1];
					};																										// ajout
				};																											// ajout
				_ctrlListNBox lnbAddRow [_itemDisplay, _itemPrice, _itemPriceweight, _itemPourcent, _costOld, _itemWeight];		// modif

				_ctrlListNBox lnbSetColor [[_currentRow,3], _color];

				if (_illegal == 1) then {
					_ctrlListNBox lnbSetColor [[_currentRow,0], [1,0,0,1]];
				};

				_currentRow = _currentRow + 1;
			};

		} forEach DYNMARKET_prices;
		_ctrlListNBox lnbSetCurSelRow -1;
	};

	default {};
};
