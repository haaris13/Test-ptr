
life_test_1 = 1;

[] spawn {

	if (life_test_1 > 1) exitWith {};
	life_test_1 = life_test_1 + 1;

	_itemsconfig = "true" configClasses (missionconfigFile >> "VirtualItems");  
  
	querys = [];  
	  
	{
	    _varname = configName _x;  
	  
	    _displayname = localize getText(_x >> "displayName"); 
	  
	    _query = format["INSERT INTO `altislife`.`virtualitems` (variable, displayName) VALUES ('%1', '%2');", _varname, _displayname]; 
	    diag_log str _query; 
	    querys pushBack [_query]; 
	  
	} forEach _itemsconfig;
};