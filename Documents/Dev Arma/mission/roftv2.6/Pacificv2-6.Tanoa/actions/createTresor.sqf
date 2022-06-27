

var_test_time = false;

life_debug_createTre = {
	life_caisse_types_ground = ["Box_FIA_Ammo_F","Box_FIA_Wps_F","Box_FIA_Support_F"];

	_typeCaisse = (life_caisse_types_ground call BIS_fnc_selectRandom);
	_selectedLocation = position player;

	_caisse = _typeCaisse createVehicle [0,0,0];
	_caisse allowDamage false;
	_caisse setDir (random 360);
	_caisse setPos [_selectedLocation select 0, _selectedLocation select 1, 1];

	clearMagazineCargoGlobal _caisse;
	clearWeaponCargoGlobal _caisse;
	clearItemCargoGlobal _caisse;
	clearBackpackCargo _caisse;

	_caisse setVariable ["searched", false, true];
	_caisse setVariable ["players", [], true];

	_caisseLoot = ["woodencontainer", "woodencontainer", "smallchest", "mediumchest", "leadbox", "largechest", "hugechest"];

	_caisse setVariable ["loot", _caisseLoot, true];

	life_explorer_caisses pushBack _caisse;
	publicVariable "life_explorer_caisses";
};

life_testAct = {
	if (!var_test_time) then {
		var_test_time = true;
		player addAction ["Creer Caisse", {[] call life_debug_createTre;}];
	};
};

[] call life_testAct;