this enableSimulation false; this allowDamage false; 
this addAction[localize"STR_Shops_W_Gun",life_fnc_weaponShopMenu,"gun",0,false,false,"",' license_civ_gun && playerSide == civilian']; 
this addAction[localize "STR_Shops_C_Gun",life_fnc_clothingMenu,"gun_clothing",0,false,false,"",' license_civ_gun && playerSide == civilian']; 
this addAction["Licence",life_fnc_licenseShopOpen,["gun"],0,false,false,"",' playerSide == civilian '];


this addAction["Achat d'armes",life_fnc_weaponShopMenu,"alphonse",0,false,false,"",'playerSide == civilian && "polloPalace" in life_entreprises'];
this addAction["Achat de vétements",life_fnc_clothingMenu,"alphonse",0,false,false,"",'playerSide == civilian && "polloPalace" in life_entreprises'];

this addAction["Achat d'equipements",life_fnc_weaponShopMenu,"depan_basic",0,false,false,"",'playerSide == civilian && license_civ_dep'];
this addAction["Achat de vétements",life_fnc_clothingMenu,"depan",0,false,false,"",'playerSide == civilian && license_civ_dep'];
this addAction["Marché",life_fnc_virt_menu,"depan",0,false,false,"",'playerSide == civilian && license_civ_dep'];