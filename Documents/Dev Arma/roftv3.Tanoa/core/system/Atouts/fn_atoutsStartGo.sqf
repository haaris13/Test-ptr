/*
	File: fn_atoutsStartGo.sqf

	Autor: Iron
	Date: 19 Mar 2020 22:09:26
	Version: 0.1
*/
_cfg = [_this, 0, "", [""]] call BIS_fnc_param;

_class = (missionConfigFile >> "Atouts" >> _cfg);
_timeLeft = getNumber(_class >> "duree");

[player, _cfg] remoteExec ["TON_fnc_atoutsStart", 2];

life_atouts_actif pushBack [_cfg, _timeLeft, time];

switch (true) do {
	case (_cfg in ["joint1", "joint2", "joint3"]) : {
		if !("V12_JOIN" in murshun_cigs_cigsArray) then {
			murshun_cigs_cigsArray pushBack "V12_JOIN";
		};
		player addGoggles "V12_JOIN";
		[player] spawn murshun_cigs_fnc_start_cig_your;
	};

	case (_cfg in ["blunt1", "blunt2"]) : {
		if !("V12_BLUNT" in murshun_cigs_cigsArray) then {
			murshun_cigs_cigsArray pushBack "V12_BLUNT";
		};
		player addGoggles "V12_BLUNT";
		[player] spawn murshun_cigs_fnc_start_cig_your;
	};

	default {  };
};

[_cfg] spawn life_fnc_atoutsApply;

if !(isNull (findDisplay 25100)) then {
	closeDialog 0;
	[] spawn life_fnc_atoutsOpen;
};