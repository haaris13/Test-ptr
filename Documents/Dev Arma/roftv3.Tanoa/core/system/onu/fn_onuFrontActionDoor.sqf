/**
	File: fn_onuFrontActionDoor.sqf
	
	Autor: Iron
*/

disableSerialization;

_type = [_this, 0, "", [""]] call BIS_fnc_param;

_dialog = (findDisplay 35400);
_combo = (_dialog displayCtrl 35403);
_list = (_dialog displayCtrl 35404);
_textDoor = (_dialog displayCtrl 35405);

_actionDoor = (_dialog displayCtrl 35406);

if (lbCurSel _list  == -1) exitWith {};
_index = (lbCurSel _list);
_data = (_list lbData _index);
_dataCombo = (_combo lbData (lbCurSel _combo));

_door = (missionNamespace getVariable format["%1", _data]);

_cfgOnuGateCur = (missionConfigFile >> "CfgOnu" >> "Gates" >> (typeof _door));
_anim = getText(_cfgOnuGateCur >> "anim");
_etatOpen = getNumber(_cfgOnuGateCur >> "etatOpen");
_etatFerme = getNumber(_cfgOnuGateCur >> "etatFerme");

_cfgOnuGate = (missionConfigFile >> "CfgOnu" >> "Gates");
_cfgOnuDialog = (missionConfigFile >> "CfgOnu" >> "Dialog" >> "Category");

_cfgCurCateg = (_cfgOnuDialog >> _dataCombo >> "Doors");

switch (_type) do {

	case "base": {
		_etat = [_door] call life_fnc_onuDoorGetState;

		switch (_etat) do {
			case "open": {
				_door animate [_anim, _etatFerme];
			};

			case "close": {
				_door animate [_anim, _etatOpen];
			};
		};
	};

	case "open": {

		{
			_var = configName(_x);
			_curDoor = (missionNamespace getVariable format["%1", _var]);

			_cfgOnuGateCurS = (missionConfigFile >> "CfgOnu" >> "Gates" >> (typeof _curDoor));
			_anim = getText(_cfgOnuGateCurS >> "anim");
			_etatOpen = getNumber(_cfgOnuGateCurS >> "etatOpen");
			_etatFerme = getNumber(_cfgOnuGateCurS >> "etatFerme");

			_curDoor animate [_anim, _etatOpen];

		} forEach ("true" configClasses (_cfgCurCateg));
	};

	case "close": {

		{
			_var = configName(_x);
			_curDoor = (missionNamespace getVariable format["%1", _var]);

			_cfgOnuGateCurS = (missionConfigFile >> "CfgOnu" >> "Gates" >> (typeof _curDoor));
			_anim = getText(_cfgOnuGateCurS >> "anim");
			_etatOpen = getNumber(_cfgOnuGateCurS >> "etatOpen");
			_etatFerme = getNumber(_cfgOnuGateCurS >> "etatFerme");

			_curDoor animate [_anim, _etatFerme];
		} forEach ("true" configClasses (_cfgCurCateg));
	};
};

[] call life_fnc_onuFrontMenuChange;