#include "..\..\script_macros.hpp"
/*
	File: fn_chargeTimerBankSimple.sqf

	Autor: IronBlade
*/

private["_uiDisp","_time","_timer"];
_owner = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_door = [_this,1,[0,0,0],[[]]] call BIS_fnc_param;
_building = [_this,2,objNull,[objNull]] call BIS_fnc_param;

disableSerialization;
1 cutRsc ["life_timer","PLAIN"];
_uiDisp = GVAR_UINS "life_timer";
_timer = _uiDisp displayCtrl 38301;

_time = time + (life_time_littleBankSimple * 60);
_timecheck = time + 10;

_bad = false;

while {true} do {

	if(isNull _uiDisp) then {
		1 cutRsc ["life_timer","PLAIN"];
		_uiDisp = GVAR_UINS "life_timer";
		_timer = _uiDisp displayCtrl 38301;
	};

	if(round(_time - time) < 1) exitWith {};

	_timer ctrlSetText format["%1", [(_time - time),"MM:SS.MS"] call BIS_fnc_secondsToString];

	if (round(_timecheck - time) < 1) then {
		_timecheck = time + 10;

		if (_owner == player) then {
			_nb = 0;
			{
				if ((_x distance _door) < 30 && (alive _x) && (_x != player)) then {
					_nb = _nb + 1;
				};

			} forEach (units group player);

			if (_nb < bank_simple_nb_breaker) then {
				bank_simple_nb_breaker = _nb;
			};
		};

		if (!(_building getVariable ["chargeplaced_vault", false])) exitWith {_bad = true;};
	};

	if (_bad) exitWith {};

	sleep 0.08;
};

1 cutText["","PLAIN"];