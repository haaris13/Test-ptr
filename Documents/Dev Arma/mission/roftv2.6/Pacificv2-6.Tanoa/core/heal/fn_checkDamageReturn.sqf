#include "..\..\script_macros.hpp"
/*
	File:fn_checkDamageReturn.sqf	

	Autor:IronBlade
*/
_life_parts = [_this,0,[],[[]]] call BIS_fnc_param;
_revive = [_this,1,objNull,[objNull]] call BIS_fnc_param;

if (isNull _revive) exitWith {};

_time = _life_parts select 0;
_parts = _life_parts select 1;

_canRevive = 100;
_effects = "";

_partTr = [];

{
	_p = _x select 0;
	_projectile = _x select 1;
	_damage = _x select 2;

	_found = false;

	{
		_index = _forEachIndex;
		if (_p == (_x select 0)) exitWith {
			_found = true;

			_arr = (_partTr select _index) select 1;

			_arr pushBack [_projectile, _damage_damage];

			_partTr set [_index, [_p,_arr]];
		};
	} forEach _partTr;

	if (!_found) then {_partTr pushBack [_p, [[_projectile, _damage]]]};

} forEach _parts;


if (count _partTr > 0) then {
	{
		_part = _x select 0;
		_array = _x select 1;

		_can1 = getNumber(missionConfigFile >> "DamagesEffects" >> "Parts" >> _part >> "canRevive");

		_isMun = 0;
		_bigDam = 0;

		_important = 1;

		{
			_proj = _x select 0;
			_dam = _x select 1;

			_calibre = [_proj] call life_fnc_getCalibresByAmmo;

			_isMun = getNumber(missionConfigFile >> "DamagesEffects" >> "Calibres" >> _calibre >> "isMun");

			_can2 = getNumber(missionConfigFile >> "DamagesEffects" >> "Calibres" >> _calibre >> "canRevive");

			_important1 = getNumber(missionConfigFile >> "DamagesEffects" >> "Calibres" >> _calibre >> "important");

			if (_important1 isEqualTo 0) then {_important = 0;};

			if (_can2 < _canRevive && (_isMun isEqualTo 1 || _dam > 0.5)) then {_canRevive = _can2;};

			if (_bigDam < _dam) then {_bigDam = _dam;};

			_bigDam

		} forEach _array;

		if (_can1 < _canRevive && (_isMun isEqualTo 1 || _bigDam > 0.5) && _important isEqualTo 0) then {_canRevive = _can1;};

		if (!(_part in ["spine2","spine3"])) then {

			_text = format["<t color='#FFD700' size='1.1'><br/>%1:</t><br/>", getText(missionConfigFile >> "DamagesEffects" >> "Parts" >> _part >> "displayName")];

			_effects = format ["%1 %2", _effects, _text];

			_text = "";

			if (_isMun isEqualTo 1) then {
				_text = "Multiples impacts de balles.<br/>";
			};

			if (_text == "") then {_text = "Multiples fractures.<br/>";};

			_effects = format ["%1%2", _effects, _text];
		};

	} forEach _partTr;
} else {	
	_effects = "Quelques fractures légères.";
};

if (_canRevive > 0) then {
	_canRevive = _canRevive + (random [-5, 0, 5]);
};

if (_canRevive < 0) then {
	_canRevive = 0;
};

_percentT = switch (true) do {
	case (_canRevive  <= 2) : {"<t color='#FF0000'>Aucun Pouls.</t>"};
	case (_canRevive  <= 20) : {"<t color='#FF3300'>Pouls Très faible.</t>"};
	case (_canRevive  <= 50) : {"<t color='#FF5A00'>Pouls faible.</t>"};
	case (_canRevive  < 80) : {"<t color='#FFC100'>Pouls moyen.</t>"};
	case (_canRevive  <= 90) : {"<t color='#FFC100'>Pouls important.</t>"};
	case (_canRevive  <= 100) : {"<t color='#17AE19'>Pouls très important.</t>"};
	default {"<t color='#17AE19'>Pouls important.</t>"; _canRevive = 100;};
};

life_medic_canRevive = _canRevive;

hint parseText format["<t color='#FF0000' size='1.5'>%1</t><br/><br/>%2<br/><br/>%3<br/>",name _revive, _effects,_percentT];