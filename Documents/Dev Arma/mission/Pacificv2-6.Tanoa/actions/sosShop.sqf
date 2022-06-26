
// Shop
this enableSimulation false; 
this allowDamage false; 
this addAction["Marché",life_fnc_virt_menu,"market"];
this addAction["Uniformes",life_fnc_clothingMenu,"sos"];
this addAction["Equipements",life_fnc_weaponShopMenu,"sosWeapons"];
this addAction["<t color='#ADFF2F'>ATM</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];
this addAction["Service",life_fnc_serviceSos,""];

//

this enableSimulation false;
this allowDamage false;  
this addAction[localize"STR_MAR_Helicopter_Shop", life_fnc_vehicleShopMenu,["sos_air",civilian,"sos_air_1","sos","Unité aériene"]];
this addAction[localize"STR_Garage_Title",  {[getPlayerUID player,playerSide,"Air",player] remoteExecCall ["TON_fnc_getVehicles",2];
											 createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "sos_air_1"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == civilian && (call life_sosLevel) > 0'];
this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];

//
this enableSimulation false;
this allowDamage false;  
this addAction["Vendeur véhicule Terrestre", life_fnc_vehicleShopMenu,["sos_car",civilian,"sos_car_1","sos","Unité aériene"]];
this addAction[localize"STR_Garage_Title",  {[getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];
											 createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "sos_car_1"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == civilian && (call life_sosLevel) > 0'];
this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];


this enableSimulation false;
this allowDamage false;  
this addAction["Vendeur de Bateau", life_fnc_vehicleShopMenu,["sos_ship",civilian,"sos_ship_1","sos","Unité aériene"]];
this addAction[localize"STR_Garage_Title",  {[getPlayerUID player,playerSide,"Ship",player] remoteExecCall ["TON_fnc_getVehicles",2];
											 createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "sos_ship_1"; life_garage_type = "Ship";  },"",0,false,false,"",'playerSide == civilian && (call life_sosLevel) > 0'];
this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];