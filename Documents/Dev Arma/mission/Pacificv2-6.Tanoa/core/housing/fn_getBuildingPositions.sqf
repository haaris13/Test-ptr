/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrieves all 3D-world positions in a building and also restricts
	certain positions due to window positioning.
*/
private["_building","_arr","_restricted","_exitLoop","_i"];
_building = _this select 0;
_arr = [];

_restricted = switch(typeOf _building) do {
	case "Land_i_House_Big_02_V1_F": {[0,1,2,3,4]};
	case "Land_i_House_Big_02_V2_F": {[0,1,2,3,4]};
	case "Land_i_House_Big_02_V3_F": {[0,1,2,3,4]};
	case "Land_i_House_Big_01_V1_F": {[2,3]};
	case "Land_i_House_Big_01_V2_F": {[2,3]};
	case "Land_i_House_Big_01_V3_F": {[2,3]};
	case "Land_i_Stone_HouseSmall_V1_F": {[0,1,3,4]};
	case "Land_i_Stone_HouseSmall_V2_F": {[0,1,3,4]};
	case "Land_i_Stone_HouseSmall_V3_F": {[0,1,3,4]};


	//Tanoa specific
	case "Land_House_Small_02_F": {[]}; //done
	case "Land_House_Small_03_F": {[]};//done
	case "Land_House_Small_04_F": {[0,1,2,6]}; //done
	case "Land_House_Small_05_F": {[4,5]}; //done
	case "Land_House_Small_06_F": {[0,7,8]}; //done

	case "Land_House_big_02_f": {[0,1,2,6,7,8,9,10,11,12,13]};
	case "Land_House_big_03_f": {[0,1,6,7,8,9,12,13,14,15,19,20,21]}; //done

	default {[]};
};

_i = 0;
_exitLoop = false; //Loops are not fun.
while {true} do {
	if(!(_i in _restricted)) then {
	_pos = _building buildingPos _i;
	if(_pos isEqualTo [0,0,0]) exitWith {_exitLoop = true;};
	_arr pushBack _pos;
	};
	if(_exitLoop) exitWith {};
	_i = _i + 1;
};

_arr