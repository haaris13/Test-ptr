this enableSimulation false;  this allowDamage false; 
this addAction[localize"STR_MAR_W_E_Vehicle Shop",life_fnc_vehicleShopMenu,["cop_car",west,"cop_car_2","cop","Fournisseur de véhicules"]];
this addAction[localize"STR_Garage_Title",  {   [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "cop_car_2"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == west'];
  this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];
 this setVariable["realname","Cop Vehicle Store"];


_objs = nearestObjects [player, ["Land_Money_F"], 200];

if (count _objs > 0) then {
	[(_objs select 0),player,true] remoteExecCall ["TON_fnc_pickupAction",2];
};