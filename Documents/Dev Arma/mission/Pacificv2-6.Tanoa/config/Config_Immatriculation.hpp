/*
	Autor:IronBlade

	[this, "LICENSE"] call ivory_fnc_setLicense;


	d3s_fnc_setLicense
*/

class CfgImmatriculationTags
{
	unitsToScan[] = {"Car"};
	unitsToScanDist = 60; // Distance d'affichage plaque d'immatriculation, défault étant 30

	class D3S_Imma {
		function = "d3s_fnc_setLicense";
		immaSize = 7;
	};

	class O_G_Van_01_transport_F {
		posImma[] = {-0.0146484,-3.15625,-1.09794};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};

	class O_G_Van_01_box_red_F {
		posImma[] = {-0.0166016,-3.15625,-1.07629};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};

	class O_G_Van_01_fuel_F {
		posImma[] = {-0.0166016,-3.15625,-1.07629};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};

	class C_Van_01_box_F {
		posImma[] = {-0.0146484,-3.15625,-1.09794};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};

	class C_Van_01_transport_F {
		posImma[] = {-0.0166016,-3.15625,-1.07629};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};

	class C_Van_01_fuel_F {
		posImma[] = {-0.0166016,-3.15625,-1.07629};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};

	class C_Hatchback_01_sport_F {
		posImma[] = {0,-2.44189,-0.440598};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class C_Hatchback_01_F {
		posImma[] = {0,-2.44189,-0.440598};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class C_Offroad_02_unarmed_F {
		posImma[] = {-0.733398,-1.61914,-0.650948};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class C_Quadbike_01_F {
		posImma[] = {-0.0102539,-1.08789,-0.590519};
		hasGameImma = 0;

		isIllegal = 0;

		price = 100;

		priceRemove = 50000;
	};

	class B_Quadbike_01_F {
		posImma[] = {-0.0102539,-1.08789,-0.590519};
		hasGameImma = 0;

		isIllegal = 0;

		price = 100;

		priceRemove = 50000;
	};

	class C_SUV_01_F {
		posImma[] = {0,-2.875,-0.239502};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class B_GEN_Offroad_01_covered_F {
		posImma[] = {0.125977,-3.08105,-0.821167};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class C_Offroad_01_covered_F {
		posImma[] = {0.125977,-3.08105,-0.821167};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class I_E_Offroad_01_covered_F {
		posImma[] = {0.125977,-3.08105,-0.821167};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class C_Offroad_01_F {
		posImma[] = {0.125977,-3.08105,-0.821167};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class B_G_Offroad_01_armed_F {
		posImma[] = {0.125977,-3.08105,-0.821167};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class C_Offroad_01_repair_F {
		posImma[] = {0.125977,-3.08105,-0.821167};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 100000;
	};

	class O_Truck_03_fuel_F {
		posImma[] = {-0.90918,-4.96729,-0.744286};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 120000;
	};

	class I_Truck_02_transport_F {
		posImma[] = {-0.277344,-3.71436,-1.18297};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 120000;
	};

	class C_Truck_02_transport_F {
		posImma[] = {-0.277344,-3.71436,-1.18297};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 120000;
	};

	class I_Truck_02_covered_F {
		posImma[] = {-0.21875,-3.51416,-1.25171};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 120000;
	};

	class I_Truck_02_ammo_F {
		posImma[] = {-0.21875,-3.51416,-1.25171};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 120000;
	};

	class B_Truck_01_flatbed_F {
		posImma[] = {-0.242188,-4.1123,-0.668762};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 200000;
	};

	class B_Truck_01_cargo_F {
		posImma[] = {-0.242188,-4.1123,-0.668762};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 200000;
	};

	class B_Truck_01_mover_F {
		posImma[] = {-0.242188,-4.1123,-0.668762};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 200000;
	};

	class B_Truck_01_box_F {
		posImma[] = {-0.00390625,-4.65625,-0.840564};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 200000;
	};

	class B_Truck_01_transport_F {
		posImma[] = {-0.812988,-5.06689,-0.371429};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 180000;
	};

	class B_Truck_01_covered_F {
		posImma[] = {-0.812988,-5.06689,-0.371429};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 180000;
	};

	class B_Truck_01_ammo_F {
		posImma[] = {-0.812988,-5.06689,-0.371429};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 180000;
	};

	class B_MRAP_01_F {
		posImma[] = {-0.884766,-4.21875,-0.768793};
		hasGameImma = 0;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};

	class O_Truck_03_device_F {
		posImma[] = {-0.927246,-5.0498,-0.706928};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 150000;
	};

	class O_Truck_03_covered_F {
		posImma[] = {-0.847656,-4.76758,-1.00225};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 150000;
	};

	class O_Truck_03_repair_F {
		posImma[] = {-0.847656,-4.76758,-1.00225};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 150000;
	};

	class O_Truck_03_ammo_F {
		posImma[] = {-0.847656,-4.76758,-1.00225};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 150000;
	};

	class O_Truck_03_transport_F {
		posImma[] = {-0.855469,-4.77539,-0.963585};
		hasGameImma = 0;

		isIllegal = 0;

		price = 20000;

		priceRemove = 150000;
	};

	class O_T_LSV_02_unarmed_F {
		posImma[] = {0,-2.33691,-0.455846};
		hasGameImma = 0;

		isIllegal = 1;

		price = 2000;

		priceRemove = 150000;
	};

	class O_T_LSV_02_armed_F {
		posImma[] = {0,-2.33691,-0.455846};
		hasGameImma = 0;

		isIllegal = 1;

		price = 2000;

		priceRemove = 150000;
	};

	class O_MRAP_02_F {
		posImma[] = {-0.869141,-4.52051,-1.29119};
		hasGameImma = 0;

		isIllegal = 1;

		price = 2000;

		priceRemove = 150000;
	};

	class C_Van_02_medevac_F {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 1;

		price = 2000;

		priceRemove = 120000;
	};
	
	class C_Van_02_transport_F {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 1;

		price = 2000;

		priceRemove = 120000;
	};
	
	class I_C_Van_02_transport_F {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 1;

		price = 2000;

		priceRemove = 120000;
	};
	
	class B_GEN_Van_02_transport_F {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};
	
	class B_GEN_Van_02_vehicle_F {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};
	
	class Gendarmerie_CBRN_Vehicle {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};
	
	class C_Van_02_vehicle_F {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};
	
	class C_Van_02_service_F {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 0;

		price = 2000;

		priceRemove = 120000;
	};
	
	class I_C_Van_02_vehicle_F {
		posImma[] = {};
		hasGameImma = 1;

		isIllegal = 1;

		price = 2000;

		priceRemove = 120000;
	};

	class B_T_LSV_01_armed_F {
		posImma[] = {-0.674805,-2.00293,-0.840263};
		hasGameImma = 0;

		isIllegal = 0;

		price = 2000;

		priceRemove = 150000;
	};

	class B_T_LSV_01_unarmed_F {
		posImma[] = {-0.674805,-2.00293,-0.840263};
		hasGameImma = 0;

		isIllegal = 0;

		price = 2000;

		priceRemove = 150000;
	};

	class I_MRAP_03_F {
		posImma[] = {-0.695313,-2.95532,-0.461147};
		hasGameImma = 0;

		isIllegal = 0;

		price = 2000;

		priceRemove = 150000;
	};







	

	class RDS_JAWA353_Civ_01 {
		posImma[] = {-0.131104,-0.741211,-0.886032};

		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class BAF_Offroad_D {
		posImma[] = {-0.771484,-2.15918,-0.476013};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class CUP_C_SUV_CIV {
		posImma[] = {0.0148926,-2.65869,-0.00683594};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_mrzr4_d {
		posImma[] = {-0.0224609,-1.60449,-0.721792};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class RDS_tt650_Civ_01 {
		posImma[] = {-0.136719,-0.787598,-0.758148};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class CUP_C_SUV_TK {
		posImma[] = {0.0148926,-2.65869,-0.00683594};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_M977A4_usarmy_d {
		posImma[] = {-0.810547,-4.67456,-0.182044};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_M977A4_AMMO_usarmy_d {
		posImma[] = {-0.810547,-4.67456,-0.182044};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_M977A4_REPAIR_usarmy_d {
		posImma[] = {-0.810547,-4.67456,-0.182044};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_M978A4_usarmy_d {
		posImma[] = {0.93457,-5.10669,0.396858};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_M977A4_BKIT_usarmy_d {
		posImma[] = {0.93457,-5.10669,0.396858};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_M977A4_AMMO_BKIT_usarmy_d {
		posImma[] = {0.93457,-5.10669,0.396858};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_M977A4_REPAIR_BKIT_usarmy_d {
		posImma[] = {0.93457,-5.10669,0.396858};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class rhsusf_M978A4_BKIT_usarmy_d {
		posImma[] = {0.93457,-5.10669,0.396858};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};



	class rhs_kamaz5350_msv {
		posImma[] = {-0.725098,-3.24609,-1.19774};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class RHS_Ural_Open_Civ_01 {
		posImma[] = {-0.901855,-2.74707,-0.775061};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class RHS_Ural_Civ_01 {
		posImma[] = {-0.901855,-2.74707,-0.775061};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Jonzie_Tow_Truck {
		posImma[] = {-0.00195313,-6.62061,0.586124};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};	

	class kecske_evox_gen_d {
		posImma[] = {0.193848,-2.22852,-0.755755};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};	

	class ivory_evox {
		posImma[] = {0.193848,-2.22852,-0.755755};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};	

	class VSAV_Boxer {
		posImma[] = {-0.426514,-2.74609,0.853679};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ADM_GMC_Vandura {
		posImma[] = {0.00634766,-3.54395,-1.32978};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_rs4 {
		posImma[] = {0.1875,-2.23926,-0.402023};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_c {
		posImma[] = {0.257324,-2.34375,-0.687932};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_e36 {
		posImma[] = {0.248535,-2.13818,-0.441791};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_m3 {
		posImma[] = {0.12915,-2.26221,-0.401256};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_veyron {
		posImma[] = {0.00878906,-2.23193,-0.687738};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Jonzie_Datsun_510 {
		posImma[] = {0.0187988,-2.29443,0.740726};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class chfcrs {
		posImma[] = {0.0527344,-2.09863,0.766991};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Jonzie_VE {
		posImma[] = {0.00830078,-2.66357,1.02845};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Jonzie_Ute {
		posImma[] = {0.032959,-2.60986,0.893984};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_isf {
		posImma[] = {0.27124,-2.30469,-0.401764};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_lfa {
		posImma[] = {-0.00585938,-1.99658,-0.561805};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_elise {
		posImma[] = {-0.00952148, -1.77051, -0.764083};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_f1 {
		posImma[] = {0.108887,-2.01709,-0.540064};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_mp4 {
		posImma[] = {0.0913086,-2.26563,-0.896076};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class wirk_megane_rs_gend {
		posImma[] = {-0.00537109,-2.35547,-0.614792};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_gt500 {
		posImma[] = {0.197754, -2.27539, -0.814354};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_190e {
		posImma[] = {0.188721,-2.10205,-0.578708};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Jonzie_Mini_Cooper {
		posImma[] = {0.0102539,-2.71826,-0.926483};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Jonzie_Mini_Cooper_R_spec {
		posImma[] = {0.00683594,-2.6958,-0.911779};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_r34 {
		posImma[] = {0.00439453,-2.20703,-0.685843};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_wrx {
		posImma[] = {0.150391,-2.2041,-0.769322};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_suburban { // Chevrolet Suburban
		posImma[] = {0.015,-2.8,-0.5};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_supra {
		posImma[] = {0.247559,-2.15625,-0.602424};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_supra_topsecret {
		posImma[] = {0.247559,-2.15625,-0.602424};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_gti {
		posImma[] = {0.189453,-2.11719,-0.600365};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class IVORY_R8 {
		posImma[] = {0.000732422,-2.18164,-0.673954};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class IVORY_R8SPYDER {
		posImma[] = {0.00683594,-2.20898,-0.673957};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class ivory_lp560 {
		posImma[] = {0.000976563,-2.11206,-0.642917};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Gendarmerie_Touereg {
		posImma[] = {0.0498047,-2.06494,0.520794};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Gendarmerie_Merc_ClassX {
		posImma[] = {-0.027832,-2.83789,0.239471};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Gendarmerie_RS4 {
		posImma[] = {0.0466309,-2.29492,-0.575783};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Gendarmerie_GOLF6 {
		posImma[] = {0.00952148,-2.00391,-0.789405};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Gendarmerie_RangeRover_SVR {
		posImma[] = {-0.00195313,-2.42383,1.05889};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};

	class Gendarmerie_Mamba {
		posImma[] = {-0.34375,-4.36914,-1.16368};
		isIllegal = 0;
		price = 2000;
		priceRemove = 150000;
	};



	class d3s_Aprilia_Tuono_V4_1100_RR {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g850_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_BMW_S_1000_RR {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_Ducati_Monster_1200_S {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_Kawasaki_Z800 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_KTM_1290_Super_Duke {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_Suzuki_GSX_R_1000 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_e60_09_ACS5 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_stelvio_18 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_stelvio_18_Ti {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_stelvio_19_MNSTR {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_Q7_15 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_Q7_15_D {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_e60_09 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_f85_15_m {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_e89_12 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_e89_12_M {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g800_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g500_35_15 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_skylark_52 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_escalade_16 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_escalade_16_pt {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_tahoe_08 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_tahoe_limited {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_tahoe_EX {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_challenger_15_LW {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_challenger_15_WIDE {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_challenger_15 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_challenger_15_HELL {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_srthellcat_15 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_charger_15 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_coronet_70 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_LaFerrari_14 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_raptor_SCR_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_raptor_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_savana_05 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_savana_VAN {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_h2_02 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_cherokee_18 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_cherokee_18_TRCK {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_trailcat_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_trailcat_17_sahara {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_trailcat_17_M {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	

	class d3s_lx570_16 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g65amg_Mansory {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g65amg_Mansory_2 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_levante_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_levante_s_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_levante_s_17_mat {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g63amg_16 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g65amg_16 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g350d_15 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_gl63amg_12 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_gl63amg_12_SE {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_s560_18 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_s560_sport_18 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_vv222_18 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_vv222_18_2 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_dawn_16_II {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_dawn_16 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_dawn_16_III {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_wrx_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_wrx_sti_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_wrx_17_FnF8 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_200_VX_16 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_200_16_EX {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_uaz_3159 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_uaz_3165M {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_uaz_3170 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_uaz_469P {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_uaz_3162 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_e60_09_EX {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_willys {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_niva_2329 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_tiger_2975 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_2 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_kamaz_tent_2 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_bocha {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_tent {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_tent2 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_4350 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_4350_tent {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_4350_tent2 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_4350_kung {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_5350 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_5350_tent {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_5350_bocha {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_6350 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kraz_6315 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kraz_6316 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_actros_14 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_ural {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_ural_tent {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_next {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_next_tent {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_next_bocha {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_next_kung {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_130_01 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_130_06 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_130_05 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_130 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_130_02 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_130_04 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_130_07 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_130_03 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_131 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_131_2 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_131_4 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_131_5 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_zil_131_3 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_gaz66 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_gaz66_TENT {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_gaz66_AC {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_gaz66_KUNG {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_kamaz_kung {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_maz_6317 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_maz_6317_tent {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_maz_6317_cistern {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_maz_7429 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_maz_7429_cistern {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_452 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_3303 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_escalade_16_gouv {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_tahoe_EMS {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_stelvio_18_COP {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_raptor_PRP_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g63amg_16_FSB {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_srthellcat_15_CPP {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_srthellcat_15_HELL {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_escalade_16_cop {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_cherokee_18_JPPV {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_tahoe_PPV {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_g63amg_16_Police {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_savana_INKAS {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_lx570_16_FSB {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_stelvio_18_UNM {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_tahoe_UNM {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_raptor_UNM_17 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_cherokee_18_UNM {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_gl63amg_12_FSB {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_200_16_FSB {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};
	
	class d3s_e60_09_m {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_is_16 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_is_16_1 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_is_f_16 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_is_16_SE {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_avalon_18 {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_avalon_18_LTD {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_avalon_18_SE {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};

	class d3s_avalon_18_night {
		posImma[] = {};
		hasGameImma = 1;

		immaCfg = "D3S_Imma";

		isIllegal = 0;

		price = 2000;
		priceRemove = 120000;
	};	
};