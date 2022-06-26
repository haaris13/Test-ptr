#include "..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	All survival? things merged into one thread.
*/
private["_fnc_food","_fnc_water","_foodTime","_waterTime","_bp","_walkDis","_lastPos","_curPos"];
_fnc_food =  {
	if(life_hunger < 2) then {
		player setDamage ((damage player) + 0.3);
		["InfoWithSound", localize "STR_NOTF_EatMSG_Death"] spawn life_fnc_showPredefinedNotification;
	} else {

		_value = 15;

		if (["hungerV1"] call life_fnc_hasPerk) then {
			_value = _value - 5;
		};

		if (["hungerV2"] call life_fnc_hasPerk) then {
			_value = _value - 5;
		};

		if (["specialDonuts"] call life_fnc_hasAtouts) then {
			_value = 0;
		};

		SUB(life_hunger,_value);
		[] call life_fnc_hudUpdate;
		if(life_hunger < 2) then {
			player setDamage ((damage player) + 0.3); 
			["InfoWithSound", localize "STR_NOTF_EatMSG_Death"] spawn life_fnc_showPredefinedNotification;
			if (life_hunger < 0) then {life_hunger = 0;};
		};
		switch(life_hunger) do {
			case 30: {["InfoWithSound", localize "STR_NOTF_EatMSG_1"] spawn life_fnc_showPredefinedNotification;};
			case 20: {["Warning", localize "STR_NOTF_EatMSG_2"] spawn life_fnc_showPredefinedNotification;};
			case 10: {
				["Warning", localize "STR_NOTF_EatMSG_3"] spawn life_fnc_showPredefinedNotification;
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
		};
	};
};
	
_fnc_water = {
	if(life_thirst < 2) then {
		player setDamage ((damage player) + 0.3); 
		["InfoWithSound", localize "STR_NOTF_DrinkMSG_Death"] spawn life_fnc_showPredefinedNotification;
	} else {

		_value = 15;

		if (["dehydrationV1"] call life_fnc_hasPerk) then {
			_value = _value - 5;
		};

		if (["dehydrationV2"] call life_fnc_hasPerk) then {
			_value = _value - 5;
		};

		if (["specialDonuts"] call life_fnc_hasAtouts) then {
			_value = 0;
		};		

		SUB(life_thirst,_value);
		[] call life_fnc_hudUpdate;
		if(life_thirst < 2) then {
			player setDamage ((damage player) + 0.3); 
			["InfoWithSound", localize "STR_NOTF_DrinkMSG_Death"] spawn life_fnc_showPredefinedNotification;
			if (life_thirst < 0) then {life_thirst = 0;};
		};
		switch(life_thirst) do  {
			case 30: {["InfoWithSound", localize "STR_NOTF_DrinkMSG_1"] spawn life_fnc_showPredefinedNotification;};
			case 20: {
				["Warning", localize "STR_NOTF_DrinkMSG_2"] spawn life_fnc_showPredefinedNotification;
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
			case 10: {
				["Warning", localize "STR_NOTF_DrinkMSG_3"] spawn life_fnc_showPredefinedNotification;
				if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
			};
		};
	};
};

//Setup the time-based variables.
_foodTime = time;
_waterTime = time;
_walkDis = 0;
_bp = "";
_lastPos = visiblePosition player;
_lastPos = (SEL(_lastPos,0)) + (SEL(_lastPos,1));
_lastState = vehicle player;
life_uniforms_weight = [];

waitUntil{!isNil "life_server_code"};

_lastSaveLife = time;
_lastHunger = life_hunger;
_lastThirst = life_thirst;
_lastDamage = (getDammage player);

while {true} do {
	/* Thirst / Hunger adjustment that is time based */
	if((time - _waterTime) > 600 && !life_mode_admin) then {[] call _fnc_water; _waterTime = time;};
	if((time - _foodTime) > 960 && !life_mode_admin) then {[] call _fnc_food; _foodTime = time;};

	if (life_hunger < 1) then {life_hunger = 1;};
	if (life_thirst < 1) then {life_thirst = 1;};
	
	/* Adjustment of carrying capacity based on backpack changes */
	[true] spawn life_fnc_reloadBackpack;
	
	/* Check if the player's state changed? */
	if(vehicle player != _lastState OR {!alive player}) then {
		[] call life_fnc_updateViewDistance;
		_lastState = vehicle player;
	};
	
	/* Check if the weight has changed and the player is carrying to much */
	if(life_carryWeight > life_maxWeight && {!isForcedWalk player} && !life_mode_admin) then {
		player forceWalk true;
		if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),1)) then {player setFatigue 1;};
		["Warning", localize "STR_NOTF_MaxWeight"] spawn life_fnc_showPredefinedNotification;
	} else {
		if(isForcedWalk player) then {
			player forceWalk false;
		};
	};
	
	/* Travelling distance to decrease thirst/hunger which is captured every second so the distance is actually greater then 650 */
	if(!alive player) then {_walkDis = 0;} else {
		_curPos = visiblePosition player;
		_curPos = (SEL(_curPos,0)) + (SEL(_curPos,1));
		if(!(EQUAL(_curPos,_lastPos)) && {(vehicle player == player)}) then {
			ADD(_walkDis,1);
			if(EQUAL(_walkDis,650)) then {
				_walkDis = 0;
				SUB(life_thirst,5);
				SUB(life_hunger,5);
				[] call life_fnc_hudUpdate;
			};
		};
		_lastPos = visiblePosition player;
		_lastPos = (SEL(_lastPos,0)) + (SEL(_lastPos,1));
	};

	if (alive player && !life_mode_admin) then {
		if ((time - _lastSaveLife) > 500) then {
			_lastSaveLife = time;
			_needToSave = false;

			if (life_hunger != _lastHunger) then {
				_needToSave = true;
			};

			if (life_thirst != _lastThirst) then {
				_needToSave = true;
			};

			if ((getDammage player) != _lastDamage) then {
				_needToSave = true;
			};

			if (_needToSave) then {
				diag_log "Update stats";
				[4] call SOCK_fnc_updatePartial;
			};

			_lastHunger = life_hunger;
			_lastThirst = life_thirst;
			_lastDamage = (getDammage player);
		};		
	};


	uiSleep 1;
};