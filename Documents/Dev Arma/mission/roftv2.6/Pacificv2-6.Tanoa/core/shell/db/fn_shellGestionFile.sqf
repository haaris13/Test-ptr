/*
	File: fn_shellGestionFile.sqf

	Autor: IronBlade
*/
_action = [_this,0,"",[""]] call BIS_fnc_param;
_id = [_this,1,0,[0]] call BIS_fnc_param;
_nameRef = [_this,2,"",[""]] call BIS_fnc_param;
_idParent = [_this,3,-1,[0]] call BIS_fnc_param;

switch (_action) do { 
	case "move" : {
		if (_name == "" || _id == 0 || _idParent == -1) exitWith {};
		
	};
};