/**
	File: fn_onuFrontActionAlert.sqf
	
	Autor: Iron
*/

_cfgOnu = getArray(missionConfigFile >> "CfgOnu" >> "Gates" >> "allGates");

{
	_doorVar = _x;
	_door = (missionNamespace getVariable format["%1", _doorVar]);

	_cfgOnuGateCur = (missionConfigFile >> "CfgOnu" >> "Gates" >> (typeof _door));
	_anim = getText(_cfgOnuGateCur >> "anim");
	_etatOpen = getNumber(_cfgOnuGateCur >> "etatOpen");
	_etatFerme = getNumber(_cfgOnuGateCur >> "etatFerme");

	_door animate [_anim, _etatFerme];

} forEach _cfgOnu;