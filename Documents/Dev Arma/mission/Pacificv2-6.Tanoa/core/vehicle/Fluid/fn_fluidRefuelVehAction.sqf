#include "..\..\..\script_macros.hpp"
/*
	fn_fluidRefuelVehAction.sqf
	
	Autor:IronBlade
*/
_selection = lbCurSel 26005;
if (_selection == -1) exitWith {playSound "addItemFailed";};
_valueIndex = lbValue[26005, _selection];
_editText = parseNumber(ctrlText 26008);

if(!([str(_editText)] call life_fnc_isnumeric)) exitWith {["Error", localize "STR_ATM_notnumeric"] spawn life_fnc_showPredefinedNotification;};
if(_editText < 0) exitWith {};

_vehArray = life_fuel_near select _valueIndex;
_vehToRefuel = _vehArray select 0;

closeDialog 0;

if (isNull _vehToRefuel) exitWith {playSound "addItemFailed";};
if (player distance life_fuel_curVeh > 10) exitWith {playSound "addItemFailed";};
if (life_fuel_curVeh distance _vehToRefuel > 25) exitWith {playSound "addItemFailed";};
uiSleep (random 2);
if (life_fuel_curVeh getVariable ["citerneAction", false]) exitWith {playSound "addItemFailed";};
_citerne = life_fuel_curVeh getVariable ["citerne", ["",0]];
if ((_citerne select 0) == "" || (_citerne select 1) == 0) exitWith {["Error", "Véhicule Vide !"] spawn life_fnc_showPredefinedNotification; playSound "addItemFailed";};
if ((_citerne select 1) < _editText) exitWith {["Error", "Pas assez dans le réservoir !"] spawn life_fnc_showPredefinedNotification; playSound "addItemFailed";};

diag_log _valueIndex;
diag_log str _vehArray;

if ((_vehArray select 1) == "FuelStation") exitWith {
	[_vehToRefuel, _editText] spawn life_fnc_fluidRefuelStation;
};

_valueMax = [_vehToRefuel] call life_fnc_fluidVehGetCargoBase;
_curValue = _vehToRefuel getVariable ["citerne", ["",0]];
_vehCurFuel = fuel _vehToRefuel;

_bad = false;

switch (_vehArray select 1) do { 
	case "Cargo" : {

		if ((_curValue select 0) != "" && (_curValue select 0) != (_citerne select 0)) exitWith {
			["Error", "Un fluide est déjà présent dans ce véhicule !"] spawn life_fnc_showPredefinedNotification;
			_bad = true;
		};

		_fuelToSet = (_curValue select 1) + _editText;

		if (_fuelToSet > _valueMax) exitWith {
			["Error", "Cela va déborder !"] spawn life_fnc_showPredefinedNotification;
			_bad = true;
		};
	};

	case "Res" : {

		_fuelToSet = [_vehToRefuel, _editText] call life_fnc_fluidVehConvertLtoF;

		if (_fuelToSet > 1) exitWith {
			["Error", "Cela va déborder !"] spawn life_fnc_showPredefinedNotification;
			_bad = true;
		};
	};
};

if (_bad) exitWith {};

life_fuel_curVeh setVariable ["citerneAction", true, true];

disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = GVAR_UINS "life_progress";
_upp = "Remplissage...";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
_cpRate = 0.005;

while{true} do {

	sleep 0.1;
	_cP = _cP + _cpRate;
	_progress progressSetPosition _cP;
	_pgText ctrlSetText format["%3 (%1%2)...",round(_cP * 100),"%",_upp];
	if(_cP >= 1) exitWith {};
	if(!alive player) exitWith {};
	if (player distance life_fuel_curVeh > 10) exitWith {playSound "addItemFailed";};
	if (life_fuel_curVeh distance _vehToRefuel > 10) exitWith {playSound "addItemFailed";};
};

//Stop player
5 cutText ["","PLAIN"];
life_fuel_curVeh setVariable ["citerneAction", nil, true];

if (player distance life_fuel_curVeh > 10) exitWith {};
if (life_fuel_curVeh distance _vehToRefuel > 10) exitWith {};
if(!alive player) exitWith {};

_citerne = life_fuel_curVeh getVariable ["citerne", ["",0]];
if ((_citerne select 1) < _editText) exitWith {["Error", "Pas assez dans le réservoir !"] spawn life_fnc_showPredefinedNotification; playSound "addItemFailed";};

_bad = false;
switch (_vehArray select 1) do {
	case "Cargo" : {

		if ((_curValue select 0) != "" && (_curValue select 0) != (_citerne select 0)) exitWith {
			["Error", "Un fluide est déjà présent dans ce véhicule !"] spawn life_fnc_showPredefinedNotification;
			_bad = true;
		};

		_curValue = _vehToRefuel getVariable ["citerne", ["",0]];

		_fuelToSet = (_curValue select 1) + _editText;
		_curValue = [(_citerne select 0), _fuelToSet];
		_vehToRefuel setVariable ["citerne", _curValue, true];

		["Accepted", "Citerne remplie !"] spawn life_fnc_showPredefinedNotification;
	};

	case "Res" : {
		_fuelToSet = [_vehToRefuel, _editText] call life_fnc_fluidVehConvertLtoF;
		_vehToRefuel setFuel _fuelToSet;

		["Accepted", "Reservoir rempli !"] spawn life_fnc_showPredefinedNotification;
	};
};

if (_bad) exitWith {};

_valToSetCargo = [(_citerne select 0), (_citerne select 1) - _editText];
if ((_valToSetCargo select 1) <= 0) then {
	_valToSetCargo set[0, ""];
};

life_fuel_curVeh setVariable ["citerne", _valToSetCargo, true];