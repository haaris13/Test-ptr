#include "..\..\script_macros.hpp"
/*
	File: fn_pickupMoney.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Picks up money
*/
private "_value";
if((time - life_action_delay) < 1.5) exitWith {["Warning", localize "STR_NOTF_ActionDelay"] spawn life_fnc_showPredefinedNotification; _this SVAR ["inUse",false,true];};
if(isNull _this OR {player distance _this > 3}) exitWith {_this SVAR ["inUse",false,true];};

_value = SEL((_this GVAR "item"),1);

_side = _this getVariable ["side",playerSide];
_dead = _this getVariable ["uid",getPlayerUID player];

if(!isNil "_value") exitWith {
	[_this] spawn life_fnc_deleteVehicle;
	
	switch (true) do {
		case (_value > 20000000) : {_value = 100000;}; //VAL>20mil->100k
		case (_value > 5000000) : {_value = 250000;}; //VAL>5mil->250k
		default {};
	};
	
    [getPlayerUID player, 3, _value, _dead, str(playerSide), str(_side)] remoteExecCall ["TON_fnc_insertTransfersMoney",2];
	
	player playMove "AinvPknlMstpSlayWrflDnon";
	titleText[format[localize "STR_NOTF_PickedMoney",[_value] call life_fnc_numberText],"PLAIN"];
	ADD(CASH,_value);
	life_action_delay = time;
};