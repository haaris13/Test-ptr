{
	if (typeOf _x == "Land_House_Big_02_F") then {
		if(isNil {_x getVariable "house_owner"}) then {
			_marker = createMarkerLocal [format["h_%1",random 9999], position _x];
			_marker setMarkerShape "ICON";
			_marker setMarkerType "hd_dot";
			_marker setMarkerText "Maison !!!!!";
		};
	};
} forEach (allMissionObjects "house");