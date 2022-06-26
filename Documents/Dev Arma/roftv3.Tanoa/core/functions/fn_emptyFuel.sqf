private["_vehicleToFuel","_velocityOfVehicle","_fuelConsumption"];


while{true} do 
{
	_vehicle = (vehicle player);
	
	if(_vehicle != player && {(local _vehicle)} && {(effectiveCommander _vehicle == player)} && {(isEngineOn _vehicle)}) then // && {(speed _vehicle >= 1)} //NDJ 15/07/16 removed this so that vehicles are always consuming if engine running.
	{
		_speed = abs((speed _vehicle))+ 1; //Absolute Value, min 1km/h even when stopped (to ensure consumption)
		_masse = getMass _vehicle;
		_crew = count( crew _vehicle);

		_consumption = switch(true) do {
			//Aérien
			case (_vehicle isKindOf "Air" && (_masse == 0 || _masse == 1470 || _masse == 5092.39) ): {0};
			case (_vehicle isKindOf "Air" && _masse < 3000): {((_masse + 40000 + 4000 * _crew) + (getMass getSlingLoad _vehicle))/10000000};
			case (_vehicle isKindOf "Air" && _masse > 15000): {((_masse / 2 + 4000 * _crew) + (getMass getSlingLoad _vehicle)+ (count getVehicleCargo _vehicle * 4000))/10000000};
			case (_vehicle isKindOf "Air"): {((_masse + 0 + 4000 * _crew)+ (getMass getSlingLoad _vehicle))/10000000};
			//Terrestre
			//case (_vehicle isKindOf "C_Hatchback_01_sport_F"): {((getMass _vehicle+ 2000 + 200*_crew)*_speed)/100000000};20000
			case (_vehicle isKindOf "I_C_Boat_Transport_02_F" && _masse > 9000):{((500 + 200*_crew)*_speed)/10000000000}; // noir
			case (_vehicle isKindOf "C_Boat_Transport_02_F" && _masse > 9000):{((500 + 200*_crew)*_speed)/1000000000}; // bleu ciel
			case (_vehicle isKindOf "Ship" && _masse > 9000):{((500 + 200*_crew)*_speed)/100000000};
			case (_speed > 110):{(_speed*4)/100000+0.001};
			case (_speed > 100 && _masse > 7000):{(_speed*4)/100000+0.001};
			default {(_speed)/100000+0.001};
			//case (_masse < 300):{((_masse+ 2000 + 500*_crew)*_speed)/100000000};
			//case (_masse > 15000):{(((_masse /10) + 200*_crew)*_speed)/100000000};
			//case (_masse > 8000):{(((_masse /4) + 200*_crew)*_speed)/100000000};
			//case (_masse > 3200):{(((_masse /2) + 200*_crew)*_speed)/100000000};
			//default {((_masse + 200*_crew)*_speed)/100000000};
		};

		if(_consumption > 1) then
		{
			_consumption = 1;
		};

		_consumption = _consumption - (_consumption * 0.1);

		if (playerSide == independent || (player getVariable ["rankEu", 0]) > 0) then {
			if(_consumption > 0.5) then
			{
				_consumption = 0.5;
			};
		};
		if (["ecoconduite"] call life_fnc_hasPerk) then {
			_consumption = _consumption * 0.9;
		};
		_newFuelLevel = (fuel _vehicle) - (_consumption * 1.2);
		_vehicle setFuel _newFuelLevel;
	};
	
	sleep 6;
};