#include "..\..\..\script_macros.hpp"
/*
	File: fn_fluidVehOpenInv.sqf

	Autor:IronBlade
*/
_vehActual = cursorTarget;

_valueMax = [_vehActual] call life_fnc_fluidVehGetCargoBase;
if (_valueMax == 0) exitWith {};

if (_vehActual getVariable ["citerneAction", false]) exitWith {
	hint "Réservoir occupé !";
};

_curValue = _vehActual getVariable ["citerne", ["",0]];
_pourcent = (_curValue select 1) / _valueMax;

_cfgFuelStation = (missionConfigFile >> "CfgFuelStation");
_cfgAllStations = (_cfgFuelStation >> "AllStations");

disableSerialization;
createDialog "Life_Dialog_FluidCargo";

_list = CONTROL(26000, 26005);
_progress = CONTROL(26000, 26001);

_progress progressSetPosition _pourcent;

lbClear _list;

life_fuel_curVeh = _vehActual;
life_fuel_near = [];

_vehiclesNear = nearestObjects [position _vehActual, ["Car","Truck","Air","Ship"], 25];
_fuelStat = [] call life_fnc_fuelGetStationNear;

life_fuel_near pushBack [_vehActual, "Res"];
life_fuel_near pushBack [_fuelStat, "FuelStation"];

{
	if !(_vehActual isEqualTo _x) then {
		_value = [_x] call life_fnc_fluidVehGetCargoBase;
		if (_value > 0) then {
			life_fuel_near pushBack [_x, "Cargo"];
		};
	};
} forEach _vehiclesNear;

{
	if !(_vehActual isEqualTo _x) then {
		life_fuel_near pushBack [_x, "Res"];
	};
} forEach _vehiclesNear;

{
	_curVeh = _x select 0;
	_type = _x select 1;

	if (_vehActual distance _curVeh <= 25) then {

		_name = "";

		switch (true) do { 
			case ((_curVeh isKindOf "Car") || (_curVeh isKindOf "Truck") || (_curVeh isKindOf "Air") || (_curVeh isKindOf "Ship")) : {

				_text = "";
				_textValue = "";
				switch (_type) do { 
					case "Res" : {
						_text = "Reservoir";
						_curLitre = [_curVeh] call life_fnc_fluidVehConvertFtoL;
						_textValue = format["[%1/ %2L]", round(_curLitre select 0), _curLitre select 1];
					};

					case "Cargo" : {
						_text = "Citerne";
						_max = [_curVeh] call life_fnc_fluidVehGetCargoBase;
						_textValue = format["[%1/ %2L]", ((_curVeh getVariable ["citerne", ["",0]]) select 1), _max]
					};
				};

				_name = format["%1 (%3) - %2", getText(configFile >> "CfgVehicles" >> (typeOf _curVeh) >> "displayName"), _textValue, _text];
			};

			case (_curVeh in life_stations_list) : {

				_var = str(_curVeh);
				_var = _var select [4];

				_volume = getNumber(_cfgAllStations >> _var >> "citerne");
				_name = format["%1 - [%2/ %3L]", "Station", (_curVeh getVariable ["citerne", 0]), _volume];
			};
		};

		_index = _list lbAdd _name;
		_list lbSetValue [_index, _forEachIndex];
	};
} forEach life_fuel_near;


// Text :

_cfgFluids = (missionConfigFile >> "CfgFluids");

_displayName = getText(_cfgFluids >> (_curValue select 0) >> "displayName");
_color = getArray(_cfgFluids >> (_curValue select 0) >> "color");

if (count _color > 0) then {
	_progress ctrlSetTextColor _color;
};

if (_displayName == "") then {
	_displayName = "Vide";
};

_TextInfoFluid1Result = CONTROL(26000, 26003);
_TextInfoFluid2Result = CONTROL(26000, 26004);
_TextTypeFluid = CONTROL(26000, 26002);

_TextTypeFluid ctrlSetStructuredText parseText format ["<t align='center'>%1</t>", _displayName];
_TextInfoFluid1Result ctrlSetStructuredText parseText format ["%1L", _valueMax];
_TextInfoFluid2Result ctrlSetStructuredText parseText format ["%1L", (_curValue select 1)];