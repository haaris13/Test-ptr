#include "..\..\script_macros.hpp"
/*
	File: fn_tazed.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Starts the tazed animation and broadcasts out what it needs to.
*/
private["_curWep","_curMags","_attach"];
params [
	["_unit",objNull,[objNull]],
	["_shooter",objNull,[objNull]]
];

if(isNull _unit OR isNull _shooter) exitWith {player allowDamage true; life_istazed = false;};

if(_shooter isKindOf "Man" && alive player) then {
	if(!life_istazed) then {

		[player] remoteExecCall ["life_fnc_tazeSound",RCLIENT];
		//[0,"STR_NOTF_Tazed",true,[profileName, _shooter GVAR ["realname",name _shooter]]] remoteExecCall ["life_fnc_broadcast",RCLIENT];

		[_shooter] spawn {

			_shooter = _this select 0;

			disableUserInput true;

			if (currentWeapon player != "") then {
				for "_i" from 0 to 30 do {
					player forceWeaponFire [(currentWeapon player), "Single"];
					uiSleep 0.04;
				};
			};			

			player setVariable ["tazed", true, true];

			if (isNil "time_sleep_tazed") then {
				time_sleep_tazed = 1;
			};

			uiSleep time_sleep_tazed;

			_curWep = currentWeapon player;
			_curMags = magazines player;
			_attach = if(!(EQUAL(RIFLE,""))) then {RIFLE_ITEMS} else {[]};
			
			{player removeMagazine _x} foreach _curMags;
			player removeWeapon _curWep;
			player addWeapon _curWep;
			if(!(EQUAL(count _attach,0)) && !(EQUAL(RIFLE,""))) then {
				{
					player addPrimaryWeaponItem _x;
				} foreach _attach;
			};
			
			if(!(EQUAL(count _curMags,0))) then {
				{player addMagazine _x;} foreach _curMags;
			};

			

			_obj = "Land_ClutterCutter_small_F" createVehicle ASLTOATL(visiblePositionASL player);
			_obj setPosATL ASLTOATL(visiblePositionASL player);
			[player,"AinjPfalMstpSnonWnonDf_carried_fallwc"] remoteExecCall ["life_fnc_animSync",RCLIENT];
			player attachTo [_obj,[0,0,0]];
		};

		life_istazed = true;
		
		sleep 15;
		
		player setVariable ["tazed", nil, true];
		
		[player,"amovppnemstpsraswrfldnon"] remoteExecCall ["life_fnc_animSync",RCLIENT];
		
		if(!(player GVAR ["Escorting",false])) then {
			detach player;
		};
		life_istazed = false;
		player allowDamage true;
		disableUserInput false;

		["tazed"] spawn life_fnc_achievementLearn;
	};
} else {
	_unit allowDamage true;
	life_iztazed = false;
};