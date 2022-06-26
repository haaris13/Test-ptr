/*
	File: fn_radioSystemSecurCheck.sqf

	Autor: Iron
*/

waitUntil {!(isNil "TFAR_currentUnit")};

radio_system_message_secur = 0;

[] spawn {
	while {true} do {
		uiSleep 15;

		if (!(isNil "TF_saved_active_sw_settings")) then {

			_radios = (TF_saved_active_sw_settings select 2);

			{
				_freq = _x;
				_secur = [_freq] call life_fnc_radioSystemSecurCheckFreq;

				if (_secur) exitWith {
					_id = call TFAR_fnc_activeSwRadio;
					[_id, _freq, position player] spawn life_fnc_radioSystemSecurSend;
				};
			} forEach _radios;
		};
	};
};

[] spawn {
	while {true} do {
		uiSleep ((random 5) + 15);

		{
			_obj = _x;
			_pos = getPosASL _obj;
			if ((_pos select 2) > 0) then {
				
				{
					_item = _x;
					if ((_item call TFAR_fnc_isRadio) and {_item call TFAR_fnc_getSwSpeakers}) then {

						_freq = _item call TFAR_fnc_getSwFrequency;
						_secur = [_freq] call life_fnc_radioSystemSecurCheckFreq;

						_securFreq = "";
						if (_secur) then {
							_securFreq = _freq;
						};

						if ((_item call TFAR_fnc_getAdditionalSwChannel) > -1) then {
							_freqSeq = [_item, (_item call TFAR_fnc_getAdditionalSwChannel) + 1] call TFAR_fnc_GetChannelFrequency;
							_secur = [_freqSeq] call life_fnc_radioSystemSecurCheckFreq;

							if (_secur) then {
								_securFreq = _freqSeq;
							};
						};

						if (_secur) exitWith {
							[_item, _securFreq, position _obj] spawn life_fnc_radioSystemSecurSend;
						};
					};		
				} forEach ((getItemCargo _obj) select 0);
			};
		} forEach (nearestObjects [getPos TFAR_currentUnit, ["WeaponHolder", "GroundWeaponHolder", "WeaponHolderSimulated"], TF_speakerDistance]);
	};
};

[] spawn {
	while {true} do {
		uiSleep ((random 5) + 15);

		{
			_obj = _x;
			_pos = getPosASL _obj;
			if ((_pos select 2) > 0) then {
				
				{
					_item = _x;
					if ((_item call TFAR_fnc_isRadio) and {_item call TFAR_fnc_getSwSpeakers}) then {

						_freq = _item call TFAR_fnc_getSwFrequency;
						_secur = [_freq] call life_fnc_radioSystemSecurCheckFreq;

						_securFreq = "";
						if (_secur) then {
							_securFreq = _freq;
						};

						if ((_item call TFAR_fnc_getAdditionalSwChannel) > -1) then {
							_freqSeq = [_item, (_item call TFAR_fnc_getAdditionalSwChannel) + 1] call TFAR_fnc_GetChannelFrequency;
							_secur = [_freqSeq] call life_fnc_radioSystemSecurCheckFreq;

							if (_secur) then {
								_securFreq = _freqSeq;
							};
						};

						if (_secur) exitWith {
							[_item, _securFreq, position _obj] spawn life_fnc_radioSystemSecurSend;
						};
					};		
				} forEach ((getItemCargo _obj) select 0);
			};
		} forEach (nearestObjects [getPos TFAR_currentUnit, ["Car","Truck","Air"], TF_speakerDistance]);
	};
};

[] spawn {
	while {true} do {
		uiSleep 20;

		{
			_item = _x;
			
			if ((_item call TFAR_fnc_isRadio) and {_item call TFAR_fnc_getSwSpeakers}) then {

				_freq = _item call TFAR_fnc_getSwFrequency;
				_secur = [_freq] call life_fnc_radioSystemSecurCheckFreq;

				_securFreq = "";
				if (_secur) then {
					_securFreq = _freq;
				};

				if ((_item call TFAR_fnc_getAdditionalSwChannel) > -1) then {
					_freqSeq = [_item, (_item call TFAR_fnc_getAdditionalSwChannel) + 1] call TFAR_fnc_GetChannelFrequency;
					_secur = [_freqSeq] call life_fnc_radioSystemSecurCheckFreq;

					if (_secur) then {
						_securFreq = _freqSeq;
					};
				};

				if (_secur) exitWith {
					[_item, _securFreq, position player] spawn life_fnc_radioSystemSecurSend;
				};
			};
		} forEach (items player);
	};
};