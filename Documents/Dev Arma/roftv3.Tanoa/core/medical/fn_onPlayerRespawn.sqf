#include "..\..\script_macros.hpp"
#include "..\..\defineACE.hpp"
/*
	File: fn_onPlayerRespawn.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Does something but I won't know till I write it...
*/
private["_unit","_corpse","_containers"];
_unit = SEL(_this,0);
_corpse = SEL(_this,1);
life_corpse = _corpse;

//Comment this code out if you want them to keep the weapon on the ground.
_containers = nearestObjects[getPosATL _corpse,["WeaponHolderSimulated"],5]; //Fetch list of containers (Simulated = weapons)
{deleteVehicle _x;} foreach _containers; //Delete the containers.


POSISPAWN1 = CivilianSpawn;
_handle = [] spawn life_fnc_startLoadout;

if ((call life_coplevel) > 0) then
{
    //_handle = [] spawn life_fnc_copLoadout;
    POSISPAWN1 = CopSpawn;
};

if ((call life_mediclevel) > 0) then
{
    //_handle = [] spawn life_fnc_medicLoadout;
    POSISPAWN1 = MedicSpawn;
};

//Set some vars on our new body.
_unit SVAR ["restrained",false,true];
_unit SVAR ["Escorting",false,true];
_unit SVAR ["transporting",false,true]; //Again why the fuck am I setting this? Can anyone tell me?
_unit SVAR ["playerSurrender",false,true];
_unit SVAR ["steam64id",steamid,true]; //Reset the UID.
_unit SVAR ["realname",profileName,true]; //Reset the players name.
ArgentSal = 0;
_unit SVAR [VAR_PAIN, 0, true];
_unit SVAR [VAR_BLOOD_VOL, DEFAULT_BLOOD_VOLUME, true];
_unit SVAR [VAR_TOURNIQUET, DEFAULT_TOURNIQUET_VALUES, true];
_unit SVAR [QGVAR(occludedMedications), nil, true];
_unit SVAR [VAR_OPEN_WOUNDS, [], true];
_unit SVAR [VAR_BANDAGED_WOUNDS, [], true];
_unit SVAR [VAR_STITCHED_WOUNDS, [], true];
_unit SVAR ["RequestMedic",false,true];
_unit SVAR [QEGVAR(medical,isLimping), false, true];
_unit SVAR [VAR_FRACTURES, DEFAULT_FRACTURE_VALUES, true];
[player] call EFUNC(medical_status,updateWoundBloodLoss);
_unit SVAR [VAR_HEART_RATE, DEFAULT_HEART_RATE, true];
_unit SVAR [VAR_BLOOD_PRESS, [80, 120], true];
_unit SVAR [VAR_PERIPH_RES, DEFAULT_PERIPH_RES, true];
_unit SVAR [QEGVAR(medical,ivBags), nil, true];
_unit SVAR [VAR_HEMORRHAGE, 0, true];
_unit SVAR [VAR_IN_PAIN, false, true];
_unit SVAR [VAR_PAIN_SUPP, 0, true];
_unit SVAR [VAR_MEDICATIONS, [], true];
_unit SVAR [QEGVAR(medical,triageCard), [], true];
[player] call EFUNC(medical_engine,updateDamageEffects);
player setDamage 0;
[player, false] call ace_medical_status_fnc_setUnconscious;
[QEGVAR(medical,WakeUp), player] call CBA_fnc_localEvent;
[QEGVAR(medical,FullHeal), player] call CBA_fnc_localEvent;
//_unit addRating 1e12; //Set our rating to a high value, this is for a ARMA engine thing.
player playMoveNow "amovppnemstpsraswrfldnon";

[] call life_fnc_setupActions;
[_unit,life_sidechat,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];
if(EQUAL(LIFE_SETTINGS(getNumber,"enable_fatigue"),0)) then {player enableFatigue false;} else {player enableFatigue true;};

if ((call life_adminlevel) > 1) then {
	life_actions = life_actions + [player addAction["<t color='#FF0000'>Admin Ejection</t>", life_fnc_emergencyEject, [], -9, false, true, "", "((vehicle player) != player) && !((vehicle player) isKindOf 'ParachuteBase') && life_mode_admin"]];
};
[] call life_fnc_respawned;
[] call SOCK_fnc_updateRequest;
[] call life_fnc_hudUpdate; //Request update of hud.

player setpos (getPos  POSISPAWN1);
player hideObject false;
POSISPAWN1 = objNull;