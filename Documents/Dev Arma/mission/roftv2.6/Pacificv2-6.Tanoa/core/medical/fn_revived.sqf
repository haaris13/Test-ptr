#include "..\..\script_macros.hpp"
/*
	File: fn_revived.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	THANK YOU JESUS I WAS SAVED!
*/
private["_medic","_dir","_reviveCost"];
_medic = [_this,0,"Unknown Medic",[""]] call BIS_fnc_param;
_iAdmin = [_this,1,false,[false]] call BIS_fnc_param;
_chance = [_this,2,100,[100]] call BIS_fnc_param;

_reviveCost = LIFE_SETTINGS(getNumber,"revive_fee");
_oldGear = [life_corpse] call life_fnc_fetchDeadGear;
[_oldGear] spawn life_fnc_loadDeadGear;
life_corpse SVAR ["realname",nil,true]; //Should correct the double name sinking into the ground.
[life_corpse] remoteExecCall ["life_fnc_corpse",RANY];

_dir = getDir life_corpse;
hint format[localize "STR_Medic_RevivePay",_medic,[_reviveCost] call life_fnc_numberText];

closeDialog 0;
life_deathCamera cameraEffect ["TERMINATE","BACK"];
camDestroy life_deathCamera;

//Take fee for services.
if(BANK > _reviveCost) then {
	SUB(BANK,_reviveCost);
} else {
	BANK = 0;
};

[_iAdmin, _chance] spawn {

	_iAdmin = _this select 0;
	_chance = _this select 1;

	uiSleep 1;
	life_revive = true;
	life_dead = false;

	if (!_iAdmin) then {
		[_chance] spawn life_fnc_bledout;
	};

	uiSleep 3;
	diag_log format ["ADD Weapon: %1",life_weapons_dead];
	player addWeapon life_weapons_dead;
	life_weapons_dead = "";
};

//Bring me back to life.
player setDir _dir;
player setPosASL (visiblePositionASL life_corpse);
life_corpse SVAR ["Revive",nil,TRUE];
life_corpse SVAR ["name",nil,TRUE];
[life_corpse] remoteExecCall ["life_fnc_corpse",RANY];
//deleteVehicle life_corpse;

player SVAR ["Revive",nil,TRUE];
player SVAR ["name",nil,TRUE];
player SVAR ["Reviving",nil,TRUE];
//Testing
{ppEffectDestroy _x} forEach life_activePPEffects;

//Experimental 
SVAR_MNS [LICENSE_VARNAME("isdead","civ"),false];

life_sidechat = true;
//[player,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];


[] call life_fnc_hudUpdate; //Request update of hud.
[1] spawn life_fnc_playerSkins;
[] call life_fnc_updateClothing;