/*
	File: fn_fuelStationInit.sqf

	Autor: IronBlade
*/
_cfgFuelStation = (missionConfigFile >> "CfgFuelStation");
_cfgAllStations = (_cfgFuelStation >> "AllStations");
_prefix = getText(_cfgAllStations >> "prefixObj");


{
	_config = _x;
	_configName = configName(_config);
	_pumpClass = getText(_config >> "classPump");

	_obj = call compile format["%1%2", _prefix, _configName];
	_pumps = (nearestObjects [_obj, [_pumpClass], 25]);

	{
		_pump = _x;
		_pump setFuelCargo 0;
		_pump addAction [localize "STR_Action_Pump", life_fnc_FuelStatOpen, 1, 3, true, true, "", '(player distance _target < 5)'];
	} forEach _pumps;

} forEach ("true" configClasses (_cfgAllStations));