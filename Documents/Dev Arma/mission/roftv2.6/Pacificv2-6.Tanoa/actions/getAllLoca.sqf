


{
	_config = (configName _x);
		
	{

		textconfig = "";

		textconfig = format["%1 class %2 { ", textconfig, configName _x];

		_displayname = getText(_x >> "displayName");
		_pronom = getText(_x >> "displayPronom");

		textconfig = format["%1displayname = '%2'; ", textconfig, _displayname];
		textconfig = format["%1description = '%2'; xp = 100; }; __BR", textconfig, format["___XA %1 %2", _pronom, _displayname]];

		diag_log textconfig;

	} forEach ("true" configClasses (missionConfigFile >> "CfgLocations" >> _config));

} forEach ("true" configClasses (missionConfigFile >> "CfgLocations"));


/*

*/

need = [];

{
	_config = (configName _x);
		
	{

		need pushBack (configName _x);

	} forEach ("true" configClasses (missionConfigFile >> "CfgLocations" >> _config));

} forEach ("true" configClasses (missionConfigFile >> "CfgLocations"));