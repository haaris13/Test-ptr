this enableSimulation false; this allowDamage false; this addAction[localize"STR_Garage_Title",  {   [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2]; life_garage_type = "Car";   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "president_car_1";  }];
this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,["Car"],0,false,false,"",'!life_garage_store']; 

this addAction["Fournisseur de véhicules", life_fnc_vehicleShopMenu,["president_car",civilian,"president_car_1","civ","Fournisseur de véhicules"]];