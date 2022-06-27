/*
	File: fn_targetTrainingStatsSystem.sqf

	Autor: Iron
*/

waitUntil {life_training_target_stats_ready};

_currentWeapon = "";

_time = time;
_timeStats = (60 * 15);
life_training_target_stats_calc = false;

while {true} do {
	uiSleep 0.9;

	if (_currentWeapon != (currentWeapon player) || life_training_target_stats_calc) then {
		life_training_target_stats_calc = false;
		_currentWeapon = currentWeapon player;

		if (_currentWeapon != "") then {

			["Action","WeaponTraining",false] spawn life_fnc_showHelp;

			_coefs = [_currentWeapon] call life_fnc_targetTrainingStatsCalcCoef;

			player setCustomAimCoef (_coefs select 0);
			player setUnitRecoilCoefficient (_coefs select 1);
		} else {
			player setCustomAimCoef 1;
			player setUnitRecoilCoefficient 1;
		};
	};

	if((round(time - _time) >= _timeStats) && !life_mode_admin) then {
		_time = time;

		{
			_level = _x select 2;

			if (_level > 0) then {

				_remove = 5;

				if (["weaponsTraining"] call life_fnc_hasPerk) then {
					_remove = 4;
				};

				if (playerSide == west) then {
					_remove = 4;
				};

				if (["juice"] call life_fnc_hasAtouts) then {
					_remove = round(_remove / 2);
				};

				_level = _level - _remove;

				if (_level < 0) then {
					_level = 0;
				};

				_x set [2, _level];
				
				[_x] spawn life_fnc_targetTrainingStatsSave;
			};			
		} forEach life_training_target_stats;
		
		life_training_target_stats_calc = true;
	};
};