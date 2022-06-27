/*
	File: fn_s_onSliderChange.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Called when the slider is changed for any field and updates the view distance for it.
*/
private["_mode","_value"];
_mode = [_this,0,-1,[0]] call BIS_fnc_param;
_value = [_this,1,-1,[0]] call BIS_fnc_param;
if(_mode == -1 OR _value == -1) exitWith {};
disableSerialization;

switch (_mode) do {
	case 0: {
		life_vdFoot = round(_value);
		ctrlSetText[2902,format["%1",round(_value)]];
		[] call life_fnc_updateViewDistance;
	};

	case 1: {
		life_vdCar = round(_value);
		ctrlSetText[2912,format["%1",round(_value)]];
		[] call life_fnc_updateViewDistance;
	};

	case 2: {
		life_vdAir = round(_value);
		ctrlSetText[2922,format["%1",round(_value)]];
		[] call life_fnc_updateViewDistance;
	};
	case 3:
	{
		_classname = lbData[20302,(lbCurSel 20302)];
		_index =  lbvalue[20302,(lbCurSel 20302)];
		if((lbCurSel 20302) == -1) exitWith {["Error", localize "STR_Select_Vehicle_Pump"] spawn life_fnc_showPredefinedNotification;};
		if (!isNil "_classname" || _classname =="") then {
		_car = (vehiclefuelList select _index) select 0;
		_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
		_fuel = fuel _car;
		_fueltank = (_vehicleInfo select 12);
		ctrlSetText[20324,format["Fuel : %1 liters",round(_value) - (floor(_fuel * _fueltank))]];

		_price = (["essence_price", (life_fuelPrices select 0)] call life_fnc_gouvTaxesCalc);
		ctrlsettext [20323,format ["Total : %1$",round (_price * (round(_value) -(floor(_fuel * _fueltank)))) ]];
		} else {
			["Error", localize "STR_Select_Vehicle_Pump"] spawn life_fnc_showPredefinedNotification;
		};
	};
};
