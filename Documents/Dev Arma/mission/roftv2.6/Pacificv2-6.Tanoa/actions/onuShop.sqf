this enableSimulation false;    
this allowDamage false;    
this addAction["Equipements",life_fnc_virt_menu,"onu"];    
this addAction["Uniformes",life_fnc_clothingMenu,"onu"];      
this addAction["Armes",life_fnc_weaponShopMenu,"onu"];


this enableSimulation false;  this allowDamage false; 
this addAction["Fournisseur de véhicules", life_fnc_vehicleShopMenu,["onu_car",civilian,"onu_car_1","civ","Fournisseur de véhicules"]]; 
this addAction[localize"STR_Garage_Title",  {   [getPlayerUID player,playerSide,"Car",player] remoteExecCall ["TON_fnc_getVehicles",2];   createDialog "Life_impound_menu";   disableSerialization;   ctrlSetText[2802,"Fetching Vehicles...."];   life_garage_sp = ["onu_car_1"]; life_garage_type = "Car";  },"",0,false,false,"",'playerSide == civilian'];  
this addAction[localize"STR_MAR_Store_vehicle_in_Garage",life_fnc_storeVehicle,"",0,false,false,"",'!life_garage_store'];