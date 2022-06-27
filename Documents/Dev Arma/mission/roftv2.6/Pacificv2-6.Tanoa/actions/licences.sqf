  this addAction[format["%1 ($%2)",localize (getText(missionConfigFile >> "Licenses" >> "arche" >> "displayName")), [(getNumber(missionConfigFile >> "Licenses" >> "arche" >> "price"))] call life_fnc_numberText],life_fnc_buyLicense,"arche",0,false,false,"",' !license_civ_arche && playerSide == civilian '];


  {
    missionNamespace setVariable [format["license_civ_%1", getText(_x >> "variable")],true];
  } forEach ("true" configClasses (missionConfigFile >> "Licenses"));