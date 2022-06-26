/*
	File: fn_clanHouseUpdate.sqf

	Autor: IronBlade
*/
_type = [_this,0,0,[0]] call BIS_fnc_param;
_house = [_this,1,objNull,[objNull]] call BIS_fnc_param;

if (isNull _house) exitWith {diag_log "fn_clanHouseUpdate NULL";};

uiSleep 1;

_group = group player;
_currentRank = ([] call life_fnc_clanGetRank);

switch (_type) do { 
	case 0 : {

		if !(_house in life_vehicles) then {
			life_vehicles pushBack _house;
		};

		_cando = getArray(_currentRank >> "canDo");

		uiSleep 5;

		_container = _house getVariable ["container", objNull];

		if (!isNull _container) then {

			if !(_container in life_vehicles) then {
				life_vehicles pushBack _container;
			};
		};
	};

	case 1 : {

		_index = life_vehicles find _house;
		life_vehicles deleteAt _index;
	};
};