/*
	File: fn_depanCheckService.sqf

	Autor: Iron
	Date: 12 Mar 2020 21:15:11
	Version: 0.1
*/

life_depan_on_service = false;

if (([] call life_depanLevel) <= 0) exitWith {};

while {true} do {

	uiSleep 4;

	if (life_depan_on_service) then {
		if !((backpack player) in ["sac_depan"]) then {
			life_depan_on_service = false;
			[player] remoteExec ["TON_fnc_depanLeftService", 2];
			
			{
				_var = _x select 0;
				deleteMarkerLocal _var;
				
			} forEach life_depan_balises;
			life_depan_balises = [];
		};
	} else {
		if ((backpack player) in ["sac_depan"]) then {
			life_depan_on_service = true;
			[player] remoteExec ["TON_fnc_depanTakeService", 2];
		};
	};
};