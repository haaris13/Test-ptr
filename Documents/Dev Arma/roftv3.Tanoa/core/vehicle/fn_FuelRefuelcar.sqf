#include "..\..\script_macros.hpp"
/*
	File: fn_RefuelCar.sqf
	Author: NiiRoZz

	Description:
	Add fuel in car.
*/
disableSerialization;
private["_control","_index","_className","_basePrice","_vehicleInfo","_colorArray","_ctrl"];
_classname = lbData[20302,(lbCurSel 20302)];
_index =  lbvalue[20302,(lbCurSel 20302)];

if (isNil "_classname" || _classname == "") exitwith {
	hint localize "STR_Select_Vehicle_Pump";
	vehiclefuelList = [];
	life_action_inUse = false;
	closedialog 0;
};

_car = (vehiclefuelList select _index) select 0;
_vehicleInfo = [_className]call life_fnc_fetchVehInfo;
_fuelnow = fuel _car;
_fueltank = (_vehicleInfo select 12);
_fueltoput = ((SliderPosition 20901)-(floor(_fuelnow * _fueltank)));
_fuelBase = (floor(_fuelnow * _fueltank));
_setfuell = _fuelnow + (_fueltoput/_fueltank);

diag_log format["SetFuel: %1", _setfuell];

_timer = ((_fueltoput * .025)/100); //0.125
if (_car distance player > 15 && vehicle player != player) exitwith {
	hint localize "STR_Distance_Vehicle_Pump";
	vehiclefuelList = [];
	life_action_inUse = false;
	closedialog 0;
};

ctrlSetText [20301,format["Station D'Essence - Citerne: %1l", life_fuel_station getVariable["citerne", 0]]];

if (life_fuel_station getVariable["citerne", 0] < _fueltoput) exitWith {

	hint format["Il n'y a pas assez d'essence dans la Station pour ravitailler %1l !", _fueltoput];

	vehiclefuelList = [];
	life_action_inUse = false;
	closedialog 0;
};

if ((life_cash - (_fueltoput * (life_fuelPrices select 0)))> 0) then {
	life_is_processing = true;
	//Setup our progress bar.
	disableSerialization;
	5 cutRsc ["life_progress","PLAIN"];
	_ui = uiNameSpace getVariable "life_progress";
	_progress = _ui displayCtrl 38201;
	_pgText = _ui displayCtrl 38202;
	_pgText ctrlSetText format["Ravitailler: (1%1)...","%"];
	_progress progressSetPosition 0.01;
	_cP = 0.005;
	_tp =0;
	_newSetFuel = 0;
	_totalcost = _fueltoput * (life_fuelPrices select 0);

	if (_totalcost < 0) exitWith {};

	while{true} do
	{
		sleep  _timer;
		_cP = _cP + 0.005;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Ravitailler: (%1%2)...", round(_cP * 100), "%"];
		if(_cP >= 1) exitWith {
			[_car, _setfuell] remoteExecCall ["life_fnc_setFuel",_car];
		};
		if(player distance _car > 15) exitWith {};
		if(vehicle player != player) exitWith {};
		if !((life_cash - round(0.01 * _totalcost)) > 0) exitwith {};
		_fuelnow = fuel _car;
		_value = (floor(_fuelnow * _fueltank));
		_newSetFuel = _value - _fuelBase;
		_fuelBase = (floor(_fuelnow * _fueltank));

		if (life_fuel_station getVariable["citerne", 0] < _newSetFuel) exitWith {};
		life_fuel_station setVariable["citerne", ((life_fuel_station getVariable["citerne", 0]) - _newSetFuel), true];

		life_cash = life_cash - round((0.005 * _totalcost));
		_tp = _tp + 1;
		if (_tp == 4) then {
			_tp = 0;
			[_car,_cp * _setfuell] remoteExecCall ["life_fnc_setFuel",_car];
		};
	};
	5 cutText ["","PLAIN"];
	if (_car distance player > 15 || vehicle player != player || (life_fuel_station getVariable["citerne", 0] < _newSetFuel)) then {

		if ((life_fuel_station getVariable["citerne", 0] < _newSetFuel)) then {
			hint "Il n'y a plus assez d'essence dans la Station !";
		} else {
			hint localize "STR_Distance_Vehicle_Pump";
		};

		vehiclefuelList = [];
		life_is_processing = false;
		life_action_inUse = false;
		[0] call SOCK_fnc_updatePartial;
		closedialog 0;
	} else {
		life_is_processing = false;
		[0] call SOCK_fnc_updatePartial;
	};
} else {
	hint localize "STR_NOTF_NotEnoughMoney";
};

vehiclefuelList = [];
life_action_inUse = false;
closedialog 0;