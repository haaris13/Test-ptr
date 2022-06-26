/*
	File: fn_emptyFuel.sqf

	Autor: Iron
	Date: 27 Mar 2020 20:14:28
	Version: 0.1
*/
private["_vehicleToFuel","_velocityOfVehicle","_fuelConsumption"];


while{true} do 
{
	_veh = (vehicle player);
	
	if(_veh != player && {(local _veh)} && {(effectiveCommander _veh == player)} && {(isEngineOn _veh)}) then // && {(speed _vehicle >= 1)} //NDJ 15/07/16 removed this so that vehicles are always consuming if engine running.
	{
		if (!(isClass(missionConfigFile >> "LifeCfgVehicles" >> typeOf _veh))) exitWith {};

		_speed = abs(speed _veh);
		_crew = count( crew _veh);
		_thrust = _veh getSoundController "thrust";
		_veh_data = [_veh] call life_fnc_vehicleWeight;

		_tank = getNumber(missionConfigFile >> "LifeCfgVehicles" >> typeOf _veh >> "reservoir");
		_fuel_factor = getNumber(missionConfigFile >> "LifeCfgVehicles" >> typeOf _veh >> "fuelfactor");
		_fuel_amount = (fuel _veh) * _tank;

		// To remove
		//_fuel_factor = _fuel_factor/2; // Quick fix

		_consumption = switch(true) do {

			case (_veh isKindOf "Air"): {
				//(((_veh_data select 1)/ (_veh_data select 0) + 4)* (_fuel_factor + _crew) * ((getMass getSlingLoad _veh)/100))/700;
				//(((_veh_data select 1)/ 35 + 4)* (_fuel_factor + _crew) * ((getMass getSlingLoad _veh)/100))/700;
				(_fuel_factor + (getMass getSlingLoad _veh) + (_veh_data select 1) + (_crew * 60)) * 0.00025;
			};

			default {
				//((_thrust + 3)*((_veh_data select 1) / (_veh_data select 0) + 2)* _fuel_factor * 0.000000015 * 35 *  _speed ^ 1.5) + (_fuel_factor/3000);
				((_thrust + 1)*(((_veh_data select 1)/40)+ _fuel_factor + (_crew * 1)))*0.0000025*(_speed^(1.3))+_fuel_factor/3000;
			};
		};

		//if(_consumption > 1) then
		//{
		//	_consumption = 1;
		//};

		//_consumption = _consumption - (_consumption * 0.2);

		//if (playerSide == independent || (player getVariable ["rankEu", 0]) > 0) then {
		//	if(_consumption > 0.5) then
		//	{
		//		_consumption = 0.5;
		//	};
		//};

		//Fix
		//_consumption = 0.5;

		_newFuelLevel = (_fuel_amount - _consumption) / _tank;
		_veh setFuel _newFuelLevel;
	};
	
	sleep 1;
};