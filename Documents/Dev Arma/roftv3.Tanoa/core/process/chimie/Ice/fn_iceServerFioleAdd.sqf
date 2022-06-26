#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceServerFioleAdd.sqf

	Autor: IronBlade

	result: [amount,["fluid",purete],temp, color:[0,0,0,1]];
*/
_type = [_this,0,"",[""]] call BIS_fnc_param;
_result = [_this,1,[],[[]]] call BIS_fnc_param;
_effect = [_this,2,"",[""]] call BIS_fnc_param;

[_effect] spawn life_fnc_iceEffect;

diag_log "fn_iceServerFioleAdd";

if (count _result == 0) exitWith {};

// Debug
if (life_debug == 1) then {diag_log str(_this);};

_cfgChimie = (missionConfigFile >> "CfgChimie");
_cfgFluids = (_cfgChimie >> "Fluids");

_fioleAdd = [];

switch (_type) do {

	case "fiole1" : {
		_fioleAdd = life_iceChimie_fiole select 0;
	};

	case "fiole2" : {
		_fioleAdd = life_iceChimie_fiole select 1;
	};
};

if (count _fioleAdd == 0) exitWith {};

_actualAmount = _fioleAdd select 0;
_resultAmount = _result select 0;
_resultFluidArray = _result select 1;
_resultFluid = (_result select 1) select 0;
_resultPur = (_result select 1) select 1;

_actualTemp = _fioleAdd select 2;
_resultTemp = _result select 2;

_actualColor = _fioleAdd select 3;
_resultColor = _result select 3;


if (_actualAmount == 0) then {

	_temp = getNumber(_cfgFluids >> _resultFluid >> "temp");
	_resultColor = getArray(_cfgFluids >> _resultFluid >> "color");
	_resultTemp = _temp;

	_actualColor = _resultColor;
	_actualTemp = _resultTemp;
};

_newAmount = _actualAmount;

_dif = (_resultAmount - _actualAmount);
_difTemp = (_resultTemp - _actualTemp);

_palierTemp = _difTemp / _dif;

_difColor = [((_resultColor select 0) - (_actualColor select 0)), ((_resultColor select 1) - (_actualColor select 1)), ((_resultColor select 2) - (_actualColor select 2))];

_palierColor = [((_difColor select 0) / (_dif)), ((_difColor select 1) / (_dif)), ((_difColor select 2) / (_dif))];

for "_i" from (_actualAmount + 1) to _resultAmount do {

	uiSleep 0.2;

	// Amount
	_newAmount = _i;
	_fioleAdd set[0, _newAmount];
	[_type, "amount"] call life_fnc_iceUpdateFiolePart;

	// Temp
	_actualTemp = _actualTemp + _palierTemp;
	_fioleAdd set[2, (round _actualTemp)];
	[_type, "temp"] call life_fnc_iceUpdateFiolePart;

	// Color
	_actualColor = [((_actualColor select 0) + (_palierColor select 0)), ((_actualColor select 1) + (_palierColor select 1)), ((_actualColor select 2) + (_palierColor select 2)), _actualColor select 3];


	_fioleAdd set[3, _actualColor];
	[_type, "color", _actualColor] call life_fnc_iceUpdateFiolePart;
	
	[] call life_fnc_iceSaveGlobalVar;
};

_fioleAdd set[1, [_resultFluid, _resultPur]];
//hint str(_resultPur);
[_type, "text"] call life_fnc_iceUpdateFiolePart;

life_iceChimie_action = false;