/*
	File:fn_shellReturnDir.sqf

	Autor:IronBlade
*/
_action = [_this,0,"",[""]] call BIS_fnc_param;
_id = [_this,1,0,[0]] call BIS_fnc_param;
_name = [_this,2,"",[""]] call BIS_fnc_param;

_path = [] call life_fnc_shellGetPath;

switch (_action) do { 
	case "create" : {
		if (count _path == 2) then {
			{
				if (_name isEqualTo (_x select 1)) exitWith {
					((_path select 0) select _forEachIndex) set [0, _id];
				};
			} forEach (_path select 0);
		} else {
			_dirs = ((_path select 2) select 0);
			{
				if (_name isEqualTo (_x select 1)) exitWith {
					(_dirs select _forEachIndex) set [0, _id];
				};
			} forEach _dirs;
		};
	};
	
	default {}; 
};

