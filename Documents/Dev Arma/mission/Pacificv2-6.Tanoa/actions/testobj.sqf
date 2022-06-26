
life_object_test = ["allPlayers"] call life_fnc_objectCreate;

{
	_player = _x;
	_uid = getPlayerUID _player;
	_side = side _x;

	_prefix = "ace_medical_";

	_ident = format["%1", _uid];

	[life_object_test,[_ident, "var"], _player] call life_fnc_objectSetPropety;
	[life_object_test,[_ident, "side"], _side] call life_fnc_objectSetPropety;
	[life_object_test,[_ident, "uid"], _uid] call life_fnc_objectSetPropety;

	{
		_var = _x;

		_result = (_player getVariable format["%1%2", _prefix, _var]);

		[life_object_test,[_ident, "medical", _var], _result] call life_fnc_objectSetPropety;

	} forEach [
				"pain", "morphine", "bloodVolume", "tourniquets", "openWounds",
				 "bandagedWounds", "internalWounds", "bodyPartStatus",
				 "airwayStatus", "airwayOccluded", "airwayCollapsed", "addedToUnitLoop",
				 "inCardiacArrest", "inReviveState", "hasLostBlood", "isBleeding", "hasPain", "painSuppress"
			  ];

} forEach allPlayers;