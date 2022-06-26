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
	case (_house in ["Land_House_Small_05_F","Land_House_Small_02_F","Land_House_Small_03_F","Land_Caravan_01_rust_F","Land_Caravan_01_green_F","Land_Slum_House02_F","Land_Shed_02_F"]): {[750000,1]};
	case (_house in ["Land_House_Big_01_F","Land_Addon_04_F","Land_House_Small_04_F","Land_House_Small_06_F"]): {[2000000,2]};
	case (_house in ["Land_i_Addon_02_V1_F","Land_i_Addon_02_b_white_F","Land_House_2W05_F"]): {[2500000,3]};
	//case (_house in ["Land_House_Big_02_F","Land_House_Big_03_F"]): {[3000000,4]};
	case (_house in ["Land_House_Big_02_F","Land_House_Big_03_F","Land_i_House_Small_01_b_whiteblue_F","Land_i_House_Small_01_b_pink_F","Land_i_House_Small_01_b_blue_F","Land_i_House_Small_01_b_yellow_F","Land_i_House_Small_02_c_brown_F","Land_i_House_Small_02_c_blue_F","Land_i_House_Small_02_b_blue_F","Land_i_House_Small_02_b_white_F","Land_i_House_Small_02_V1_F","Land_i_House_Small_03_V1_F","Land_House_1W06_F","Land_House_1B01_F"]): {[3000000,4]};
	//case (_house in ["Land_Hotel_02_F","Land_Hotel_01_F"]): {[3500000,5]};

	// Gang Land_House_Big_04_F

	default {[]};
};