/*
	File: fn_FuelStatOpen.sqf
	Author : NiiRoZz

	Description:
	Open dialog Pump.
*/
private["_shop","_sideCheck","_spawnPoints","_shopFlag","_disableBuy"];

disableSerialization;
//Long boring series of checks
if (life_action_inUse) exitwith {diag_log "life_action_inUse";};
life_action_inUse = true;
if(life_is_processing) exitwith {diag_log "life_is_processing";};

_cfgFuelStation = (missionConfigFile >> "CfgFuelStation");
_listClass = getArray(_cfgFuelStation >> "listClassStations");

_fuelstations = nearestobjects [player, _listClass, 10];
if (count _fuelstations == 0 ) exitwith {life_action_inUse = false; diag_log "count _fuelstations == 0";};

_vehicleList = nearestObjects [player, ["Car","air","ship","Tank"], 15];
if (count _vehicleList < 1) exitwith {hint localize "STR_NOTF_VehicleNear";life_action_inUse = false;};

if(!createDialog "Life_FuelStat") exitWith {};
[] spawn {waituntil {!dialog}; life_action_inUse = false;};

life_fuel_station = [] call life_fnc_fuelGetStationNear;

ctrlSetText [20301,format["Station D'Essence - Citerne: %1l", life_fuel_station getVariable["citerne", 0]]];

life_fuelPrices = [life_fuel_station] call life_fnc_fuelGetPrice;
_price = (["essence_price", (life_fuelPrices select 0)] call life_fnc_gouvTaxesCalc);


//Fetch the shop config.
vehicleFuelList = [];
{
	_fuel = fuel _x;
	vehicleFuelList pushBack [_x,_fuel];
} foreach _vehicleList;

_control = ((findDisplay 20300) displayCtrl 20302);
lbClear _control; //Flush the list.

ctrlsettext [20322,format [localize "STR_Price_Fuel_Pump", _price]];
ctrlsettext [20323,format ["Total : %1$", _price * 0.1]];
//Loop through
{
	_className = typeof (_x select 0);
	_fuelleft = _x select 1;

	_vehicleInfo = [_className] call life_fnc_fetchVehInfo;
	_control lbAdd (_vehicleInfo select 3);
	_control lbSetPicture [(lbSize _control)-1,(_vehicleInfo select 2)];
	_control lbSetData [(lbSize _control)-1,_className];
	_control lbSetValue [(lbSize _control)-1,_ForEachIndex];
} foreach vehicleFuelList;