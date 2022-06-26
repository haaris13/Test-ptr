#include "..\..\script_macros.hpp"
/*
	File: fn_clearVehicleAmmo.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Clears the vehicle of ammo types that we don't want.
*/
private["_vehicle","_veh"];
_vehicle = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
if(isNull _vehicle) exitWith {}; //DAFUQ
_veh = typeOf _vehicle;

switch (true) do {

	case (_veh in ["B_T_LSV_01_unarmed_F","B_T_LSV_01_armed_F"]) : {
		_vehicle setMass 3600;
	};

	case (_veh in ["B_Boat_Armed_01_minigun_F"]) : {
		_vehicle removeMagazinesTurret ["200Rnd_40mm_G_belt",[0]];
	};

	case (_veh in ["B_APC_Wheeled_01_cannon_F"]) : {
		_vehicle removeMagazinesTurret ["60Rnd_40mm_GPR_Tracer_Red_shells",[0]];
		_vehicle removeMagazinesTurret ["40Rnd_40mm_APFSDS_Tracer_Red_shells",[0]];
	};

	case (_veh in ["O_Heli_Attack_02_F"]) : {
		_vehicle removeMagazinesTurret ["250Rnd_30mm_HE_shells_Tracer_Green",[0]];
		_vehicle removeMagazinesTurret ["250Rnd_30mm_APDS_shells_Tracer_Green",[0]];
		_vehicle removeMagazinesTurret ["8Rnd_LG_scalpel",[0]];
		_vehicle removeMagazinesTurret ["38Rnd_80mm_rockets",[0]];
	};

	case (_veh in ["B_Heli_Transport_01_F"]) : {
		_vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Red",[1]];
		_vehicle removeMagazinesTurret ["2000Rnd_65x39_Belt_Tracer_Red",[2]];

		//(vehicle player) addMagazineTurret ["2000Rnd_65x39_Belt_Tracer_Red",[2]];
		//(vehicle player) addMagazineTurret ["2000Rnd_65x39_Belt_Tracer_Red",[1]];
	};

	case (_veh in ["O_T_VTOL_02_infantry_F", "O_T_VTOL_02_vehicle_F"]) : {
		_vehicle removeMagazinesTurret ["250Rnd_30mm_HE_shells_Tracer_Green",[0]];
		_vehicle removeMagazinesTurret ["250Rnd_30mm_APDS_shells_Tracer_Green",[0]];
		_vehicle removeMagazinesTurret ["8Rnd_LG_scalpel",[0]];
		_vehicle removeMagazinesTurret ["38Rnd_80mm_rockets",[0]];

		_vehicle disableTIEquipment true;
	};

	case (_veh in ["I_Plane_Fighter_03_AA_F"]) : {
		_vehicle removeMagazinesTurret ["2Rnd_AAA_missiles",[-1]];
		_vehicle removeMagazinesTurret ["4Rnd_GAA_missiles",[-1]];

		_vehicle addMagazineTurret ["2Rnd_AAA_missiles",[-1],1];
		_vehicle disableTIEquipment true;
	};

	case (_veh in ["B_Heli_Attack_01_F"]) : {
		_vehicle removeMagazinesTurret ["1000Rnd_20mm_shells",[0]];
		_vehicle removeMagazinesTurret ["4Rnd_AAA_missiles",[0]];
		_vehicle removeMagazinesTurret ["24Rnd_PG_missiles",[0]];
	};

	case (_veh in ["RHS_UH60M_d"]) : {
		_vehicle animate ['doors_hide',0];
	};

	case (_veh in ["RHS_UH60M_d"]) : {
		_vehicle animate ['hide_BFT',1];
	};

	case (_veh in ["rhsusf_m1025_w","rhsusf_m1025_w_m2","rhsusf_m998_w_4dr","rhsusf_m998_w_2dr"]) : {
		_vehicle animate ['hide_BFT',1];
	};

	case (_veh in ["rhsusf_M1117_D"]) : {
		_vehicle setMass 10000;
	};

	case (_veh in ["rhsusf_m1a2sep1tuskid_usarmy"]) : {
		_vehicle animate ['Miles_Hide',1];
	};
	
};


_vehicle setRepairCargo 0;
_vehicle setFuelCargo 0;

clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
clearBackpackCargo _vehicle;