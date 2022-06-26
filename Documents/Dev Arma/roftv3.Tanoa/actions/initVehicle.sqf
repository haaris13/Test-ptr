/*
	Author: Julien `Tom_48_97` VIDA

	Description:
	This function aims to simplify the way to customize vehicles. It can change the textures and/or the animation sources of a given object. Usage of this function is explained in the below examples.

	Important note: Unless it explicitly mentionned (example case 10), the function will restore the initial state of every animation sources of the given object.

	Additional information:
	OPREP - https://dev.arma3.com/post/oprep-vehicle-customization
	Community Wiki - https://community.bistudio.com/wiki/Vehicle_Customization_%28VhC%29

	Parameter(s):
		0: vehicle to customize
		1: Variant (textures)
			BOOL - true to restore default texture source ; false to skip texture source change
			VOID - Nil to skip the texture source change
			ARRAY - Array of texture sources with their given probability: ["textureSource1", 0.5, "textureSource2", 0.5]
			STRING - Variant class name(from the configFile >> cfgVehicles or from the missionConfigfile >> cfgVehicleTemplate)
			SCALAR - index of the texture source (same as the old system)
		2: Animations
			BOOL - true to restore init phase of every animation sources
			VOID - Nil to skip change of the animation sources
			ARRAY - Array of animation sources and probability: ["AnimationSource1", 0.5, "animationSource2", 0.5]. Note, if the first element is false, it will skip the reset of the animation sources
			STRING - Variant class name(from the configFile >> cfgVehicles or from the missionConfigfile >> cfgVehicleTemplate)
		3: Mass
			BOOL - true to set the default mass, false to disable the mass change
			SCALAR - Mass to add or remove the vehicle

	Returns:
	BOOL - True if success, otherwise, false

	Examples:
	1) Do nothing because default VAR texture and VAR animation are "false"
	result = [this] call bis_fnc_initVehicle;

	2) Restore default texture and animation sources (reset)
	result = [this, true, true] call bis_fnc_initVehicle;

	3) Randomize everything according to the config file
	result = [this, "", []] call bis_fnc_initVehicle; //<-- Prefered
	result = [this, "", ""] call bis_fnc_initVehicle;

	4) Skip everything
	result = [this, nil, nil] call bis_fnc_initVehicle; //<-- Prefered
	result = [this, false, false] call bis_fnc_initVehicle;

	5) Apply the given texture and ignore the animations
	Priority is given to [missionConfigFile, "CfgVehicleTemplates"]
	result = [this, "TemplateName", nil] call bis_fnc_initVehicle;

	6) random weighted on the given texture sources and their probability, then randomize the animation sources according to the config file
	result = [this, ["MyTextureSource1", 0.5, "MyTextureSource2", 0.6], []] call bis_fnc_initVehicle;

	7) MyAnimationSource1 phase has a 50% chance to be set to 1 and MyAnimationSource2 has a 70% chance to be set to 1
	result = [this, nil, ["MyAnimationSource1", 0.5, "MyAnimationSource2", 0.7]] call bis_fnc_initVehicle;

	8) MyAnimationSource1 phase will be 1 whereas MyAnimationSource2 will be set to 0
	result = [this, nil, ["MyAnimationSource1", 1, "MyAnimationSource2", 0]] call bis_fnc_initVehicle;

	9) Change animation sources with a given template
	result = [this, nil, "MyTemplate"] call bis_fnc_initVehicle;

	10) Change animation source with a given array of probabilities but skip the reset of all animation sources
	// Algo: Skip the change of texture, [don't reste of the animation sources, proceed the given animation sources with their, probabilities], skip the change of mass
	result = [this, nil, [false,"MyAnimationSource1", 0.5, "MyAnimationSource2", 0.8], nil] call bis_fnc_initVehicle;

	11) Restore the vehicle to its default state as defined in the config (texture, animation sources, mass)
	result = [this, true, true, true] call bis_fnc_initVehicle;

	Todo:
		* Support for SPZ :)
		* Optimization (performance)
*/

private ["_vehicle","_variant","_animations", "_bChangeMass"];
_vehicle 	= param [0, objNull, [objNull]];
_variant 	= param [1, false, ["STRING", false, 0, []]];
_animations 	= param [2, false, [[], false, "STRING"]];
_bChangeMass 	= param [3, false, [false, 0]];

if !(local _vehicle) exitWith {false};

/*---------------------------------------------------------------------------
	Get parameters from the config & the vehicle & prepare the local variables
---------------------------------------------------------------------------*/
private ["_vehicleType", "_listToSkip", "_addMass","_isCampaign"];
_vehicleType = typeOf _vehicle;
_skipRandomization = ({(_vehicleType isEqualTo _x) || (_vehicleType isKindOf _x) || (format ["%1", _vehicle] isEqualTo _x)} count (getArray(missionConfigfile >> "disableRandomization")) > 0 || !(_vehicle getVariable ["BIS_enableRandomization", true]));

if (_bChangeMass isEqualType 0) then {
	_addMass = _bChangeMass;
	_bChangeMass = true;
} else {
	_addMass = 0;
};

if (getNumber(missionConfigfile >> "CfgVehicleTemplates" >> "disableMassChange") == 1) then {
	_bChangeMass = false;
};

_isCampaign = isClass(campaignConfigFile >> "CfgVehicleTemplates");

/*---------------------------------------------------------------------------
	Texture source selection & Set the selected texture
---------------------------------------------------------------------------*/
if !(_variant isEqualTo false) then {
	private ["_texturesToApply","_textureList","_textureSources","_textureSource","_probabilities","_materialsToApply"];
	_texturesToApply = [];
	_materialsToApply = [];
	_textureList = getArray(configFile >> "CfgVehicles" >> _vehicleType >> "TextureList");

	if (_variant isEqualType []) then {
		_textureList = _variant;
		_variant = "";
	};

	if (_variant isEqualType true) Then {
		if (count _textureList > 0) Then {
			_variant = _textureList select 0;
		} else {
			_variant = "";
		};
	};

	// 1 Support for the old method from Pettka
	if (_variant isEqualType 0) then {
		_variant = if ((_variant >= 0) && ((_variant * 2) <= (count _textureList) -2)) then {_textureList select (_variant * 2)} else {""};
	};

	// 2 Try from the config file (parents only)
	if (_vehicleType in ([(configFile >> "CfgVehicles" >> _variant), true] call BIS_fnc_returnParents)) then {
		private ["_cfgRoot"];
		_textureList = getArray(configFile >> "CfgVehicles" >> _variant >> "TextureList");
		_textureSources = [];
		_probabilities = [];
		for "_i" from 0 to (count _textureList -1) step 2 do {
			_textureSources append [_textureList select _i];
			_probabilities append [_textureList select (_i +1)];
		};
		_cfgRoot = (configFile >> "CfgVehicles" >> _variant >> "textureSources" >> ([_textureSources, _probabilities] call bis_fnc_selectRandomWeighted));
		_texturesToApply = getArray(_cfgRoot >> "textures");
		_materialsToApply = getArray(_cfgRoot >> "materials");
	};

	// 3 Try from the textureSources of the current vehicle
	if (count _texturesToApply == 0 && {isClass (configfile >> "CfgVehicles" >> _vehicleType >> "textureSources" >> _variant)}) then {
		_texturesToApply = getArray(configfile >> "CfgVehicles" >> _vehicleType >> "textureSources" >> _variant >> "textures");
		_materialsToApply = getArray(configfile >> "CfgVehicles" >> _vehicleType >> "textureSources" >> _variant >> "materials");
	};

	// 4 Valid class from the campaign config file
	if (_isCampaign && {isClass (campaignConfigFile >> "CfgVehicleTemplates" >> _variant)}) then {
		if (count (getArray(campaignConfigFile >> "CfgVehicleTemplates" >> _variant >> "textures")) >= 1) then {
			_texturesToApply = getArray(campaignConfigFile >> "CfgVehicleTemplates" >> _variant >> "textures");
			_materialsToApply = getArray(campaignConfigFile >> "CfgVehicleTemplates" >> _variant >> "materials");
		} else {
			_texturesToApply = [];
			_materialsToApply = [];
			_textureList = getArray(campaignConfigFile >> "CfgVehicleTemplates" >> _variant >> "textureList")
		};
	};

	// 5 If _variant is a valid class from the mission config file, override textureList and empty texturesToApply
	if (isClass (missionConfigFile >> "CfgVehicleTemplates" >> _variant)) then {
		if (count (getArray(missionConfigFile >> "CfgVehicleTemplates" >> _variant >> "textures")) >= 1) then {
			_texturesToApply = getArray(missionConfigFile >> "CfgVehicleTemplates" >> _variant >> "textures");
			_materialsToApply = getArray(missionConfigFile >> "CfgVehicleTemplates" >> _variant >> "materials");
		} else {
			_texturesToApply = [];
			_materialsToApply = [];
			_textureList = getArray(missionConfigFile >> "CfgVehicleTemplates" >> _variant >> "textureList")
		};
	};

	// 4 Else, randomize using the texture list (from the config of the current vehicle)
	if (!(_skipRandomization) && {count _texturesToApply == 0 && {count _textureList >= 2}}) then {
		private ["_cfgRoot"];
		_textureSources = [];
		_probabilities = [];
		for "_i" from 0 to (count _textureList -1) step 2 do {
			_textureSources append [_textureList select _i];
			_probabilities append [_textureList select (_i +1)];
		};
		_cfgRoot = configFile >> "CfgVehicles" >> _vehicleType >> "textureSources" >> ([_textureSources, _probabilities] call bis_fnc_selectRandomWeighted);
		_texturesToApply = getArray(_cfgRoot >> "textures");
		_materialsToApply = getArray(_cfgRoot >> "materials");
	};

	// change the textures
	{_vehicle setObjectTextureGlobal [_forEachindex, _x];} forEach _texturesToApply;

	// change the materials when it is appropriate
	{if (_x != "") then {_vehicle setObjectMaterialGlobal [_forEachindex, _x];};} forEach _materialsToApply;
};

/*---------------------------------------------------------------------------
	Animation sources
---------------------------------------------------------------------------*/
if !(_animations isEqualTo false) then {
	private ["_animationList","_resetAnimationSources"];
	_animationList = getArray(configFile >> "CfgVehicles" >> _vehicleType >> "animationList");

	// Find if whether or not the reset of the animation sources should be reset
	_resetAnimationSources = if (_animations isEqualType [] && {count _animations > 0 && {(_animations select 0) isEqualType true}}) then
	{
		[_animations] call bis_fnc_arrayShift
	} else {
		true
	};

	if (_resetAnimationSources) then {


		// reset animations
		{
			if (_x isEqualType "") then {
				_vehicle animate [_x, getNumber(configFile >> "CfgVehicles" >> _vehicleType >> "animationSources" >> _x >> "initPhase"), true];
			};
		} forEach _animationList;
	};

	// Exit if _animations is true (nothing else to do)
	if (_animations isEqualTo true) exitWith {};

	if (!(_skipRandomization) && {(_animations isEqualType "" || _variant isEqualType "")}) then {
		// 6 - Variant parameter - If the variant is a string and animation is either, an empty string or array
		if ((_variant isEqualType "") && {isClass (configFile >> "CfgVehicles" >> _variant) && {_animations isEqualTo "" || _animations isEqualTo []}}) then {
			_animationList = getArray(configFile >> "CfgVehicles" >> _variant >> "animationList");
		};

		// 5 - Variant parameter - Campaign
		if (_isCampaign && {(_variant isEqualType "") && {(_animations isEqualTo "" || _animations isEqualTo []) && {isClass (campaignConfigFile >> "CfgVehicleTemplates" >> _variant)}}}) then
		{
			_animationList = getArray(campaignConfigFile >> "CfgVehicleTemplates" >> _variant >> "animationList");
		};

		// 4 - Variant parameter - Try from the mission config (_variant)
		if ((_variant isEqualType "") && {isClass (missionConfigFile >> "CfgVehicleTemplates" >> _variant) && {_animations isEqualTo "" || _animations isEqualTo []}}) then {
			_animationList = getArray(missionConfigFile >> "CfgVehicleTemplates" >> _variant >> "animationList");
		};

		// 3 - animation parameter - Try from the config (_animations)
		if (_animations isEqualType "" && {isArray (configFile >> "CfgVehicles" >> _animations >> "animationList")}) then {
			_animationList = getArray(configFile >> "CfgVehicles" >> _animations >> "animationList");
		};

		// 2 - animation parameter - Campaign
		if (_isCampaign && {_animations isEqualType "" && {isArray (campaignConfigFile >> "CfgVehicleTemplates" >> _animations >> "animationList")}}) then {
			_animationList = getArray(campaignConfigFile >> "CfgVehicleTemplates" >> _animations >> "animationList");
		};

		// 1 - animation parameter - Try from the mission config (template class name)
		if (_animations isEqualType "" && {isArray (missionConfigFile >> "CfgVehicleTemplates" >> _animations >> "animationList")}) then {
			_animationList = getArray(missionConfigFile >> "CfgVehicleTemplates" >> _animations >> "animationList");
		};
	};

	// 4 If (_animations is an array) then, use it
	if (_animations isEqualType [] && {count _animations > 1 && {count _animations mod 2 == 0 && {(_animations select 1) isEqualType 0}}}) then {
		_animationList = _animations;
	};

	// Change animation sources
	_vehicle setvariable ["bis_fnc_initVehicle_animations",_animationList];
	if (count _animationList > 1) then {
		private ["_CfgPath"];
		_CfgPath = (configfile >> "CfgVehicles" >> _vehicleType >> "AnimationSources");

		for "_i" from 0 to (count _animationList -1) step 2 do {
			private ["_source", "_lockCargoAnimationPhase", "_lockCargo", "_chance", "_rand", "_bLockCargo", "_bLockTurret", "_forceAnimatePhase", "_forceAnimate", "_phase", "_lockTurretAnimationPhase", "_lockTurret"];
			_source = _animationList select _i;
			_lockCargoAnimationPhase = getNumber(_CfgPath >> _source >> "lockCargoAnimationPhase");
			_lockCargo = getArray(_CfgPath >> _source >> "lockCargo");
			_forceAnimatePhase = getNumber(_CfgPath >> _source >> "forceAnimatePhase");
			_forceAnimate = getArray(_CfgPath >> _source >> "forceAnimate");
			_chance = _animationList select (_i+1);

			_phase = if ((random 1) <= _chance) then {1} else {0};

			_vehicle animate [_source, _phase, true];

			if (_forceAnimatePhase == _phase) then {
				for "_i" from 0 to (count _forceAnimate -1) step 2 do {

					_vehicle animate [(_forceAnimate select _i), (_forceAnimate select (_i +1)), true];
				};
			};

			_blockCargo = (_lockCargoAnimationPhase == _phase);
			{_vehicle lockCargo [_x, _blockCargo];} forEach _lockCargo;

			[_vehicle, _phase] call compile (getText(configfile >> "CfgVehicles" >> _vehicleType >> "AnimationSources" >> _source >> "onPhaseChanged"));
		};
	};
};


/*---------------------------------------------------------------------------
	Mass change
---------------------------------------------------------------------------*/
if (_bChangeMass) then {
	_bChangeMass = [_vehicle, _bChangeMass, _addMass] call bis_fnc_setVehicleMass;
};

/*---------------------------------------------------------------------------
	End of function
---------------------------------------------------------------------------*/

true