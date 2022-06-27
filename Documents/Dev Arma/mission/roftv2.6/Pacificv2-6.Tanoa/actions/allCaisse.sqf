{
	_i = _forEachIndex;
	_mark = createMarkerLocal [format["MarkerCaisse_%1",_i], position _x];
	_mark setMarkerShapeLocal"ICON";
	_mark setMarkerTypeLocal "hd_dot";
	_mark setMarkerTextLocal "Caisse"
} forEach life_explorer_caisses;

{
	_i = _forEachIndex;
	_mark = createMarkerLocal [format["MarkerEpaves_%1",_i], position _x];
	_mark setMarkerShapeLocal "ICON";
	_mark setMarkerTypeLocal "hd_dot";
	_mark setMarkerTextLocal "Epaves"
} forEach life_explorer_wreck;

item_chests = [];
{
	_wreckLoot = _x getVariable ["loot",[]];

	item_chests append _wreckLoot;
} forEach life_explorer_caisses;

{
  [true,_x,1] call life_fnc_handleInv;
} forEach item_chests;


deleteMarkerLocal "MarkerCaisse_1";
deleteMarkerLocal "MarkerCaisse_2";
deleteMarkerLocal "MarkerCaisse_3";
deleteMarkerLocal "MarkerCaisse_4";
deleteMarkerLocal "MarkerCaisse_5";
deleteMarkerLocal "MarkerCaisse_6";

once = false;
execute_once = {

	if (once) exitWith {};

	once = true;

	{
		_i = _forEachIndex;
		_mark = createMarkerLocal [format["MarkerCaisse_%1",_i], position _x];
		_mark setMarkerShapeLocal"ICON";
		_mark setMarkerTypeLocal "hd_dot";
		_mark setMarkerTextLocal "Caisse"
	} forEach life_explorer_caisses;

	{
		_i = _forEachIndex;
		_mark = createMarker [format["MarkerEpaves_%1",_i], position _x];
		_mark setMarkerShape "ICON";
		_mark setMarkerType "hd_dot";
		_mark setMarkerText "Epaves"
	} forEach life_explorer_wreck;
};

[] spawn execute_once;