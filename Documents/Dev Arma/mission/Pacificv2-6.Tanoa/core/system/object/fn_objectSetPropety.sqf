/**
	File: fn_objectSetPropety.sqf
	
	Autor: Iron

	[life_object_test,["var1","var2"], 10] call life_fnc_objectSetPropety;
*/
_var = [_this,0,[],[[]]] call BIS_fnc_param;
_keys = [_this,1,[],[[]]] call BIS_fnc_param;
_value = _this select 2;

private ["_return"];

_return = [];

{
	_curKey = (_x select 0);
	
	if (_curKey isEqualTo (_keys select 0)) exitWith {
		_return = _x;
	};
} forEach (_var select 1);

if (_return isEqualTo []) then {
	_return = [_keys select 0, []];
	(_var select 1) pushBack _return;
};

if ((count _keys) == 1) exitWith {
	_return set [1, _value];
};

_keys deleteAt 0;

[_return, _keys, _value] call life_fnc_objectSetPropety;