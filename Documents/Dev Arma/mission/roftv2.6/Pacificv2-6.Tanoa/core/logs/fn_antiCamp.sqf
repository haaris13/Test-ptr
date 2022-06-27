/*
	File: fn_antiCamp.sqf

	Autor:Iron
*/

[] spawn {

	AntiCamp_pos = position player;
	AntiCamp_time_start = diag_tickTime;
	AntiCamp_time_camp = (20*60);
	AntiCamp_distance_camp = 1000;

	while {true} do {
		uiSleep 5;
		if (AntiCamp_pos distance2D (position player) > AntiCamp_distance_camp) then {
			AntiCamp_pos = (position player);
			AntiCamp_time_start = diag_tickTime;
		};

		if (diag_tickTime - AntiCamp_time_start >= AntiCamp_time_camp) then {
			diag_log "!! CAMP !!";
			//["<t color='#ff0000'>Attention, Le Camp (plus de 20 minutes) sur une Zone est interdit !</t>"] call life_fnc_dynamicText;

			_text = format ["%1", str(position player)];

			//_camp = format["Camp %1.", name player];
			//[_camp] remoteExecCall ["admin_fnc_alertAdmin", 0];

			[getPlayerUID player, _text] remoteExecCall ["TON_fnc_insertAntiCamp",2];

			AntiCamp_pos = (position player);
			AntiCamp_time_start = diag_tickTime;
		};

		if (!alive player) then {
			AntiCamp_pos = (position player);
			AntiCamp_time_start = diag_tickTime;
		};
	};
};