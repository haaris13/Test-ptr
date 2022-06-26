#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Switching it up and making it prettier..
*/
private["_option","_state"];
_option = SEL(_this,0);
_state = SEL(_this,1);

switch(_option) do {
	case "tags": {
		if(EQUAL(_state,1)) then {
			life_tagson = true;
			LIFE_ID_PlayerTags = ["LIFE_PlayerTags","onEachFrame","life_fnc_playerTags"] call BIS_fnc_addStackedEventHandler;
		} else {
			life_tagson = !true;
			[LIFE_ID_PlayerTags,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	};

	case "vehicles": {
		if(EQUAL(_state,1)) then {
			life_tagVon = true;
			LIFE_ID_VehicleTags = ["LIFE_VehicleTags","onEachFrame","life_fnc_vehicleTags"] call BIS_fnc_addStackedEventHandler;
		} else {
			life_tagVon = !true;
			[LIFE_ID_VehicleTags,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	};
	
	case "objects": {
		if(EQUAL(_state,1)) then {
			life_revealObjects = true;
			LIFE_ID_RevealObjects = ["LIFE_RevealObjects","onEachFrame","life_fnc_revealObjects"] call BIS_fnc_addStackedEventHandler;
		} else {
			life_revealObjects = !true;
			[LIFE_ID_RevealObjects,"onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};
	};
	
	case "sidechat": {
		if(EQUAL(_state,1)) then {life_sidechat = true;} else {life_sidechat = !true;};
		[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
	};

	case "trading": {
		if(EQUAL(_state,1)) then {player setVariable ["allowTrades",false,true]; life_tradesDisabled = true;} else {player setVariable ["allowTrades",true,true]; life_tradesDisabled = false;};
	};

	case "help": {
		if(EQUAL(_state,1)) then {life_help_active = true;} else {life_help_active = false;};
	};
};