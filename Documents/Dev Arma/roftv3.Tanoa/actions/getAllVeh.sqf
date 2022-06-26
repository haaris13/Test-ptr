_itemsconfig = "true" configClasses (missionconfigFile >> "LifeCfgVehicles");  
  
querys = [];  
  
{   
    _varname = configName _x;  
  
    _displayname = getText(configfile >> "CfgVehicles" >> _varname >> "displayName"); 
  
    _query = format["INSERT INTO `altislife`.`vehicleslist` (className, poid, picture, prix, side, type, name) VALUES ('%1', 0, '', 0, 'civ', 'All', '%2');", _varname, _displayname]; 
    diag_log str _query; 
    querys pushBack [_query]; 
  
} forEach _itemsconfig;