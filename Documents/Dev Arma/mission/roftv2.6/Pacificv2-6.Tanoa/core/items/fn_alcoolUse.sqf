/*
	File:fn_alcoolUse.sqf

	Autor: IronBlade
*/
_i = [_this,0,"",[""]] call BIS_fnc_param;

//player say3D "Drink";

[_i] spawn {
	_item = _this select 0;

	switch (_item) do { 
		case "whiskey" : {

			0 = ["ChromAberration", 200, [0.05, 0.05, true]] spawn {
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
				_handle ppEffectEnable false;
				ppEffectDestroy _handle;
			};

			//[_item,true] spawn life_fnc_launchAtouts;
			//player say3D "sake";
		};

		case "rum" : {

			0 = ["ChromAberration", 200, [0.05, 0.05, true]] spawn {
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
				_handle ppEffectEnable false;
				ppEffectDestroy _handle;
			};

			//[_item,true] spawn life_fnc_launchAtouts;

			//player say3D "vinsRouge";
		};

		case "cocktail" : {

			[] spawn {
				"colorCorrections" ppEffectEnable true;
				"chromAberration" ppEffectEnable true;
				"radialBlur" ppEffectEnable true;

				"colorCorrections" ppEffectAdjust [1, 1, 0, [-1.5,0.5,-1.5,0.1], [-5,-1,-5,1], [0,0,0,0]];
				"colorCorrections" ppEffectCommit 1;

				"chromAberration" ppEffectAdjust [0.01,0.01,true];
				"chromAberration" ppEffectCommit 1;

				"radialBlur" ppEffectAdjust [0.02,0.02,0.15,0.15];
				"radialBlur" ppEffectCommit 1;
				[] spawn {
					enableCamShake true; 
		  			addCamShake [60, 60, 0.4];
				};

				uiSleep 60;

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

		case "cocktailx" : {
			0 = ["ChromAberration", 200, [0.05, 0.05, true]] spawn {
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
				_handle ppEffectEnable false;
				ppEffectDestroy _handle;
			};

			0 = ["FilmGrain", 2000, [ 
						 0.5,  
						 0.8, 
						 2,  
						 0.05,
						 0.2, 
			 			true 
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
				 uiSleep 15;
				 _handle ppEffectEnable false; 
				 ppEffectDestroy _handle; 
			};
		};

		case "vodka" : {
			0 = ["ChromAberration", 200, [0.05, 0.05, true]] spawn {
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
				uiSleep 60;
				_handle ppEffectEnable false;
				ppEffectDestroy _handle;
			};

			[] spawn {
				enableCamShake true; 
	  			addCamShake [60, 60, 0.4];
			};
		};

		case "beer" : {
			0 = ["ChromAberration", 200, [0.05, 0.05, true]] spawn {
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
				uiSleep 10;
				_handle ppEffectEnable false;
				ppEffectDestroy _handle;
			};
		};
	};
};