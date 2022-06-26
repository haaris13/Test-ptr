#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceActionButtonTransf.sqf

	Autor: IronBlade
*/

if (life_iceChimie_action) exitWith {diag_log "life_iceChimie_action !";};

_checked = [] call life_fnc_iceGetCheckFiole;

if (_checked == "") exitWith {hint "Aucune Fiole n'est séléctionné !"};
if((lbCurSel Listleft) == -1) exitWith {hint "Aucun Ingredient n'est selectionné !"};

_cfgItems = (missionConfigFile >> "VirtualItems");
_cfgChimie = (missionConfigFile >> "CfgChimie");
_cfgIngre = (_cfgChimie >> "Ingredients");
_cfgResult = (_cfgChimie >> "Resultats");

_ctrl = ctrlSelData(Listleft);
_selValue = ctrlSelValue(Listleft);

_num = ctrlText QtyEdit;
if(!([_num] call TON_fnc_isnumber)) exitWith {};
_num = parseNumber(_num);
if(_num < 1) exitWith {hint "1 minimum !";};

_fioleTransf = [];

switch (_checked) do {

	case "fiole1" : {
		_fioleTransf = life_iceChimie_fiole select 0;
	};

	case "fiole2" : {
		_fioleTransf = life_iceChimie_fiole select 1;
	};
};

if (_ctrl in ["zippo"]) exitWith {[_num, _checked] spawn life_fnc_iceActionBurn;};

if (_selValue < _num) exitWith {hint "Vous n'avez pas autant de quantité !";};

if ((_fioleTransf select 0) >= 100) exitWith {hint "La fiole séléctionné est pleine !";};

if ((_num + (_fioleTransf select 0)) > 100) exitWith {hint "La fiole va déborder avec cette quantité !";};

life_iceChimie_action = true;

_listCompoItems = (life_iceChimie_compo select 0);
_listCompoIng = (life_iceChimie_compo select 1);

_index = [_ctrl,_listCompoIng] call TON_fnc_index;

_good = false;
_nbRemove = 0;

if (_index != -1) then {
	_val = _listCompoIng select _index select 1;

	switch (true) do {
		case (_val > _num) : {
			_good = true;
			_listCompoIng set[_index,[_ctrl, _val - _num]];
		};

		case (_val == _num) : {
			_good = true;
			_listCompoIng deleteAt _index;
		};

		case (_val < _num) : {
			_good = false;
			_nbRemove = _val;
			_listCompoIng deleteAt _index;
		};
	};
};

if (!_good) then {
	_index = [_ctrl,_listCompoItems] call TON_fnc_index;

	if (_index != -1) then {
		_nbItems = _listCompoItems select _index select 1;
		_amount = getNumber(_cfgIngre >> _ctrl >> "amount");

		_need = 0;

		if (_nbRemove == 0) then {_need = _num;} else {_need = (_num - _nbRemove);};

		_nbItemNeed = ceil(_need/_amount);

		_newVal = (_nbItemNeed * _amount) - _need;

		switch (true) do { 
			case (_nbItemNeed < _nbItems) : {
				_listCompoItems set[_index,[_ctrl, _nbItems - _nbItemNeed]];
				_listCompoIng pushBack[_ctrl, _newVal];
				_good = true;
			};

			case (_nbItemNeed == _nbItems) : {
				_listCompoItems deleteAt _index;
				_listCompoIng pushBack[_ctrl, _newVal];
				_good = true;
			};
		};
	} else {
		hint "bad !";
	};
};

life_iceChimie_compo set[0, _listCompoItems];
life_iceChimie_compo set[1, _listCompoIng];

[] call life_fnc_iceSaveGlobalVar;

[] call life_fnc_iceInitList;

if (_good) then {

	_compo1 = ((_fioleTransf select 1) select 0);

	if (_ctrl in ["azote"] && (_fioleTransf select 0) > 0) exitWith {[_num, _checked] spawn life_fnc_iceActionAzote;};

	if (_compo1 == _ctrl) exitWith {

		_temp = getNumber(_cfgChimie >> "Fluids" >> _ctrl >> "temp");

		_newAmmount = ((_fioleTransf select 0) + _num);
		_newTemp = ((_fioleTransf select 2) + _temp) / 2;
		_newColor = (_fioleTransf select 3);

		_pure1 = (_fioleTransf select 1) select 1;
		_pure2 = 100;

		_newPure = if (_pure1 > _pure2) then {_pure1} else {_pure2};

		[_checked, [_newAmmount, [_compo1, _newPure], _newTemp, _newColor], false] spawn life_fnc_iceServerFioleAdd;
	};

	[_checked, _fioleTransf, [_ctrl, _num], player] remoteExecCall ["TON_fnc_iceChimieFusionFiole",2];
};