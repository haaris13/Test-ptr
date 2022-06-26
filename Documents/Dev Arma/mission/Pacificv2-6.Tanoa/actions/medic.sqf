this enableSimulation false; this allowDamage false; this addAction["Concessionnaire SAMU",life_fnc_vehicleShopMenu,["med_car",civilian,"med_car_1","civ","Samu"]]; this addAction["Garage SAMU",  {   [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "med_car_1"; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == civilian']; this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];

this enableSimulation false; this allowDamage false; this addAction["Concessionnaire SAMU Aérien",life_fnc_vehicleShopMenu,["med_air",civilian,"med_air_1","civ","Samu"]];
this addAction["Garage SAMU",  {   [getPlayerUID player,playerSide,"Air",player] remoteExecCall ["TON_fnc_getVehicles",2];   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = "med_air_1"; life_garage_type = "Air";  },"",0,false,false,"",'playerSide == civilian']; this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];


this enableSimulation false; 
this allowDamage false; 
this addAction["Distributeur",life_fnc_virt_menu,"medic"]; 
this addAction["Uniformes",life_fnc_clothingMenu,"medic"];   
this addAction["Equipement",life_fnc_weaponShopMenu,"medic"];