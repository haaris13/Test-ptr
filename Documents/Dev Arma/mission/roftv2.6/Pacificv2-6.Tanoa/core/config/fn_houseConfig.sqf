/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master config file for buyable houses?
*/
private["_house"];
_house = [_this,0,"",[""]] call BIS_fnc_param;
if(_house == "") exitWith {[]};

/*
	Return Format:
	[price,# of containers allowed]
*/
switch (true) do {
	case (_house in ["Land_House_Small_05_F","Land_House_Small_02_F","Land_House_Small_03_F"]): {[750000,1]};
	case (_house in ["Land_House_Big_01_F","Land_Addon_04_F","Land_House_Small_04_F","Land_House_Small_06_F"]): {[2000000,2]};
	case (_house in ["Land_House_Big_02_F"]): {[3000000,4]};
	//case (_house in ["Land_Hotel_02_F","Land_Hotel_01_F"]): {[3500000,5]};


	// Gang Land_House_Big_04_F

	default {[]};
};