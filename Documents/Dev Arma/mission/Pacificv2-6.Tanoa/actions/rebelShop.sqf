removeallWeapons this;  this enableSimulation false;  this allowDamage false;  this addAction[localize"STR_MAR_Rebel_Market",life_fnc_virt_menu,"rebel"];
  this addAction[localize "STR_MAR_Rebel_Clothing_Shop",life_fnc_clothingMenu,"reb",0,false,false,"",' license_civ_rebel && playerSide == civilian']; 
   this addAction[localize "STR_MAR_Rebel_Weapon_Shop",life_fnc_weaponShopMenu,"rebel",0,false,false,"",' license_civ_rebel && playerSide == civilian'];
    this addAction["<t color='#ADFF2F'>ATM</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];
this addAction["Licences",life_fnc_licenseShopOpen,["rebel"],0,false,false,"",' playerSide == civilian '];

removeallWeapons this;  this enableSimulation false;  this allowDamage false;  
this addAction[localize"STR_Shops_Mafia",life_fnc_virt_menu,"mafia"];
this addAction["Equipements",life_fnc_clothingMenu,"mafia_clothing",0,false,false,"",' license_civ_mafia && playerSide == civilian']; 
this addAction["Armes",life_fnc_weaponShopMenu,"mafia",0,false,false,"",' license_civ_mafia && playerSide == civilian'];
this addAction["<t color='#ADFF2F'>ATM</t>",life_fnc_atmMenu,"",0,FALSE,FALSE,"",' vehicle player == player && player distance _target < 4 '];
this addAction["Licences",life_fnc_licenseShopOpen,["mafia"],0,false,false,"",' playerSide == civilian '];