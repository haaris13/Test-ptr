
[heli, [3394.11,2418.02,0.00143909], "M_Scalpel_AT", 20] spawn guidedMissile;

guidedMissile = {
    _target = _this select 0;
	_startPos = _this select 1;
	_missileType = _this select 2;
	_missileHeight = _this select 3;

	_perSecondsChecks = 100;

	_missileSpeed = 6174;

	_pos = [0,0,0];

	if (isNull _target) exitWith {hintSilent "No Target Found!"};

	_pos = [_startPos select 0, _startPos select 1, _missileHeight];

	_missile = _missileType createVehicle _pos;

	while {alive _missile} do {
		if (_missile distance _target > (_missileSpeed / 10)) then {
			_dirHor = [_missile, _target] call BIS_fnc_DirTo;
			_missile setDir _dirHor;

			_dirVer = asin ((((getPosASL _missile) select 2) - ((getPosASL _target) select 2)) / (_target distance _missile));
			_dirVer = (_dirVer * -1);
			[_missile, _dirVer, 0] call BIS_fnc_setPitchBank;

			_flyingTime = (_target distance _missile) / _missileSpeed;
			_velocityX = (((getPosASL _target) select 0) - ((getPosASL _missile) select 0)) / _flyingTime;
			_velocityY = (((getPosASL _target) select 1) - ((getPosASL _missile) select 1)) / _flyingTime;
			_velocityZ = (((getPosASL _target) select 2) - ((getPosASL _missile) select 2)) / _flyingTime;
			_missile setVelocity [_velocityX, _velocityY, _velocityZ];


			sleep (1/ _perSecondsChecks);
		};
	};
};

[heli, [3394.11,2418.02,0.00143909],"M_Scalpel_AT",200, getPos heli] spawn guidedMissile;

guidedMissile = {
	_primaryTarget = _this select 0; 
	_missileStart = _this select 1; 
	_missileType = _this select 2;
	_missileSpeed = _this select 3; 
	_defaultTargetPos = _this select 4; 

	if (isNull _primarytarget) exitWith {hintSilent "No Target Found!"};

	_perSecondChecks = 25;
	_getPrimaryTarget = {if (typeName _primaryTarget == typename {}) then {call _primaryTarget} else {_primaryTarget}};
	_target = call _getPrimaryTarget;

	_missile = _missileType createVehicle _missileStart;
	_missile setPos _missileStart;

	
	_secondaryTarget = "HeliHEmpty" createVehicle _defaultTargetPos;
	_secondaryTarget setPos _defaultTargetPos;

	_guidedRandomly = FALSE;

	
	_homeMissile = {

		private ["_velocityX", "_velocityY", "_velocityZ", "_target"];
		_target = _secondaryTarget;
		if (!(_guidedRandomly) && _missile distance _target > _missileSpeed * 1.5) then {
		_guidedRandomly = TRUE;
		_target = _secondaryTarget;
		_dispersion = (_missile distance _defaultTargetPos) / 20;
		_dispersionMin = _dispersion / 10;
		_target setPos [(_defaultTargetPos select 0) + _dispersionMin - (_dispersion / 2) + random _dispersion, (_defaultTargetPos select 1) + _dispersionMin - (_dispersion / 2) + random _dispersion, 0];
		};
		if (!(isNull (call _getPrimaryTarget))) then {_target = call _getPrimaryTarget; _defaultTargetPos = position _target; _guidedRandomly = FALSE};

		
		if (_missile distance _target > (_missileSpeed / 20)) then {
			_travelTime = (_target distance _missile) / _missileSpeed;
			_steps = floor (_travelTime * _perSecondChecks);

			_relDirHor = [_missile, _target] call BIS_fnc_DirTo;
			_missile setDir _relDirHor;

			_relDirVer = asin ((((getPosASL _missile) select 2) - ((getPosASL _target) select 2)) / (_target distance _missile));
			_relDirVer = (_relDirVer * -1);
			[_missile, _relDirVer, 0] call BIS_fnc_setPitchBank;

			_velocityX = (((getPosASL _target) select 0) - ((getPosASL _missile) select 0)) / _travelTime;
			_velocityY = (((getPosASL _target) select 1) - ((getPosASL _missile) select 1)) / _travelTime;
			_velocityZ = (((getPosASL _target) select 2) - ((getPosASL _missile) select 2)) / _travelTime;
		};

		[_velocityX, _velocityY, _velocityZ]
	};

	call _homeMissile;

	_fireLight = "#lightpoint" createVehicle position _missile;
	_fireLight setLightBrightness 0.5;
	_fireLight setLightAmbient [1.0, 1.0, 1.0];
	_fireLight setLightColor [1.0, 1.0, 1.0];
	_fireLight lightAttachObject [_missile, [0, -0.5, 0]];

	while {alive _missile} do {
		_velocityForCheck = call _homeMissile;
		if ({(typeName _x) == (typeName 0)} count _velocityForCheck == 3) then {_missile setVelocity _velocityForCheck};
		sleep (1 / _perSecondChecks)
	};

	deleteVehicle _fireLight;
	deleteVehicle _secondaryTarget;

};