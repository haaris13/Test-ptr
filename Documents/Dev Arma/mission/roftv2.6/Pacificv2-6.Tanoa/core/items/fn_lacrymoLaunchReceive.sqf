/*
	File: fn_lacrymoLaunchReceive.sqf

	Autor: Iron
	Date: 
	Version: 0.1
*/
diag_log "fn_lacrymoLaunchReceive";
_source = [_this, 0, [0,0,0], [[]]] call BIS_fnc_param;

_timeSpawn = time;
lacrymo_onEffect = false;

uiSleep 1;

while {true} do {
	uiSleep 0.5;

	if (!(alive player)) exitWith {};
	if ((time - _timeSpawn) > 60) exitWith {};

	if (!lacrymo_onEffect) then {
		if ((player distance _source) < 6 && !([player, 0] call life_fnc_hasMask)) then {
			diag_log "fn_lacrymoLaunchReceive: start effect";
			lacrymo_onEffect = true;
			_dmg = ((getDammage player) + 0.01);

			if (_dmg >= 0.90) then {
				_dmg = 0.90;
			};

			player setDammage _dmg;

			["DynamicBlur", 250, [10]] spawn 
			{
				params ["_name", "_priority", "_effect", "_handle"]; 
				while { 
					_handle = ppEffectCreate [_name, _priority]; 
					_handle < 0
				} do { 
					_priority = _priority + 1; 
				};

				_handle ppEffectEnable true; 
				_handle ppEffectAdjust _effect; 
				_handle ppEffectCommit (1 + (random 1.2));
				waitUntil {ppEffectCommitted _handle};

				_handle ppEffectAdjust [0.0];
				_handle ppEffectCommit 1.6;
				waitUntil {ppEffectCommitted _handle};

				_handle ppEffectAdjust _effect;
				_handle ppEffectCommit (1.5 + (random 1));
				waitUntil {ppEffectCommitted _handle};

				_handle ppEffectAdjust [0.0];
				_handle ppEffectCommit 1.3;
				waitUntil {ppEffectCommitted _handle};

				_handle ppEffectAdjust _effect;
				_handle ppEffectCommit (1 + (random 1.8));
				waitUntil {ppEffectCommitted _handle};

				_handle ppEffectAdjust [0.0];
				_handle ppEffectCommit 1.3;
				waitUntil {ppEffectCommitted _handle};

				uiSleep 2; 
				_handle ppEffectEnable false; 
				ppEffectDestroy _handle;
				lacrymo_onEffect = false;
				diag_log "fn_lacrymoLaunchReceive: end effect";
			};
		};
	};
};