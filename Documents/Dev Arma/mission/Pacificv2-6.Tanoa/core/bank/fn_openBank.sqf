#include "..\..\script_macros.hpp"
/*
	Open Bank
*/

if (player distance getPos coffre_bank > 5) exitWith {
	["Warning", "Vous êtes trop loin du coffre de la fédérale !"] spawn life_fnc_showPredefinedNotification;
};

if({side _x == west} count playableUnits < (LIFE_SETTINGS(getNumber,"cops_online_min")) && life_debug == 0) exitWith {
	["Error", format [localize "STR_Civ_NotEnoughCops",(LIFE_SETTINGS(getNumber,"cops_online_min"))]] spawn life_fnc_showPredefinedNotification;
};

if (coffre_bank getVariable ["open",false]) exitWith {
	["Error", "Le coffre est déja ouvert"] spawn life_fnc_showPredefinedNotification;
};

if (offre_bank getVariable ["chargeplaced",false]) exitWith {
	["Error", "Une charge a déja été placé"] spawn life_fnc_showPredefinedNotification;
};

if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith {
	["Error", "Il vous faut un explosif !"] spawn life_fnc_showPredefinedNotification;
};

if(animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
	[player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",RCLIENT];

	player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
	player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
};

sleep 2;

player playActionNow "stop";

coffre_bank setVariable ["chargeplaced",true,true];

["Une charge de dynamite a été placé sur le coffre de la réserve fédérale, Vous avez jusqu'au temps imparti pour désarmorcer la charge!"] remoteExecCall ["life_fnc_dynamicText",west];

["Accepted", localize "STR_ISTR_Blast_KeepOff"] spawn life_fnc_showPredefinedNotification;

_handle = [] spawn life_fnc_demoChargeTimer;
[] remoteExec ["life_fnc_demoChargeTimer",west];

waitUntil {scriptDone _handle};
sleep 0.9;
if(!(coffre_bank getVariable["chargeplaced",false])) exitWith {["Warning", localize "STR_ISTR_Blast_Disarmed"] spawn life_fnc_showPredefinedNotification;};

_bomb = "GrenadeHand" createVehicle [getPosATL coffre_bank select 0, getPosATL coffre_bank select 1, (getPosATL coffre_bank select 2)+0.5];
coffre_bank setVariable ["chargeplaced",false,true];
coffre_bank setVariable ["open",true,true];

["Warning", localize "STR_ISTR_Blast_Opened"] spawn life_fnc_showPredefinedNotification;