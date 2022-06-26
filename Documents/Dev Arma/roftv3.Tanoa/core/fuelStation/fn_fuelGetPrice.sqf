/*
	File: fn_fuelGetPrice.sqf
	Autor: IronBlade
*/

_cfgFuelStation = (missionConfigFile >> "CfgFuelStation");
_cfgAllStations = (_cfgFuelStation >> "AllStations");

_station = [_this,0, objNull,[objNull]] call BIS_fnc_param;

_var = str(_station);
_var = _var select [4];

_volumeStat = getNumber(_cfgAllStations >> _var >> "citerne");
_citerneStat = (_station getVariable ["citerne", 0]);

_priceFuelBase = getNumber(_cfgFuelStation >> "priceFuel");
_priceFuelSellBase = getNumber(_cfgFuelStation >> "priceFuelSell");

_diff = (1 - (_citerneStat / _volumeStat));

_coef = ((_priceFuelBase / 2) / _priceFuelSellBase);

_priceFuel = round(_priceFuelBase * ((_diff * _coef) + 1));

_priceFuelSell = round(_priceFuelSellBase * ((_diff * _coef) + 1));

[_priceFuel, _priceFuelSell];