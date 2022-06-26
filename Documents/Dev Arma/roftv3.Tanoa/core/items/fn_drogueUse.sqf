/*
	File:fn_drogueUse.sqf

	Autor: IronBlade
*/
_i = [_this,0,"",[""]] call BIS_fnc_param;

player say3D "Eat";

[_i] spawn {
	_item = _this select 0;

	switch (_item) do { 
		case "spaceCake" : {



			0 = ["WetDistortion", 300, [
				1, 
				0, 1, 
				4.10, 3.70, 2.50, 1.85, 
				0.0054, 0.0041, 0.05, 0.0070, 
				1, 1, 1, 1
			]] spawn {
				params ["_name", "_priority", "_effect", "_handle"];
				while {
					_handle = ppEffectCreate [_name, _priority];
					_handle < 0
				} do {
					_priority = _priority + 1;
				};
				_handle ppEffectEnable true;
				_handle ppEffectAdjust _effect;
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 55;

				_handle ppEffectAdjust [
					1,
					1, 1, 
					4.10, 3.70, 2.50, 1.85, 
					0.0054, 0.0041, 0.0090, 0.0070, 
					0.5, 0.3, 10.0, 6.0
				];
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};

				uiSleep 20;

				_handle ppEffectEnable false;	
				ppEffectDestroy _handle;
			};

			0 = ["ColorInversion", 2500, [0.5, 0.5, 0.5]] spawn {
					params ["_name", "_priority", "_effect", "_handle"];
					while {
						_handle = ppEffectCreate [_name, _priority];
						_handle < 0
					} do {
						_priority = _priority + 1;
					};
					_handle ppEffectEnable true;
					_handle ppEffectAdjust _effect;
					_handle ppEffectCommit 5;
					waitUntil {ppEffectCommitted _handle};
					uiSleep 1;
					for "_i" from 0 to 1 do {	
						_handle ppEffectAdjust [0.2, 1.5, 0.5];
						_handle ppEffectCommit 5;
						waitUntil {ppEffectCommitted _handle};
						uiSleep 1;
						_handle ppEffectAdjust [0.2, 0.5, 1.5];
						_handle ppEffectCommit 5;
						waitUntil {ppEffectCommitted _handle};
						uiSleep 2; 
						_handle ppEffectAdjust [0.5, 1.1, 0.5];
						_handle ppEffectCommit 5;
						waitUntil {ppEffectCommitted _handle};
						uiSleep 3;
						_handle ppEffectAdjust [0.8, 0.5, 0.8];
						_handle ppEffectCommit 5;
						waitUntil {ppEffectCommitted _handle};
					};
					uiSleep 1;
					_handle ppEffectAdjust [0, 0, 0];
					_handle ppEffectCommit 5;
					waitUntil {ppEffectCommitted _handle};
					uiSleep 20;
					_handle ppEffectEnable false;
					ppEffectDestroy _handle;
				};

				["spaceCake",true] spawn life_fnc_launchAtouts;


				_units = [];

				{
				 	_unit = _x;

					if ((isPlayer _unit) && (player distance _unit) <= 35) then {
						_units pushBack _unit;
					};
				} forEach playableUnits;

				[player,"spacecake"] remoteExecCall ["life_fnc_playSound3D",_units];
		};

		case "wine_process_bottle" : {
			0 = ["ChromAberration", 200, [2, 2, false]] spawn {
				params ["_name", "_priority", "_effect", "_handle"];
				while {
					_handle = ppEffectCreate [_name, _priority];
					_handle < 0
				} do {
					_priority = _priority + 1;
				};
				_handle ppEffectEnable true;
				_handle ppEffectAdjust _effect;
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 15;

				_handle ppEffectAdjust [0.005, 0.005, false];
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};

				_handle ppEffectAdjust [0.5, 0.5, false];
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 15;

				_handle ppEffectAdjust [0.005, 0.005, false];
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 2;
				
				_handle ppEffectEnable false;
				ppEffectDestroy _handle;
			};

			["wine_process_bottle",true] spawn life_fnc_launchAtouts;

			_units = [];

			{
			 	_unit = _x;

				if ((isPlayer _unit) && (player distance _unit) <= 35) then {
					_units pushBack _unit;
				};
			} forEach playableUnits;

			[player,"wine_process_bottle"] remoteExecCall ["life_fnc_playSound3D",_units];
		};

		case "glaceFolle" : {
			0 = ["ChromAberration", 200, [2, 2, false]] spawn {
				params ["_name", "_priority", "_effect", "_handle"];
				while {
					_handle = ppEffectCreate [_name, _priority];
					_handle < 0
				} do {
					_priority = _priority + 1;
				};
				_handle ppEffectEnable true;
				_handle ppEffectAdjust _effect;
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 15;

				_handle ppEffectAdjust [0.005, 0.005, false];
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};

				_handle ppEffectAdjust [0.5, 0.5, false];
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 15;

				_handle ppEffectAdjust [0.005, 0.005, false];
				_handle ppEffectCommit 5;
				waitUntil {ppEffectCommitted _handle};
				uiSleep 2;
				
				_handle ppEffectEnable false;
				ppEffectDestroy _handle;
			};

			["glaceFolle",true] spawn life_fnc_launchAtouts;

			_units = [];

			{
			 	_unit = _x;

				if ((isPlayer _unit) && (player distance _unit) <= 35) then {
					_units pushBack _unit;
				};
			} forEach playableUnits;

			[player,"glacefolle"] remoteExecCall ["life_fnc_playSound3D",_units];
		};

		case "tacosp" : {
			_dice = random(100);
			if (_dice > 40) then {
				0 = ["ChromAberration", 200, [2, 2, false]] spawn { 
					params ["_name", "_priority", "_effect", "_handle"]; 
					while { 
					_handle = ppEffectCreate [_name, _priority]; 
					_handle < 0 
					} do { 
					_priority = _priority + 1; 
					}; 
					_handle ppEffectEnable true; 
					_handle ppEffectAdjust _effect; 
					_handle ppEffectCommit 5; 
					waitUntil {ppEffectCommitted _handle}; 
					uiSleep 30; 
				
					_handle ppEffectAdjust [0.015, 0.015, false]; 
					_handle ppEffectCommit 5; 
					waitUntil {ppEffectCommitted _handle}; 
				
					_handle ppEffectAdjust [1.5, 0.5, false]; 
					_handle ppEffectCommit 5; 
					waitUntil {ppEffectCommitted _handle}; 
					uiSleep 30; 
				
					_handle ppEffectAdjust [0.005, 0.005, false]; 
					_handle ppEffectCommit 5; 
					waitUntil {ppEffectCommitted _handle}; 
					uiSleep 20; 
					
					_handle ppEffectEnable false; 
					ppEffectDestroy _handle; 
				}; 
				
				_units = []; 
				
				{ 
					_unit = _x; 
				
					if ((isPlayer _unit) && (player distance _unit) <= 35) then { 
					_units pushBack _unit; 
					}; 
				} forEach playableUnits;
			};
		};

		case "fioleblinded" : {
			_effect = ppEffectCreate ["colorCorrections", 301];
			_effect ppEffectEnable true;

			for "_i" from 0 to 20 do {
				_effect ppEffectAdjust [0.2, 1, 0, [0, 0, 0, 0], [0, 0, 0, 0],[1, 1, 1, 0]]; 
				_effect ppEffectCommit 1;
				uiSleep (random 2);
				_effect ppEffectAdjust [1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0.299, 0.587, 0.114, 0]; 
				_effect ppEffectCommit 1;
				uiSleep (random 2);
				player setDamage ((getDammage player) + 0.05);
			};

			player setDamage 1;
			player setVariable ["executed", true];

			_units = [];

			{
			 	_unit = _x;

				if ((isPlayer _unit) && (player distance _unit) <= 20 && (side _unit == west)) then {
					_units pushBack _unit;
				};
			} forEach playableUnits;

			["fioleblinded_cop"] remoteExecCall ["life_fnc_achievementLearn",_units];

			uiSleep 5;

			ppEffectDestroy _effect;

			uiSleep 20;

			player setVariable ["executed", nil];

			["fioleblinded"] spawn life_fnc_achievementLearn;
		};

		case "red" : {

			[] spawn {
				"colorCorrections" ppEffectEnable true;
				"chromAberration" ppEffectEnable true;
				"radialBlur" ppEffectEnable true;

				"colorCorrections" ppEffectAdjust [1, 1, 0, [1.5,-1,-1.5,0.5], [5,3.5,-5,-0.5], [-3,5,-5,-0.5]];
				"colorCorrections" ppEffectCommit 1;

				"chromAberration" ppEffectAdjust [0.01,0.01,true];
				"chromAberration" ppEffectCommit 1;

				"radialBlur" ppEffectAdjust [0.02,0.02,0.15,0.15];
				"radialBlur" ppEffectCommit 1;

				uiSleep 10;

				"colorCorrections" ppEffectAdjust [
														1, 
														1, 
														0, 
														[0, 0, 0, 0], 
														[1, 1, 1, 1], 
														[0.299, 0.587, 0.114, 0]
													];

				"colorCorrections" ppEffectCommit 1;

				"chromAberration" ppEffectAdjust [0.005, 0.005, false];
				"chromAberration" ppEffectCommit 1;

				"radialBlur" ppEffectAdjust [0.01, 0.01, 0.06, 0.06];
				"radialBlur" ppEffectCommit 1;

				uiSleep (20);

				"colorCorrections" ppEffectEnable false;
				"chromAberration" ppEffectEnable false;
				"radialBlur" ppEffectEnable false;
			};
		};
	};
};