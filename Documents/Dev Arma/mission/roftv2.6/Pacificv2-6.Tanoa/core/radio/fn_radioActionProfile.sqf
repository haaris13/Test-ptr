/*
	File: fn_radioActionProfile.sqf

	Autor:IronBlade
*/
_action = [_this,0,"",[""]] call BIS_fnc_param;
_id = [_this,1,0,[0]] call BIS_fnc_param;

_currentProfiles = [];

switch (playerSide) do { 
	case civilian : { _currentProfiles = ((profileNamespace getVariable ["radio_v2_profiles_civ", []]));}; 
	case west : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_west", []]); }; 
	case independent : { _currentProfiles = (profileNamespace getVariable ["radio_v2_profiles_med", []]); }; 
};

_curRadio = "";
{
	if ((_x find "tf_radio") != -1) exitWith {
		_curRadio = _x;
	};
} forEach (assignedItems player);
if (_curRadio == "") exitWith {["Error", "Aucune Radio Assigné !"] spawn life_fnc_showPredefinedNotification;};

_canLoad = [TF_MIN_SW_FREQ_CIV, TF_MAX_SW_FREQ_CIV];
switch (true) do { 
	case ((_curRadio find "tf_radio_civ") != -1) : { _canLoad = [TF_MIN_SW_FREQ_CIV, TF_MAX_SW_FREQ_CIV]; };
	case ((_curRadio find "tf_radio_reb") != -1) : { _canLoad = [TF_MIN_SW_FREQ_REB, TF_MAX_SW_FREQ_REB]; }; 
	case ((_curRadio find "tf_radio_med") != -1) : { _canLoad = [TF_MIN_SW_FREQ_MED, TF_MAX_SW_FREQ_MED]; }; 
	case ((_curRadio find "tf_radio_gen") != -1) : { _canLoad = [TF_MIN_SW_FREQ_GEN, TF_MAX_SW_FREQ_GEN]; };  
	case ((_curRadio find "tf_radio_fed") != -1) : { _canLoad = [TF_MIN_SW_FREQ_FED, TF_MAX_SW_FREQ_FED]; }; 
	case ((_curRadio find "tf_radio_ghost") != -1) : { _canLoad = [TF_MIN_SW_FREQ_GHOST, TF_MAX_SW_FREQ_GHOST]; }; 
};


switch (_action) do {

	case "save" : {

		if (isNil "TF_saved_active_sw_settings") exitWith {};

		(_currentProfiles select _id) set[1, TF_saved_active_sw_settings select 2];

		switch (playerSide) do { 
			case civilian : { profileNamespace setVariable ["radio_v2_profiles_civ", _currentProfiles]; }; 
			case west : { profileNamespace setVariable ["radio_v2_profiles_west", _currentProfiles]; }; 
			case independent : { profileNamespace setVariable ["radio_v2_profiles_med", _currentProfiles]; }; 
		};

		saveProfileNamespace;
	};

	case "load" : {

		if (isNil "TF_saved_active_sw_settings") exitWith {};

		_profileLoad = _currentProfiles select _id;
		_freqLoad = _profileLoad select 1;

		_good = true;
		{
			_num = parseNumber _x;

			if (_num < (_canLoad select 0) || _num > (_canLoad select 1)) exitWith {
				_good = false;
			};
		} forEach _freqLoad;

		if (!_good) exitWith { ["Error", "Vous ne pouvez pas appliquer ce profile sur cette radio !"] spawn life_fnc_showPredefinedNotification;};

		TF_saved_active_sw_settings set[2, _freqLoad];

		_settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;

		_settings set[2, _freqLoad];

		[(call TFAR_fnc_activeSwRadio), _settings] call TFAR_fnc_setSwSettings;
	};
};

closeDialog 0;

[] spawn life_fnc_radioGlobalOpenDiag;