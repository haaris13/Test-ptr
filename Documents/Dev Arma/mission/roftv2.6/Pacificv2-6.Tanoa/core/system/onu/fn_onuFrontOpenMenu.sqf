/**
	File: fn_onuFrontOpenMenu.sqf
	
	Autor: Iron
*/

disableSerialization;

createDialog "Dialog_Onu";

_dialog = (findDisplay 35400);
_combo = (_dialog displayCtrl 35403);
_list = (_dialog displayCtrl 35404);
_textDoor = (_dialog displayCtrl 35405);

_actionDoor = (_dialog displayCtrl 35406);
_actionDoor ctrlEnable false;

_cfgOnuGate = (missionConfigFile >> "CfgOnu" >> "Gates");
_cfgOnuDialog = (missionConfigFile >> "CfgOnu" >> "Dialog" >> "Category");

lbClear _combo;

{
	_curClass = _x;
	_index = (_combo lbAdd getText(_curClass >> "displayName"));
	_combo lbSetData [_index, configName(_curClass)];
} forEach ("true" configClasses (_cfgOnuDialog));

_combo lbSetCurSel 0;