#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine

	Description:
	Blasting charge is used for the federal reserve vault and nothing  more.. Yet.
*/
private["_vault","_handle"];
_vault = param [0,ObjNull,[ObjNull]];

if(isNull _vault) exitWith {}; //Bad object
if(typeOf _vault != "Land_CargoBox_V1_F") exitWith {["Error", localize "STR_ISTR_Blast_VaultOnly"] spawn life_fnc_showPredefinedNotification;};
if(_vault GVAR ["chargeplaced",false]) exitWith {["Error", localize "STR_ISTR_Blast_AlreadyPlaced"] spawn life_fnc_showPredefinedNotification;};
if(_vault GVAR ["safe_open",false]) exitWith {["Error", localize "STR_ISTR_Blast_AlreadyOpen"] spawn life_fnc_showPredefinedNotification;};
if({side _x == west} count playableUnits < (LIFE_SETTINGS(getNumber,"cops_online_min"))) exitWith {
 	hint format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"cops_online_min"))]
};

if(life_fed_break < 2) exitWith {["Error", localize "STR_ISTR_Blast_Exploit"] spawn life_fnc_showPredefinedNotification;};
life_fed_break = 0;
if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {}; //Error?

_vault setVariable ["chargeplaced",true,true];
[0,"STR_ISTR_Blast_Placed"] remoteExecCall ["life_fnc_broadcast",west];
["Accepted", localize "STR_ISTR_Blast_KeepOff"] spawn life_fnc_showPredefinedNotification;
_handle = [] spawn life_fnc_demoChargeTimer;
[] remoteExec ["life_fnc_demoChargeTimer",west];

waitUntil {scriptDone _handle};
sleep 0.9;
if(!(fed_bank getVariable["chargeplaced",false])) exitWith {["Warning", localize "STR_ISTR_Blast_Disarmed"] spawn life_fnc_showPredefinedNotification;};

_bomb = "Bo_GBU12_LGB_MI10" createVehicle [getPosATL fed_bank select 0, getPosATL fed_bank select 1, (getPosATL fed_bank select 2)+0.5];
fed_bank setVariable ["chargeplaced",false,true];
fed_bank setVariable ["safe_open",true,true];

["Warning", localize "STR_ISTR_Blast_Opened"] spawn life_fnc_showPredefinedNotification;
