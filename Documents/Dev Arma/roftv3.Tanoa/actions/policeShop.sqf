this enableSimulation false;   
this allowDamage false;   
this addAction[localize"STR_MAR_Cop_Item_Shop",life_fnc_virt_menu,"cop"];   
this addAction["Gendarme",life_fnc_clothingMenu,"cop"];   
this addAction["GAV",life_fnc_weaponShopMenu,"cop_gav"];   //rajout    
this addAction["Gardien de la paix",life_fnc_weaponShopMenu,"cop_gardPaix"]; //rajout
this addAction["Brigadier",life_fnc_weaponShopMenu,"cop_brigadier"];     
this addAction["Brigadier Chef",life_fnc_weaponShopMenu,"cop_brigadierChef"];     
this addAction["Maréchal des logis",life_fnc_weaponShopMenu,"cop_marechalDesLogis"];     
this addAction["Gendarme",life_fnc_weaponShopMenu,"cop_gendarmeSContrat"];    
this addAction["Chef Gendarme ",life_fnc_weaponShopMenu,"cop_gendarmeDeCarierre "]; 
this addAction["Maréchal des logis-chef",life_fnc_weaponShopMenu,"cop_marcheLogisChef "];
this addAction["Adjudant",life_fnc_weaponShopMenu,"cop_adjudant"];   
this addAction["Adjudant Chef  ",life_fnc_weaponShopMenu,"cop_adjudant_chef"]; 
this addAction["Major",life_fnc_weaponShopMenu,"cop_major"];      
this addAction["Sous Lieutenant",life_fnc_weaponShopMenu,"cop_slieutenant"]; 
this addAction["Lieutenant",life_fnc_weaponShopMenu,"cop_lieutenant"];   
this addAction["Lieutenant Colonel",life_fnc_weaponShopMenu,"cop_lieut_colon"];
this addAction["Capitaine",life_fnc_weaponShopMenu,"cop_capitaine"];     
this addAction["Commandant",life_fnc_weaponShopMenu,"cop_commandant"];   
this addAction["Colonel",life_fnc_weaponShopMenu,"cop_colonel"];
this addAction["Fédéraux",life_fnc_weaponShopMenu,"cop_fede"]; 
this addAction["Licence",life_fnc_licenseShopOpen,["cAir","cg"],0,false,false,"",' playerSide == west '];