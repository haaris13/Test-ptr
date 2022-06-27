/**
	File: fn_onuFrontMenuComboChange.sqf
	
	Autor: Iron
*/

disableSerialization;


_dialog = (findDisplay 35400);
_combo = (_dialog displayCtrl 35403);
_list = (_dialog displayCtrl 35404);
_textDoor = (_dialog displayCtrl 35405);

if (lbCurSel _combo  == -1) exitWith {};
_index = (lbCurSel _combo);
_data = (_combo lbData _index);

_cfgOnuGate = (missionConfigFile >> "CfgOnu" >> "Gates");
_cfgOnuDialog = (missionConfigFile >> "CfgOnu" >> "Dialog" >> "Category");

_cfgCurCateg = (_cfgOnuDialog >> _data >> "Doors");

lbClear _list;

{
	_curClass = _x;
	_index = (_list lbAdd getText(_curClass >> "displayName"));
	_list lbSetData [_index, configName(_curClass)];
} forEach ("true" configClasses (_cfgCurCateg));