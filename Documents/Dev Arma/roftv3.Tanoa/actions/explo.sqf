exploLaunch = {
	_bomb = "Bo_GBU12_LGB_MI10" createVehicle [getPosATL explo select 0, getPosATL explo select 1, (getPosATL explo select 2)+0.5];
};

[] spawn exploLaunch;


