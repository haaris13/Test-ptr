_itemsconfig = "true" configClasses (missionconfigFile >> "LifeCfgVehicles");  
  
querys = [];  
  
{   
    _varname = configName _x;  
  
    _displayname = getText(configfile >> "CfgVehicles" >> _varname >> "displayName");
    _vItemSpace = getNumber(_x >> "vItemSpace");
  
    _query = format["INSERT INTO `vehicleslist` (className, poid, picture, prix, side, type, name) VALUES ('%1', %2, '', 0, 'civ', 'All', '%3');", _varname, _vItemSpace, _displayname]; 
    diag_log str _query; 
    querys pushBack [_query]; 
  
} forEach _itemsconfig;