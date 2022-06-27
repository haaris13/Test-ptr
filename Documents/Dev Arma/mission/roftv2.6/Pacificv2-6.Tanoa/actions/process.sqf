
// Serpent : 
this enableSimulation false;  this allowDamage false;
this addAction[localize"STR_Process_Serp",life_fnc_processAction,"peauSerpent",0,false,false,"",'!life_is_processing'];


// "Sciage du bois "
this addAction["Sciage du bois (Charpente)",life_fnc_processAction,"tropicalCharpente",0,false,false,"",'!life_is_processing'];
this addAction["Sciage du bois (Charpente)",life_fnc_processAction,"parcCharpente",0,false,false,"",'!life_is_processing'];
this addAction[format["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "forestiere" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "forestiere" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"forestiere",0,false,false,"",' !license_civ_forestiere && playerSide == civilian '];

this addAction["Sciage du bois (Tonnerie)",life_fnc_processAction,"tropicalTonnerie",0,false,false,"",'!life_is_processing'];
this addAction["Sciage du bois (Tonnerie)",life_fnc_processAction,"parcTonnerie",0,false,false,"",'!life_is_processing'];
this addAction[format["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "forestiere" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "forestiere" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"forestiere",0,false,false,"",' !license_civ_forestiere && playerSide == civilian '];


[this,"",[],"Scierie"] spawn life_fnc_setupNPC;
this addAction["Sciage du bois (Tonnerie)",life_fnc_processingOpenDiag,["copper","tin"],0,false,false,"""",'playerSide == civilian'];
this addAction["Licence",life_fnc_licenseShopOpen,["copper"],0,false,false,"""",' playerSide == civilian '];

this addAction["Fabrication",life_fnc_transformOpenDiag,[["compo1"],"geek"],0,false,false,"""",'playerSide == civilian'];