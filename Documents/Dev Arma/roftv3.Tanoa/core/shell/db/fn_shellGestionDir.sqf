/*
	File: fn_shellGestionDir.sqf

	Autor: IronBlade
*/
_action = [_this,0,"",[""]] call BIS_fnc_param;
_id = [_this,1,0,[0]] call BIS_fnc_param;
_name = [_this,2,"",[""]] call BIS_fnc_param;
_new = [_this,3,"",[""]] call BIS_fnc_param;
_idComp = [_this,4,0,[0]] call BIS_fnc_param;

switch (_action) do { 
	case "create" : {
		if (_name == "") exitWith {};
		[_action, _id, _name, "", _idComp, player] remoteExecCall ["TON_fnc_shellGestionDir",2];
	};

	case "rename" : {
		if (_id == 0 || _new == "") exitWith {};
		[_action, _id, _name, _new, _idComp, player] remoteExecCall ["TON_fnc_shellGestionDir",2];
	};

	case "delete" : {
		if (_id == 0) exitWith {};
		[_action, _id, _name, "", _idComp, player] remoteExecCall ["TON_fnc_shellGestionDir",2];
	};
};