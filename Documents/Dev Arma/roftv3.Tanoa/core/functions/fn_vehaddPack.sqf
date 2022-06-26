#include "..\..\script_macros.hpp"
/*
	File: fn_vehAddPack.sqf
	Author: IronBlade
	
	Description:

*/
private["_vehicle","_vehClass"];
_vehicle = [_this,0, objNull, [objNull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {}; //DAFUQ
_vehClass = typeOf _vehicle;

_items = [];
_trunk = [[],0];

_itemsTrunk = [];

switch (true) do {

	case (_vehClass in ["CUP_I_SUV_UNO","rhsusf_m1025_w","rhsusf_M1117_D","RHS_M2A2","RHS_M2A2_BUSKI","RHS_M2A3","RHS_M2A3_BUSKI","rhsusf_m1025_w_m2"] && (_vehicle getVariable ["sideRadio", ""]) == "onu") : {
		_items = [
			["U_bombsuit", 4],
			["rhs_6b13_ONU", 2],
			["rhs_6b5_onu", 2],
			["Specter_RAV_BLK", 2],
			["ACE_TacticalLadder_Pack", 2],
			["ace_gunbag_Tan", 2],
			["H_Bombsuit_Helmet", 4],
			["H_Titan_Helmet", 4],
			["R3F_lunettes_X800", 2],
			["Mask_M40", 10],
			["ACE_DefusalKit", 4],
			["ACE_wirecutter", 4],
			["ACE_CableTie", 4],

			["R3F_uniform_diver", 2],
			["V_RebreatherB", 2],
			["G_Diving", 2],
			
			["ACE_elasticBandage", 4],
			["ACE_fieldDressing", 8],
			["ACE_quikclot", 4],
			["ACE_packingBandage", 4],
			["ACE_bloodIV_250", 2],
			["ACE_bloodIV_500", 4],
			["ACE_tourniquet", 4],
			["ACE_bodyBag", 2],
			["ACE_tourniquet", 4],
			["ACE_salineIV_250", 2],
			["ACE_morphine", 2],
			["ACE_atropine", 2],
			["ACE_epinephrine", 2],
			["ACE_adenosine", 2],
			["ACE_personalAidKit", 6]
		];

		_vehicle disableTIEquipment false;
	};

	case (_vehClass in ["rhsusf_mkvsoc", "RHS_UH60M_d"] && (_vehicle getVariable ["sideRadio", ""]) == "onu") : {
		_items = [
			["R3F_uniform_diver", 5],
			["V_RebreatherB", 5],
			["G_Diving", 5],

			["rhs_6b13_ONU", 2],
			["rhs_6b5_onu", 2],

			["ACE_CableTie", 4],
			
			["ACE_elasticBandage", 4],
			["ACE_fieldDressing", 8],
			["ACE_quikclot", 4],
			["ACE_packingBandage", 4],
			["ACE_bloodIV_250", 2],
			["ACE_bloodIV_500", 4],
			["ACE_tourniquet", 4],
			["ACE_bodyBag", 2],
			["ACE_tourniquet", 4],
			["ACE_salineIV_250", 2],
			["ACE_morphine", 2],
			["ACE_atropine", 2],
			["ACE_epinephrine", 2],
			["ACE_adenosine", 2],
			["ACE_personalAidKit", 6]
		];

		_vehicle disableTIEquipment false;
	};

	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["VSAV_Boxer"]) : {
		_items = [
			["ACE_elasticBandage", 4],
			["ACE_fieldDressing", 8],
			["ACE_quikclot", 4],
			["ACE_packingBandage", 4],
			["ACE_bloodIV_250", 2],
			["ACE_bloodIV_500", 4],
			["ACE_tourniquet", 4],
			["ACE_bodyBag", 2],
			["ACE_tourniquet", 4],
			["ACE_salineIV_250", 2],
			["ACE_morphine", 2],
			["ACE_atropine", 2],
			["ACE_epinephrine", 2],
			["ACE_adenosine", 2],
			["ACE_personalAidKit", 6]
		];

		_vehicle setVariable ["ACE_medical_medicClass", 1, true];
	};

	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["GeK_TLC100_Medic", "C_SUV_01_F","VPC"]) : {
		_items = [
			["ACE_elasticBandage", 4],
			["ACE_fieldDressing", 8],
			["ACE_quikclot", 4],
			["ACE_packingBandage", 4],
			["ACE_bloodIV", 2],
			["ACE_bloodIV_250", 4],
			["ACE_bloodIV_500", 4],
			["ACE_tourniquet", 4],
			["ACE_bodyBag", 4],
			["ACE_plasmaIV", 2],
			["ACE_plasmaIV_500", 2],
			["ACE_plasmaIV_250", 2],
			["ACE_salineIV_250", 2],
			["ACE_salineIV_500", 2],
			["ACE_morphine", 6],
			["ACE_atropine", 6],
			["ACE_epinephrine", 6],
			["ACE_adenosine", 6],
			["ACE_personalAidKit", 4]
		];
	};

	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["ADM_GMC_Vandura"]) : {
		_items = [
			["ACE_bodyBag", 10]
		];
	};
};

switch (true) do {

	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["VSAV_Boxer"]) : {
		_itemsTrunk = [
			["roadcone", 4],
			["coneflash", 4],
			["fuelFull", 1],
			["donuts", 4],
			["coffee", 4]
		];
	};

	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["C_SUV_01_F"]) : {
		_itemsTrunk = [
			["roadcone", 4],
			["coneflash", 4],
			["tapesignwarning", 4],
			["fuelFull", 1],
			["donuts", 4],
			["coffee", 4],
			["portablelight", 1]
		];
	};

	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["GeK_TLC100_Medic"]) : {
		_itemsTrunk = [
			["roadcone", 4],
			["coneflash", 4],
			["tapesignwarning", 4],
			["fuelFull", 1],
			["donuts", 4],
			["coffee", 4],
			["portablelight", 1]
		];

		_vehicle setVariable ["ACE_medical_medicClass", 1, true];
	};


	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["VSR"]) : {
		_itemsTrunk = [
			["roadcone", 10],
			["coneflash", 10],
			["triflash", 10],
			["tapesignwarning", 10],
			["fuelFull", 10],
			["tapesignsm", 10],
			["tapesign", 10],
			["arrowleft", 5],
			["arrowright", 5],
			["donuts", 4],
			["coffee", 4],
			["portablelight", 6],
			["routbarr", 2]
		];
	};

	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["B_Heli_Light_01_F","ARMSCor_AlouetteIII_B","O_Heli_Light_02_unarmed_F","C_Heli_Light_01_civil_F"]) : {
		_itemsTrunk = [
			["roadcone", 5],
			["coneflash", 5],
			["tapesignwarning", 6],
			["fuelFull", 10],
			["donuts", 4],
			["coffee", 4]
		];

		if (_vehClass == "ARMSCor_AlouetteIII_B") then {
			_vehicle setVariable ["ACE_medical_medicClass", 1, true];
		};
	};

	case ((_vehicle getVariable ["sideRadio", ""]) == "med" && _vehClass in ["ADM_GMC_Vandura"]) : {
		_itemsTrunk = [
			["roadcone", 5],
			["coneflash", 5],
			["tapesignwarning", 6],
			["fuelFull", 1],
			["donuts", 4],
			["coffee", 4]
		];
	};	
};

{
	_vehicle addItemCargoGlobal _x;
} forEach _items;

_inv = [];
_invNum = 0;

{
	_ctrl = _x select 0;
	_num = _x select 1;

	_inv pushBack [_ctrl, _num];

	_invWheight = getNumber(missionConfigFile >> "VirtualItems" >> _ctrl >> "weight");
	_invNum = (_invNum + (_invWheight * _num));

} forEach _itemsTrunk;

_vehicle setVariable["Trunk", [_inv, _invNum], true];