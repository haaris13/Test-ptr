#include "..\..\..\script_macros.hpp"
#include "script_dialog_ice.hpp"
/*
	File: fn_iceServerFioleFusion.sqf

	Autor: IronBlade

	result: [amount,["fluid",purete],temp, color:[0,0,0,1]];
*/
_result = [_this,0,[],[[]]] call BIS_fnc_param;
_effect = [_this,1,"",[""]] call BIS_fnc_param;

[_effect] spawn life_fnc_iceEffect;

diag_log "fn_iceServerFioleFusion";
if (life_debug == 1) then {diag_log str(_result);};

if (count _result == 0) exitWith {};

_cfgChimie = (missionConfigFile >> "CfgChimie");
_cfgFluids = (_cfgChimie >> "Fluids");

_amountGlobal = _result select 0;

_resultFluid = (_result select 1) select 0;
_resultPur = (_result select 1) select 1;

if (_amountGlobal <= 100) then {

	_actualAmount1 = (life_iceChimie_fiole select 0) select 0;
	_actualAmount2 = (life_iceChimie_fiole select 1) select 0;

	_actualTemp1 = (life_iceChimie_fiole select 0) select 2;
	_actualTemp2 = (life_iceChimie_fiole select 1) select 2;

	_actualColor1 = (life_iceChimie_fiole select 0) select 3;

	_resultAmount = _result select 0;
	_resultTemp = _result select 2;
	_resultColor = _result select 3;

	_newAmount1 = _actualAmount1;
	_newAmount2 = _actualAmount2;

	// Calcul Dif et Paliers
	_dif1 = (_resultAmount - _actualAmount1);
	_dif2 = (0 - _actualAmount2);

	_palierAmmount2 = _dif2 / _dif1;

	_difTemp1 = (_resultTemp - _actualTemp1);
	_difTemp2 = (20 - _actualTemp2);

	_palierTemp1 = _difTemp1 / _dif1;
	_palierTemp2 = _difTemp2 / _dif1;

	_difColor1 = [((_resultColor select 0) - (_actualColor1 select 0)), ((_resultColor select 1) - (_actualColor1 select 1)), ((_resultColor select 2) - (_actualColor1 select 2))];

	_palierColor = [((_difColor1 select 0) / (_dif1)), ((_difColor1 select 1) / (_dif1)), ((_difColor1 select 2) / (_dif1))];

	for "_i" from (_actualAmount1 + 1) to _resultAmount do {

		uiSleep 0.1;

		// Amount  [0,["empty",100],20, [0,0,0,1]];
		// SET 1
		_newAmount1 = _i;
		_actualTemp1 = _actualTemp1 + _palierTemp1;
		_actualColor1 = [((_actualColor1 select 0) + (_palierColor select 0)), ((_actualColor1 select 1) + (_palierColor select 1)), ((_actualColor1 select 2) + (_palierColor select 2)), _actualColor1 select 3 ];
		life_iceChimie_fiole set[0,  [_newAmount1, ((life_iceChimie_fiole select 0) select 1), round _actualTemp1, _actualColor1]];

		// SET 2
		_newAmount2 = _newAmount2 + _palierAmmount2;
		_actualTemp2 = _actualTemp2 + _palierTemp2;
		life_iceChimie_fiole set[1,  [_newAmount2, ((life_iceChimie_fiole select 1) select 1), round _actualTemp2, ((life_iceChimie_fiole select 1) select 3)]];

		// Update 1
		["fiole1", "amount"] call life_fnc_iceUpdateFiolePart;
		["fiole1", "temp"] call life_fnc_iceUpdateFiolePart;
		["fiole1", "color", _actualColor1] call life_fnc_iceUpdateFiolePart;

		// Update 2
		["fiole2", "amount"] call life_fnc_iceUpdateFiolePart;
		["fiole2", "temp"] call life_fnc_iceUpdateFiolePart;

		[] call life_fnc_iceSaveGlobalVar;
	};

	diag_log "Update";

	life_iceChimie_fiole set[0,  [((life_iceChimie_fiole select 0) select 0), [_resultFluid, _resultPur], ((life_iceChimie_fiole select 0) select 2), ((life_iceChimie_fiole select 0) select 3)]];
	["fiole1", "text"] call life_fnc_iceUpdateFiolePart;

	life_iceChimie_fiole set[1, Chimie_Empty];
	["fiole2", "text"] call life_fnc_iceUpdateFiolePart;

	[] call life_fnc_iceSaveGlobalVar;

} else {

	_actualTemp1 = (life_iceChimie_fiole select 0) select 2;
	_actualTemp2 = (life_iceChimie_fiole select 1) select 2;

	_actualColor1 = (life_iceChimie_fiole select 0) select 3;
	_actualColor2 = (life_iceChimie_fiole select 1) select 3;

	_resultTemp = _result select 2;
	_resultColor = _result select 3;

	// Calcul Dif et Paliers
	_dif1 = 100;

	_difTemp1 = (_resultTemp - _actualTemp1);
	_difTemp2 = (_resultTemp - _actualTemp2);

	_palierTemp1 = _difTemp1 / _dif1;
	_palierTemp2 = _difTemp2 / _dif1;

	_difColor1 = [((_resultColor select 0) - (_actualColor1 select 0)), ((_resultColor select 1) - (_actualColor1 select 1)), ((_resultColor select 2) - (_actualColor1 select 2))];
	_difColor2 = [((_resultColor select 0) - (_actualColor2 select 0)), ((_resultColor select 1) - (_actualColor2 select 1)), ((_resultColor select 2) - (_actualColor2 select 2))];


	_palierColor1 = [((_difColor1 select 0) / (_dif1)), ((_difColor1 select 1) / (_dif1)), ((_difColor1 select 2) / (_dif1))];
	_palierColor2 = [((_difColor2 select 0) / (_dif1)), ((_difColor2 select 1) / (_dif1)), ((_difColor2 select 2) / (_dif1))];

	for "_i" from 0 to 100 do {

		uiSleep 0.1;

		// SET 1
		_actualTemp1 = _actualTemp1 + _palierTemp1;
		_actualColor1 = [((_actualColor1 select 0) + (_palierColor1 select 0)), ((_actualColor1 select 1) + (_palierColor1 select 1)), ((_actualColor1 select 2) + (_palierColor1 select 2)), _actualColor1 select 3];
		life_iceChimie_fiole set[0,  [((life_iceChimie_fiole select 0) select 0), ((life_iceChimie_fiole select 0) select 1), round _actualTemp1, _actualColor1]];

		// SET 2
		_actualTemp2 = _actualTemp2 + _palierTemp2;
		_actualColor2 = [((_actualColor2 select 0) + (_palierColor2 select 0)), ((_actualColor2 select 1) + (_palierColor2 select 1)), ((_actualColor2 select 2) + (_palierColor2 select 2)), _actualColor2 select 3];
		life_iceChimie_fiole set[1,  [((life_iceChimie_fiole select 1) select 0), ((life_iceChimie_fiole select 1) select 1), round _actualTemp2, _actualColor2]];

		// Update 1
		["fiole1", "temp"] call life_fnc_iceUpdateFiolePart;
		["fiole1", "color", _actualColor1] call life_fnc_iceUpdateFiolePart;

		// Update 2
		["fiole2", "temp"] call life_fnc_iceUpdateFiolePart;
		["fiole2", "color", _actualColor2] call life_fnc_iceUpdateFiolePart;

		// Temp

		[] call life_fnc_iceSaveGlobalVar;
	};

	life_iceChimie_fiole set[0,  [((life_iceChimie_fiole select 0) select 0), [_resultFluid, _resultPur], ((life_iceChimie_fiole select 0) select 2), ((life_iceChimie_fiole select 0) select 3)]];

	["fiole1", "text"] call life_fnc_iceUpdateFiolePart;

	life_iceChimie_fiole set[1,  [((life_iceChimie_fiole select 1) select 0), [_resultFluid, _resultPur], ((life_iceChimie_fiole select 1) select 2), ((life_iceChimie_fiole select 1) select 3)]];
	["fiole2", "text"] call life_fnc_iceUpdateFiolePart;

	[] call life_fnc_iceSaveGlobalVar;
};

life_iceChimie_action = false;