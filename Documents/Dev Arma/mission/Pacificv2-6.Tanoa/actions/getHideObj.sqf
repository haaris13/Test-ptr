



_objs = nearestObjects [player, [], 20];

liste_hides = [];

{
	_objStr = str(_x);

	if (_objStr find "track" != -1) then {
		liste_hides  pushBack (parseNumber((_objStr splitString ":") select 0));
	};
} forEach _objs;