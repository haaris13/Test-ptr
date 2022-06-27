/*
	File: fn_initEntreprise.sqf

	Autor:IronBlade

	Desc:

*/
diag_log "fn_initEntreprise";

_entreprises = "true" configClasses (missionconfigFile >> "CfgEntreprise"); 


{

	_buildings = getArray(_x >> "buildings");
	_owners = getArray(_x >> "owners");
	_entID = getText(_x >> "variable");
	_doors = getArray(_x >> "doors");

	if (
			(getPlayerUID player) in _owners
			 || ((_entID == "narvalo") && (call life_depanLevel) > 0)
			 || ((_entID == "press") && (call life_pressLevel) > 0)
			 || ((_entID == "ocas") && (call life_ocasLevel) > 0)
			 || ((_entID == "pomme") && (call life_barLevel) > 0)
			 || ((_entID == "johnson") && (call life_johnsonLevel) > 0)
		) then {

		life_entreprises pushBack _entID;
	
		{
			_class = _x select 0;
			_pos = _x select 1;

			_build = nearestObjects [_pos, [_class], 50] select 0;

			_build setVariable ["ent_id",_entID,true];

			life_vehicles pushBack _build;

		} forEach _buildings;

		{
			_class = _x select 0;
			_pos = _x select 1;

			_door = nearestObjects [_pos, [_class], 20] select 0;

			_door setVariable ["ent_id",_entID,true];

			life_vehicles pushBack _door;

		} forEach _doors;
	};

} forEach _entreprises;