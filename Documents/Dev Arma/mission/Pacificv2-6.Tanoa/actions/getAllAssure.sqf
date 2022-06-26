
_shops = ["civ_car", "kart_shop", "civ_truck", "civ_air"];

lifes_class = [];

{
	_shop = _x;
	_array = getArray(missionConfigFile >> "CfgCarShops" >> _shop >> "vehicles");

	{
	 	lifes_class pushBack (_x select 0);
	} forEach _array;

} forEach _shops;

{
	_assurance = getNumber(missionConfigFile >> "LifeCfgVehicles" >> _x >> "insurance");

	_dispplayName = getText(configFile >> "CfgVehicles" >> _x >> "displayName");

	diag_log format["Vehicle: %1, Assurance: %2", _dispplayName, _assurance];

} forEach lifes_class;