this allowDamage false;  removeallWeapons this;  this enableSimulation false; 
this addAction[localize"STR_MAR_Diving_Shop",life_fnc_clothingMenu,"dive"]; 
this addAction["Licence",life_fnc_licenseShopOpen,["dive"],0,false,false,"",' playerSide == civilian '];