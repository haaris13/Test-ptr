#include "..\..\script_macros.hpp"
/*
	File:fn_reloadBackpack.sqf

	Autor:IronBlade
*/
_type = [_this,0,false,[false]] call BIS_fnc_param;

_actualUniforms = [uniform player, vest player, backpack player];
_cfgClothing = (missionConfigFile >> "CfgClothing");

if (_type) then { // Mode Simple

	if !(_actualUniforms isEqualTo life_uniforms_weight) then {
		life_uniforms_weight = _actualUniforms;

		_weight = 10;

		{
			if (isclass (_cfgClothing >> _x)) then {
				_weight = _weight + getNumber(_cfgClothing >> _x >> "weight");
			};
		} forEach life_uniforms_weight;

		life_maxWeight = _weight;

		if (["storageV1"] call life_fnc_hasPerk) then {
			life_maxWeight = life_maxWeight + 5;
		};
		
		if (["storageV2"] call life_fnc_hasPerk) then {
			life_maxWeight = life_maxWeight + 5;
		};

		if (["sac"] call life_fnc_hasPerk) then {
		life_maxWeight = life_maxWeight + 5;
		};


		if (["glaceFolle"] call life_fnc_hasAtouts) then {
			life_maxWeight = life_maxWeight + 80;
		};

		if (life_mode_admin) then {
			life_maxWeight = life_maxWeight + 5000;
		};
	};

} else { // Hard
	
	life_uniforms_weight = _actualUniforms;

	_weight = 10;

	{
		if (isclass (_cfgClothing >> _x)) then {
			_weight = _weight + getNumber(_cfgClothing >> _x >> "weight");
		};
	} forEach life_uniforms_weight;

	life_maxWeight = _weight;

	if (["storageV1"] call life_fnc_hasPerk) then {
		life_maxWeight = life_maxWeight + 5;
	};
	
	if (["storageV2"] call life_fnc_hasPerk) then {
		life_maxWeight = life_maxWeight + 5;
	};

	if (["sac"] call life_fnc_hasPerk) then {
		life_maxWeight = life_maxWeight + 5;
	};


	if (["glaceFolle"] call life_fnc_hasAtouts) then {
		life_maxWeight = life_maxWeight + 80;
	};

	if (life_mode_admin) then {
		life_maxWeight = life_maxWeight + 5000;
	};
};