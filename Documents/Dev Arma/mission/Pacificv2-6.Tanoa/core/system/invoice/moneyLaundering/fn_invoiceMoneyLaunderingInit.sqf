/*
	File: fn_invoiceMoneyLaunderingInit.sqf

	Autor: Iron
*/

if (playerSide != civilian) exitWith {};

life_money_laundering_mrk_state = false;
life_money_laundering_enable = false;
life_money_laundering_processing = false;

waitUntil {smart_marker_ready};

if (["moneyLaundering"] call life_fnc_achievementHas) then {
	["money_laundering", "show"] call life_fnc_smartMarkerShowHideMarker;
	life_money_laundering_enable = true;
};

[] spawn {
	
	_moneyLaundering = (missionConfigFile >> "CfgIllegal" >> "MoneyLaundering");
	_activate = getNumber(_moneyLaundering >> "checkActivateMoney");

	while {true} do {
		sleep 30;

		if (!life_money_laundering_enable) then {
			if (life_illegal_profit >= _activarute) then {
				life_money_laundering_enable = true;
				["money_laundering", "show"] call life_fnc_smartMarkerShowHideMarker;
				["moneyLaundering"] spawn life_fnc_achievementLearn;
			};
		};

		//Check day time:
		if (life_money_laundering_enable) then {
			_dayTime = daytime;

			if (_dayTime > 6 && _dayTime < 22) then {
				if (life_money_laundering_mrk_state) then {
					life_money_laundering_mrk_state = false;
				};
			} else {
				if (!life_money_laundering_mrk_state) then {
					life_money_laundering_mrk_state = true;
				};
			};
		};
	};	
};