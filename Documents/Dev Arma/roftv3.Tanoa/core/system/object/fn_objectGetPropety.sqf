/**
	File: fn_objectGetPropety.sqf
	
	Autor: Iron

	[life_object_test,["var1","var2"]] call life_fnc_objectSetPropety;
*/
_var = [_this,0,[],[[]]] call BIS_fnc_param;
_keys = [_this,1,[],[[]]] call BIS_fnc_param;

_return = [];

{
	_curKey = (_x select 0);
	
	if (_curKey isEqualTo (_keys select 0)) exitWith {
		_return = _x;
	};
} forEach (_var select 1);

if ((count _keys) == 1) exitWith {
	_return;
};

_keys deleteAt 0;

_returnValue = ([_return, _keys] call life_fnc_objectGetPropety);

_returnValue;